// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceChgSub3(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 15209);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                           ? ((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_3) 
                                                     >> 4U))
                                               : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_3))
                                           : ((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_3))
                                               : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+1,(((IData)(vlTOPp->io_in_flag)
                                   ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_3) 
                                            >> 4U))
                                   : 0U)),4);
        tracep->chgCData(oldp+2,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                           ? ((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_3) 
                                                     >> 4U))
                                               : 0U)
                                           : ((IData)(vlTOPp->io_in_flag)
                                               ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_3)
                                               : 0U)))),4);
        tracep->chgCData(oldp+3,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                           ? (0xfU 
                                              & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_4))
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+4,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                           ? ((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_4) 
                                                     >> 4U))
                                               : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_4))
                                           : ((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_4))
                                               : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+5,(((IData)(vlTOPp->io_in_flag)
                                   ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_4) 
                                            >> 4U))
                                   : 0U)),4);
        tracep->chgCData(oldp+6,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                           ? ((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_4) 
                                                     >> 4U))
                                               : 0U)
                                           : ((IData)(vlTOPp->io_in_flag)
                                               ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_4)
                                               : 0U)))),4);
        tracep->chgCData(oldp+7,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                           ? (0xfU 
                                              & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_5))
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+8,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                           ? ((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_5) 
                                                     >> 4U))
                                               : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_5))
                                           : ((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_5))
                                               : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+9,(((IData)(vlTOPp->io_in_flag)
                                   ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_5) 
                                            >> 4U))
                                   : 0U)),4);
        tracep->chgCData(oldp+10,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_5) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_5)
                                                : 0U)))),4);
        tracep->chgCData(oldp+11,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_6))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+12,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_6) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_6))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+13,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_6) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+14,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_6) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_6)
                                                : 0U)))),4);
        tracep->chgCData(oldp+15,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_7))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+16,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_7) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_7))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+17,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_7) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+18,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_7) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_7)
                                                : 0U)))),4);
        tracep->chgCData(oldp+19,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                             ? ((0x3fU 
                                                 < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__adder__DOT__addition))
                                                 ? 0x3fU
                                                 : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__adder__DOT__addition))
                                             : ((0xfU 
                                                 < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__adder__DOT__addition))
                                                 ? 0xfU
                                                 : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+20,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_0))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+21,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_0) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_0))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+22,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_0) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+23,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_0) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_0)
                                                : 0U)))),4);
        tracep->chgCData(oldp+24,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_1))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+25,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_1) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_1))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+26,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_1) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+27,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_1) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_1)
                                                : 0U)))),4);
        tracep->chgCData(oldp+28,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_2))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+29,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_2) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_2))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+30,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_2) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+31,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_2) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_2)
                                                : 0U)))),4);
        tracep->chgCData(oldp+32,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_3))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+33,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_3) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_3))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+34,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_3) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+35,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_3) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_3)
                                                : 0U)))),4);
        tracep->chgCData(oldp+36,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_4))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+37,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_4) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_4))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+38,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_4) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+39,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_4) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_4)
                                                : 0U)))),4);
        tracep->chgCData(oldp+40,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_5))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+41,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_5) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_5))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+42,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_5) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+43,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_5) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_5)
                                                : 0U)))),4);
        tracep->chgCData(oldp+44,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_6))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+45,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_6) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_6))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+46,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_6) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+47,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_6) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_6)
                                                : 0U)))),4);
        tracep->chgCData(oldp+48,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_7))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+49,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_7) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_7))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+50,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_7) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+51,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_7) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_7)
                                                : 0U)))),4);
        tracep->chgCData(oldp+52,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                             ? ((0x3fU 
                                                 < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__adder__DOT__addition))
                                                 ? 0x3fU
                                                 : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__adder__DOT__addition))
                                             : ((0xfU 
                                                 < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__adder__DOT__addition))
                                                 ? 0xfU
                                                 : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+53,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_0))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+54,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+55,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_0) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+56,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0)
                                                : 0U)))),4);
        tracep->chgCData(oldp+57,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_1))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+58,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+59,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_1) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+60,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1)
                                                : 0U)))),4);
        tracep->chgCData(oldp+61,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_2))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+62,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+63,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_2) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+64,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2)
                                                : 0U)))),4);
        tracep->chgCData(oldp+65,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_3))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+66,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+67,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_3) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+68,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3)
                                                : 0U)))),4);
        tracep->chgCData(oldp+69,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_4))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+70,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+71,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_4) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+72,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4)
                                                : 0U)))),4);
        tracep->chgCData(oldp+73,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_5))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+74,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+75,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_5) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+76,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5)
                                                : 0U)))),4);
        tracep->chgCData(oldp+77,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_6))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+78,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+79,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_6) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+80,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6)
                                                : 0U)))),4);
        tracep->chgCData(oldp+81,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_7))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+82,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+83,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_7) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+84,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7)
                                                : 0U)))),4);
        tracep->chgCData(oldp+85,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                             ? ((0x3fU 
                                                 < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__adder__DOT__addition))
                                                 ? 0x3fU
                                                 : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__adder__DOT__addition))
                                             : ((0xfU 
                                                 < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__adder__DOT__addition))
                                                 ? 0xfU
                                                 : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+86,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_0))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+87,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+88,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_0) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+89,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0)
                                                : 0U)))),4);
        tracep->chgCData(oldp+90,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_1))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+91,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+92,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_1) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+93,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1)
                                                : 0U)))),4);
        tracep->chgCData(oldp+94,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_2))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+95,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+96,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_2) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+97,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2)
                                                : 0U)))),4);
        tracep->chgCData(oldp+98,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_3))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+99,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+100,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+101,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+102,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+103,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
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
        tracep->chgCData(oldp+104,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+105,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+106,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+107,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
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
        tracep->chgCData(oldp+108,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+109,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+110,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+111,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
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
        tracep->chgCData(oldp+112,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+113,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+114,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+115,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
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
        tracep->chgCData(oldp+116,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+117,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgBit(oldp+118,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0.__PVT__full)) 
                                  & (IData)(vlTOPp->io_in_hor_0_valid))));
        tracep->chgBit(oldp+119,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1.__PVT__full)) 
                                  & (IData)(vlTOPp->io_in_hor_1_valid))));
        tracep->chgBit(oldp+120,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2.__PVT__full)) 
                                  & (IData)(vlTOPp->io_in_hor_2_valid))));
        tracep->chgBit(oldp+121,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3.__PVT__full)) 
                                  & (IData)(vlTOPp->io_in_hor_3_valid))));
        tracep->chgBit(oldp+122,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_4.__PVT__full)) 
                                  & (IData)(vlTOPp->io_in_hor_4_valid))));
        tracep->chgBit(oldp+123,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_5.__PVT__full)) 
                                  & (IData)(vlTOPp->io_in_hor_5_valid))));
        tracep->chgBit(oldp+124,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_6.__PVT__full)) 
                                  & (IData)(vlTOPp->io_in_hor_6_valid))));
        tracep->chgBit(oldp+125,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_7.__PVT__full)) 
                                  & (IData)(vlTOPp->io_in_hor_7_valid))));
        tracep->chgBit(oldp+126,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0.__PVT__full)) 
                                  & (IData)(vlTOPp->io_in_ver_0_valid))));
        tracep->chgBit(oldp+127,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1.__PVT__full)) 
                                  & (IData)(vlTOPp->io_in_ver_1_valid))));
        tracep->chgBit(oldp+128,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2.__PVT__full)) 
                                  & (IData)(vlTOPp->io_in_ver_2_valid))));
        tracep->chgBit(oldp+129,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3.__PVT__full)) 
                                  & (IData)(vlTOPp->io_in_ver_3_valid))));
        tracep->chgBit(oldp+130,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_4.__PVT__full)) 
                                  & (IData)(vlTOPp->io_in_ver_4_valid))));
        tracep->chgBit(oldp+131,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_5.__PVT__full)) 
                                  & (IData)(vlTOPp->io_in_ver_5_valid))));
        tracep->chgBit(oldp+132,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_6.__PVT__full)) 
                                  & (IData)(vlTOPp->io_in_ver_6_valid))));
        tracep->chgBit(oldp+133,(((~ (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_7.__PVT__full)) 
                                  & (IData)(vlTOPp->io_in_ver_7_valid))));
    }
}

void VSystolicArray_HBFP_forTesting::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
