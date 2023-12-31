// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceChgSub2(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 13904);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                           ? (0xfU 
                                              & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_7))
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+1,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                           ? ((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7) 
                                                     >> 4U))
                                               : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7))
                                           : ((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7))
                                               : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+2,(((IData)(vlTOPp->io_in_flag)
                                   ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_7) 
                                            >> 4U))
                                   : 0U)),4);
        tracep->chgCData(oldp+3,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                           ? ((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7) 
                                                     >> 4U))
                                               : 0U)
                                           : ((IData)(vlTOPp->io_in_flag)
                                               ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7)
                                               : 0U)))),4);
        tracep->chgCData(oldp+4,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                            ? ((0x3fU 
                                                < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__adder__DOT__addition))
                                                ? 0x3fU
                                                : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__adder__DOT__addition))
                                            : ((0xfU 
                                                < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__adder__DOT__addition))
                                                ? 0xfU
                                                : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+5,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                           ? (0xfU 
                                              & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_0))
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+6,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                           ? ((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0) 
                                                     >> 4U))
                                               : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0))
                                           : ((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0))
                                               : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+7,(((IData)(vlTOPp->io_in_flag)
                                   ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_0) 
                                            >> 4U))
                                   : 0U)),4);
        tracep->chgCData(oldp+8,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                           ? ((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0) 
                                                     >> 4U))
                                               : 0U)
                                           : ((IData)(vlTOPp->io_in_flag)
                                               ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0)
                                               : 0U)))),4);
        tracep->chgCData(oldp+9,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                           ? (0xfU 
                                              & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_1))
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+10,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+11,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_1) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+12,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1)
                                                : 0U)))),4);
        tracep->chgCData(oldp+13,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_2))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+14,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+15,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_2) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+16,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2)
                                                : 0U)))),4);
        tracep->chgCData(oldp+17,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_3))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+18,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+19,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_3) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+20,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3)
                                                : 0U)))),4);
        tracep->chgCData(oldp+21,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_4))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+22,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+23,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_4) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+24,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4)
                                                : 0U)))),4);
        tracep->chgCData(oldp+25,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_5))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+26,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+27,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_5) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+28,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5)
                                                : 0U)))),4);
        tracep->chgCData(oldp+29,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_6))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+30,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+31,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_6) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+32,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6)
                                                : 0U)))),4);
        tracep->chgCData(oldp+33,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_7))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+34,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+35,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_7) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+36,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7)
                                                : 0U)))),4);
        tracep->chgCData(oldp+37,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                             ? ((0x3fU 
                                                 < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__adder__DOT__addition))
                                                 ? 0x3fU
                                                 : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__adder__DOT__addition))
                                             : ((0xfU 
                                                 < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__adder__DOT__addition))
                                                 ? 0xfU
                                                 : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+38,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_0))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+39,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+40,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_0) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+41,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0)
                                                : 0U)))),4);
        tracep->chgCData(oldp+42,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_1))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+43,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+44,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_1) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+45,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1)
                                                : 0U)))),4);
        tracep->chgCData(oldp+46,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_2))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+47,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+48,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_2) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+49,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2)
                                                : 0U)))),4);
        tracep->chgCData(oldp+50,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_3))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+51,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+52,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_3) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+53,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3)
                                                : 0U)))),4);
        tracep->chgCData(oldp+54,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_4))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+55,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+56,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_4) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+57,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4)
                                                : 0U)))),4);
        tracep->chgCData(oldp+58,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_5))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+59,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+60,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_5) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+61,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5)
                                                : 0U)))),4);
        tracep->chgCData(oldp+62,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_6))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+63,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+64,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_6) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+65,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6)
                                                : 0U)))),4);
        tracep->chgCData(oldp+66,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_7))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+67,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+68,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_7) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+69,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7)
                                                : 0U)))),4);
        tracep->chgCData(oldp+70,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                             ? ((0x3fU 
                                                 < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__adder__DOT__addition))
                                                 ? 0x3fU
                                                 : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__adder__DOT__addition))
                                             : ((0xfU 
                                                 < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__adder__DOT__addition))
                                                 ? 0xfU
                                                 : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+71,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_0))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+72,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+73,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_0) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+74,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0)
                                                : 0U)))),4);
        tracep->chgCData(oldp+75,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_1))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+76,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+77,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_1) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+78,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1)
                                                : 0U)))),4);
        tracep->chgCData(oldp+79,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_2))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+80,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+81,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_2) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+82,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2)
                                                : 0U)))),4);
        tracep->chgCData(oldp+83,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_3))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+84,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+85,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_3) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+86,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3)
                                                : 0U)))),4);
        tracep->chgCData(oldp+87,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_4))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+88,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+89,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_4) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+90,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4)
                                                : 0U)))),4);
        tracep->chgCData(oldp+91,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_5))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+92,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+93,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_5) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+94,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5)
                                                : 0U)))),4);
        tracep->chgCData(oldp+95,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_6))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+96,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6) 
                                                      >> 4U))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6))
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+97,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_6) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+98,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                            ? ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6) 
                                                      >> 4U))
                                                : 0U)
                                            : ((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6)
                                                : 0U)))),4);
        tracep->chgCData(oldp+99,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_7))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+100,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+101,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+102,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+103,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+104,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+105,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+106,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+107,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+108,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+109,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+110,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+111,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+112,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+113,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+114,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+115,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+116,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+117,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+118,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+119,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+120,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+121,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+122,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+123,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+124,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+125,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+126,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+127,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+128,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+129,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+130,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+131,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+132,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+133,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+134,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+135,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+136,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+137,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+138,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+139,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+140,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+141,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+142,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+143,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+144,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+145,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+146,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+147,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+148,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+149,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+150,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+151,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+152,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+153,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+154,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+155,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+156,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+157,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+158,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+159,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+160,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+161,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+162,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+163,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+164,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+165,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+166,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+167,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+168,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+169,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+170,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+171,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+172,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+173,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+174,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+175,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+176,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+177,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+178,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+179,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+180,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+181,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+182,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+183,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+184,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+185,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+186,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+187,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+188,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+189,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+190,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+191,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+192,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+193,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+194,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+195,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+196,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+197,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+198,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+199,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+200,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+201,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+202,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+203,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+204,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+205,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+206,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+207,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+208,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+209,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+210,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+211,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+212,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+213,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+214,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+215,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+216,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+217,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+218,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+219,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+220,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+221,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+222,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+223,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+224,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+225,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+226,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+227,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+228,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+229,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+230,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+231,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+232,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+233,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+234,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+235,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+236,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+237,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+238,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+239,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+240,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+241,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+242,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+243,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+244,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+245,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+246,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+247,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+248,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+249,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+250,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+251,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+252,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+253,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+254,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+255,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+256,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+257,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+258,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+259,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+260,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+261,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+262,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+263,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+264,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+265,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+266,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+267,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+268,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+269,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+270,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+271,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+272,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+273,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+274,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+275,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+276,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+277,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+278,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+279,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+280,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+281,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+282,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+283,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+284,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+285,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+286,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+287,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+288,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+289,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+290,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+291,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+292,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+293,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+294,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+295,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+296,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+297,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+298,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+299,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+300,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+301,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+302,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+303,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+304,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+305,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+306,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+307,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+308,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+309,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+310,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+311,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+312,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+313,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+314,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+315,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+316,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+317,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+318,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+319,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+320,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+321,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+322,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+323,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+324,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+325,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+326,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+327,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+328,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+329,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+330,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+331,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+332,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+333,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+334,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+335,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+336,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+337,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+338,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+339,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+340,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+341,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+342,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+343,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+344,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+345,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+346,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+347,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+348,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+349,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+350,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+351,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+352,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+353,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+354,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+355,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+356,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+357,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+358,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+359,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+360,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+361,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+362,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+363,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+364,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+365,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+366,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+367,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+368,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+369,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+370,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+371,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+372,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+373,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+374,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+375,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+376,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+377,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+378,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+379,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+380,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+381,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+382,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+383,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+384,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+385,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+386,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+387,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+388,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+389,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+390,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+391,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+392,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+393,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+394,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+395,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+396,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+397,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+398,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+399,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+400,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+401,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+402,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+403,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+404,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+405,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+406,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+407,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+408,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+409,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+410,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+411,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+412,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+413,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+414,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+415,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+416,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+417,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+418,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+419,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+420,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+421,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+422,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+423,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+424,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+425,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+426,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+427,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+428,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+429,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+430,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+431,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+432,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+433,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+434,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+435,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+436,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+437,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+438,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+439,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+440,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+441,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+442,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+443,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+444,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+445,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+446,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+447,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+448,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+449,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+450,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+451,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+452,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+453,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+454,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+455,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+456,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+457,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+458,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+459,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+460,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+461,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+462,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+463,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+464,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+465,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+466,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+467,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+468,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+469,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+470,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+471,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+472,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+473,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+474,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+475,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+476,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+477,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+478,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+479,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+480,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+481,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+482,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+483,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+484,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+485,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+486,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+487,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+488,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+489,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+490,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+491,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+492,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+493,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+494,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+495,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+496,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+497,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+498,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+499,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+500,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+501,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+502,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+503,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+504,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+505,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+506,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+507,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+508,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+509,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+510,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+511,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+512,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+513,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+514,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+515,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+516,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+517,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+518,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+519,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+520,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+521,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+522,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+523,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+524,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+525,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+526,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+527,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+528,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+529,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+530,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+531,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+532,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+533,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+534,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+535,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+536,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+537,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+538,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+539,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+540,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+541,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+542,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+543,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+544,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+545,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+546,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+547,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+548,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+549,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+550,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+551,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+552,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+553,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+554,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+555,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+556,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+557,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+558,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+559,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+560,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+561,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+562,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+563,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+564,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+565,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+566,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+567,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+568,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+569,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+570,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+571,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+572,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+573,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+574,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+575,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+576,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+577,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+578,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+579,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+580,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+581,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+582,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+583,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+584,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+585,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+586,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+587,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+588,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+589,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+590,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+591,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+592,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+593,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+594,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+595,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+596,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+597,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+598,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+599,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+600,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+601,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+602,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+603,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+604,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+605,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+606,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+607,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+608,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+609,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+610,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+611,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+612,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+613,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+614,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+615,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+616,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+617,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+618,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+619,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+620,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+621,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+622,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+623,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+624,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+625,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+626,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+627,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+628,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+629,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+630,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+631,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+632,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+633,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+634,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+635,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+636,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+637,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+638,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+639,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+640,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+641,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+642,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+643,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+644,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+645,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+646,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+647,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+648,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+649,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+650,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+651,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+652,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+653,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+654,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+655,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+656,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+657,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+658,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+659,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+660,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+661,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+662,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+663,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+664,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+665,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+666,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+667,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+668,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+669,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+670,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+671,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+672,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+673,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+674,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+675,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+676,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+677,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+678,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+679,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+680,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+681,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+682,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+683,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+684,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+685,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+686,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+687,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+688,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+689,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+690,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+691,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+692,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+693,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+694,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+695,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+696,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+697,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+698,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+699,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+700,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+701,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+702,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+703,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+704,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+705,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+706,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+707,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+708,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+709,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+710,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+711,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+712,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+713,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+714,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+715,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+716,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+717,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+718,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+719,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+720,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+721,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+722,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+723,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+724,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+725,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+726,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+727,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+728,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+729,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+730,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+731,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+732,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+733,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+734,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+735,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+736,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+737,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+738,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+739,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+740,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+741,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+742,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+743,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+744,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+745,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+746,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+747,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+748,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+749,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+750,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+751,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+752,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+753,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+754,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+755,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+756,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+757,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+758,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+759,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+760,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+761,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+762,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+763,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+764,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+765,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+766,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+767,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+768,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+769,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+770,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+771,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+772,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+773,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+774,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+775,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+776,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+777,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+778,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+779,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+780,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+781,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+782,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+783,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+784,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+785,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+786,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+787,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+788,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+789,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+790,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+791,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+792,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+793,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+794,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+795,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+796,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+797,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+798,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+799,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+800,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+801,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+802,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+803,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+804,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+805,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+806,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+807,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+808,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+809,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+810,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+811,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+812,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+813,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+814,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+815,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+816,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+817,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+818,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+819,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+820,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+821,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+822,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+823,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+824,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+825,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+826,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+827,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+828,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+829,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+830,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+831,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+832,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+833,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+834,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+835,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+836,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+837,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+838,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+839,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+840,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+841,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+842,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+843,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+844,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+845,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+846,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+847,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+848,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+849,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+850,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+851,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+852,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+853,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+854,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+855,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+856,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+857,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+858,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+859,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+860,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+861,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+862,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+863,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+864,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+865,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+866,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+867,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+868,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+869,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+870,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+871,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+872,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+873,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+874,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+875,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+876,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+877,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+878,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+879,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+880,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+881,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+882,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+883,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+884,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+885,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+886,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+887,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+888,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+889,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+890,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+891,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+892,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+893,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+894,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+895,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+896,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+897,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+898,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+899,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+900,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+901,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+902,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+903,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+904,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+905,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+906,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+907,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+908,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+909,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+910,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+911,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+912,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+913,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+914,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+915,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+916,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+917,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+918,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+919,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+920,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+921,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+922,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+923,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+924,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+925,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+926,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+927,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+928,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+929,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+930,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+931,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+932,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+933,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+934,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+935,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+936,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+937,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+938,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+939,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+940,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+941,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+942,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+943,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+944,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+945,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+946,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+947,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+948,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+949,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+950,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+951,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+952,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+953,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+954,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+955,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+956,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+957,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+958,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+959,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+960,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+961,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+962,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+963,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+964,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+965,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+966,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+967,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_1))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+968,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+969,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_1) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_1)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+970,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+971,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_2))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+972,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+973,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_2) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_2)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+974,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+975,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_3))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+976,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+977,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_3) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_3)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+978,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+979,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_4))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+980,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+981,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_4) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_4)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+982,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+983,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_5))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+984,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+985,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_5) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_5)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+986,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+987,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_6))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+988,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+989,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_6) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_6)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+990,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+991,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_7))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+992,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+993,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_7) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_7)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+994,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+995,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+996,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_0))
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+997,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+998,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                             ? ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_0) 
                                                    >> 4U))
                                                 : 0U)
                                             : ((IData)(vlTOPp->io_in_flag)
                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_0)
                                                 : 0U)))),4);
        tracep->chgCData(oldp+999,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+1000,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_1))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+1001,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1002,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1003,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+1004,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_2))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+1005,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1006,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1007,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+1008,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_3))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+1009,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1010,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1011,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+1012,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_4))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+1013,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1014,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1015,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+1016,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_5))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+1017,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1018,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1019,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+1020,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_6))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+1021,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1022,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1023,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+1024,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_7))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+1025,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1026,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1027,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1028,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+1029,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_0))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+1030,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1031,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1032,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+1033,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_1))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+1034,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1035,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1036,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+1037,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_2))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+1038,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1039,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1040,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+1041,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_3))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+1042,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1043,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1044,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+1045,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_4))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+1046,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1047,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1048,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+1049,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_5))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+1050,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1051,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1052,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+1053,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_6))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+1054,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1055,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1056,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+1057,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_7))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+1058,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1059,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1060,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1061,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+1062,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_0))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+1063,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1064,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1065,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+1066,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_1))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+1067,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1068,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1069,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+1070,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_2))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+1071,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1072,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1073,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+1074,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_3))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+1075,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1076,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1077,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+1078,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_4))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+1079,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1080,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1081,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+1082,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_5))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+1083,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1084,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1085,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+1086,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_6))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+1087,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1088,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1089,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+1090,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_7))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+1091,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1092,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1093,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1094,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+1095,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_0))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+1096,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1097,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1098,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+1099,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_1))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+1100,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1101,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1102,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+1103,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_2))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+1104,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1105,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1106,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+1107,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_3))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+1108,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1109,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1110,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+1111,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_4))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+1112,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1113,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1114,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+1115,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_5))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+1116,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1117,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1118,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+1119,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_6))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+1120,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1121,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1122,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+1123,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_7))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+1124,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1125,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1126,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1127,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+1128,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_0))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+1129,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1130,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1131,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+1132,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_1))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+1133,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1134,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1135,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+1136,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_2))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+1137,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1138,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1139,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+1140,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_3))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+1141,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1142,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1143,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+1144,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_4))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+1145,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1146,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1147,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+1148,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_5))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+1149,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1150,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1151,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+1152,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_6))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+1153,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1154,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1155,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+1156,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_7))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+1157,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1158,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1159,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1160,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+1161,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_0))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+1162,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1163,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1164,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+1165,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_1))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+1166,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1167,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1168,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+1169,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_2))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+1170,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1171,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1172,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+1173,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_3))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+1174,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1175,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1176,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+1177,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_4))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+1178,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1179,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1180,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+1181,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_5))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+1182,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1183,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1184,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+1185,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_6))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+1186,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1187,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1188,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+1189,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_7))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+1190,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1191,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1192,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1193,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+1194,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_0))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+1195,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1196,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1197,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+1198,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_1))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+1199,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1200,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1201,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+1202,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_2))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+1203,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1204,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1205,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+1206,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_3))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+1207,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1208,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1209,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+1210,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_4))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+1211,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1212,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1213,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+1214,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_5))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+1215,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1216,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1217,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+1218,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_6))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+1219,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1220,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1221,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+1222,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_7))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+1223,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1224,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1225,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1226,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+1227,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_0))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+1228,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1229,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1230,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+1231,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_1))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+1232,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1233,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1234,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+1235,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_2))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+1236,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1237,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1238,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+1239,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_3))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+1240,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1241,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1242,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+1243,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_4))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+1244,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1245,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1246,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+1247,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_5))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+1248,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1249,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1250,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+1251,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_6))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+1252,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1253,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1254,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+1255,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_7))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+1256,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1257,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1258,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1259,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+1260,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_0))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+1261,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1262,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1263,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+1264,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_1))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+1265,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1266,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1267,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+1268,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_2))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+1269,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1270,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1271,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+1272,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_3))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_3))))),4);
        tracep->chgCData(oldp+1273,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1274,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1275,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+1276,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_4))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_4))))),4);
        tracep->chgCData(oldp+1277,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1278,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1279,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+1280,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_5))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_5))))),4);
        tracep->chgCData(oldp+1281,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1282,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1283,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+1284,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_6))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_6))))),4);
        tracep->chgCData(oldp+1285,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1286,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1287,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+1288,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_7))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_7))))),4);
        tracep->chgCData(oldp+1289,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1290,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1291,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1292,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+1293,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_0))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_0))))),4);
        tracep->chgCData(oldp+1294,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1295,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1296,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+1297,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_1))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_1))))),4);
        tracep->chgCData(oldp+1298,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1299,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1300,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+1301,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_2))
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_2))))),4);
        tracep->chgCData(oldp+1302,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1303,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                              ? ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                              : ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->chgCData(oldp+1304,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_3)))),4);
    }
}
