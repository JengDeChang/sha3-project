// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

void Vtb___024root___eval_initial__TOP__Vtiming__1__51(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1__51\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb__DOT__sponge_reference__265__unnamedblk19__DOT__i;
    __Vtask_tb__DOT__sponge_reference__265__unnamedblk19__DOT__i = 0;
    CData/*7:0*/ __Vfunc_tb__DOT__mode_suffix__276__Vfuncout;
    __Vfunc_tb__DOT__mode_suffix__276__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__mode_suffix__276__mode_i;
    __Vfunc_tb__DOT__mode_suffix__276__mode_i = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__278__lane;
    __Vfunc_tb__DOT__load_lane__278__lane = 0;
    // Body
    __Vtask_tb__DOT__sponge_reference__265__unnamedblk19__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb__DOT__sponge_reference__265__unnamedblk19__DOT__i, 
                      (vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__msg.size() 
                       - vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__msg_idx))) {
        vlSelfRef.tb__DOT____Vlvbound_h54bcd3e1__0 
            = (((0xc7U >= (0xffU & __Vtask_tb__DOT__sponge_reference__265__unnamedblk19__DOT__i))
                 ? vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
                [(0xffU & __Vtask_tb__DOT__sponge_reference__265__unnamedblk19__DOT__i)]
                 : 0U) ^ vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__msg.at(
                                                                                (vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__msg_idx 
                                                                                + __Vtask_tb__DOT__sponge_reference__265__unnamedblk19__DOT__i)));
        if (VL_LIKELY(((0xc7U >= (0xffU & __Vtask_tb__DOT__sponge_reference__265__unnamedblk19__DOT__i))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                     & __Vtask_tb__DOT__sponge_reference__265__unnamedblk19__DOT__i)] 
                = vlSelfRef.tb__DOT____Vlvbound_h54bcd3e1__0;
        }
        __Vtask_tb__DOT__sponge_reference__265__unnamedblk19__DOT__i 
            = ((IData)(1U) + __Vtask_tb__DOT__sponge_reference__265__unnamedblk19__DOT__i);
    }
    vlSelfRef.tb__DOT____Vlvbound_h5a85157f__0 = ((
                                                   (0xc7U 
                                                    >= 
                                                    (0xffU 
                                                     & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__msg.size() 
                                                        - vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__msg_idx)))
                                                    ? 
                                                   vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__msg.size() 
                                                       - vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__msg_idx))]
                                                    : 0U) 
                                                  ^ 
                                                  ([&]() {
                __Vfunc_tb__DOT__mode_suffix__276__mode_i 
                    = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__mode_i;
                __Vfunc_tb__DOT__mode_suffix__276__Vfuncout 
                    = (((((4U == __Vfunc_tb__DOT__mode_suffix__276__mode_i) 
                          || (5U == __Vfunc_tb__DOT__mode_suffix__276__mode_i)) 
                         || (6U == __Vfunc_tb__DOT__mode_suffix__276__mode_i)) 
                        || (7U == __Vfunc_tb__DOT__mode_suffix__276__mode_i))
                        ? 0x1fU : 6U);
            }(), (IData)(__Vfunc_tb__DOT__mode_suffix__276__Vfuncout)));
    if (VL_LIKELY(((0xc7U >= (0xffU & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__msg.size() 
                                       - vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__msg_idx)))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__msg.size() 
                                                                    - vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__msg_idx))] 
            = vlSelfRef.tb__DOT____Vlvbound_h5a85157f__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_hbe8357a8__0 = (0x80U 
                                                  ^ 
                                                  ((0xc7U 
                                                    >= 
                                                    (0xffU 
                                                     & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__rate 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__rate 
                                                       - (IData)(1U)))]
                                                    : 0U));
    if (VL_LIKELY(((0xc7U >= (0xffU & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__rate 
                                       - (IData)(1U))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__rate 
                                                                    - (IData)(1U)))] 
            = vlSelfRef.tb__DOT____Vlvbound_hbe8357a8__0;
    }
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__round_offset_i 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__round_offset_i;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__rounds_i 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__rounds_i;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 0U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 0U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp1] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[0U][0U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 1U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 0U;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp2] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[0U][1U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 2U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 0U;
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp3] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[0U][2U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 3U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 0U;
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp4] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[0U][3U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 4U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 0U;
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp5] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp5];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[0U][4U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 0U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 1U;
    IData/*31:0*/ __Vilp6;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp6] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp6];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[1U][0U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 1U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 1U;
    IData/*31:0*/ __Vilp7;
    __Vilp7 = 0U;
    while ((__Vilp7 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp7] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp7];
        __Vilp7 = ((IData)(1U) + __Vilp7);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[1U][1U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 2U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 1U;
    IData/*31:0*/ __Vilp8;
    __Vilp8 = 0U;
    while ((__Vilp8 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp8] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp8];
        __Vilp8 = ((IData)(1U) + __Vilp8);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[1U][2U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 3U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 1U;
    IData/*31:0*/ __Vilp9;
    __Vilp9 = 0U;
    while ((__Vilp9 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp9] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp9];
        __Vilp9 = ((IData)(1U) + __Vilp9);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[1U][3U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 4U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 1U;
    IData/*31:0*/ __Vilp10;
    __Vilp10 = 0U;
    while ((__Vilp10 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp10] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp10];
        __Vilp10 = ((IData)(1U) + __Vilp10);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[1U][4U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 0U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 2U;
    IData/*31:0*/ __Vilp11;
    __Vilp11 = 0U;
    while ((__Vilp11 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp11] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp11];
        __Vilp11 = ((IData)(1U) + __Vilp11);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[2U][0U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 1U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 2U;
    IData/*31:0*/ __Vilp12;
    __Vilp12 = 0U;
    while ((__Vilp12 <= 0x53U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp12] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp12];
        __Vilp12 = ((IData)(1U) + __Vilp12);
    }
}

void Vtb___024root___eval_initial__TOP__Vtiming__1__52(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1__52\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__278__lane;
    __Vfunc_tb__DOT__load_lane__278__lane = 0;
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0x54U;
    while ((__Vilp1 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp1] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[2U][1U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 2U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 2U;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp2] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[2U][2U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 3U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 2U;
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp3] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[2U][3U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 4U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 2U;
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp4] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[2U][4U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 0U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 3U;
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp5] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp5];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[3U][0U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 1U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 3U;
    IData/*31:0*/ __Vilp6;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp6] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp6];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[3U][1U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 2U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 3U;
    IData/*31:0*/ __Vilp7;
    __Vilp7 = 0U;
    while ((__Vilp7 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp7] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp7];
        __Vilp7 = ((IData)(1U) + __Vilp7);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[3U][2U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 3U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 3U;
    IData/*31:0*/ __Vilp8;
    __Vilp8 = 0U;
    while ((__Vilp8 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp8] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp8];
        __Vilp8 = ((IData)(1U) + __Vilp8);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[3U][3U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 4U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 3U;
    IData/*31:0*/ __Vilp9;
    __Vilp9 = 0U;
    while ((__Vilp9 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp9] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp9];
        __Vilp9 = ((IData)(1U) + __Vilp9);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[3U][4U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 0U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 4U;
    IData/*31:0*/ __Vilp10;
    __Vilp10 = 0U;
    while ((__Vilp10 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp10] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp10];
        __Vilp10 = ((IData)(1U) + __Vilp10);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[4U][0U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 1U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 4U;
    IData/*31:0*/ __Vilp11;
    __Vilp11 = 0U;
    while ((__Vilp11 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp11] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp11];
        __Vilp11 = ((IData)(1U) + __Vilp11);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[4U][1U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 2U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 4U;
    IData/*31:0*/ __Vilp12;
    __Vilp12 = 0U;
    while ((__Vilp12 <= 0xc2U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp12] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp12];
        __Vilp12 = ((IData)(1U) + __Vilp12);
    }
}

void Vtb___024root___eval_initial__TOP__Vtiming__1__53(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1__53\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb__DOT__keccak_p1600__277__unnamedblk5__DOT__round;
    __Vtask_tb__DOT__keccak_p1600__277__unnamedblk5__DOT__round = 0;
    IData/*31:0*/ __Vtask_tb__DOT__keccak_p1600__277__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx;
    __Vtask_tb__DOT__keccak_p1600__277__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx = 0;
    VlUnpacked<VlUnpacked<QData/*63:0*/, 5>, 5> __Vtask_tb__DOT__keccak_p1600__277__b;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            __Vtask_tb__DOT__keccak_p1600__277__b[__Vi0][__Vi1] = 0;
        }
    }
    VlUnpacked<QData/*63:0*/, 5> __Vtask_tb__DOT__keccak_p1600__277__c;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb__DOT__keccak_p1600__277__c[__Vi0] = 0;
    }
    VlUnpacked<QData/*63:0*/, 5> __Vtask_tb__DOT__keccak_p1600__277__d;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb__DOT__keccak_p1600__277__d[__Vi0] = 0;
    }
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__278__lane;
    __Vfunc_tb__DOT__load_lane__278__lane = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__279__Vfuncout;
    __Vfunc_tb__DOT__rol64__279__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__279__value;
    __Vfunc_tb__DOT__rol64__279__value = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rol64__279__sh;
    __Vfunc_tb__DOT__rol64__279__sh = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__280__Vfuncout;
    __Vfunc_tb__DOT__rol64__280__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__280__value;
    __Vfunc_tb__DOT__rol64__280__value = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rol64__280__sh;
    __Vfunc_tb__DOT__rol64__280__sh = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rho_offset__281__x;
    __Vfunc_tb__DOT__rho_offset__281__x = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rho_offset__281__y;
    __Vfunc_tb__DOT__rho_offset__281__y = 0;
    QData/*63:0*/ __Vfunc_rc__282__Vfuncout;
    __Vfunc_rc__282__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rc__282__round;
    __Vfunc_rc__282__round = 0;
    QData/*63:0*/ __Vtemp_1;
    // Body
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[0xc3U] 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
        [0xc3U];
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[0xc4U] 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
        [0xc4U];
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[0xc5U] 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
        [0xc5U];
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[0xc6U] 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
        [0xc6U];
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[0xc7U] 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
        [0xc7U];
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[4U][2U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 3U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 4U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp1] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[4U][3U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y = 4U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x = 4U;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state[__Vilp2] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    __Vfunc_tb__DOT__load_lane__278__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__278__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__278__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__278__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__278__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__278__Vfuncout = __Vfunc_tb__DOT__load_lane__278__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__278__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[4U][4U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    __Vtask_tb__DOT__keccak_p1600__277__unnamedblk5__DOT__round = 0U;
    while (VL_LTS_III(32, __Vtask_tb__DOT__keccak_p1600__277__unnamedblk5__DOT__round, vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__rounds_i)) {
        __Vtask_tb__DOT__keccak_p1600__277__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx 
            = (__Vtask_tb__DOT__keccak_p1600__277__unnamedblk5__DOT__round 
               + vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__round_offset_i);
        vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
            = ((((vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
                  [0U][0U] ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
                  [0U][1U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
                 [0U][2U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
                [0U][3U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [0U][4U]);
        __Vtask_tb__DOT__keccak_p1600__277__c[0U] = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
        vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
            = ((((vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
                  [1U][0U] ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
                  [1U][1U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
                 [1U][2U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
                [1U][3U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [1U][4U]);
        __Vtask_tb__DOT__keccak_p1600__277__c[1U] = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
        vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
            = ((((vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
                  [2U][0U] ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
                  [2U][1U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
                 [2U][2U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
                [2U][3U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [2U][4U]);
        __Vtask_tb__DOT__keccak_p1600__277__c[2U] = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
        vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
            = ((((vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
                  [3U][0U] ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
                  [3U][1U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
                 [3U][2U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
                [3U][3U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [3U][4U]);
        __Vtask_tb__DOT__keccak_p1600__277__c[3U] = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
        vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
            = ((((vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
                  [4U][0U] ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
                  [4U][1U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
                 [4U][2U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
                [4U][3U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [4U][4U]);
        __Vtask_tb__DOT__keccak_p1600__277__c[4U] = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
        vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__c
               [4U] ^ ([&]() {
                    __Vfunc_tb__DOT__rol64__279__sh = 1U;
                    __Vfunc_tb__DOT__rol64__279__value 
                        = __Vtask_tb__DOT__keccak_p1600__277__c
                        [1U];
                    __Vfunc_tb__DOT__rol64__279__Vfuncout 
                        = ((0U == __Vfunc_tb__DOT__rol64__279__sh)
                            ? __Vfunc_tb__DOT__rol64__279__value
                            : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__279__value, __Vfunc_tb__DOT__rol64__279__sh) 
                               | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__279__value, 
                                               ((IData)(0x40U) 
                                                - __Vfunc_tb__DOT__rol64__279__sh))));
                }(), __Vfunc_tb__DOT__rol64__279__Vfuncout));
        __Vtask_tb__DOT__keccak_p1600__277__d[0U] = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
        vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__c
               [0U] ^ ([&]() {
                    __Vfunc_tb__DOT__rol64__279__sh = 1U;
                    __Vfunc_tb__DOT__rol64__279__value 
                        = __Vtask_tb__DOT__keccak_p1600__277__c
                        [2U];
                    __Vfunc_tb__DOT__rol64__279__Vfuncout 
                        = ((0U == __Vfunc_tb__DOT__rol64__279__sh)
                            ? __Vfunc_tb__DOT__rol64__279__value
                            : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__279__value, __Vfunc_tb__DOT__rol64__279__sh) 
                               | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__279__value, 
                                               ((IData)(0x40U) 
                                                - __Vfunc_tb__DOT__rol64__279__sh))));
                }(), __Vfunc_tb__DOT__rol64__279__Vfuncout));
        __Vtask_tb__DOT__keccak_p1600__277__d[1U] = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
        vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__c
               [1U] ^ ([&]() {
                    __Vfunc_tb__DOT__rol64__279__sh = 1U;
                    __Vfunc_tb__DOT__rol64__279__value 
                        = __Vtask_tb__DOT__keccak_p1600__277__c
                        [3U];
                    __Vfunc_tb__DOT__rol64__279__Vfuncout 
                        = ((0U == __Vfunc_tb__DOT__rol64__279__sh)
                            ? __Vfunc_tb__DOT__rol64__279__value
                            : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__279__value, __Vfunc_tb__DOT__rol64__279__sh) 
                               | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__279__value, 
                                               ((IData)(0x40U) 
                                                - __Vfunc_tb__DOT__rol64__279__sh))));
                }(), __Vfunc_tb__DOT__rol64__279__Vfuncout));
        __Vtask_tb__DOT__keccak_p1600__277__d[2U] = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
        vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__c
               [2U] ^ ([&]() {
                    __Vfunc_tb__DOT__rol64__279__sh = 1U;
                    __Vfunc_tb__DOT__rol64__279__value 
                        = __Vtask_tb__DOT__keccak_p1600__277__c
                        [4U];
                    __Vfunc_tb__DOT__rol64__279__Vfuncout 
                        = ((0U == __Vfunc_tb__DOT__rol64__279__sh)
                            ? __Vfunc_tb__DOT__rol64__279__value
                            : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__279__value, __Vfunc_tb__DOT__rol64__279__sh) 
                               | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__279__value, 
                                               ((IData)(0x40U) 
                                                - __Vfunc_tb__DOT__rol64__279__sh))));
                }(), __Vfunc_tb__DOT__rol64__279__Vfuncout));
        __Vtask_tb__DOT__keccak_p1600__277__d[3U] = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
        vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__c
               [3U] ^ ([&]() {
                    __Vfunc_tb__DOT__rol64__279__sh = 1U;
                    __Vfunc_tb__DOT__rol64__279__value 
                        = __Vtask_tb__DOT__keccak_p1600__277__c
                        [0U];
                    __Vfunc_tb__DOT__rol64__279__Vfuncout 
                        = ((0U == __Vfunc_tb__DOT__rol64__279__sh)
                            ? __Vfunc_tb__DOT__rol64__279__value
                            : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__279__value, __Vfunc_tb__DOT__rol64__279__sh) 
                               | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__279__value, 
                                               ((IData)(0x40U) 
                                                - __Vfunc_tb__DOT__rol64__279__sh))));
                }(), __Vfunc_tb__DOT__rol64__279__Vfuncout));
        __Vtask_tb__DOT__keccak_p1600__277__d[4U] = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [0U][0U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [0U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[0U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [0U][1U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [0U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[0U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [0U][2U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [0U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[0U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [0U][3U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [0U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[0U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [0U][4U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [0U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[0U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [1U][0U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [1U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[1U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [1U][1U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [1U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[1U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [1U][2U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [1U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[1U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [1U][3U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [1U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[1U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [1U][4U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [1U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[1U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [2U][0U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [2U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[2U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [2U][1U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [2U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[2U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [2U][2U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [2U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[2U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [2U][3U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [2U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[2U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [2U][4U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [2U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[2U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [3U][0U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [3U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[3U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [3U][1U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [3U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[3U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [3U][2U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [3U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[3U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [3U][3U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [3U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[3U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [3U][4U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [3U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[3U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [4U][0U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [4U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[4U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [4U][1U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [4U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[4U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [4U][2U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [4U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[4U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [4U][3U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [4U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[4U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
               [4U][4U] ^ __Vtask_tb__DOT__keccak_p1600__277__d
               [4U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[4U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 0U;
        __Vfunc_tb__DOT__rho_offset__281__x = 0U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel788;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel788;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel788;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel788;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel788;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel788;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel788;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel788;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel788;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel788;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel788;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel788;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel788;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel788;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel788;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel788;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel788;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel788;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel788;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel788;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel788;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel788;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel788;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel788;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel788;
            }
            __Vlabel788: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [0U][0U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[0U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 1U;
        __Vfunc_tb__DOT__rho_offset__281__x = 0U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel789;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel789;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel789;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel789;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel789;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel789;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel789;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel789;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel789;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel789;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel789;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel789;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel789;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel789;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel789;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel789;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel789;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel789;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel789;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel789;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel789;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel789;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel789;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel789;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel789;
            }
            __Vlabel789: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [0U][1U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[1U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 2U;
        __Vfunc_tb__DOT__rho_offset__281__x = 0U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel790;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel790;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel790;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel790;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel790;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel790;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel790;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel790;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel790;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel790;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel790;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel790;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel790;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel790;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel790;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel790;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel790;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel790;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel790;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel790;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel790;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel790;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel790;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel790;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel790;
            }
            __Vlabel790: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [0U][2U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[2U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 3U;
        __Vfunc_tb__DOT__rho_offset__281__x = 0U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel791;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel791;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel791;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel791;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel791;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel791;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel791;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel791;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel791;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel791;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel791;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel791;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel791;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel791;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel791;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel791;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel791;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel791;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel791;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel791;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel791;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel791;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel791;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel791;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel791;
            }
            __Vlabel791: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [0U][3U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[3U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 4U;
        __Vfunc_tb__DOT__rho_offset__281__x = 0U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel792;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel792;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel792;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel792;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel792;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel792;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel792;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel792;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel792;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel792;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel792;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel792;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel792;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel792;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel792;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel792;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel792;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel792;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel792;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel792;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel792;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel792;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel792;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel792;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel792;
            }
            __Vlabel792: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [0U][4U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[4U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 0U;
        __Vfunc_tb__DOT__rho_offset__281__x = 1U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel793;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel793;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel793;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel793;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel793;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel793;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel793;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel793;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel793;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel793;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel793;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel793;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel793;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel793;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel793;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel793;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel793;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel793;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel793;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel793;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel793;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel793;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel793;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel793;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel793;
            }
            __Vlabel793: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [1U][0U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[0U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 1U;
        __Vfunc_tb__DOT__rho_offset__281__x = 1U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel794;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel794;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel794;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel794;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel794;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel794;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel794;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel794;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel794;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel794;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel794;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel794;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel794;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel794;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel794;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel794;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel794;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel794;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel794;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel794;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel794;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel794;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel794;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel794;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel794;
            }
            __Vlabel794: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [1U][1U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[1U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 2U;
        __Vfunc_tb__DOT__rho_offset__281__x = 1U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel795;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel795;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel795;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel795;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel795;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel795;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel795;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel795;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel795;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel795;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel795;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel795;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel795;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel795;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel795;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel795;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel795;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel795;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel795;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel795;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel795;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel795;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel795;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel795;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel795;
            }
            __Vlabel795: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [1U][2U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[2U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 3U;
        __Vfunc_tb__DOT__rho_offset__281__x = 1U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel796;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel796;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel796;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel796;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel796;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel796;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel796;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel796;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel796;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel796;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel796;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel796;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel796;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel796;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel796;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel796;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel796;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel796;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel796;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel796;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel796;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel796;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel796;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel796;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel796;
            }
            __Vlabel796: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [1U][3U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[3U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 4U;
        __Vfunc_tb__DOT__rho_offset__281__x = 1U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel797;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel797;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel797;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel797;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel797;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel797;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel797;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel797;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel797;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel797;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel797;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel797;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel797;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel797;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel797;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel797;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel797;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel797;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel797;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel797;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel797;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel797;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel797;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel797;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel797;
            }
            __Vlabel797: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [1U][4U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[4U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 0U;
        __Vfunc_tb__DOT__rho_offset__281__x = 2U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel798;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel798;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel798;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel798;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel798;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel798;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel798;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel798;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel798;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel798;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel798;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel798;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel798;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel798;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel798;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel798;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel798;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel798;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel798;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel798;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel798;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel798;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel798;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel798;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel798;
            }
            __Vlabel798: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [2U][0U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[0U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 1U;
        __Vfunc_tb__DOT__rho_offset__281__x = 2U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel799;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel799;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel799;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel799;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel799;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel799;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel799;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel799;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel799;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel799;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel799;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel799;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel799;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel799;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel799;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel799;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel799;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel799;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel799;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel799;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel799;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel799;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel799;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel799;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel799;
            }
            __Vlabel799: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [2U][1U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[1U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 2U;
        __Vfunc_tb__DOT__rho_offset__281__x = 2U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel800;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel800;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel800;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel800;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel800;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel800;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel800;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel800;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel800;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel800;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel800;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel800;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel800;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel800;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel800;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel800;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel800;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel800;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel800;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel800;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel800;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel800;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel800;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel800;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel800;
            }
            __Vlabel800: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [2U][2U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[2U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 3U;
        __Vfunc_tb__DOT__rho_offset__281__x = 2U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel801;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel801;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel801;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel801;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel801;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel801;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel801;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel801;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel801;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel801;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel801;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel801;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel801;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel801;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel801;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel801;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel801;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel801;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel801;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel801;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel801;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel801;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel801;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel801;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel801;
            }
            __Vlabel801: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [2U][3U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[3U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 4U;
        __Vfunc_tb__DOT__rho_offset__281__x = 2U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel802;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel802;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel802;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel802;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel802;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel802;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel802;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel802;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel802;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel802;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel802;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel802;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel802;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel802;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel802;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel802;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel802;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel802;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel802;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel802;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel802;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel802;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel802;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel802;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel802;
            }
            __Vlabel802: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [2U][4U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[4U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 0U;
        __Vfunc_tb__DOT__rho_offset__281__x = 3U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel803;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel803;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel803;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel803;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel803;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel803;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel803;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel803;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel803;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel803;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel803;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel803;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel803;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel803;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel803;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel803;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel803;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel803;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel803;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel803;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel803;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel803;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel803;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel803;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel803;
            }
            __Vlabel803: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [3U][0U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[0U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 1U;
        __Vfunc_tb__DOT__rho_offset__281__x = 3U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel804;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel804;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel804;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel804;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel804;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel804;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel804;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel804;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel804;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel804;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel804;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel804;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel804;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel804;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel804;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel804;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel804;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel804;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel804;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel804;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel804;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel804;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel804;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel804;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel804;
            }
            __Vlabel804: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [3U][1U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[1U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 2U;
        __Vfunc_tb__DOT__rho_offset__281__x = 3U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel805;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel805;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel805;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel805;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel805;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel805;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel805;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel805;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel805;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel805;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel805;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel805;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel805;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel805;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel805;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel805;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel805;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel805;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel805;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel805;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel805;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel805;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel805;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel805;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel805;
            }
            __Vlabel805: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [3U][2U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[2U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 3U;
        __Vfunc_tb__DOT__rho_offset__281__x = 3U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel806;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel806;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel806;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel806;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel806;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel806;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel806;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel806;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel806;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel806;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel806;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel806;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel806;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel806;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel806;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel806;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel806;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel806;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel806;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel806;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel806;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel806;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel806;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel806;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel806;
            }
            __Vlabel806: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [3U][3U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[3U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 4U;
        __Vfunc_tb__DOT__rho_offset__281__x = 3U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel807;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel807;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel807;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel807;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel807;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel807;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel807;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel807;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel807;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel807;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel807;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel807;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel807;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel807;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel807;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel807;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel807;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel807;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel807;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel807;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel807;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel807;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel807;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel807;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel807;
            }
            __Vlabel807: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [3U][4U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[4U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 0U;
        __Vfunc_tb__DOT__rho_offset__281__x = 4U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel808;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel808;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel808;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel808;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel808;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel808;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel808;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel808;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel808;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel808;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel808;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel808;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel808;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel808;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel808;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel808;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel808;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel808;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel808;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel808;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel808;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel808;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel808;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel808;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel808;
            }
            __Vlabel808: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [4U][0U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[0U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 1U;
        __Vfunc_tb__DOT__rho_offset__281__x = 4U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel809;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel809;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel809;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel809;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel809;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel809;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel809;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel809;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel809;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel809;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel809;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel809;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel809;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel809;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel809;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel809;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel809;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel809;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel809;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel809;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel809;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel809;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel809;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel809;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel809;
            }
            __Vlabel809: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [4U][1U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[1U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 2U;
        __Vfunc_tb__DOT__rho_offset__281__x = 4U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel810;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel810;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel810;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel810;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel810;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel810;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel810;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel810;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel810;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel810;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel810;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel810;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel810;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel810;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel810;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel810;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel810;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel810;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel810;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel810;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel810;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel810;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel810;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel810;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel810;
            }
            __Vlabel810: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [4U][2U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[2U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 3U;
        __Vfunc_tb__DOT__rho_offset__281__x = 4U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel811;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel811;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel811;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel811;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel811;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel811;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel811;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel811;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel811;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel811;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel811;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel811;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel811;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel811;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel811;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel811;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel811;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel811;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel811;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel811;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel811;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel811;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel811;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel811;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel811;
            }
            __Vlabel811: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [4U][3U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[3U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__281__y = 4U;
        __Vfunc_tb__DOT__rho_offset__281__x = 4U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0U;
                    goto __Vlabel812;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x24U;
                    goto __Vlabel812;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 3U;
                    goto __Vlabel812;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x29U;
                    goto __Vlabel812;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x12U;
                    goto __Vlabel812;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 1U;
                    goto __Vlabel812;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2cU;
                    goto __Vlabel812;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xaU;
                    goto __Vlabel812;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2dU;
                    goto __Vlabel812;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 2U;
                    goto __Vlabel812;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3eU;
                    goto __Vlabel812;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 6U;
                    goto __Vlabel812;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x2bU;
                    goto __Vlabel812;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xfU;
                    goto __Vlabel812;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x3dU;
                    goto __Vlabel812;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1cU;
                    goto __Vlabel812;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x37U;
                    goto __Vlabel812;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x19U;
                    goto __Vlabel812;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x15U;
                    goto __Vlabel812;
                } else {
                    __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x38U;
                    goto __Vlabel812;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x1bU;
                goto __Vlabel812;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x14U;
                goto __Vlabel812;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0x27U;
                goto __Vlabel812;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__281__y)) {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 8U;
                goto __Vlabel812;
            } else {
                __Vfunc_tb__DOT__rho_offset__281__Vfuncout = 0xeU;
                goto __Vlabel812;
            }
            __Vlabel812: ;
        }
        __Vfunc_tb__DOT__rol64__280__sh = __Vfunc_tb__DOT__rho_offset__281__Vfuncout;
        __Vfunc_tb__DOT__rol64__280__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
            [4U][4U];
        __Vfunc_tb__DOT__rol64__280__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__280__sh)
                                                  ? __Vfunc_tb__DOT__rol64__280__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, __Vfunc_tb__DOT__rol64__280__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__280__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__280__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__280__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__277__b[4U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [0U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [1U][0U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [2U][0U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[0U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [0U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [1U][1U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [2U][1U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[0U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [0U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [1U][2U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [2U][2U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[0U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [0U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [1U][3U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [2U][3U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[0U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [0U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [1U][4U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [2U][4U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[0U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [1U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [2U][0U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [3U][0U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[1U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [1U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [2U][1U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [3U][1U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[1U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [1U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [2U][2U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [3U][2U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[1U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [1U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [2U][3U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [3U][3U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[1U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [1U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [2U][4U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [3U][4U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[1U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [2U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [3U][0U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [4U][0U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[2U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [2U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [3U][1U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [4U][1U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[2U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [2U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [3U][2U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [4U][2U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[2U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [2U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [3U][3U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [4U][3U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[2U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [2U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [3U][4U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [4U][4U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[2U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [3U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [4U][0U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [0U][0U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[3U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [3U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [4U][1U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [0U][1U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[3U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [3U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [4U][2U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [0U][2U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[3U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [3U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [4U][3U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [0U][3U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[3U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [3U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [4U][4U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [0U][4U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[3U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [4U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [0U][0U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [1U][0U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[4U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [4U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [0U][1U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [1U][1U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[4U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [4U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [0U][2U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [1U][2U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[4U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [4U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [0U][3U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [1U][3U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[4U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__277__b
               [4U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__277__b
                            [0U][4U]) & __Vtask_tb__DOT__keccak_p1600__277__b
                           [1U][4U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[4U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        __Vtemp_1 = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
                     [0U][0U] ^ ([&]() {
                    __Vfunc_rc__282__round = __Vtask_tb__DOT__keccak_p1600__277__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx;
                    {
                        if (((((((((0U == __Vfunc_rc__282__round) 
                                   | (1U == __Vfunc_rc__282__round)) 
                                  | (2U == __Vfunc_rc__282__round)) 
                                 | (3U == __Vfunc_rc__282__round)) 
                                | (4U == __Vfunc_rc__282__round)) 
                               | (5U == __Vfunc_rc__282__round)) 
                              | (6U == __Vfunc_rc__282__round)) 
                             | (7U == __Vfunc_rc__282__round))) {
                            if ((0U == __Vfunc_rc__282__round)) {
                                __Vfunc_rc__282__Vfuncout = 1ULL;
                                goto __Vlabel813;
                            } else if ((1U == __Vfunc_rc__282__round)) {
                                __Vfunc_rc__282__Vfuncout = 0x8082ULL;
                                goto __Vlabel813;
                            } else if ((2U == __Vfunc_rc__282__round)) {
                                __Vfunc_rc__282__Vfuncout = 0x800000000000808aULL;
                                goto __Vlabel813;
                            } else if ((3U == __Vfunc_rc__282__round)) {
                                __Vfunc_rc__282__Vfuncout = 0x8000000080008000ULL;
                                goto __Vlabel813;
                            } else if ((4U == __Vfunc_rc__282__round)) {
                                __Vfunc_rc__282__Vfuncout = 0x808bULL;
                                goto __Vlabel813;
                            } else if ((5U == __Vfunc_rc__282__round)) {
                                __Vfunc_rc__282__Vfuncout = 0x80000001ULL;
                                goto __Vlabel813;
                            } else if ((6U == __Vfunc_rc__282__round)) {
                                __Vfunc_rc__282__Vfuncout = 0x8000000080008081ULL;
                                goto __Vlabel813;
                            } else {
                                __Vfunc_rc__282__Vfuncout = 0x8000000000008009ULL;
                                goto __Vlabel813;
                            }
                        } else if (((((((((8U == __Vfunc_rc__282__round) 
                                          | (9U == __Vfunc_rc__282__round)) 
                                         | (0xaU == __Vfunc_rc__282__round)) 
                                        | (0xbU == __Vfunc_rc__282__round)) 
                                       | (0xcU == __Vfunc_rc__282__round)) 
                                      | (0xdU == __Vfunc_rc__282__round)) 
                                     | (0xeU == __Vfunc_rc__282__round)) 
                                    | (0xfU == __Vfunc_rc__282__round))) {
                            if ((8U == __Vfunc_rc__282__round)) {
                                __Vfunc_rc__282__Vfuncout = 0x8aULL;
                                goto __Vlabel813;
                            } else if ((9U == __Vfunc_rc__282__round)) {
                                __Vfunc_rc__282__Vfuncout = 0x88ULL;
                                goto __Vlabel813;
                            } else if ((0xaU == __Vfunc_rc__282__round)) {
                                __Vfunc_rc__282__Vfuncout = 0x80008009ULL;
                                goto __Vlabel813;
                            } else if ((0xbU == __Vfunc_rc__282__round)) {
                                __Vfunc_rc__282__Vfuncout = 0x8000000aULL;
                                goto __Vlabel813;
                            } else if ((0xcU == __Vfunc_rc__282__round)) {
                                __Vfunc_rc__282__Vfuncout = 0x8000808bULL;
                                goto __Vlabel813;
                            } else if ((0xdU == __Vfunc_rc__282__round)) {
                                __Vfunc_rc__282__Vfuncout = 0x800000000000008bULL;
                                goto __Vlabel813;
                            } else if ((0xeU == __Vfunc_rc__282__round)) {
                                __Vfunc_rc__282__Vfuncout = 0x8000000000008089ULL;
                                goto __Vlabel813;
                            } else {
                                __Vfunc_rc__282__Vfuncout = 0x8000000000008003ULL;
                                goto __Vlabel813;
                            }
                        } else if (((((((((0x10U == __Vfunc_rc__282__round) 
                                          | (0x11U 
                                             == __Vfunc_rc__282__round)) 
                                         | (0x12U == __Vfunc_rc__282__round)) 
                                        | (0x13U == __Vfunc_rc__282__round)) 
                                       | (0x14U == __Vfunc_rc__282__round)) 
                                      | (0x15U == __Vfunc_rc__282__round)) 
                                     | (0x16U == __Vfunc_rc__282__round)) 
                                    | (0x17U == __Vfunc_rc__282__round))) {
                            if ((0x10U == __Vfunc_rc__282__round)) {
                                __Vfunc_rc__282__Vfuncout = 0x8000000000008002ULL;
                                goto __Vlabel813;
                            } else if ((0x11U == __Vfunc_rc__282__round)) {
                                __Vfunc_rc__282__Vfuncout = 0x8000000000000080ULL;
                                goto __Vlabel813;
                            } else if ((0x12U == __Vfunc_rc__282__round)) {
                                __Vfunc_rc__282__Vfuncout = 0x800aULL;
                                goto __Vlabel813;
                            } else if ((0x13U == __Vfunc_rc__282__round)) {
                                __Vfunc_rc__282__Vfuncout = 0x800000008000000aULL;
                                goto __Vlabel813;
                            } else if ((0x14U == __Vfunc_rc__282__round)) {
                                __Vfunc_rc__282__Vfuncout = 0x8000000080008081ULL;
                                goto __Vlabel813;
                            } else if ((0x15U == __Vfunc_rc__282__round)) {
                                __Vfunc_rc__282__Vfuncout = 0x8000000000008080ULL;
                                goto __Vlabel813;
                            } else if ((0x16U == __Vfunc_rc__282__round)) {
                                __Vfunc_rc__282__Vfuncout = 0x80000001ULL;
                                goto __Vlabel813;
                            } else {
                                __Vfunc_rc__282__Vfuncout = 0x8000000080008008ULL;
                                goto __Vlabel813;
                            }
                        } else {
                            __Vfunc_rc__282__Vfuncout = 0ULL;
                            goto __Vlabel813;
                        }
                        __Vlabel813: ;
                    }
                }(), __Vfunc_rc__282__Vfuncout));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a[0U][0U] 
            = __Vtemp_1;
        __Vtask_tb__DOT__keccak_p1600__277__unnamedblk5__DOT__round 
            = ((IData)(1U) + __Vtask_tb__DOT__keccak_p1600__277__unnamedblk5__DOT__round);
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [0U][0U];
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 0U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 0U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [0U][1U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 1U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 0U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [0U][2U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 2U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 0U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [0U][3U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 3U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 0U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [0U][4U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 4U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 0U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [1U][0U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 0U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 1U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [1U][1U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 1U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 1U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [1U][2U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 2U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 1U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [1U][3U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 3U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 1U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [1U][4U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 4U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 1U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [2U][0U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 0U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 2U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [2U][1U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 1U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 2U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [2U][2U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 2U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 2U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [2U][3U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 3U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 2U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [2U][4U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 4U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 2U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [3U][0U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 0U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 3U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [3U][1U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 1U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 3U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [3U][2U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 2U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 3U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [3U][3U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 3U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 3U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [3U][4U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 4U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 3U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [4U][0U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 0U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 4U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [4U][1U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 1U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 4U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [4U][2U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 2U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 4U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x38U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__277__a
        [4U][3U];
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__y = 3U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__283__x = 4U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__265__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__283__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__283__lane 
                                                             >> 0x10U)));
}
