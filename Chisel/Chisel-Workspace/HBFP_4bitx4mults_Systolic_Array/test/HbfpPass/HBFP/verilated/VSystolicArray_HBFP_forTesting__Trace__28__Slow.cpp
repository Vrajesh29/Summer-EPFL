// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceFullSub15(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+80651,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80652,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80653,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80654,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+80655,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+80656,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80657,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+80658,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80659,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+80660,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80661,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80662,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80663,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+80664,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+80665,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80666,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+80667,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80668,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+80669,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80670,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80671,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80672,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+80673,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+80674,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80675,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+80676,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80677,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+80678,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80679,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80680,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80681,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+80682,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+80683,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80684,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+80685,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80686,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+80687,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80688,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80689,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80690,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+80691,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+80692,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80693,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+80694,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80695,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+80696,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80697,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80698,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80699,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+80700,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+80701,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80702,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+80703,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80704,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+80705,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80706,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80707,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80708,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+80709,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+80710,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80711,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+80712,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80713,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+80714,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80715,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80716,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80717,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+80718,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+80719,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80720,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+80721,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80722,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+80723,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80724,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80725,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80726,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+80727,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+80728,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80729,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+80730,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80731,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+80732,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80733,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80734,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80735,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+80736,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+80737,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80738,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+80739,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80740,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+80741,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80742,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80743,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80744,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+80745,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+80746,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80747,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+80748,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80749,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+80750,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80751,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80752,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80753,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+80754,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+80755,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80756,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+80757,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80758,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+80759,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80760,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80761,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80762,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+80763,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+80764,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+80765,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80766,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+80767,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80768,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+80769,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80770,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80771,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80772,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+80773,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+80774,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80775,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+80776,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80777,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+80778,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80779,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80780,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80781,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+80782,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+80783,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80784,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+80785,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80786,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+80787,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80788,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80789,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80790,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+80791,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+80792,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80793,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+80794,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80795,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+80796,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80797,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80798,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80799,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+80800,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+80801,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80802,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+80803,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80804,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+80805,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80806,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80807,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80808,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+80809,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+80810,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80811,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+80812,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80813,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+80814,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80815,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80816,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80817,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+80818,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+80819,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80820,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+80821,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80822,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+80823,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80824,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80825,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80826,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+80827,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+80828,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80829,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+80830,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80831,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+80832,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80833,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80834,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80835,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+80836,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+80837,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80838,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+80839,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80840,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+80841,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80842,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80843,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80844,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+80845,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+80846,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80847,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+80848,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80849,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+80850,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80851,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80852,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80853,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+80854,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+80855,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80856,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+80857,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80858,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+80859,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80860,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80861,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80862,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+80863,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+80864,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80865,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+80866,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80867,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+80868,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80869,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80870,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80871,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+80872,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+80873,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80874,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+80875,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80876,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+80877,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80878,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80879,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80880,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+80881,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+80882,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80883,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+80884,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80885,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+80886,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80887,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80888,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80889,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+80890,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+80891,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80892,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+80893,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80894,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+80895,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80896,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80897,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80898,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+80899,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+80900,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80901,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+80902,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80903,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+80904,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80905,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80906,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80907,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+80908,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+80909,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+80910,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80911,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+80912,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80913,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+80914,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80915,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80916,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80917,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+80918,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+80919,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80920,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+80921,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80922,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+80923,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80924,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80925,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80926,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+80927,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+80928,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80929,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+80930,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80931,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+80932,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80933,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80934,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80935,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+80936,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+80937,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80938,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+80939,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80940,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+80941,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80942,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80943,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80944,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+80945,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+80946,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80947,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+80948,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80949,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+80950,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80951,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80952,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80953,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+80954,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+80955,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80956,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+80957,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80958,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+80959,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80960,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80961,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80962,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+80963,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+80964,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80965,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+80966,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80967,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+80968,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80969,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80970,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80971,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+80972,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+80973,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80974,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+80975,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80976,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+80977,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80978,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80979,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80980,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+80981,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+80982,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80983,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+80984,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80985,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+80986,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80987,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80988,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80989,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+80990,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+80991,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80992,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+80993,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80994,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+80995,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+80996,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80997,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+80998,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+80999,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+81000,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81001,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+81002,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81003,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+81004,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81005,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81006,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81007,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+81008,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+81009,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81010,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+81011,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81012,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+81013,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81014,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81015,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81016,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+81017,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+81018,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81019,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+81020,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81021,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+81022,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81023,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81024,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81025,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+81026,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+81027,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81028,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+81029,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81030,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+81031,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81032,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81033,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81034,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+81035,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+81036,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81037,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+81038,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81039,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+81040,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81041,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81042,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81043,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+81044,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+81045,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81046,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+81047,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81048,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+81049,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81050,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81051,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81052,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_8.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_8.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_8.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_8.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+81053,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+81054,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+81055,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81056,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+81057,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81058,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+81059,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81060,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81061,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81062,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+81063,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+81064,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81065,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+81066,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81067,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+81068,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81069,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81070,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81071,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+81072,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+81073,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81074,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+81075,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81076,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+81077,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81078,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81079,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81080,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+81081,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+81082,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81083,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+81084,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81085,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+81086,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81087,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81088,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81089,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+81090,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+81091,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81092,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+81093,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81094,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+81095,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81096,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81097,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81098,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+81099,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+81100,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81101,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+81102,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81103,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+81104,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81105,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81106,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81107,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+81108,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+81109,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81110,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+81111,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81112,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+81113,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81114,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81115,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81116,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+81117,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+81118,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81119,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+81120,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81121,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+81122,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81123,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81124,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81125,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+81126,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+81127,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81128,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+81129,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81130,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+81131,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81132,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81133,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81134,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+81135,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+81136,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81137,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+81138,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81139,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+81140,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81141,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81142,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81143,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+81144,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+81145,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81146,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+81147,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81148,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+81149,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81150,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81151,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81152,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+81153,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+81154,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81155,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+81156,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81157,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+81158,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81159,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81160,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81161,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+81162,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+81163,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81164,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+81165,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81166,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+81167,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81168,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81169,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81170,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+81171,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+81172,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81173,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+81174,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81175,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+81176,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81177,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81178,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81179,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+81180,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+81181,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81182,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+81183,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81184,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+81185,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81186,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81187,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81188,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+81189,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+81190,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81191,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+81192,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81193,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+81194,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81195,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81196,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_8_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81197,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_9.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_9.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_9.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_9.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+81198,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+81199,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+81200,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81201,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+81202,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81203,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+81204,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81205,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81206,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81207,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+81208,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+81209,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81210,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+81211,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81212,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+81213,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81214,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81215,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81216,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+81217,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+81218,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81219,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+81220,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81221,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+81222,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81223,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81224,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81225,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+81226,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+81227,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81228,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+81229,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81230,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+81231,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81232,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81233,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81234,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+81235,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+81236,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81237,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+81238,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81239,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+81240,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81241,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81242,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81243,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+81244,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+81245,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81246,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+81247,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81248,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+81249,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81250,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81251,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81252,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+81253,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+81254,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81255,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+81256,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81257,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+81258,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81259,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81260,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81261,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+81262,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+81263,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81264,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+81265,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81266,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+81267,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81268,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81269,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81270,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+81271,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+81272,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81273,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+81274,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81275,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+81276,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81277,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81278,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81279,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+81280,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+81281,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81282,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+81283,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81284,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+81285,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81286,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81287,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81288,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+81289,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+81290,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81291,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+81292,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81293,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+81294,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81295,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81296,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81297,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+81298,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+81299,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81300,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+81301,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81302,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+81303,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81304,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81305,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81306,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+81307,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+81308,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81309,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+81310,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81311,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+81312,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81313,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81314,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81315,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+81316,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+81317,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81318,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+81319,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81320,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+81321,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81322,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81323,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81324,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+81325,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+81326,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81327,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+81328,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81329,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+81330,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81331,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81332,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81333,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+81334,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+81335,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81336,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+81337,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81338,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+81339,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81340,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81341,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_9_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81342,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_10.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_10.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_10.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_10.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+81343,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+81344,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+81345,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81346,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+81347,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81348,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+81349,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81350,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81351,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81352,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+81353,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+81354,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81355,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+81356,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81357,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+81358,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81359,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81360,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81361,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+81362,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+81363,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81364,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+81365,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81366,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+81367,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81368,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81369,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81370,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+81371,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+81372,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81373,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+81374,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81375,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+81376,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81377,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81378,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81379,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+81380,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+81381,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81382,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+81383,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81384,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+81385,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81386,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81387,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81388,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+81389,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+81390,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81391,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+81392,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81393,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+81394,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81395,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81396,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81397,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+81398,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+81399,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81400,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+81401,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81402,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+81403,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81404,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81405,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81406,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+81407,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+81408,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81409,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+81410,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81411,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+81412,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81413,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81414,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81415,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+81416,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+81417,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81418,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+81419,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81420,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+81421,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81422,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81423,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81424,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+81425,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+81426,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81427,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+81428,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81429,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+81430,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81431,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81432,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81433,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+81434,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+81435,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81436,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+81437,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81438,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+81439,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81440,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81441,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81442,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+81443,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+81444,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81445,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+81446,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81447,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+81448,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81449,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81450,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81451,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+81452,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+81453,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81454,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+81455,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81456,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+81457,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81458,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81459,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81460,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+81461,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+81462,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81463,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+81464,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81465,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+81466,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81467,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81468,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81469,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+81470,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+81471,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81472,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+81473,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81474,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+81475,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81476,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81477,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81478,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+81479,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+81480,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81481,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+81482,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81483,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+81484,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81485,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81486,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_10_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81487,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_11.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_11.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_11.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_11.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+81488,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+81489,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+81490,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81491,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+81492,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81493,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+81494,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81495,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81496,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81497,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+81498,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+81499,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81500,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+81501,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81502,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+81503,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81504,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81505,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81506,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+81507,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+81508,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81509,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+81510,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81511,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+81512,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81513,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81514,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81515,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+81516,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+81517,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81518,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+81519,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81520,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+81521,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81522,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81523,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81524,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+81525,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+81526,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81527,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+81528,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81529,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+81530,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81531,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81532,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81533,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+81534,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+81535,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81536,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+81537,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81538,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+81539,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81540,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81541,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81542,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+81543,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+81544,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81545,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+81546,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81547,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+81548,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81549,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81550,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81551,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+81552,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+81553,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81554,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+81555,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81556,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+81557,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81558,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81559,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81560,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+81561,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+81562,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81563,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+81564,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81565,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+81566,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81567,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81568,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81569,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+81570,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+81571,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81572,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+81573,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81574,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+81575,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81576,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81577,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81578,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+81579,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+81580,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81581,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+81582,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81583,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+81584,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81585,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81586,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81587,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+81588,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+81589,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81590,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+81591,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81592,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+81593,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81594,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81595,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81596,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+81597,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+81598,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81599,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+81600,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81601,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+81602,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81603,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81604,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81605,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+81606,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+81607,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81608,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+81609,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81610,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+81611,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81612,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81613,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81614,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+81615,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+81616,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81617,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+81618,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81619,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+81620,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81621,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81622,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81623,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+81624,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+81625,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81626,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+81627,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81628,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+81629,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81630,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81631,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_11_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81632,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_12.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_12.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_12.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_12.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+81633,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+81634,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+81635,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81636,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+81637,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81638,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+81639,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81640,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81641,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81642,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+81643,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+81644,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81645,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+81646,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81647,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+81648,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81649,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81650,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81651,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+81652,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+81653,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81654,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+81655,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81656,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+81657,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81658,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81659,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81660,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+81661,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+81662,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81663,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+81664,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81665,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+81666,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81667,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81668,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81669,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+81670,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+81671,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81672,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+81673,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81674,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+81675,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81676,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81677,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81678,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+81679,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+81680,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81681,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+81682,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81683,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+81684,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81685,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81686,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81687,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+81688,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+81689,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81690,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+81691,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81692,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+81693,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81694,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81695,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81696,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+81697,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+81698,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81699,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+81700,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81701,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+81702,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81703,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81704,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81705,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+81706,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+81707,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81708,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+81709,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81710,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+81711,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81712,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81713,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81714,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+81715,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+81716,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81717,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+81718,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81719,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+81720,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81721,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81722,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81723,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+81724,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+81725,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81726,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+81727,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81728,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+81729,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81730,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81731,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81732,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+81733,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+81734,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81735,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+81736,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81737,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+81738,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81739,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81740,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81741,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+81742,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+81743,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81744,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+81745,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81746,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+81747,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81748,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81749,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81750,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+81751,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+81752,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81753,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+81754,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81755,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+81756,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81757,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81758,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81759,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+81760,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+81761,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81762,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+81763,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81764,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+81765,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81766,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81767,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81768,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+81769,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+81770,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81771,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+81772,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81773,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+81774,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81775,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81776,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_12_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81777,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_13.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_13.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_13.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_13.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+81778,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+81779,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+81780,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81781,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+81782,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81783,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+81784,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81785,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81786,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81787,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+81788,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+81789,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81790,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+81791,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81792,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+81793,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81794,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81795,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81796,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+81797,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+81798,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81799,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+81800,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81801,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+81802,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81803,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81804,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81805,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+81806,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+81807,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81808,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+81809,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81810,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+81811,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81812,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81813,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81814,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+81815,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+81816,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81817,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+81818,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81819,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+81820,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81821,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81822,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81823,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+81824,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+81825,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81826,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+81827,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81828,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+81829,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81830,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81831,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81832,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+81833,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+81834,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81835,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+81836,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81837,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+81838,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81839,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81840,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81841,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+81842,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+81843,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81844,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+81845,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81846,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+81847,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81848,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81849,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81850,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+81851,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+81852,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81853,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+81854,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81855,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+81856,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81857,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81858,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81859,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+81860,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+81861,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81862,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+81863,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81864,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+81865,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81866,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81867,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81868,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+81869,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+81870,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81871,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+81872,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81873,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+81874,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81875,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81876,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81877,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+81878,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+81879,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81880,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+81881,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81882,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+81883,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81884,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81885,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81886,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+81887,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+81888,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81889,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+81890,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81891,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+81892,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81893,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81894,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81895,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+81896,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+81897,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81898,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+81899,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81900,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+81901,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81902,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81903,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81904,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+81905,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+81906,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81907,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+81908,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81909,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+81910,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81911,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81912,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81913,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+81914,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+81915,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81916,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+81917,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81918,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+81919,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81920,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81921,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_13_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81922,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_14.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_14.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_14.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_14.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+81923,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+81924,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+81925,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81926,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+81927,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81928,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+81929,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81930,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81931,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81932,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+81933,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+81934,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81935,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+81936,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81937,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+81938,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81939,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81940,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81941,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+81942,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+81943,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81944,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+81945,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81946,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+81947,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81948,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81949,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81950,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+81951,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+81952,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81953,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+81954,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81955,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+81956,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81957,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81958,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81959,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+81960,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+81961,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81962,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+81963,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81964,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+81965,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81966,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81967,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81968,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+81969,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+81970,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81971,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+81972,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81973,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+81974,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81975,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81976,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81977,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+81978,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+81979,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81980,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+81981,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81982,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+81983,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81984,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81985,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81986,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+81987,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+81988,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81989,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+81990,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81991,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+81992,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81993,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81994,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+81995,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+81996,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+81997,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+81998,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+81999,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82000,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+82001,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82002,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82003,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82004,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+82005,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+82006,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82007,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+82008,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82009,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+82010,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82011,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82012,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82013,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+82014,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+82015,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82016,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+82017,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82018,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+82019,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82020,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82021,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82022,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+82023,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+82024,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82025,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+82026,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82027,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+82028,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82029,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82030,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82031,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+82032,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+82033,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82034,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+82035,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82036,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+82037,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82038,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82039,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82040,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+82041,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+82042,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82043,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+82044,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82045,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+82046,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82047,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82048,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82049,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+82050,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+82051,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82052,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+82053,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82054,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+82055,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82056,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82057,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82058,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+82059,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+82060,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82061,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+82062,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82063,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+82064,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82065,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82066,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_14_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82067,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_15.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_15.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_15.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_15.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+82068,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+82069,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+82070,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82071,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+82072,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82073,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+82074,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82075,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82076,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82077,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+82078,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+82079,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82080,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+82081,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82082,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+82083,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82084,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82085,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82086,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+82087,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+82088,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82089,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+82090,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82091,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+82092,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82093,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82094,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82095,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+82096,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+82097,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82098,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+82099,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82100,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+82101,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82102,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82103,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82104,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+82105,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+82106,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82107,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+82108,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82109,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+82110,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82111,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82112,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82113,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+82114,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+82115,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82116,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+82117,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82118,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+82119,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82120,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82121,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82122,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+82123,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+82124,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82125,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+82126,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82127,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+82128,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82129,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82130,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82131,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+82132,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+82133,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82134,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+82135,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82136,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+82137,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82138,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82139,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82140,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+82141,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+82142,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82143,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+82144,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82145,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+82146,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82147,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82148,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82149,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+82150,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+82151,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82152,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+82153,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82154,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+82155,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82156,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82157,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82158,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+82159,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+82160,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82161,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+82162,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82163,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+82164,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82165,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82166,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82167,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+82168,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+82169,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82170,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+82171,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82172,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+82173,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82174,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82175,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82176,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+82177,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+82178,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82179,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+82180,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82181,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+82182,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82183,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82184,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82185,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+82186,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+82187,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82188,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+82189,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82190,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+82191,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82192,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82193,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+82194,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+82195,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+82196,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+82197,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+82198,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_15_io_in_ver_r_man_14))
                                                    : 0U)))),8);
    }
}
