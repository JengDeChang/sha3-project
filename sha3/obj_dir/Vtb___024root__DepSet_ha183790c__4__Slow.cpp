// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__4(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___stl_sequent__TOP__4\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfffffffffffdffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x11U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x11U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x11U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x11U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x11U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x11U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x10U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x10U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x10U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x10U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x10U))))))) 
                         << 0x11U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfffffffffffbffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x12U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x12U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x12U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x12U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x12U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x12U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x11U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x11U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x11U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x11U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x11U))))))) 
                         << 0x12U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfffffffffff7ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x13U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x13U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x13U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x13U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x13U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x13U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x12U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x12U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x12U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x12U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x12U))))))) 
                         << 0x13U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xffffffffffefffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x14U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x14U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x14U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x14U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x14U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x14U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x13U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x13U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x13U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x13U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x13U))))))) 
                         << 0x14U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xffffffffffdfffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x15U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x15U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x15U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x15U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x15U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x15U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x14U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x14U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x14U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x14U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x14U))))))) 
                         << 0x15U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xffffffffffbfffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x16U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x16U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x16U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x16U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x16U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x16U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x15U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x15U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x15U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x15U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x15U))))))) 
                         << 0x16U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xffffffffff7fffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x17U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x17U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x17U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x17U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x17U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x17U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x16U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x16U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x16U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x16U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x16U))))))) 
                         << 0x17U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfffffffffeffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x18U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x18U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x18U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x18U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x17U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x17U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x17U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x17U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x17U))))))) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfffffffffdffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x19U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x19U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x19U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x19U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x19U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x19U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x18U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x18U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x18U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x18U))))))) 
                         << 0x19U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfffffffffbffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x1aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x1aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x1aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x1aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x19U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x19U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x19U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x19U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x19U))))))) 
                         << 0x1aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfffffffff7ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x1bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x1bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x1bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x1bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x1bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x1bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x1aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x1aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x1aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x1aU))))))) 
                         << 0x1bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xffffffffefffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x1cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x1cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x1cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x1cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x1cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x1bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x1bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x1bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x1bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x1bU))))))) 
                         << 0x1cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xffffffffdfffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x1dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x1dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x1dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x1dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x1dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x1dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x1cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x1cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x1cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x1cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x1cU))))))) 
                         << 0x1dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xffffffffbfffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x1eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x1eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x1eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x1eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x1eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x1eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x1dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x1dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x1dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x1dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x1dU))))))) 
                         << 0x1eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xffffffff7fffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x1fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x1fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x1fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x1fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x1fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x1eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x1eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x1eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x1eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x1eU))))))) 
                         << 0x1fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfffffffeffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x20U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x20U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x20U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x20U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x1fU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x1fU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x1fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x1fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x1fU))))))) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfffffffdffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x21U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x21U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x21U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x21U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x21U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x21U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x20U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x20U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x20U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x20U))))))) 
                         << 0x21U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfffffffbffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x22U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x22U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x22U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x22U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x22U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x22U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x21U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x21U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x21U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x21U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x21U))))))) 
                         << 0x22U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfffffff7ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x23U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x23U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x23U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x23U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x23U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x23U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x22U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x22U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x22U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x22U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x22U))))))) 
                         << 0x23U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xffffffefffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x24U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x24U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x24U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x24U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x24U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x24U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x23U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x23U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x23U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x23U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x23U))))))) 
                         << 0x24U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xffffffdfffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x25U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x25U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x25U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x25U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x25U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x25U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x24U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x24U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x24U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x24U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x24U))))))) 
                         << 0x25U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xffffffbfffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x26U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x26U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x26U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x26U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x26U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x26U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x25U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x25U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x25U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x25U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x25U))))))) 
                         << 0x26U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xffffff7fffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x27U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x27U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x27U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x27U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x27U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x27U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x26U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x26U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x26U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x26U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x26U))))))) 
                         << 0x27U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfffffeffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x28U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x28U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x28U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x28U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x28U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x28U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x27U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x27U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x27U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x27U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x27U))))))) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfffffdffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x29U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x29U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x29U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x29U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x29U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x29U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x28U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x28U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x28U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x28U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x28U))))))) 
                         << 0x29U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfffffbffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x2aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x2aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x2aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x2aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x2aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x2aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x29U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x29U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x29U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x29U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x29U))))))) 
                         << 0x2aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfffff7ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x2bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x2bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x2bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x2bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x2bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x2bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x2aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x2aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x2aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x2aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x2aU))))))) 
                         << 0x2bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xffffefffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x2cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x2cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x2cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x2cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x2cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x2cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x2bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x2bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x2bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x2bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x2bU))))))) 
                         << 0x2cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xffffdfffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x2dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x2dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x2dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x2dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x2dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x2dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x2cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x2cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x2cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x2cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x2cU))))))) 
                         << 0x2dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xffffbfffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x2eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x2eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x2eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x2eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x2eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x2eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x2dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x2dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x2dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x2dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x2dU))))))) 
                         << 0x2eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xffff7fffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x2fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x2fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x2fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x2fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x2fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x2fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x2eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x2eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x2eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x2eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x2eU))))))) 
                         << 0x2fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfffeffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x30U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x30U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x30U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x30U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x30U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x30U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x2fU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x2fU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x2fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x2fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x2fU))))))) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfffdffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x31U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x31U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x31U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x31U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x31U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x31U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x30U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x30U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x30U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x30U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x30U))))))) 
                         << 0x31U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfffbffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x32U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x32U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x32U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x32U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x32U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x32U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x31U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x31U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x31U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x31U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x31U))))))) 
                         << 0x32U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfff7ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x33U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x33U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x33U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x33U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x33U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x33U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x32U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x32U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x32U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x32U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x32U))))))) 
                         << 0x33U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xffefffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x34U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x34U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x34U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x34U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x34U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x34U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x33U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x33U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x33U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x33U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x33U))))))) 
                         << 0x34U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xffdfffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x35U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x35U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x35U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x35U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x35U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x35U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x34U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x34U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x34U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x34U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x34U))))))) 
                         << 0x35U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xffbfffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x36U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x36U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x36U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x36U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x36U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x36U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x35U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x35U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x35U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x35U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x35U))))))) 
                         << 0x36U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xff7fffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x37U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x37U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x37U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x37U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x37U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x37U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x36U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x36U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x36U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x36U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x36U))))))) 
                         << 0x37U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfeffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x38U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x38U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x38U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x38U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x38U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x38U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x37U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x37U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x37U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x37U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x37U))))))) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfdffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x39U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x39U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x39U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x39U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x39U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x39U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x38U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x38U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x38U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x38U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x38U))))))) 
                         << 0x39U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xfbffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x3aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x39U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x39U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x39U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x39U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x39U))))))) 
                         << 0x3aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xf7ffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x3bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x3aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x3aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x3aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x3aU))))))) 
                         << 0x3bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xefffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x3cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x3bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x3bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x3bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x3bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x3bU))))))) 
                         << 0x3cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xdfffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x3dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x3cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x3cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x3cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x3cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x3cU))))))) 
                         << 0x3dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0xbfffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x3eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x3dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x3dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x3dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x3dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x3dU))))))) 
                         << 0x3eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][1U] 
        = ((0x7fffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [1U] 
                                                          >> 0x3fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x3eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x3eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x3eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x3eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x3eU))))))) 
                         << 0x3fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | (IData)((IData)((1U & (((IData)(
                                                        vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                        [2U]
                                                        [2U]) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U]))) 
                                               ^ ((
                                                   (((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x3fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x3fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x3fU))))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 1U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 1U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 1U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 1U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U])))))) 
                         << 1U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 2U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 2U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 2U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 2U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 1U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 1U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 1U))))))) 
                         << 2U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 3U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 3U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 3U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 3U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 2U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 2U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 2U))))))) 
                         << 3U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffffffffffffefULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 4U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 4U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 4U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 4U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 3U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 3U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 3U))))))) 
                         << 4U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffffffffffffdfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 5U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 5U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 5U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 5U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 4U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 4U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 4U))))))) 
                         << 5U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 6U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 6U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 6U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 6U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 5U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 5U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 5U))))))) 
                         << 6U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 7U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 7U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 7U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 7U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 6U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 6U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 6U))))))) 
                         << 7U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 8U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 8U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 8U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 8U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 7U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 7U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 7U))))))) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffffffffffdffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 9U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 9U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 9U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 9U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 9U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 9U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 8U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 8U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 8U))))))) 
                         << 9U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffffffffffbffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0xaU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0xaU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0xaU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0xaU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0xaU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0xaU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 9U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 9U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 9U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 9U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 9U))))))) 
                         << 0xaU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffffffffff7ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0xbU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0xbU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0xbU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0xbU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0xbU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0xbU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0xaU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0xaU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0xaU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0xaU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0xaU))))))) 
                         << 0xbU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffffffffffefffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0xcU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0xcU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0xcU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0xcU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0xcU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0xcU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0xbU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0xbU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0xbU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0xbU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0xbU))))))) 
                         << 0xcU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffffffffffdfffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0xdU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0xdU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0xdU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0xdU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0xdU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0xdU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0xcU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0xcU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0xcU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0xcU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0xcU))))))) 
                         << 0xdU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffffffffffbfffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0xeU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0xeU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0xeU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0xeU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0xeU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0xeU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0xdU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0xdU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0xdU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0xdU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0xdU))))))) 
                         << 0xeU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffffffffff7fffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0xfU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0xfU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0xfU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0xfU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0xfU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0xfU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0xeU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0xeU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0xeU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0xeU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0xeU))))))) 
                         << 0xfU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffffffffeffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x10U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x10U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x10U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x10U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x10U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x10U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0xfU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0xfU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0xfU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0xfU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0xfU))))))) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffffffffdffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x11U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x11U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x11U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x11U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x11U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x11U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x10U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x10U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x10U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x10U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x10U))))))) 
                         << 0x11U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffffffffbffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x12U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x12U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x12U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x12U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x12U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x12U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x11U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x11U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x11U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x11U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x11U))))))) 
                         << 0x12U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffffffff7ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x13U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x13U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x13U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x13U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x13U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x13U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x12U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x12U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x12U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x12U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x12U))))))) 
                         << 0x13U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffffffffefffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x14U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x14U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x14U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x14U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x14U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x14U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x13U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x13U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x13U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x13U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x13U))))))) 
                         << 0x14U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffffffffdfffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x15U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x15U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x15U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x15U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x15U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x15U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x14U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x14U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x14U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x14U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x14U))))))) 
                         << 0x15U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffffffffbfffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x16U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x16U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x16U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x16U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x16U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x16U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x15U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x15U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x15U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x15U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x15U))))))) 
                         << 0x16U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffffffff7fffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x17U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x17U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x17U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x17U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x17U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x17U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x16U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x16U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x16U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x16U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x16U))))))) 
                         << 0x17U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffffffeffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x18U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x18U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x18U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x18U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x17U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x17U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x17U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x17U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x17U))))))) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffffffdffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x19U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x19U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x19U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x19U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x19U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x19U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x18U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x18U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x18U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x18U))))))) 
                         << 0x19U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffffffbffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x1aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x1aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x1aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x1aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x19U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x19U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x19U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x19U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x19U))))))) 
                         << 0x1aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffffff7ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x1bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x1bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x1bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x1bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x1bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x1bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x1aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x1aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x1aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x1aU))))))) 
                         << 0x1bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffffffefffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x1cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x1cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x1cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x1cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x1cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x1bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x1bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x1bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x1bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x1bU))))))) 
                         << 0x1cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffffffdfffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x1dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x1dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x1dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x1dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x1dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x1dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x1cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x1cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x1cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x1cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x1cU))))))) 
                         << 0x1dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffffffbfffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x1eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x1eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x1eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x1eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x1eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x1eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x1dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x1dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x1dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x1dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x1dU))))))) 
                         << 0x1eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffffff7fffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x1fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x1fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x1fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x1fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x1fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x1eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x1eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x1eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x1eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x1eU))))))) 
                         << 0x1fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffffeffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x20U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x20U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x20U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x20U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x1fU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x1fU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x1fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x1fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x1fU))))))) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffffdffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x21U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x21U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x21U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x21U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x21U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x21U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x20U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x20U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x20U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x20U))))))) 
                         << 0x21U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffffbffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x22U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x22U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x22U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x22U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x22U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x22U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x21U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x21U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x21U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x21U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x21U))))))) 
                         << 0x22U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffff7ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x23U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x23U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x23U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x23U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x23U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x23U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x22U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x22U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x22U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x22U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x22U))))))) 
                         << 0x23U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffffefffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x24U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x24U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x24U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x24U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x24U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x24U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x23U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x23U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x23U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x23U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x23U))))))) 
                         << 0x24U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffffdfffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x25U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x25U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x25U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x25U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x25U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x25U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x24U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x24U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x24U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x24U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x24U))))))) 
                         << 0x25U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffffbfffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x26U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x26U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x26U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x26U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x26U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x26U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x25U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x25U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x25U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x25U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x25U))))))) 
                         << 0x26U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffff7fffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x27U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x27U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x27U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x27U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x27U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x27U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x26U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x26U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x26U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x26U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x26U))))))) 
                         << 0x27U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffeffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x28U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x28U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x28U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x28U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x28U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x28U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x27U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x27U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x27U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x27U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x27U))))))) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffdffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x29U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x29U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x29U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x29U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x29U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x29U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x28U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x28U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x28U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x28U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x28U))))))) 
                         << 0x29U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffffbffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x2aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x2aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x2aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x2aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x2aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x2aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x29U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x29U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x29U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x29U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x29U))))))) 
                         << 0x2aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffff7ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x2bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x2bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x2bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x2bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x2bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x2bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x2aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x2aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x2aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x2aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x2aU))))))) 
                         << 0x2bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffefffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x2cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x2cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x2cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x2cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x2cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x2cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x2bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x2bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x2bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x2bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x2bU))))))) 
                         << 0x2cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffdfffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x2dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x2dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x2dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x2dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x2dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x2dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x2cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x2cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x2cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x2cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x2cU))))))) 
                         << 0x2dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffffbfffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x2eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x2eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x2eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x2eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x2eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x2eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x2dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x2dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x2dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x2dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x2dU))))))) 
                         << 0x2eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffff7fffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x2fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x2fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x2fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x2fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x2fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x2fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x2eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x2eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x2eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x2eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x2eU))))))) 
                         << 0x2fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffeffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x30U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x30U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x30U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x30U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x30U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x30U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x2fU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x2fU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x2fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x2fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x2fU))))))) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffdffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x31U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x31U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x31U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x31U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x31U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x31U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x30U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x30U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x30U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x30U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x30U))))))) 
                         << 0x31U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfffbffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x32U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x32U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x32U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x32U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x32U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x32U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x31U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x31U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x31U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x31U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x31U))))))) 
                         << 0x32U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfff7ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x33U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x33U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x33U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x33U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x33U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x33U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x32U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x32U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x32U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x32U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x32U))))))) 
                         << 0x33U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffefffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x34U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x34U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x34U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x34U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x34U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x34U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x33U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x33U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x33U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x33U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x33U))))))) 
                         << 0x34U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffdfffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x35U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x35U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x35U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x35U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x35U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x35U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x34U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x34U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x34U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x34U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x34U))))))) 
                         << 0x35U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xffbfffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x36U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x36U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x36U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x36U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x36U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x36U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x35U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x35U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x35U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x35U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x35U))))))) 
                         << 0x36U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xff7fffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x37U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x37U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x37U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x37U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x37U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x37U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x36U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x36U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x36U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x36U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x36U))))))) 
                         << 0x37U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfeffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x38U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x38U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x38U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x38U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x38U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x38U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x37U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x37U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x37U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x37U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x37U))))))) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfdffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x39U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x39U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x39U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x39U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x39U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x39U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x38U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x38U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x38U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x38U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x38U))))))) 
                         << 0x39U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xfbffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x3aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x39U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x39U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x39U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x39U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x39U))))))) 
                         << 0x3aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xf7ffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x3bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x3aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x3aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x3aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x3aU))))))) 
                         << 0x3bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xefffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x3cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x3bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x3bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x3bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x3bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x3bU))))))) 
                         << 0x3cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xdfffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x3dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x3cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x3cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x3cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x3cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x3cU))))))) 
                         << 0x3dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0xbfffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x3eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x3dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x3dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x3dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x3dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x3dU))))))) 
                         << 0x3eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][2U] 
        = ((0x7fffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [2U] 
                                                          >> 0x3fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x3eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x3eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x3eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x3eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x3eU))))))) 
                         << 0x3fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | (IData)((IData)((1U & (((IData)(
                                                        vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                        [2U]
                                                        [3U]) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U]))) 
                                               ^ ((
                                                   (((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x3fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x3fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x3fU))))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 1U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 1U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 1U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 1U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U])))))) 
                         << 1U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 2U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 2U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 2U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 2U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 1U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 1U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 1U))))))) 
                         << 2U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 3U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 3U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 3U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 3U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 2U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 2U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 2U))))))) 
                         << 3U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffffffffffffefULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 4U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 4U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 4U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 4U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 3U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 3U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 3U))))))) 
                         << 4U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffffffffffffdfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 5U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 5U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 5U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 5U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 4U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 4U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 4U))))))) 
                         << 5U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 6U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 6U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 6U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 6U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 5U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 5U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 5U))))))) 
                         << 6U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 7U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 7U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 7U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 7U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 6U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 6U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 6U))))))) 
                         << 7U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 8U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 8U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 8U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 8U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 7U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 7U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 7U))))))) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffffffffffdffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 9U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 9U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 9U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 9U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 9U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 9U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 8U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 8U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 8U))))))) 
                         << 9U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffffffffffbffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0xaU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0xaU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0xaU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0xaU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0xaU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0xaU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 9U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 9U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 9U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 9U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 9U))))))) 
                         << 0xaU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffffffffff7ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0xbU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0xbU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0xbU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0xbU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0xbU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0xbU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0xaU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0xaU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0xaU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0xaU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0xaU))))))) 
                         << 0xbU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffffffffffefffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0xcU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0xcU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0xcU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0xcU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0xcU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0xcU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0xbU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0xbU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0xbU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0xbU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0xbU))))))) 
                         << 0xcU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffffffffffdfffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0xdU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0xdU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0xdU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0xdU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0xdU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0xdU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0xcU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0xcU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0xcU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0xcU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0xcU))))))) 
                         << 0xdU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffffffffffbfffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0xeU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0xeU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0xeU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0xeU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0xeU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0xeU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0xdU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0xdU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0xdU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0xdU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0xdU))))))) 
                         << 0xeU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffffffffff7fffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0xfU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0xfU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0xfU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0xfU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0xfU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0xfU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0xeU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0xeU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0xeU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0xeU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0xeU))))))) 
                         << 0xfU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffffffffeffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x10U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x10U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x10U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x10U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x10U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x10U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0xfU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0xfU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0xfU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0xfU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0xfU))))))) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffffffffdffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x11U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x11U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x11U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x11U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x11U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x11U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x10U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x10U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x10U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x10U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x10U))))))) 
                         << 0x11U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffffffffbffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x12U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x12U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x12U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x12U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x12U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x12U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x11U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x11U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x11U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x11U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x11U))))))) 
                         << 0x12U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffffffff7ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x13U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x13U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x13U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x13U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x13U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x13U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x12U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x12U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x12U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x12U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x12U))))))) 
                         << 0x13U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffffffffefffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x14U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x14U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x14U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x14U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x14U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x14U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x13U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x13U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x13U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x13U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x13U))))))) 
                         << 0x14U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffffffffdfffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x15U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x15U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x15U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x15U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x15U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x15U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x14U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x14U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x14U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x14U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x14U))))))) 
                         << 0x15U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffffffffbfffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x16U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x16U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x16U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x16U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x16U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x16U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x15U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x15U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x15U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x15U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x15U))))))) 
                         << 0x16U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffffffff7fffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x17U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x17U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x17U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x17U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x17U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x17U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x16U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x16U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x16U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x16U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x16U))))))) 
                         << 0x17U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffffffeffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x18U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x18U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x18U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x18U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x17U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x17U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x17U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x17U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x17U))))))) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffffffdffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x19U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x19U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x19U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x19U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x19U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x19U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x18U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x18U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x18U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x18U))))))) 
                         << 0x19U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffffffbffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x1aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x1aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x1aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x1aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x19U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x19U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x19U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x19U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x19U))))))) 
                         << 0x1aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffffff7ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x1bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x1bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x1bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x1bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x1bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x1bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x1aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x1aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x1aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x1aU))))))) 
                         << 0x1bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffffffefffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x1cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x1cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x1cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x1cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x1cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x1bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x1bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x1bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x1bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x1bU))))))) 
                         << 0x1cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffffffdfffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x1dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x1dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x1dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x1dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x1dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x1dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x1cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x1cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x1cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x1cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x1cU))))))) 
                         << 0x1dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffffffbfffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x1eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x1eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x1eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x1eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x1eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x1eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x1dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x1dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x1dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x1dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x1dU))))))) 
                         << 0x1eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffffff7fffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x1fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x1fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x1fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x1fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x1fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x1eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x1eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x1eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x1eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x1eU))))))) 
                         << 0x1fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffffeffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x20U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x20U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x20U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x20U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x1fU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x1fU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x1fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x1fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x1fU))))))) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffffdffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x21U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x21U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x21U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x21U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x21U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x21U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x20U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x20U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x20U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x20U))))))) 
                         << 0x21U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffffbffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x22U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x22U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x22U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x22U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x22U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x22U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x21U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x21U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x21U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x21U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x21U))))))) 
                         << 0x22U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffff7ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x23U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x23U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x23U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x23U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x23U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x23U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x22U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x22U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x22U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x22U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x22U))))))) 
                         << 0x23U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffffefffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x24U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x24U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x24U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x24U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x24U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x24U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x23U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x23U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x23U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x23U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x23U))))))) 
                         << 0x24U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffffdfffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x25U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x25U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x25U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x25U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x25U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x25U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x24U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x24U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x24U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x24U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x24U))))))) 
                         << 0x25U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffffbfffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x26U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x26U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x26U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x26U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x26U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x26U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x25U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x25U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x25U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x25U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x25U))))))) 
                         << 0x26U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffff7fffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x27U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x27U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x27U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x27U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x27U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x27U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x26U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x26U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x26U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x26U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x26U))))))) 
                         << 0x27U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffeffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x28U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x28U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x28U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x28U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x28U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x28U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x27U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x27U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x27U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x27U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x27U))))))) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffdffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x29U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x29U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x29U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x29U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x29U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x29U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x28U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x28U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x28U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x28U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x28U))))))) 
                         << 0x29U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffffbffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x2aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x2aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x2aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x2aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x2aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x2aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x29U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x29U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x29U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x29U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x29U))))))) 
                         << 0x2aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffff7ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x2bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x2bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x2bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x2bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x2bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x2bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x2aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x2aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x2aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x2aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x2aU))))))) 
                         << 0x2bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffefffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x2cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x2cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x2cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x2cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x2cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x2cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x2bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x2bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x2bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x2bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x2bU))))))) 
                         << 0x2cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffdfffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x2dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x2dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x2dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x2dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x2dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x2dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x2cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x2cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x2cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x2cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x2cU))))))) 
                         << 0x2dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffffbfffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x2eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x2eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x2eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x2eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x2eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x2eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x2dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x2dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x2dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x2dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x2dU))))))) 
                         << 0x2eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffff7fffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x2fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x2fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x2fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x2fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x2fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x2fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x2eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x2eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x2eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x2eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x2eU))))))) 
                         << 0x2fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffeffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x30U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x30U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x30U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x30U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x30U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x30U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x2fU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x2fU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x2fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x2fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x2fU))))))) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffdffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x31U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x31U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x31U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x31U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x31U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x31U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x30U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x30U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x30U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x30U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x30U))))))) 
                         << 0x31U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfffbffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x32U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x32U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x32U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x32U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x32U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x32U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x31U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x31U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x31U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x31U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x31U))))))) 
                         << 0x32U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfff7ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x33U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x33U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x33U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x33U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x33U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x33U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x32U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x32U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x32U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x32U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x32U))))))) 
                         << 0x33U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffefffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x34U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x34U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x34U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x34U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x34U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x34U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x33U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x33U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x33U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x33U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x33U))))))) 
                         << 0x34U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffdfffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x35U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x35U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x35U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x35U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x35U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x35U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x34U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x34U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x34U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x34U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x34U))))))) 
                         << 0x35U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xffbfffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x36U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x36U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x36U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x36U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x36U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x36U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x35U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x35U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x35U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x35U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x35U))))))) 
                         << 0x36U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xff7fffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x37U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x37U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x37U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x37U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x37U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x37U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x36U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x36U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x36U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x36U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x36U))))))) 
                         << 0x37U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfeffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x38U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x38U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x38U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x38U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x38U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x38U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x37U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x37U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x37U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x37U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x37U))))))) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfdffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x39U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x39U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x39U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x39U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x39U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x39U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x38U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x38U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x38U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x38U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x38U))))))) 
                         << 0x39U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xfbffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x3aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x39U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x39U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x39U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x39U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x39U))))))) 
                         << 0x3aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xf7ffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x3bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x3aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x3aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x3aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x3aU))))))) 
                         << 0x3bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xefffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x3cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x3bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x3bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x3bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x3bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x3bU))))))) 
                         << 0x3cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xdfffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x3dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x3cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x3cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x3cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x3cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x3cU))))))) 
                         << 0x3dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0xbfffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x3eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x3dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x3dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x3dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x3dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x3dU))))))) 
                         << 0x3eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][3U] 
        = ((0x7fffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [3U] 
                                                          >> 0x3fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0x3eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0x3eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0x3eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0x3eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0x3eU))))))) 
                         << 0x3fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][4U] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][4U]) | (IData)((IData)((1U & (((IData)(
                                                        vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                        [2U]
                                                        [4U]) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U]))) 
                                               ^ ((
                                                   (((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x3fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x3fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x3fU))))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][4U] 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [4U] 
                                                          >> 1U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 1U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 1U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 1U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U])))))) 
                         << 1U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][4U] 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [4U] 
                                                          >> 2U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 2U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 2U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 2U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 1U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 1U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 1U))))))) 
                         << 2U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][4U] 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [4U] 
                                                          >> 3U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 3U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 3U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 3U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 2U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 2U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 2U))))))) 
                         << 3U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][4U] 
        = ((0xffffffffffffffefULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [4U] 
                                                          >> 4U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 4U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 4U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 4U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 3U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 3U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 3U))))))) 
                         << 4U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][4U] 
        = ((0xffffffffffffffdfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [4U] 
                                                          >> 5U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 5U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 5U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 5U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 4U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 4U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 4U))))))) 
                         << 5U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][4U] 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [4U] 
                                                          >> 6U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 6U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 6U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 6U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 5U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 5U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 5U))))))) 
                         << 6U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][4U] 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [4U] 
                                                          >> 7U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 7U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 7U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 7U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 6U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 6U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 6U))))))) 
                         << 7U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][4U] 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [4U] 
                                                          >> 8U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 8U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 8U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 8U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 7U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 7U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 7U))))))) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][4U] 
        = ((0xfffffffffffffdffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [4U] 
                                                          >> 9U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 9U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 9U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 9U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 9U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 9U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 8U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 8U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 8U))))))) 
                         << 9U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][4U] 
        = ((0xfffffffffffffbffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [4U] 
                                                          >> 0xaU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0xaU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0xaU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0xaU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0xaU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0xaU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 9U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 9U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 9U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 9U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 9U))))))) 
                         << 0xaU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[2U][4U] 
        = ((0xfffffffffffff7ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [2U]
                                                          [4U] 
                                                          >> 0xbU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0xbU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0xbU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0xbU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0xbU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0xbU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [0U] 
                                                               >> 0xaU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [3U]
                                                                 [1U] 
                                                                 >> 0xaU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [2U] 
                                                                >> 0xaU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [3U] 
                                                               >> 0xaU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [4U] 
                                                              >> 0xaU))))))) 
                         << 0xbU));
}
