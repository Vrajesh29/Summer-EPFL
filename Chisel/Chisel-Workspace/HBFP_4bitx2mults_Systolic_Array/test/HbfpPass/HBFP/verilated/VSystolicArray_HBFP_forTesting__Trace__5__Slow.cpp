// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceFullSub3(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+15211,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15212,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+15213,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+15214,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15215,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15216,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+15217,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+15218,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15219,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15220,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+15221,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+15222,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15223,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15224,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+15225,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+15226,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15227,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15228,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+15229,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+15230,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+15231,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15232,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15233,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+15234,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+15235,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15236,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15237,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+15238,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+15239,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15240,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15241,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+15242,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+15243,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15244,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15245,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+15246,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+15247,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15248,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15249,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+15250,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+15251,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15252,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15253,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+15254,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+15255,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15256,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15257,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+15258,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+15259,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15260,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15261,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+15262,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+15263,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+15264,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15265,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15266,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+15267,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+15268,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15269,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15270,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+15271,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+15272,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15273,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15274,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+15275,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+15276,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15277,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15278,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+15279,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+15280,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15281,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15282,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+15283,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+15284,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15285,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15286,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+15287,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+15288,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15289,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15290,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+15291,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+15292,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15293,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15294,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+15295,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+15296,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+15297,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15298,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15299,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+15300,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+15301,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15302,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15303,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+15304,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+15305,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15306,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15307,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+15308,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+15309,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15310,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15311,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+15312,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+15313,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15314,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15315,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+15316,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+15317,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15318,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15319,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+15320,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+15321,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15322,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15323,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+15324,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+15325,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15326,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullBit(oldp+15327,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0.__PVT__full)) 
                                     & (IData)(vlTOPp->io_in_hor_0_valid))));
        tracep->fullBit(oldp+15328,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1.__PVT__full)) 
                                     & (IData)(vlTOPp->io_in_hor_1_valid))));
        tracep->fullBit(oldp+15329,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2.__PVT__full)) 
                                     & (IData)(vlTOPp->io_in_hor_2_valid))));
        tracep->fullBit(oldp+15330,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3.__PVT__full)) 
                                     & (IData)(vlTOPp->io_in_hor_3_valid))));
        tracep->fullBit(oldp+15331,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_4.__PVT__full)) 
                                     & (IData)(vlTOPp->io_in_hor_4_valid))));
        tracep->fullBit(oldp+15332,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_5.__PVT__full)) 
                                     & (IData)(vlTOPp->io_in_hor_5_valid))));
        tracep->fullBit(oldp+15333,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_6.__PVT__full)) 
                                     & (IData)(vlTOPp->io_in_hor_6_valid))));
        tracep->fullBit(oldp+15334,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_7.__PVT__full)) 
                                     & (IData)(vlTOPp->io_in_hor_7_valid))));
        tracep->fullBit(oldp+15335,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0.__PVT__full)) 
                                     & (IData)(vlTOPp->io_in_ver_0_valid))));
        tracep->fullBit(oldp+15336,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1.__PVT__full)) 
                                     & (IData)(vlTOPp->io_in_ver_1_valid))));
        tracep->fullBit(oldp+15337,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2.__PVT__full)) 
                                     & (IData)(vlTOPp->io_in_ver_2_valid))));
        tracep->fullBit(oldp+15338,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3.__PVT__full)) 
                                     & (IData)(vlTOPp->io_in_ver_3_valid))));
        tracep->fullBit(oldp+15339,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_4.__PVT__full)) 
                                     & (IData)(vlTOPp->io_in_ver_4_valid))));
        tracep->fullBit(oldp+15340,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_5.__PVT__full)) 
                                     & (IData)(vlTOPp->io_in_ver_5_valid))));
        tracep->fullBit(oldp+15341,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_6.__PVT__full)) 
                                     & (IData)(vlTOPp->io_in_ver_6_valid))));
        tracep->fullBit(oldp+15342,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_7.__PVT__full)) 
                                     & (IData)(vlTOPp->io_in_ver_7_valid))));
        tracep->fullBit(oldp+15343,(1U));
    }
}
