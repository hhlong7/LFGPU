// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu__DOT__program_mem_read_data[0U] = 
        vlSelfRef.program_mem_read_data[0U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_valid 
        = vlSelfRef.gpu__DOT__lsu_read_valid;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_valid 
        = vlSelfRef.gpu__DOT__lsu_write_valid;
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_data[0U] 
        = vlSelfRef.program_mem_read_data[0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_ready 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_ready 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_index 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_index;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_states[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_status[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__enable 
        = (0U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__warp_next_mask 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_next 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head_next;
    if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset)))) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk3__DOT__i = 2U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk3__DOT__i = 3U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk3__DOT__i = 4U;
    }
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__warp 
        = (3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__warp 
        = (3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready) 
                 >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready) 
                 >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__warp 
        = (3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready) 
                 >> 3U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready) 
                 >> 3U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__warp 
        = (3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_ready 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_ready 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_index 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_index;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_states[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_status[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__enable 
        = (0U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__warp_next_mask 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_next 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head_next;
    if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset) 
                  >> 1U)))) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk3__DOT__i = 2U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk3__DOT__i = 3U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk3__DOT__i = 4U;
    }
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__warp 
        = (3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__warp 
        = (3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready) 
                 >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready) 
                 >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__warp 
        = (3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready) 
                 >> 3U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready) 
                 >> 3U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__warp 
        = (3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.done = vlSelfRef.gpu__DOT__dispatch_instance__DOT__done;
    vlSelfRef.gpu__DOT__done = vlSelfRef.gpu__DOT__dispatch_instance__DOT__done;
    vlSelfRef.program_mem_read_valid = vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_valid;
    vlSelfRef.gpu__DOT__program_mem_read_valid = vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_valid;
    vlSelfRef.data_mem_read_valid = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid;
    vlSelfRef.gpu__DOT__data_mem_read_valid = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid;
    vlSelfRef.data_mem_write_valid = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid;
    vlSelfRef.gpu__DOT__data_mem_write_valid = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid;
    vlSelfRef.gpu__DOT__lsu_read_ready = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready;
    vlSelfRef.gpu__DOT__lsu_write_ready = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__program_mem_read_valid 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_valid;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__program_mem_read_valid 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_valid;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__program_mem_read_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__program_mem_read_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__fetcher_read_ready = vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__done 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__done 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__done 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__done 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done;
    vlSelfRef.gpu__DOT__core_start = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start;
    vlSelfRef.gpu__DOT__core_reset = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset;
    vlSelfRef.gpu__DOT__dcr_instance__DOT__thread_count 
        = vlSelfRef.gpu__DOT__dcr_instance__DOT__device_conrol_register;
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__total_blocks 
        = (0xffU & (((IData)(3U) + (IData)(vlSelfRef.gpu__DOT__dcr_instance__DOT__device_conrol_register)) 
                    >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__empty 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__empty;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__empty 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__empty;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__head 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoining_threads_mask 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_threads_mask;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoin_event_head 
        = (0xfU & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_head));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__empty 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__empty;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__empty 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__empty;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__head 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoining_threads_mask 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_threads_mask;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoin_event_head 
        = (0xfU & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_head));
    vlSelfRef.gpu__DOT__start = vlSelfRef.start;
    vlSelfRef.gpu__DOT__device_control_write_enable 
        = vlSelfRef.device_control_write_enable;
    vlSelfRef.gpu__DOT__device_control_data = vlSelfRef.device_control_data;
    vlSelfRef.gpu__DOT__program_mem_read_ready = vlSelfRef.program_mem_read_ready;
    vlSelfRef.gpu__DOT__data_mem_read_ready = vlSelfRef.data_mem_read_ready;
    vlSelfRef.gpu__DOT__data_mem_read_data[3U] = vlSelfRef.data_mem_read_data
        [3U];
    vlSelfRef.gpu__DOT__data_mem_read_data[2U] = vlSelfRef.data_mem_read_data
        [2U];
    vlSelfRef.gpu__DOT__data_mem_read_data[1U] = vlSelfRef.data_mem_read_data
        [1U];
    vlSelfRef.gpu__DOT__data_mem_read_data[0U] = vlSelfRef.data_mem_read_data
        [0U];
    vlSelfRef.gpu__DOT__data_mem_write_ready = vlSelfRef.data_mem_write_ready;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_data[3U] 
        = vlSelfRef.data_mem_read_data[3U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_data[2U] 
        = vlSelfRef.data_mem_read_data[2U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_data[1U] 
        = vlSelfRef.data_mem_read_data[1U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_data[0U] 
        = vlSelfRef.data_mem_read_data[0U];
    vlSelfRef.gpu__DOT__program_mem_read_address[0U] 
        = vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_address
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__program_mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_data[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_data[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_data[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_data[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__program_mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_data[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_data[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_data[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_data[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__thread_count = vlSelfRef.gpu__DOT__dcr_instance__DOT__device_conrol_register;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__instruction;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_ret 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_ret;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__instruction;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_ret 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_ret;
    vlSelfRef.gpu__DOT__fetcher_read_valid = (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_valid) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_valid));
    vlSelfRef.gpu__DOT__core_done = (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done) 
                                      << 1U) | (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__start 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__start 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_valid 
        = ((((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_valid) 
             << 3U) | ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_valid) 
                       << 2U)) | (((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid) 
                                   << 1U) | (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid)));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_valid 
        = ((((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_valid) 
             << 3U) | ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_valid) 
                       << 2U)) | (((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid) 
                                   << 1U) | (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid)));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_valid 
        = ((((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_valid) 
             << 3U) | ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_valid) 
                       << 2U)) | (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid) 
                                   << 1U) | (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid)));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_valid 
        = ((((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_valid) 
             << 3U) | ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_valid) 
                       << 2U)) | (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid) 
                                   << 1U) | (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid)));
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address[7U] 
        = vlSelfRef.gpu__DOT__lsu_read_address[7U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address[6U] 
        = vlSelfRef.gpu__DOT__lsu_read_address[6U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address[5U] 
        = vlSelfRef.gpu__DOT__lsu_read_address[5U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address[4U] 
        = vlSelfRef.gpu__DOT__lsu_read_address[4U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address[3U] 
        = vlSelfRef.gpu__DOT__lsu_read_address[3U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address[2U] 
        = vlSelfRef.gpu__DOT__lsu_read_address[2U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address[1U] 
        = vlSelfRef.gpu__DOT__lsu_read_address[1U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address[0U] 
        = vlSelfRef.gpu__DOT__lsu_read_address[0U];
    vlSelfRef.gpu__DOT__lsu_read_data[7U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data
        [7U];
    vlSelfRef.gpu__DOT__lsu_read_data[6U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data
        [6U];
    vlSelfRef.gpu__DOT__lsu_read_data[5U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data
        [5U];
    vlSelfRef.gpu__DOT__lsu_read_data[4U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data
        [4U];
    vlSelfRef.gpu__DOT__lsu_read_data[3U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data
        [3U];
    vlSelfRef.gpu__DOT__lsu_read_data[2U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data
        [2U];
    vlSelfRef.gpu__DOT__lsu_read_data[1U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data
        [1U];
    vlSelfRef.gpu__DOT__lsu_read_data[0U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data
        [0U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address[7U] 
        = vlSelfRef.gpu__DOT__lsu_write_address[7U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address[6U] 
        = vlSelfRef.gpu__DOT__lsu_write_address[6U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address[5U] 
        = vlSelfRef.gpu__DOT__lsu_write_address[5U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address[4U] 
        = vlSelfRef.gpu__DOT__lsu_write_address[4U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address[3U] 
        = vlSelfRef.gpu__DOT__lsu_write_address[3U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address[2U] 
        = vlSelfRef.gpu__DOT__lsu_write_address[2U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address[1U] 
        = vlSelfRef.gpu__DOT__lsu_write_address[1U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address[0U] 
        = vlSelfRef.gpu__DOT__lsu_write_address[0U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data[7U] 
        = vlSelfRef.gpu__DOT__lsu_write_data[7U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data[6U] 
        = vlSelfRef.gpu__DOT__lsu_write_data[6U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data[5U] 
        = vlSelfRef.gpu__DOT__lsu_write_data[5U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data[4U] 
        = vlSelfRef.gpu__DOT__lsu_write_data[4U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data[3U] 
        = vlSelfRef.gpu__DOT__lsu_write_data[3U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data[2U] 
        = vlSelfRef.gpu__DOT__lsu_write_data[2U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data[1U] 
        = vlSelfRef.gpu__DOT__lsu_write_data[1U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data[0U] 
        = vlSelfRef.gpu__DOT__lsu_write_data[0U];
    vlSelfRef.gpu__DOT__fetcher_read_address[0U] = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__fetcher_read_address[1U] = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__divergence_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__divergence_event;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__divergence_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__divergence_event;
    vlSelfRef.gpu__DOT__reset = vlSelfRef.reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rd_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rs_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rs_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rt_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rt_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_pc_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_pc_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rd_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rs_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rs_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rt_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rt_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_pc_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_pc_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_pc;
    vlSelfRef.gpu__DOT__fetcher_read_data[1U] = vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_data
        [1U];
    vlSelfRef.gpu__DOT__fetcher_read_data[0U] = vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_data
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__data_mem_read_address[3U] = 
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address
        [3U];
    vlSelfRef.gpu__DOT__data_mem_read_address[2U] = 
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address
        [2U];
    vlSelfRef.gpu__DOT__data_mem_read_address[1U] = 
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address
        [1U];
    vlSelfRef.gpu__DOT__data_mem_read_address[0U] = 
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address
        [0U];
    vlSelfRef.gpu__DOT__data_mem_write_address[3U] 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address
        [3U];
    vlSelfRef.gpu__DOT__data_mem_write_address[2U] 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address
        [2U];
    vlSelfRef.gpu__DOT__data_mem_write_address[1U] 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address
        [1U];
    vlSelfRef.gpu__DOT__data_mem_write_address[0U] 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address
        [0U];
    vlSelfRef.gpu__DOT__data_mem_write_data[3U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data
        [3U];
    vlSelfRef.gpu__DOT__data_mem_write_data[2U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data
        [2U];
    vlSelfRef.gpu__DOT__data_mem_write_data[1U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data
        [1U];
    vlSelfRef.gpu__DOT__data_mem_write_data[0U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_address[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_address[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_address[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_address[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_address[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_address[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_address[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_address[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_data[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_data[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_data[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_data[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_state[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_state[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_state[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_state[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_address[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_address[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_address[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_address[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_address[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_address[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_address[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_address[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_data[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_data[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_data[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_data[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_state[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_state[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_state[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_state[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__core_block_id[1U] = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id
        [1U];
    vlSelfRef.gpu__DOT__core_block_id[0U] = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__masks[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__masks[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__core_thread_count[1U] = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count
        [1U];
    vlSelfRef.gpu__DOT__core_thread_count[0U] = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__clk = vlSelfRef.clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups[0U][0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
        [0U][0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups[0U][1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
        [0U][1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups[0U][2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
        [0U][2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups[0U][3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
        [0U][3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups[0U][0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
        [0U][0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups[0U][1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
        [0U][1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups[0U][2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
        [0U][2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups[0U][3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
        [0U][3U];
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__start 
        = vlSelfRef.gpu__DOT__start;
    vlSelfRef.gpu__DOT__dcr_instance__DOT__device_control_write_enable 
        = vlSelfRef.gpu__DOT__device_control_write_enable;
    vlSelfRef.gpu__DOT__dcr_instance__DOT__device_control_data 
        = vlSelfRef.gpu__DOT__device_control_data;
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_ready 
        = vlSelfRef.gpu__DOT__program_mem_read_ready;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_ready 
        = vlSelfRef.gpu__DOT__data_mem_read_ready;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_ready 
        = vlSelfRef.gpu__DOT__data_mem_write_ready;
    vlSelfRef.program_mem_read_address[0U] = vlSelfRef.gpu__DOT__program_mem_read_address
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_ready 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__program_mem_read_ready;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_ready 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__program_mem_read_ready;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__thread_count 
        = vlSelfRef.gpu__DOT__thread_count;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__fetcher_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__instruction 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_ret 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_ret;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__fetcher_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__instruction 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_ret 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_ret;
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_valid 
        = vlSelfRef.gpu__DOT__fetcher_read_valid;
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_done 
        = vlSelfRef.gpu__DOT__core_done;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__start 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__start;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__start 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__start;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_valid 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_valid;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_valid 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_valid;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_valid 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_valid;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_valid 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_valid;
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_address[1U] 
        = vlSelfRef.gpu__DOT__fetcher_read_address[1U];
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_address[0U] 
        = vlSelfRef.gpu__DOT__fetcher_read_address[0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__divergence_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__divergence_event;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__divergence_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__divergence_event;
    vlSelfRef.gpu__DOT__dcr_instance__DOT__reset = vlSelfRef.gpu__DOT__reset;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__reset 
        = vlSelfRef.gpu__DOT__reset;
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__reset 
        = vlSelfRef.gpu__DOT__reset;
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rs_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rs_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rs_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rs_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rt_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rt_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rt_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rt_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_pc_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_pc_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_pc_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_pc_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rs_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rs_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rs_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rs_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rt_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rt_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rt_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rt_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_pc_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_pc_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_pc_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_pc_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__program_mem_read_data 
        = vlSelfRef.gpu__DOT__fetcher_read_data[0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__program_mem_read_data 
        = vlSelfRef.gpu__DOT__fetcher_read_data[1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event;
    vlSelfRef.data_mem_read_address[3U] = vlSelfRef.gpu__DOT__data_mem_read_address
        [3U];
    vlSelfRef.data_mem_read_address[2U] = vlSelfRef.gpu__DOT__data_mem_read_address
        [2U];
    vlSelfRef.data_mem_read_address[1U] = vlSelfRef.gpu__DOT__data_mem_read_address
        [1U];
    vlSelfRef.data_mem_read_address[0U] = vlSelfRef.gpu__DOT__data_mem_read_address
        [0U];
    vlSelfRef.data_mem_write_address[3U] = vlSelfRef.gpu__DOT__data_mem_write_address
        [3U];
    vlSelfRef.data_mem_write_address[2U] = vlSelfRef.gpu__DOT__data_mem_write_address
        [2U];
    vlSelfRef.data_mem_write_address[1U] = vlSelfRef.gpu__DOT__data_mem_write_address
        [1U];
    vlSelfRef.data_mem_write_address[0U] = vlSelfRef.gpu__DOT__data_mem_write_address
        [0U];
    vlSelfRef.data_mem_write_data[3U] = vlSelfRef.gpu__DOT__data_mem_write_data
        [3U];
    vlSelfRef.data_mem_write_data[2U] = vlSelfRef.gpu__DOT__data_mem_write_data
        [2U];
    vlSelfRef.data_mem_write_data[1U] = vlSelfRef.gpu__DOT__data_mem_write_data
        [1U];
    vlSelfRef.data_mem_write_data[0U] = vlSelfRef.gpu__DOT__data_mem_write_data
        [0U];
    if ((1U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset))) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk2__DOT__i = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk2__DOT__i = 2U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk2__DOT__i = 3U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk2__DOT__i = 4U;
    }
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_ids[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_ids[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_ids[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_ids[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_ids[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_ids[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_ids[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_ids[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_address
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_address
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_address
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_address
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_address
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_address
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_address
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_address
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_data
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_data
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_data
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_data
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_state
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_state
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_state
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_state
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_address
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_address
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_address
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_address
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_address
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_address
        [2U];
    if ((2U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset))) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk2__DOT__i = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk2__DOT__i = 2U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk2__DOT__i = 3U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk2__DOT__i = 4U;
    }
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_address
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_address
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_data
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_data
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_data
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_data
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_state
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_state
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_state
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_state
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__block_id 
        = vlSelfRef.gpu__DOT__core_block_id[0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__block_id 
        = vlSelfRef.gpu__DOT__core_block_id[1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__masks[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__masks
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__masks[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__masks
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__next_pcs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__next_pcs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__next_pcs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__next_pcs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__next_pcs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__next_pcs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__next_pcs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__next_pcs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__enable 
        = (0U < vlSelfRef.gpu__DOT__core_thread_count
           [0U]);
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__enable 
        = (1U < vlSelfRef.gpu__DOT__core_thread_count
           [0U]);
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__enable 
        = (2U < vlSelfRef.gpu__DOT__core_thread_count
           [0U]);
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__enable 
        = (3U < vlSelfRef.gpu__DOT__core_thread_count
           [0U]);
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__enable 
        = (0U < vlSelfRef.gpu__DOT__core_thread_count
           [1U]);
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__enable 
        = (1U < vlSelfRef.gpu__DOT__core_thread_count
           [1U]);
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__enable 
        = (2U < vlSelfRef.gpu__DOT__core_thread_count
           [1U]);
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__enable 
        = (3U < vlSelfRef.gpu__DOT__core_thread_count
           [1U]);
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__total_warps 
        = (0xffU & (((IData)(3U) + vlSelfRef.gpu__DOT__core_thread_count
                     [0U]) >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__total_warps 
        = (0xffU & (((IData)(3U) + vlSelfRef.gpu__DOT__core_thread_count
                     [1U]) >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__thread_count 
        = vlSelfRef.gpu__DOT__core_thread_count[0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__thread_count 
        = vlSelfRef.gpu__DOT__core_thread_count[1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes
        [3U];
    vlSelfRef.gpu__DOT__dcr_instance__DOT__clk = vlSelfRef.gpu__DOT__clk;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__clk 
        = vlSelfRef.gpu__DOT__clk;
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__clk 
        = vlSelfRef.gpu__DOT__clk;
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__warp 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__warp 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_groups[0U][0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
        [0U][0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_groups[0U][1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
        [0U][1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_groups[0U][2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
        [0U][2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_groups[0U][3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
        [0U][3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_groups[0U][0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
        [0U][0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_groups[0U][1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
        [0U][1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_groups[0U][2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
        [0U][2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_groups[0U][3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
        [0U][3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__start;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__start;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__divergence_event;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__divergence_event;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__program_mem_read_data;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__program_mem_read_data;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__block_id;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__block_id;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__block_id;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__block_id;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__block_id;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__block_id;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__block_id;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__block_id;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1 
        = ((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))
            ? vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__masks
           [(1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp))]
            : 0U);
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1 
        = ((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))
            ? vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__masks
           [(1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp))]
            : 0U);
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__total_warps 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__total_warps;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__total_warps 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__total_warps;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__thread_count 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__thread_count;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__thread_count 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__thread_count;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_groups
        [((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp))) 
          && (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp)))]
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_groups
        [((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp))) 
          && (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp)))]
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_groups
        [((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp))) 
          && (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp)))]
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_groups
        [((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp))) 
          && (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp)))]
        [3U];
    if ((1U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset))) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[3U] = 0U;
    } else {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [0U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes
            [0U];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [1U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes
            [1U];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [2U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes
            [2U];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [3U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes
            [3U];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [0U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes
            [0U];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [1U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes
            [1U];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [2U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes
            [2U];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [3U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes
            [3U];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[0U] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
              [0U])];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[1U] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
              [1U])];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[2U] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
              [2U])];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[3U] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
              [3U])];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[0U] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
              [0U])];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[1U] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
              [1U])];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[2U] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
              [2U])];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[3U] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
              [3U])];
    }
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_groups
        [((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp))) 
          && (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp)))]
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_groups
        [((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp))) 
          && (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp)))]
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_groups
        [((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp))) 
          && (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp)))]
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_groups
        [((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp))) 
          && (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp)))]
        [3U];
    if ((2U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset))) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[3U] = 0U;
    } else {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [0U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes
            [0U];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [1U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes
            [1U];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [2U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes
            [2U];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [3U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes
            [3U];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [0U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes
            [0U];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [1U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes
            [1U];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [2U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes
            [2U];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [3U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes
            [3U];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[0U] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
              [0U])];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[1U] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
              [1U])];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[2U] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
              [2U])];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[3U] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
              [3U])];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[0U] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
              [0U])];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[1U] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
              [1U])];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[2U] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
              [2U])];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[3U] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
              [3U])];
    }
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_event;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_event;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__next_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__next_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 3U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 3U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 3U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 3U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 3U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 3U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__thread_count 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__thread_count;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__thread_count 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__thread_count;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__clk 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__clk;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
        [3U];
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__gpu__DOT__dispatch_instance__DOT__start_execution;
    __Vdly__gpu__DOT__dispatch_instance__DOT__start_execution = 0;
    CData/*1:0*/ __Vdly__gpu__DOT__dispatch_instance__DOT__core_start;
    __Vdly__gpu__DOT__dispatch_instance__DOT__core_start = 0;
    CData/*1:0*/ __Vdly__gpu__DOT__dispatch_instance__DOT__core_reset;
    __Vdly__gpu__DOT__dispatch_instance__DOT__core_reset = 0;
    CData/*2:0*/ __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state = 0;
    CData/*0:0*/ __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp = 0;
    CData/*2:0*/ __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state = 0;
    CData/*3:0*/ __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp = 0;
    CData/*7:0*/ __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done = 0;
    CData/*0:0*/ __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution = 0;
    CData/*3:0*/ __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer = 0;
    CData/*1:0*/ __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 0;
    CData/*1:0*/ __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 0;
    CData/*1:0*/ __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 0;
    CData/*1:0*/ __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 0;
    CData/*2:0*/ __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state = 0;
    CData/*0:0*/ __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp = 0;
    CData/*2:0*/ __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state = 0;
    CData/*3:0*/ __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp = 0;
    CData/*7:0*/ __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done = 0;
    CData/*0:0*/ __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution = 0;
    CData/*3:0*/ __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer = 0;
    CData/*1:0*/ __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 0;
    CData/*1:0*/ __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 0;
    CData/*1:0*/ __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 0;
    CData/*1:0*/ __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_read_address__v0;
    __VdlyVal__gpu__DOT__lsu_read_address__v0 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_write_address__v0;
    __VdlyVal__gpu__DOT__lsu_write_address__v0 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_write_data__v0;
    __VdlyVal__gpu__DOT__lsu_write_data__v0 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data__v0;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data__v0 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_read_address__v1;
    __VdlyVal__gpu__DOT__lsu_read_address__v1 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_write_address__v1;
    __VdlyVal__gpu__DOT__lsu_write_address__v1 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_write_data__v1;
    __VdlyVal__gpu__DOT__lsu_write_data__v1 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data__v1;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data__v1 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_read_address__v2;
    __VdlyVal__gpu__DOT__lsu_read_address__v2 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_write_address__v2;
    __VdlyVal__gpu__DOT__lsu_write_address__v2 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_write_data__v2;
    __VdlyVal__gpu__DOT__lsu_write_data__v2 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data__v2;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data__v2 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_read_address__v3;
    __VdlyVal__gpu__DOT__lsu_read_address__v3 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_write_address__v3;
    __VdlyVal__gpu__DOT__lsu_write_address__v3 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_write_data__v3;
    __VdlyVal__gpu__DOT__lsu_write_data__v3 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data__v3;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data__v3 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_read_address__v4;
    __VdlyVal__gpu__DOT__lsu_read_address__v4 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_write_address__v4;
    __VdlyVal__gpu__DOT__lsu_write_address__v4 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_write_data__v4;
    __VdlyVal__gpu__DOT__lsu_write_data__v4 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data__v0;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data__v0 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_read_address__v5;
    __VdlyVal__gpu__DOT__lsu_read_address__v5 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_write_address__v5;
    __VdlyVal__gpu__DOT__lsu_write_address__v5 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_write_data__v5;
    __VdlyVal__gpu__DOT__lsu_write_data__v5 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data__v1;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data__v1 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_read_address__v6;
    __VdlyVal__gpu__DOT__lsu_read_address__v6 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_write_address__v6;
    __VdlyVal__gpu__DOT__lsu_write_address__v6 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_write_data__v6;
    __VdlyVal__gpu__DOT__lsu_write_data__v6 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data__v2;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data__v2 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_read_address__v7;
    __VdlyVal__gpu__DOT__lsu_read_address__v7 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_write_address__v7;
    __VdlyVal__gpu__DOT__lsu_write_address__v7 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__lsu_write_data__v7;
    __VdlyVal__gpu__DOT__lsu_write_data__v7 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data__v3;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data__v3 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v0;
    __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v1;
    __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v1 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v2;
    __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v2 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v3;
    __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v3 = 0;
    CData/*2:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v4;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v4 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_read_address__v4;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_read_address__v4 = 0;
    CData/*2:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v5;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v5 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_address__v4;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_address__v4 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_data__v4;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_data__v4 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v4;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v4 = 0;
    CData/*2:0*/ __VdlyDim0__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v4;
    __VdlyDim0__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v4 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v4;
    __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v4 = 0;
    CData/*2:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v6;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v6 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_read_address__v5;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_read_address__v5 = 0;
    CData/*2:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v7;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v7 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_address__v5;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_address__v5 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_data__v5;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_data__v5 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v5;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v5 = 0;
    CData/*2:0*/ __VdlyDim0__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v5;
    __VdlyDim0__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v5 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v5;
    __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v5 = 0;
    CData/*2:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v8;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v8 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_read_address__v6;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_read_address__v6 = 0;
    CData/*2:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v9;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v9 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_address__v6;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_address__v6 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_data__v6;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_data__v6 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v6;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v6 = 0;
    CData/*2:0*/ __VdlyDim0__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v6;
    __VdlyDim0__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v6 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v6;
    __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v6 = 0;
    CData/*2:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v10;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v10 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_read_address__v7;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_read_address__v7 = 0;
    CData/*2:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v11;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v11 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_address__v7;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_address__v7 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_data__v7;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_data__v7 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v7;
    __VdlyVal__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v7 = 0;
    CData/*2:0*/ __VdlyDim0__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v7;
    __VdlyDim0__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v7 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v7;
    __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v7 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__program_memory_controller__DOT__consumer_read_data__v0;
    __VdlySet__gpu__DOT__program_memory_controller__DOT__consumer_read_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__gpu__DOT__program_memory_controller__DOT__current_consumer__v1;
    __VdlyVal__gpu__DOT__program_memory_controller__DOT__current_consumer__v1 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__program_memory_controller__DOT__mem_read_address__v1;
    __VdlyVal__gpu__DOT__program_memory_controller__DOT__mem_read_address__v1 = 0;
    CData/*2:0*/ __VdlyVal__gpu__DOT__program_memory_controller__DOT__controller_state__v1;
    __VdlyVal__gpu__DOT__program_memory_controller__DOT__controller_state__v1 = 0;
    CData/*0:0*/ __VdlyVal__gpu__DOT__program_memory_controller__DOT__current_consumer__v2;
    __VdlyVal__gpu__DOT__program_memory_controller__DOT__current_consumer__v2 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__program_memory_controller__DOT__mem_write_address__v1;
    __VdlyVal__gpu__DOT__program_memory_controller__DOT__mem_write_address__v1 = 0;
    SData/*15:0*/ __VdlyVal__gpu__DOT__program_memory_controller__DOT__mem_write_data__v1;
    __VdlyVal__gpu__DOT__program_memory_controller__DOT__mem_write_data__v1 = 0;
    CData/*2:0*/ __VdlyVal__gpu__DOT__program_memory_controller__DOT__controller_state__v2;
    __VdlyVal__gpu__DOT__program_memory_controller__DOT__controller_state__v2 = 0;
    SData/*15:0*/ __VdlyVal__gpu__DOT__program_memory_controller__DOT__consumer_read_data__v1;
    __VdlyVal__gpu__DOT__program_memory_controller__DOT__consumer_read_data__v1 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__program_memory_controller__DOT__consumer_read_data__v1;
    __VdlyDim0__gpu__DOT__program_memory_controller__DOT__consumer_read_data__v1 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__program_memory_controller__DOT__consumer_read_data__v1;
    __VdlySet__gpu__DOT__program_memory_controller__DOT__consumer_read_data__v1 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__dispatch_instance__DOT__core_block_id__v0;
    __VdlySet__gpu__DOT__dispatch_instance__DOT__core_block_id__v0 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__dispatch_instance__DOT__core_block_id__v1;
    __VdlySet__gpu__DOT__dispatch_instance__DOT__core_block_id__v1 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__dispatch_instance__DOT__core_block_id__v2;
    __VdlyVal__gpu__DOT__dispatch_instance__DOT__core_block_id__v2 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__dispatch_instance__DOT__core_block_id__v2;
    __VdlySet__gpu__DOT__dispatch_instance__DOT__core_block_id__v2 = 0;
    CData/*2:0*/ __VdlyVal__gpu__DOT__dispatch_instance__DOT__core_thread_count__v2;
    __VdlyVal__gpu__DOT__dispatch_instance__DOT__core_thread_count__v2 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__dispatch_instance__DOT__core_block_id__v3;
    __VdlyVal__gpu__DOT__dispatch_instance__DOT__core_block_id__v3 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__dispatch_instance__DOT__core_block_id__v3;
    __VdlySet__gpu__DOT__dispatch_instance__DOT__core_block_id__v3 = 0;
    CData/*2:0*/ __VdlyVal__gpu__DOT__dispatch_instance__DOT__core_thread_count__v3;
    __VdlyVal__gpu__DOT__dispatch_instance__DOT__core_thread_count__v3 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v0;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v0 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1 = 0;
    CData/*1:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2 = 0;
    CData/*1:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3 = 0;
    CData/*1:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v0;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v0 = 0;
    CData/*0:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1 = 0;
    CData/*0:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2 = 0;
    CData/*0:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3 = 0;
    CData/*3:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps__v0;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps__v0 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps__v1;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps__v1 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v0;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v0 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v3;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v3 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v4;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v4 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v5;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v5 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v6;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v6 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v0;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v0 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v1;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v1 = 0;
    CData/*3:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4 = 0;
    CData/*1:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4 = 0;
    CData/*3:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_stack__v0;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_stack__v0 = 0;
    CData/*1:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_stack__v0;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_stack__v0 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack__v4;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack__v4 = 0;
    CData/*1:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack__v4;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack__v4 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v0;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v0 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v0;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v0 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v0;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v0 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v0;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v0 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v0;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v0 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1 = 0;
    CData/*1:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2 = 0;
    CData/*1:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3 = 0;
    CData/*1:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v0;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v0 = 0;
    CData/*0:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1 = 0;
    CData/*0:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2 = 0;
    CData/*0:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3 = 0;
    CData/*3:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4 = 0;
    CData/*0:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps__v0;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps__v0 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps__v1;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps__v1 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v0;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v0 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v3;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v3 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v4;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v4 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v5;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v5 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v6;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v6 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v0;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v0 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v1;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v1 = 0;
    CData/*3:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4 = 0;
    CData/*1:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4 = 0;
    CData/*3:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_stack__v0;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_stack__v0 = 0;
    CData/*1:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_stack__v0;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_stack__v0 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack__v4;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack__v4 = 0;
    CData/*1:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack__v4;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack__v4 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v0;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v0 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v0;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v0 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v0;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v0 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v0;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v0 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18 = 0;
    CData/*7:0*/ __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*3:0*/ __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19;
    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19 = 0;
    // Body
    __VdlySet__gpu__DOT__program_memory_controller__DOT__consumer_read_data__v0 = 0U;
    __VdlySet__gpu__DOT__program_memory_controller__DOT__consumer_read_data__v1 = 0U;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps__v0 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps__v1 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps__v0 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps__v1 = 0U;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v0 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v0 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v0 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v0 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v0 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v0 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v0 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v0 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19 = 0U;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state;
    __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v0 = 0U;
    __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v1 = 0U;
    __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v2 = 0U;
    __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v3 = 0U;
    __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v4 = 0U;
    __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v5 = 0U;
    __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v6 = 0U;
    __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v7 = 0U;
    __Vdly__gpu__DOT__dispatch_instance__DOT__start_execution 
        = vlSelfRef.gpu__DOT__dispatch_instance__DOT__start_execution;
    __Vdly__gpu__DOT__dispatch_instance__DOT__core_start 
        = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start;
    __VdlySet__gpu__DOT__dispatch_instance__DOT__core_block_id__v0 = 0U;
    __VdlySet__gpu__DOT__dispatch_instance__DOT__core_block_id__v1 = 0U;
    __VdlySet__gpu__DOT__dispatch_instance__DOT__core_block_id__v2 = 0U;
    __VdlySet__gpu__DOT__dispatch_instance__DOT__core_block_id__v3 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v0 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v0 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4 = 0U;
    __Vdly__gpu__DOT__dispatch_instance__DOT__core_reset 
        = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v0 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v0 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2 = 0U;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v0 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v1 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v0 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v1 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4 = 0U;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp;
    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution;
    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v0 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v3 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v4 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v5 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v6 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v0 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v3 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v4 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v5 = 0U;
    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v6 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        if (vlSelfRef.start) {
            vlSelfRef.gpu__DOT__dispatch_instance__DOT__unnamedblk3__DOT__i = 1U;
            vlSelfRef.gpu__DOT__dispatch_instance__DOT__unnamedblk3__DOT__i = 2U;
            vlSelfRef.gpu__DOT__dispatch_instance__DOT__unnamedblk4__DOT__i = 1U;
            vlSelfRef.gpu__DOT__dispatch_instance__DOT__unnamedblk4__DOT__i = 2U;
        }
    }
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data__v0 
        = vlSelfRef.gpu__DOT__lsu_read_data[0U];
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data__v1 
        = vlSelfRef.gpu__DOT__lsu_read_data[1U];
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data__v2 
        = vlSelfRef.gpu__DOT__lsu_read_data[2U];
    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data__v3 
        = vlSelfRef.gpu__DOT__lsu_read_data[3U];
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data__v0 
        = vlSelfRef.gpu__DOT__lsu_read_data[4U];
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data__v1 
        = vlSelfRef.gpu__DOT__lsu_read_data[5U];
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data__v2 
        = vlSelfRef.gpu__DOT__lsu_read_data[6U];
    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data__v3 
        = vlSelfRef.gpu__DOT__lsu_read_data[7U];
    __VdlyVal__gpu__DOT__lsu_read_address__v0 = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address
        [0U];
    __VdlyVal__gpu__DOT__lsu_read_address__v1 = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address
        [1U];
    __VdlyVal__gpu__DOT__lsu_read_address__v2 = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address
        [2U];
    __VdlyVal__gpu__DOT__lsu_read_address__v3 = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address
        [3U];
    __VdlyVal__gpu__DOT__lsu_read_address__v4 = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address
        [0U];
    __VdlyVal__gpu__DOT__lsu_read_address__v5 = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address
        [1U];
    __VdlyVal__gpu__DOT__lsu_read_address__v6 = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address
        [2U];
    __VdlyVal__gpu__DOT__lsu_read_address__v7 = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address
        [3U];
    __VdlyVal__gpu__DOT__lsu_write_address__v0 = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address
        [0U];
    __VdlyVal__gpu__DOT__lsu_write_address__v1 = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address
        [1U];
    __VdlyVal__gpu__DOT__lsu_write_address__v2 = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address
        [2U];
    __VdlyVal__gpu__DOT__lsu_write_address__v3 = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address
        [3U];
    __VdlyVal__gpu__DOT__lsu_write_address__v4 = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address
        [0U];
    __VdlyVal__gpu__DOT__lsu_write_address__v5 = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address
        [1U];
    __VdlyVal__gpu__DOT__lsu_write_address__v6 = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address
        [2U];
    __VdlyVal__gpu__DOT__lsu_write_address__v7 = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address
        [3U];
    __VdlyVal__gpu__DOT__lsu_write_data__v0 = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data
        [0U];
    __VdlyVal__gpu__DOT__lsu_write_data__v1 = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data
        [1U];
    __VdlyVal__gpu__DOT__lsu_write_data__v2 = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data
        [2U];
    __VdlyVal__gpu__DOT__lsu_write_data__v3 = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data
        [3U];
    __VdlyVal__gpu__DOT__lsu_write_data__v4 = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data
        [0U];
    __VdlyVal__gpu__DOT__lsu_write_data__v5 = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data
        [1U];
    __VdlyVal__gpu__DOT__lsu_write_data__v6 = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data
        [2U];
    __VdlyVal__gpu__DOT__lsu_write_data__v7 = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data
        [3U];
    if (vlSelfRef.reset) {
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.gpu__DOT__dcr_instance__DOT__device_conrol_register = 0U;
    } else if (vlSelfRef.device_control_write_enable) {
        vlSelfRef.gpu__DOT__dcr_instance__DOT__device_conrol_register 
            = vlSelfRef.device_control_data;
    }
    if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset)))) {
        if ((1U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start))) {
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk7__DOT__i = 1U;
            if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__divergence_event) 
                 & (6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state)))) {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk8__DOT__i = 2U;
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk8__DOT__i = 3U;
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk8__DOT__i = 4U;
            }
        }
        if ((2U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__divergence_event = 0U;
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__rejoin_event = 0U;
            if (((((((((0U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                       >> 0xcU))) | 
                       (1U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                       >> 0xcU)))) 
                      | (0xbU == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                          >> 0xcU)))) 
                     | (2U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                       >> 0xcU)))) 
                    | (3U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                      >> 0xcU)))) | 
                   (4U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                   >> 0xcU)))) | (5U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                                      >> 0xcU)))) 
                 | (6U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                   >> 0xcU))))) {
                if ((0U != (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                    >> 0xcU)))) {
                    if ((1U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                        >> 0xcU)))) {
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__divergence_event = 1U;
                    }
                    if ((1U != (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                        >> 0xcU)))) {
                        if ((0xbU == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                              >> 0xcU)))) {
                            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__rejoin_event = 1U;
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset) 
                  >> 1U)))) {
        if ((2U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start))) {
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk7__DOT__i = 1U;
            if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__divergence_event) 
                 & (6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state)))) {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk8__DOT__i = 2U;
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk8__DOT__i = 3U;
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk8__DOT__i = 4U;
            }
        }
        if ((2U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__divergence_event = 0U;
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__rejoin_event = 0U;
            if (((((((((0U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                       >> 0xcU))) | 
                       (1U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                       >> 0xcU)))) 
                      | (0xbU == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                          >> 0xcU)))) 
                     | (2U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                       >> 0xcU)))) 
                    | (3U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                      >> 0xcU)))) | 
                   (4U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                   >> 0xcU)))) | (5U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                                      >> 0xcU)))) 
                 | (6U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                   >> 0xcU))))) {
                if ((0U != (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                    >> 0xcU)))) {
                    if ((1U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                        >> 0xcU)))) {
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__divergence_event = 1U;
                    }
                    if ((1U != (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                        >> 0xcU)))) {
                        if ((0xbU == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                              >> 0xcU)))) {
                            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__rejoin_event = 1U;
                        }
                    }
                }
            }
        }
    }
    if ((1U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset))) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 2U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 3U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk2__DOT__i = 2U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk2__DOT__i = 3U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk2__DOT__i = 4U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__unnamedblk1__DOT__i = 4U;
        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v0 = 1U;
        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v0 = 1U;
        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v0 = 1U;
        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v0 = 1U;
        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v0 = 1U;
        __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution = 0U;
        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v0 = 1U;
        __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done = 0U;
        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps__v0 = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_ret = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_pc_mux = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rt_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp_write_enable = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rd_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rs_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_write_enable = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_input_mux = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_arithmetic_mux = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_output_mux = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_write_enable = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_read_enable = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_immediate = 0U;
        __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_valid = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__instruction = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rs = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rt = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rs = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rt = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rs = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rt = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rs = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rt = 0U;
        __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_data = 0U;
        __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_data = 0U;
        __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_data = 0U;
        __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_data = 0U;
    } else {
        if ((0U < vlSelfRef.gpu__DOT__core_thread_count
             [0U])) {
            __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16 
                = vlSelfRef.gpu__DOT__core_block_id
                [0U];
            __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16 = 1U;
            if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_write_enable) 
                     & (0xdU > (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address)))) {
                    if ((0U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs
                            [0U];
                        __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 = 1U;
                    } else if ((1U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs
                            [0U];
                        __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18 = 1U;
                    } else if ((2U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
                        __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19 = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rs 
                    = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rs_address];
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rt 
                    = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rt_address];
            }
        }
        if ((1U < vlSelfRef.gpu__DOT__core_thread_count
             [0U])) {
            __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16 
                = vlSelfRef.gpu__DOT__core_block_id
                [0U];
            __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16 = 1U;
            if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_write_enable) 
                     & (0xdU > (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address)))) {
                    if ((0U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs
                            [1U];
                        __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 = 1U;
                    } else if ((1U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs
                            [1U];
                        __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18 = 1U;
                    } else if ((2U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
                        __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19 = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rs 
                    = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rs_address];
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rt 
                    = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rt_address];
            }
        }
        if ((2U < vlSelfRef.gpu__DOT__core_thread_count
             [0U])) {
            __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16 
                = vlSelfRef.gpu__DOT__core_block_id
                [0U];
            __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16 = 1U;
            if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_write_enable) 
                     & (0xdU > (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address)))) {
                    if ((0U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs
                            [2U];
                        __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 = 1U;
                    } else if ((1U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs
                            [2U];
                        __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18 = 1U;
                    } else if ((2U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
                        __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19 = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rs 
                    = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rs_address];
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rt 
                    = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rt_address];
            }
        }
        if ((3U < vlSelfRef.gpu__DOT__core_thread_count
             [0U])) {
            __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16 
                = vlSelfRef.gpu__DOT__core_block_id
                [0U];
            __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16 = 1U;
            if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_write_enable) 
                     & (0xdU > (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address)))) {
                    if ((0U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs
                            [3U];
                        __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 = 1U;
                    } else if ((1U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs
                            [3U];
                        __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18 = 1U;
                    } else if ((2U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
                        __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19 = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rs 
                    = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rs_address];
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rt 
                    = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rt_address];
            }
        }
        if ((1U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start))) {
            if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__divergence_event) 
                 & (6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state)))) {
                if ((vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
                     [1U] == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate))) {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT____Vlvbound_h698f6414__0 = 0U;
                    if ((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))) {
                        __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT____Vlvbound_h698f6414__0;
                        __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1 
                            = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1 = 1U;
                    }
                }
                if ((vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
                     [2U] == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate))) {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT____Vlvbound_h698f6414__0 = 0U;
                    if ((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))) {
                        __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT____Vlvbound_h698f6414__0;
                        __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2 
                            = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2 = 1U;
                    }
                }
                if ((vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
                     [3U] == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate))) {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT____Vlvbound_h698f6414__0 = 0U;
                    if ((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))) {
                        __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT____Vlvbound_h698f6414__0;
                        __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3 
                            = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3 = 1U;
                    }
                }
            }
            if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event) 
                 & (5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state)))) {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT____Vlvbound_he266a5c5__0 
                    = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoining_threads_mask;
                if ((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))) {
                    __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4 
                        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT____Vlvbound_he266a5c5__0;
                    __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4 
                        = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                    __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4 = 1U;
                }
            }
            if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution)))) {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 1U;
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk5__DOT__i = 1U;
                __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v3 = 1U;
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 2U;
                __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution = 1U;
                __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v4 = 1U;
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 3U;
                __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v5 = 1U;
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 4U;
                __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v6 = 1U;
            }
            if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done) 
                 == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__total_warps))) {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done = 1U;
            }
            if ((((7U == vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states
                   [0U]) & (0U < (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__total_warps))) 
                 & (~ vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps
                    [0U]))) {
                __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done)));
                __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps__v1 = 1U;
            }
        }
        if ((2U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_ret = 0U;
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_pc_mux = 0U;
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rt_address 
                = (0xfU & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction));
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp_write_enable = 0U;
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rd_address 
                = (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                           >> 8U));
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rs_address 
                = (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                           >> 4U));
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp 
                = (7U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                         >> 9U));
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_write_enable = 0U;
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_input_mux = 0U;
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_arithmetic_mux = 0U;
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_output_mux = 0U;
            if (((((((((0U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                       >> 0xcU))) | 
                       (1U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                       >> 0xcU)))) 
                      | (0xbU == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                          >> 0xcU)))) 
                     | (2U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                       >> 0xcU)))) 
                    | (3U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                      >> 0xcU)))) | 
                   (4U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                   >> 0xcU)))) | (5U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                                      >> 0xcU)))) 
                 | (6U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                   >> 0xcU))))) {
                if ((0U != (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                    >> 0xcU)))) {
                    if ((1U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                        >> 0xcU)))) {
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_pc_mux = 1U;
                    } else if ((0xbU == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                                 >> 0xcU)))) {
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_pc_mux = 1U;
                    }
                    if ((1U != (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                        >> 0xcU)))) {
                        if ((0xbU != (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                              >> 0xcU)))) {
                            if ((2U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                                >> 0xcU)))) {
                                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp_write_enable = 1U;
                                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_output_mux = 1U;
                            }
                            if ((2U != (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                                >> 0xcU)))) {
                                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_write_enable = 1U;
                                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_input_mux = 0U;
                                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_arithmetic_mux 
                                    = ((3U == (0xfU 
                                               & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                                  >> 0xcU)))
                                        ? 0U : ((4U 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                                     >> 0xcU)))
                                                 ? 1U
                                                 : 
                                                ((5U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                                      >> 0xcU)))
                                                  ? 2U
                                                  : 3U)));
                            }
                        }
                    }
                }
            } else if ((7U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                       >> 0xcU)))) {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_write_enable = 1U;
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_input_mux = 1U;
            } else if ((8U != (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                       >> 0xcU)))) {
                if ((9U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                    >> 0xcU)))) {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_write_enable = 1U;
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_input_mux = 2U;
                }
            }
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_write_enable = 0U;
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_read_enable = 0U;
            if ((1U & (~ ((((((((0U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                                >> 0xcU))) 
                                | (1U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                                  >> 0xcU)))) 
                               | (0xbU == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                                   >> 0xcU)))) 
                              | (2U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                                >> 0xcU)))) 
                             | (3U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                               >> 0xcU)))) 
                            | (4U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                              >> 0xcU)))) 
                           | (5U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                             >> 0xcU)))) 
                          | (6U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                            >> 0xcU))))))) {
                if ((7U != (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                    >> 0xcU)))) {
                    if ((8U != (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                        >> 0xcU)))) {
                        if ((9U != (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                            >> 0xcU)))) {
                            if ((0xfU == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                                  >> 0xcU)))) {
                                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_ret = 1U;
                            }
                        }
                    }
                    if ((8U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                        >> 0xcU)))) {
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_write_enable = 1U;
                    }
                }
                if ((7U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction) 
                                    >> 0xcU)))) {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_read_enable = 1U;
                }
            }
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_immediate 
                = (0xffU & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction));
        }
        if ((0U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state))) {
            if ((1U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state = 1U;
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_valid = 1U;
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_address 
                    = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc;
            }
        } else if ((1U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state))) {
            if ((1U & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready))) {
                __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state = 2U;
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__instruction 
                    = vlSelfRef.gpu__DOT__fetcher_read_data
                    [0U];
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_valid = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state))) {
            if ((2U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state = 0U;
            }
        }
        if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_read_enable) {
                if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                            __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready))) {
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
                            [0U];
                        __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid = 1U;
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_address 
                        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                        [0U];
                    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
            if (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_write_enable) {
                if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                            __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready))) {
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
                        __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid = 1U;
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_address 
                        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                        [0U];
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_data 
                        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                        [0U];
                    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_read_enable) {
                if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                            __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready))) {
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
                            [1U];
                        __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid = 1U;
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_address 
                        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                        [1U];
                    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
            if (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_write_enable) {
                if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                            __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready))) {
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
                        __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid = 1U;
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_address 
                        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                        [1U];
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_data 
                        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                        [1U];
                    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_read_enable) {
                if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                            __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready))) {
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
                            [2U];
                        __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_valid = 1U;
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_address 
                        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                        [2U];
                    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
            if (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_write_enable) {
                if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                            __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready))) {
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
                        __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_valid = 1U;
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_address 
                        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                        [2U];
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_data 
                        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                        [2U];
                    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_read_enable) {
                if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                            __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((8U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready))) {
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
                            [3U];
                        __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_valid = 1U;
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_address 
                        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                        [3U];
                    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
            if (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_write_enable) {
                if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                            __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((8U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready))) {
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
                        __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_valid = 1U;
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_address 
                        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                        [3U];
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_data 
                        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                        [3U];
                    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
        }
    }
    if ((2U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset))) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 2U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 3U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk2__DOT__i = 2U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk2__DOT__i = 3U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk2__DOT__i = 4U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__unnamedblk1__DOT__i = 4U;
        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v0 = 1U;
        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v0 = 1U;
        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v0 = 1U;
        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v0 = 1U;
        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v0 = 1U;
        __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution = 0U;
        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v0 = 1U;
        __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done = 0U;
        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps__v0 = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_ret = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_pc_mux = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rt_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp_write_enable = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rd_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rs_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_write_enable = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_input_mux = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_arithmetic_mux = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_output_mux = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_write_enable = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_read_enable = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_immediate = 0U;
        __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_valid = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__instruction = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rs = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rt = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rs = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rt = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rs = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rt = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rs = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rt = 0U;
        __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_data = 0U;
        __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_data = 0U;
        __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_data = 0U;
        __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_address = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_data = 0U;
    } else {
        if ((0U < vlSelfRef.gpu__DOT__core_thread_count
             [1U])) {
            __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16 
                = vlSelfRef.gpu__DOT__core_block_id
                [1U];
            __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16 = 1U;
            if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_write_enable) 
                     & (0xdU > (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address)))) {
                    if ((0U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs
                            [0U];
                        __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 = 1U;
                    } else if ((1U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs
                            [0U];
                        __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18 = 1U;
                    } else if ((2U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
                        __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19 = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rs 
                    = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rs_address];
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rt 
                    = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rt_address];
            }
        }
        if ((1U < vlSelfRef.gpu__DOT__core_thread_count
             [1U])) {
            __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16 
                = vlSelfRef.gpu__DOT__core_block_id
                [1U];
            __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16 = 1U;
            if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_write_enable) 
                     & (0xdU > (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address)))) {
                    if ((0U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs
                            [1U];
                        __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 = 1U;
                    } else if ((1U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs
                            [1U];
                        __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18 = 1U;
                    } else if ((2U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
                        __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19 = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rs 
                    = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rs_address];
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rt 
                    = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rt_address];
            }
        }
        if ((2U < vlSelfRef.gpu__DOT__core_thread_count
             [1U])) {
            __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16 
                = vlSelfRef.gpu__DOT__core_block_id
                [1U];
            __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16 = 1U;
            if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_write_enable) 
                     & (0xdU > (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address)))) {
                    if ((0U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs
                            [2U];
                        __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 = 1U;
                    } else if ((1U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs
                            [2U];
                        __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18 = 1U;
                    } else if ((2U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
                        __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19 = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rs 
                    = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rs_address];
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rt 
                    = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rt_address];
            }
        }
        if ((3U < vlSelfRef.gpu__DOT__core_thread_count
             [1U])) {
            __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16 
                = vlSelfRef.gpu__DOT__core_block_id
                [1U];
            __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16 = 1U;
            if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_write_enable) 
                     & (0xdU > (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address)))) {
                    if ((0U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs
                            [3U];
                        __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 = 1U;
                    } else if ((1U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs
                            [3U];
                        __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18 = 1U;
                    } else if ((2U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux))) {
                        __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
                        __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address;
                        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19 = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rs 
                    = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rs_address];
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rt 
                    = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers
                    [vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rt_address];
            }
        }
        if ((2U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start))) {
            if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__divergence_event) 
                 & (6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state)))) {
                if ((vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
                     [1U] == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate))) {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT____Vlvbound_h698f6414__0 = 0U;
                    if ((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))) {
                        __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT____Vlvbound_h698f6414__0;
                        __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1 
                            = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1 = 1U;
                    }
                }
                if ((vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
                     [2U] == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate))) {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT____Vlvbound_h698f6414__0 = 0U;
                    if ((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))) {
                        __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT____Vlvbound_h698f6414__0;
                        __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2 
                            = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2 = 1U;
                    }
                }
                if ((vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
                     [3U] == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate))) {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT____Vlvbound_h698f6414__0 = 0U;
                    if ((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))) {
                        __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT____Vlvbound_h698f6414__0;
                        __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3 
                            = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3 = 1U;
                    }
                }
            }
            if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event) 
                 & (5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state)))) {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT____Vlvbound_he266a5c5__0 
                    = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoining_threads_mask;
                if ((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))) {
                    __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4 
                        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT____Vlvbound_he266a5c5__0;
                    __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4 
                        = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                    __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4 = 1U;
                }
            }
            if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution)))) {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 1U;
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk5__DOT__i = 1U;
                __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v3 = 1U;
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 2U;
                __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution = 1U;
                __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v4 = 1U;
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 3U;
                __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v5 = 1U;
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 4U;
                __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v6 = 1U;
            }
            if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done) 
                 == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__total_warps))) {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done = 1U;
            }
            if ((((7U == vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states
                   [0U]) & (0U < (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__total_warps))) 
                 & (~ vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps
                    [0U]))) {
                __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done)));
                __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps__v1 = 1U;
            }
        }
        if ((2U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_ret = 0U;
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_pc_mux = 0U;
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rt_address 
                = (0xfU & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction));
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp_write_enable = 0U;
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rd_address 
                = (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                           >> 8U));
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rs_address 
                = (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                           >> 4U));
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp 
                = (7U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                         >> 9U));
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_write_enable = 0U;
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_input_mux = 0U;
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_arithmetic_mux = 0U;
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_output_mux = 0U;
            if (((((((((0U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                       >> 0xcU))) | 
                       (1U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                       >> 0xcU)))) 
                      | (0xbU == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                          >> 0xcU)))) 
                     | (2U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                       >> 0xcU)))) 
                    | (3U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                      >> 0xcU)))) | 
                   (4U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                   >> 0xcU)))) | (5U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                                      >> 0xcU)))) 
                 | (6U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                   >> 0xcU))))) {
                if ((0U != (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                    >> 0xcU)))) {
                    if ((1U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                        >> 0xcU)))) {
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_pc_mux = 1U;
                    } else if ((0xbU == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                                 >> 0xcU)))) {
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_pc_mux = 1U;
                    }
                    if ((1U != (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                        >> 0xcU)))) {
                        if ((0xbU != (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                              >> 0xcU)))) {
                            if ((2U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                                >> 0xcU)))) {
                                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp_write_enable = 1U;
                                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_output_mux = 1U;
                            }
                            if ((2U != (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                                >> 0xcU)))) {
                                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_write_enable = 1U;
                                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_input_mux = 0U;
                                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_arithmetic_mux 
                                    = ((3U == (0xfU 
                                               & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                                  >> 0xcU)))
                                        ? 0U : ((4U 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                                     >> 0xcU)))
                                                 ? 1U
                                                 : 
                                                ((5U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                                      >> 0xcU)))
                                                  ? 2U
                                                  : 3U)));
                            }
                        }
                    }
                }
            } else if ((7U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                       >> 0xcU)))) {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_write_enable = 1U;
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_input_mux = 1U;
            } else if ((8U != (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                       >> 0xcU)))) {
                if ((9U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                    >> 0xcU)))) {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_write_enable = 1U;
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_input_mux = 2U;
                }
            }
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_write_enable = 0U;
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_read_enable = 0U;
            if ((1U & (~ ((((((((0U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                                >> 0xcU))) 
                                | (1U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                                  >> 0xcU)))) 
                               | (0xbU == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                                   >> 0xcU)))) 
                              | (2U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                                >> 0xcU)))) 
                             | (3U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                               >> 0xcU)))) 
                            | (4U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                              >> 0xcU)))) 
                           | (5U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                             >> 0xcU)))) 
                          | (6U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                            >> 0xcU))))))) {
                if ((7U != (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                    >> 0xcU)))) {
                    if ((8U != (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                        >> 0xcU)))) {
                        if ((9U != (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                            >> 0xcU)))) {
                            if ((0xfU == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                                  >> 0xcU)))) {
                                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_ret = 1U;
                            }
                        }
                    }
                    if ((8U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                        >> 0xcU)))) {
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_write_enable = 1U;
                    }
                }
                if ((7U == (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction) 
                                    >> 0xcU)))) {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_read_enable = 1U;
                }
            }
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_immediate 
                = (0xffU & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction));
        }
        if ((0U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state))) {
            if ((1U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state = 1U;
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_valid = 1U;
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_address 
                    = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc;
            }
        } else if ((1U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state))) {
            if ((2U & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready))) {
                __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state = 2U;
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__instruction 
                    = vlSelfRef.gpu__DOT__fetcher_read_data
                    [1U];
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_valid = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state))) {
            if ((2U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state = 0U;
            }
        }
        if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_read_enable) {
                if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                            __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready))) {
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
                            [0U];
                        __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid = 1U;
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_address 
                        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                        [0U];
                    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
            if (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_write_enable) {
                if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                            __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready))) {
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
                        __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid = 1U;
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_address 
                        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                        [0U];
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_data 
                        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                        [0U];
                    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_read_enable) {
                if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                            __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready))) {
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
                            [1U];
                        __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid = 1U;
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_address 
                        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                        [1U];
                    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
            if (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_write_enable) {
                if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                            __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready))) {
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
                        __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid = 1U;
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_address 
                        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                        [1U];
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_data 
                        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                        [1U];
                    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_read_enable) {
                if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                            __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready))) {
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
                            [2U];
                        __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_valid = 1U;
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_address 
                        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                        [2U];
                    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
            if (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_write_enable) {
                if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                            __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready))) {
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
                        __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_valid = 1U;
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_address 
                        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                        [2U];
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_data 
                        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                        [2U];
                    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_read_enable) {
                if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                            __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((8U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready))) {
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
                            [3U];
                        __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_valid = 1U;
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_address 
                        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                        [3U];
                    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
            if (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_write_enable) {
                if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                        if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                            __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                        }
                    } else if ((8U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready))) {
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
                        __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_valid = 1U;
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_address 
                        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                        [3U];
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_data 
                        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                        [3U];
                    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
                } else if ((3U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
                }
            }
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready = 0U;
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready = 0U;
        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_read_address.enqueue(0U, 0U);
        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_write_address.enqueue(0U, 0U);
        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_write_data.enqueue(0U, 0U);
        __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v0 = 1U;
        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__current_consumer.enqueue(0U, 0U);
        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(0U, 0U);
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_read_address.enqueue(0U, 1U);
        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_write_address.enqueue(0U, 1U);
        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_write_data.enqueue(0U, 1U);
        __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v1 = 1U;
        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__current_consumer.enqueue(0U, 1U);
        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(0U, 1U);
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_read_address.enqueue(0U, 2U);
        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_write_address.enqueue(0U, 2U);
        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_write_data.enqueue(0U, 2U);
        __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v2 = 1U;
        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__current_consumer.enqueue(0U, 2U);
        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(0U, 2U);
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_read_address.enqueue(0U, 3U);
        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_write_address.enqueue(0U, 3U);
        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_write_data.enqueue(0U, 3U);
        __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v3 = 1U;
        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__current_consumer.enqueue(0U, 3U);
        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(0U, 3U);
    } else {
        if ((0U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
             [0U])) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0U;
            {
                while (VL_GTS_III(32, 8U, vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)) {
                    if ((1U & (((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                                >> (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)) 
                               & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer) 
                                     >> (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)))))) {
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer 
                            = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer) 
                               | (0xffU & ((IData)(1U) 
                                           << (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j))));
                        __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v4 
                            = (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__current_consumer.enqueue(__VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v4, 0U);
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_read_address__v4 
                            = vlSelfRef.gpu__DOT__lsu_read_address
                            [(7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)];
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_read_address.enqueue(__VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_read_address__v4, 0U);
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(2U, 0U);
                        goto __Vlabel1;
                    } else if ((1U & (((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                       >> (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)) 
                                      & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer) 
                                            >> (7U 
                                                & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)))))) {
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer 
                            = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer) 
                               | (0xffU & ((IData)(1U) 
                                           << (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j))));
                        __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v5 
                            = (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__current_consumer.enqueue(__VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v5, 0U);
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                            = (1U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                        __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_address__v4 
                            = vlSelfRef.gpu__DOT__lsu_write_address
                            [(7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)];
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_write_address.enqueue(__VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_address__v4, 0U);
                        __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_data__v4 
                            = vlSelfRef.gpu__DOT__lsu_write_data
                            [(7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)];
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_write_data.enqueue(__VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_data__v4, 0U);
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(3U, 0U);
                        goto __Vlabel1;
                    }
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j 
                        = ((IData)(1U) + vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
                }
                __Vlabel1: ;
            }
        } else if ((2U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                    [0U])) {
            if ((1U & (IData)(vlSelfRef.data_mem_read_ready))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                    = (0xeU & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready 
                    = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready) 
                       | (0xffU & ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                   [0U])));
                __VdlyVal__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v4 
                    = vlSelfRef.data_mem_read_data[0U];
                __VdlyDim0__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v4 
                    = vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                    [0U];
                __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v4 = 1U;
                vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(4U, 0U);
            }
        } else if ((3U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                    [0U])) {
            if ((1U & (IData)(vlSelfRef.data_mem_write_ready))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                    = (0xeU & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready 
                    = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready) 
                       | (0xffU & ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                   [0U])));
                vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(5U, 0U);
            }
        } else if ((4U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                    [0U])) {
            if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                          >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                          [0U])))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer 
                    = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [0U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer));
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready 
                    = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [0U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready));
                vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(0U, 0U);
            }
        } else if ((5U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                    [0U])) {
            if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                          >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                          [0U])))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer 
                    = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [0U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer));
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready 
                    = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [0U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready));
                vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(0U, 0U);
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__i = 1U;
        if ((0U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
             [1U])) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0U;
            {
                while (VL_GTS_III(32, 8U, vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)) {
                    if ((1U & (((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                                >> (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)) 
                               & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer) 
                                     >> (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)))))) {
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer 
                            = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer) 
                               | (0xffU & ((IData)(1U) 
                                           << (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j))));
                        __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v6 
                            = (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__current_consumer.enqueue(__VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v6, 1U);
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_read_address__v5 
                            = vlSelfRef.gpu__DOT__lsu_read_address
                            [(7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)];
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_read_address.enqueue(__VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_read_address__v5, 1U);
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(2U, 1U);
                        goto __Vlabel2;
                    } else if ((1U & (((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                       >> (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)) 
                                      & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer) 
                                            >> (7U 
                                                & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)))))) {
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer 
                            = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer) 
                               | (0xffU & ((IData)(1U) 
                                           << (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j))));
                        __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v7 
                            = (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__current_consumer.enqueue(__VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v7, 1U);
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                            = (2U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                        __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_address__v5 
                            = vlSelfRef.gpu__DOT__lsu_write_address
                            [(7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)];
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_write_address.enqueue(__VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_address__v5, 1U);
                        __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_data__v5 
                            = vlSelfRef.gpu__DOT__lsu_write_data
                            [(7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)];
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_write_data.enqueue(__VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_data__v5, 1U);
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(3U, 1U);
                        goto __Vlabel2;
                    }
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j 
                        = ((IData)(1U) + vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
                }
                __Vlabel2: ;
            }
        } else if ((2U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                    [1U])) {
            if ((2U & (IData)(vlSelfRef.data_mem_read_ready))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                    = (0xdU & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready 
                    = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready) 
                       | (0xffU & ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                   [1U])));
                __VdlyVal__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v5 
                    = vlSelfRef.data_mem_read_data[1U];
                __VdlyDim0__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v5 
                    = vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                    [1U];
                __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v5 = 1U;
                vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(4U, 1U);
            }
        } else if ((3U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                    [1U])) {
            if ((2U & (IData)(vlSelfRef.data_mem_write_ready))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                    = (0xdU & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready 
                    = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready) 
                       | (0xffU & ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                   [1U])));
                vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(5U, 1U);
            }
        } else if ((4U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                    [1U])) {
            if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                          >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                          [1U])))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer 
                    = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [1U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer));
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready 
                    = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [1U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready));
                vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(0U, 1U);
            }
        } else if ((5U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                    [1U])) {
            if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                          >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                          [1U])))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer 
                    = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [1U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer));
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready 
                    = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [1U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready));
                vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(0U, 1U);
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__i = 2U;
        if ((0U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
             [2U])) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0U;
            {
                while (VL_GTS_III(32, 8U, vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)) {
                    if ((1U & (((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                                >> (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)) 
                               & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer) 
                                     >> (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)))))) {
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer 
                            = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer) 
                               | (0xffU & ((IData)(1U) 
                                           << (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j))));
                        __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v8 
                            = (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__current_consumer.enqueue(__VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v8, 2U);
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_read_address__v6 
                            = vlSelfRef.gpu__DOT__lsu_read_address
                            [(7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)];
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_read_address.enqueue(__VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_read_address__v6, 2U);
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(2U, 2U);
                        goto __Vlabel3;
                    } else if ((1U & (((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                       >> (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)) 
                                      & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer) 
                                            >> (7U 
                                                & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)))))) {
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer 
                            = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer) 
                               | (0xffU & ((IData)(1U) 
                                           << (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j))));
                        __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v9 
                            = (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__current_consumer.enqueue(__VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v9, 2U);
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                            = (4U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                        __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_address__v6 
                            = vlSelfRef.gpu__DOT__lsu_write_address
                            [(7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)];
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_write_address.enqueue(__VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_address__v6, 2U);
                        __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_data__v6 
                            = vlSelfRef.gpu__DOT__lsu_write_data
                            [(7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)];
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_write_data.enqueue(__VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_data__v6, 2U);
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(3U, 2U);
                        goto __Vlabel3;
                    }
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j 
                        = ((IData)(1U) + vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
                }
                __Vlabel3: ;
            }
        } else if ((2U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                    [2U])) {
            if ((4U & (IData)(vlSelfRef.data_mem_read_ready))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                    = (0xbU & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready 
                    = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready) 
                       | (0xffU & ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                   [2U])));
                __VdlyVal__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v6 
                    = vlSelfRef.data_mem_read_data[2U];
                __VdlyDim0__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v6 
                    = vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                    [2U];
                __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v6 = 1U;
                vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(4U, 2U);
            }
        } else if ((3U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                    [2U])) {
            if ((4U & (IData)(vlSelfRef.data_mem_write_ready))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                    = (0xbU & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready 
                    = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready) 
                       | (0xffU & ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                   [2U])));
                vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(5U, 2U);
            }
        } else if ((4U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                    [2U])) {
            if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                          >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                          [2U])))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer 
                    = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [2U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer));
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready 
                    = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [2U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready));
                vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(0U, 2U);
            }
        } else if ((5U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                    [2U])) {
            if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                          >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                          [2U])))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer 
                    = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [2U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer));
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready 
                    = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [2U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready));
                vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(0U, 2U);
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__i = 3U;
        if ((0U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
             [3U])) {
            vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0U;
            {
                while (VL_GTS_III(32, 8U, vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)) {
                    if ((1U & (((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                                >> (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)) 
                               & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer) 
                                     >> (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)))))) {
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer 
                            = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer) 
                               | (0xffU & ((IData)(1U) 
                                           << (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j))));
                        __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v10 
                            = (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__current_consumer.enqueue(__VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v10, 3U);
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                            = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                        __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_read_address__v7 
                            = vlSelfRef.gpu__DOT__lsu_read_address
                            [(7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)];
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_read_address.enqueue(__VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_read_address__v7, 3U);
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(2U, 3U);
                        goto __Vlabel4;
                    } else if ((1U & (((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                                       >> (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)) 
                                      & (~ ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer) 
                                            >> (7U 
                                                & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)))))) {
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer 
                            = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer) 
                               | (0xffU & ((IData)(1U) 
                                           << (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j))));
                        __VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v11 
                            = (7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__current_consumer.enqueue(__VdlyVal__gpu__DOT__data_memory_controller__DOT__current_consumer__v11, 3U);
                        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                            = (8U | (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                        __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_address__v7 
                            = vlSelfRef.gpu__DOT__lsu_write_address
                            [(7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)];
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_write_address.enqueue(__VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_address__v7, 3U);
                        __VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_data__v7 
                            = vlSelfRef.gpu__DOT__lsu_write_data
                            [(7U & vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)];
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_write_data.enqueue(__VdlyVal__gpu__DOT__data_memory_controller__DOT__mem_write_data__v7, 3U);
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(3U, 3U);
                        goto __Vlabel4;
                    }
                    vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j 
                        = ((IData)(1U) + vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
                }
                __Vlabel4: ;
            }
        } else if ((2U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                    [3U])) {
            if ((8U & (IData)(vlSelfRef.data_mem_read_ready))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid 
                    = (7U & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid));
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready 
                    = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready) 
                       | (0xffU & ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                   [3U])));
                __VdlyVal__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v7 
                    = vlSelfRef.data_mem_read_data[3U];
                __VdlyDim0__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v7 
                    = vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                    [3U];
                __VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v7 = 1U;
                vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(4U, 3U);
            }
        } else if ((3U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                    [3U])) {
            if ((8U & (IData)(vlSelfRef.data_mem_write_ready))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid 
                    = (7U & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid));
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready 
                    = ((IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready) 
                       | (0xffU & ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                                   [3U])));
                vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(5U, 3U);
            }
        } else if ((4U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                    [3U])) {
            if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__lsu_read_valid) 
                          >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                          [3U])))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer 
                    = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [3U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer));
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready 
                    = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [3U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready));
                vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(0U, 3U);
            }
        } else if ((5U == vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state
                    [3U])) {
            if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__lsu_write_valid) 
                          >> vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                          [3U])))) {
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer 
                    = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [3U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer));
                vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready 
                    = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer
                           [3U])) & (IData)(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready));
                vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.enqueue(0U, 3U);
            }
        }
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__i = 4U;
    }
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution 
        = __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution;
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v0) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[1U] = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups[0U][0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[2U] = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups[0U][1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[3U] = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups[0U][2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups[0U][3U] = 0U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v3) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups[0U][0U] = 0U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v4) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups[0U][1U] = 1U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v5) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups[0U][2U] = 2U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v6) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups[0U][3U] = 3U;
    }
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution 
        = __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution;
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v0) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[1U] = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups[0U][0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[2U] = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups[0U][1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[3U] = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups[0U][2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups[0U][3U] = 0U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v3) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups[0U][0U] = 0U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v4) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups[0U][1U] = 1U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v5) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups[0U][2U] = 2U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids__v6) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups[0U][3U] = 3U;
    }
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done 
        = __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done;
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps__v0) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps[0U] = 0U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps__v1) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps[0U] = 1U;
    }
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done 
        = __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done;
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps__v0) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps[0U] = 0U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps__v1) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps[0U] = 1U;
    }
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state 
        = __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state 
        = __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state;
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v0) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[4U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[5U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[6U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[7U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[8U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[9U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[0xaU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[0xbU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[0xcU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[0xdU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[0xeU] = 4U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[0xfU] = 0U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[0xdU] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v0) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[4U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[5U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[6U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[7U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[8U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[9U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[0xaU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[0xbU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[0xcU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[0xdU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[0xeU] = 4U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[0xfU] = 1U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[0xdU] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v0) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[4U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[5U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[6U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[7U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[8U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[9U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[0xaU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[0xbU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[0xcU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[0xdU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[0xeU] = 4U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[0xfU] = 2U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[0xdU] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v0) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[4U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[5U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[6U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[7U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[8U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[9U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[0xaU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[0xbU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[0xcU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[0xdU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[0xeU] = 4U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[0xfU] = 3U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[0xdU] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v0) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[4U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[5U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[6U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[7U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[8U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[9U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[0xaU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[0xbU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[0xcU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[0xdU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[0xeU] = 4U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[0xfU] = 0U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[0xdU] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v18;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v19;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v0) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[4U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[5U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[6U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[7U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[8U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[9U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[0xaU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[0xbU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[0xcU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[0xdU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[0xeU] = 4U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[0xfU] = 1U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[0xdU] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v18;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v19;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v0) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[4U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[5U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[6U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[7U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[8U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[9U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[0xaU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[0xbU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[0xcU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[0xdU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[0xeU] = 4U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[0xfU] = 2U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[0xdU] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v18;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v19;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v0) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[4U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[5U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[6U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[7U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[8U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[9U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[0xaU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[0xbU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[0xcU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[0xdU] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[0xeU] = 4U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[0xfU] = 3U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[0xdU] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v18;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v19;
    }
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state 
        = __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state 
        = __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state 
        = __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state 
        = __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data[0U] 
        = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data__v0;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data[1U] 
        = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data__v1;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data[2U] 
        = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data__v2;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data[3U] 
        = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data__v3;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state 
        = __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state 
        = __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state 
        = __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state 
        = __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data[0U] 
        = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data__v0;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data[1U] 
        = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data__v1;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data[2U] 
        = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data__v2;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data[3U] 
        = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data__v3;
    if (vlSelfRef.reset) {
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched = 0U;
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_done = 0U;
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__done = 0U;
        __Vdly__gpu__DOT__dispatch_instance__DOT__start_execution = 0U;
        __Vdly__gpu__DOT__dispatch_instance__DOT__core_start 
            = (2U & (IData)(__Vdly__gpu__DOT__dispatch_instance__DOT__core_start));
        __Vdly__gpu__DOT__dispatch_instance__DOT__core_reset 
            = (1U | (IData)(__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset));
        __VdlySet__gpu__DOT__dispatch_instance__DOT__core_block_id__v0 = 1U;
        __Vdly__gpu__DOT__dispatch_instance__DOT__core_start 
            = (1U & (IData)(__Vdly__gpu__DOT__dispatch_instance__DOT__core_start));
        __Vdly__gpu__DOT__dispatch_instance__DOT__core_reset 
            = (2U | (IData)(__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset));
        __VdlySet__gpu__DOT__dispatch_instance__DOT__core_block_id__v1 = 1U;
    } else if (vlSelfRef.start) {
        if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__start_execution)))) {
            vlSelfRef.gpu__DOT__dispatch_instance__DOT__unnamedblk2__DOT__i = 1U;
            __Vdly__gpu__DOT__dispatch_instance__DOT__start_execution = 1U;
            __Vdly__gpu__DOT__dispatch_instance__DOT__core_reset 
                = (1U | (IData)(__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset));
            vlSelfRef.gpu__DOT__dispatch_instance__DOT__unnamedblk2__DOT__i = 2U;
            __Vdly__gpu__DOT__dispatch_instance__DOT__core_reset 
                = (2U | (IData)(__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset));
        }
        if (((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_done) 
             == (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__total_blocks))) {
            vlSelfRef.gpu__DOT__dispatch_instance__DOT__done = 1U;
        }
        if ((1U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset))) {
            __Vdly__gpu__DOT__dispatch_instance__DOT__core_reset 
                = (2U & (IData)(__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset));
            if (((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched) 
                 < (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__total_blocks))) {
                __Vdly__gpu__DOT__dispatch_instance__DOT__core_start 
                    = (1U | (IData)(__Vdly__gpu__DOT__dispatch_instance__DOT__core_start));
                __VdlyVal__gpu__DOT__dispatch_instance__DOT__core_block_id__v2 
                    = vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched;
                __VdlySet__gpu__DOT__dispatch_instance__DOT__core_block_id__v2 = 1U;
                __VdlyVal__gpu__DOT__dispatch_instance__DOT__core_thread_count__v2 
                    = (((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched) 
                        == ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__total_blocks) 
                            - (IData)(1U))) ? (7U & 
                                               ((IData)(vlSelfRef.gpu__DOT__thread_count) 
                                                - VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched), 2U)))
                        : 4U);
                vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched)));
            }
        }
        if ((2U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset))) {
            __Vdly__gpu__DOT__dispatch_instance__DOT__core_reset 
                = (1U & (IData)(__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset));
            if (((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched) 
                 < (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__total_blocks))) {
                __Vdly__gpu__DOT__dispatch_instance__DOT__core_start 
                    = (2U | (IData)(__Vdly__gpu__DOT__dispatch_instance__DOT__core_start));
                __VdlyVal__gpu__DOT__dispatch_instance__DOT__core_block_id__v3 
                    = vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched;
                __VdlySet__gpu__DOT__dispatch_instance__DOT__core_block_id__v3 = 1U;
                __VdlyVal__gpu__DOT__dispatch_instance__DOT__core_thread_count__v3 
                    = (((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched) 
                        == ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__total_blocks) 
                            - (IData)(1U))) ? (7U & 
                                               ((IData)(vlSelfRef.gpu__DOT__thread_count) 
                                                - VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched), 2U)))
                        : 4U);
                vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched)));
            }
        }
        if ((1U & ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start) 
                   & (IData)(vlSelfRef.gpu__DOT__core_done)))) {
            vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_done 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_done)));
            __Vdly__gpu__DOT__dispatch_instance__DOT__core_reset 
                = (1U | (IData)(__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset));
            __Vdly__gpu__DOT__dispatch_instance__DOT__core_start 
                = (2U & (IData)(__Vdly__gpu__DOT__dispatch_instance__DOT__core_start));
        }
        if ((2U & ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start) 
                   & (IData)(vlSelfRef.gpu__DOT__core_done)))) {
            vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_done 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_done)));
            __Vdly__gpu__DOT__dispatch_instance__DOT__core_reset 
                = (2U | (IData)(__Vdly__gpu__DOT__dispatch_instance__DOT__core_reset));
            __Vdly__gpu__DOT__dispatch_instance__DOT__core_start 
                = (1U & (IData)(__Vdly__gpu__DOT__dispatch_instance__DOT__core_start));
        }
    }
    if ((1U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset))) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__next_pc = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__next_pc = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__next_pc = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__next_pc = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk1__DOT__i = 1U;
        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v0 = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready = 1U;
        __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp = 0U;
        __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state = 0U;
        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v0 = 1U;
        __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_threads_mask = 0U;
        __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v1 = 1U;
    } else {
        if ((1U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start))) {
            if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__divergence_event) 
                 & (6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state)))) {
                if ((vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
                     [1U] != (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate))) {
                    if (((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))
                          ? (2U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks
                             [(1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp))])
                          : 0U)) {
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head = 1U;
                    }
                }
                if ((vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
                     [2U] != (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate))) {
                    if (((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))
                          ? (4U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks
                             [(1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp))])
                          : 0U)) {
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head = 2U;
                    }
                }
                if ((vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
                     [3U] != (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate))) {
                    if (((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))
                          ? (8U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks
                             [(1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp))])
                          : 0U)) {
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head = 3U;
                    }
                }
            }
            if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event) 
                 & (5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state)))) {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head 
                    = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoin_event_head;
            }
        }
        if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__next_pc 
                    = (0xffU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_pc_mux)
                                 ? ((0U != ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__nzp) 
                                            & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp)))
                                     ? (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate)
                                     : ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event)
                                         ? (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event_pc)
                                         : ((IData)(1U) 
                                            + (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc))))
                                 : ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc))));
            }
        } else if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__next_pc 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc)));
        }
        if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__next_pc 
                    = (0xffU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_pc_mux)
                                 ? ((0U != ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__nzp) 
                                            & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp)))
                                     ? (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate)
                                     : ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event)
                                         ? (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event_pc)
                                         : ((IData)(1U) 
                                            + (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc))))
                                 : ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc))));
            }
        } else if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__next_pc 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc)));
        }
        if ((4U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__next_pc 
                    = (0xffU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_pc_mux)
                                 ? ((0U != ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__nzp) 
                                            & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp)))
                                     ? (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate)
                                     : ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event)
                                         ? (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event_pc)
                                         : ((IData)(1U) 
                                            + (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc))))
                                 : ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc))));
            }
        } else if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__next_pc 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc)));
        }
        if ((8U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__next_pc 
                    = (0xffU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_pc_mux)
                                 ? ((0U != ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__nzp) 
                                            & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp)))
                                     ? (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate)
                                     : ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event)
                                         ? (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event_pc)
                                         : ((IData)(1U) 
                                            + (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc))))
                                 : ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc))));
            }
        } else if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__next_pc 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc)));
        }
        if ((4U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state))) {
            if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state))) {
                if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state)))) {
                    if (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_ret) {
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h920e3ca9__0 = 7U;
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h39e7ab3d__0 = 0U;
                        if ((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))) {
                            __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1 
                                = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h920e3ca9__0;
                            __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1 
                                = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                            __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1 = 1U;
                            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready 
                                = (((~ ((IData)(1U) 
                                        << (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))) 
                                    & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready)) 
                                   | (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h39e7ab3d__0) 
                                            << (1U 
                                                & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))));
                        }
                    } else if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event) 
                                & (~ (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__empty)))) {
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_hbb256656__0 = 0U;
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_hfc72edf2__0 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__rejoin_event_pc;
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h39e7ab3d__1 = 1U;
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h920e3ca9__1 = 1U;
                        if ((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))) {
                            __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1 
                                = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_hbb256656__0;
                            __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1 
                                = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                            __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1 = 1U;
                            __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1 
                                = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_hfc72edf2__0;
                            __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1 
                                = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                            __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1 = 1U;
                            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready 
                                = (((~ ((IData)(1U) 
                                        << (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))) 
                                    & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready)) 
                                   | (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h39e7ab3d__1) 
                                            << (1U 
                                                & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))));
                            __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2 
                                = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h920e3ca9__1;
                            __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2 
                                = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                            __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2 = 1U;
                        }
                    } else {
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_hbb256656__1 = 0U;
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_hfc72edf2__1 
                            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
                            [(3U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__head))];
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h39e7ab3d__2 = 1U;
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h920e3ca9__2 = 1U;
                        if ((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))) {
                            __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2 
                                = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_hbb256656__1;
                            __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2 
                                = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                            __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2 = 1U;
                            __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2 
                                = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_hfc72edf2__1;
                            __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2 
                                = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                            __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2 = 1U;
                            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready 
                                = (((~ ((IData)(1U) 
                                        << (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))) 
                                    & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready)) 
                                   | (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h39e7ab3d__2) 
                                            << (1U 
                                                & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))));
                            __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3 
                                = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h920e3ca9__2;
                            __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3 
                                = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                            __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3 = 1U;
                        }
                    }
                    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state))) {
                __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state = 6U;
            } else {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__any_lsu_waiting = 0U;
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i = 0U;
                {
                    while (VL_GTS_III(32, 4U, vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i)) {
                        if (((1U == vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_state
                              [(3U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i)]) 
                             | (2U == vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_state
                                [(3U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i)]))) {
                            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__any_lsu_waiting = 1U;
                            goto __Vlabel5;
                        }
                        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i 
                            = ((IData)(1U) + vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i);
                    }
                    __Vlabel5: ;
                }
                if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__any_lsu_waiting)))) {
                    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state = 5U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state))) {
            __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state 
                = ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state))
                    ? 4U : 3U);
        } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state))) {
            if ((2U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_state))) {
                __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state = 2U;
            }
        } else if ((1U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start))) {
            __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp 
                = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp;
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_hfb768481__0 = 1U;
            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h9de7772c__0 = 0U;
            if ((0U >= (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp))) {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__current_pc 
                    = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs
                    [vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp];
                __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state 
                    = (7U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states
                       [vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp]);
                __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3 
                    = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_hfb768481__0;
                __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3 
                    = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp;
                __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3 = 1U;
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp))) 
                        & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready)) 
                       | (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h9de7772c__0) 
                                << (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp))));
            } else {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__current_pc = 0U;
                __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state = 0U;
            }
            __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp 
                = (((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp) 
                    == ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__total_warps) 
                        - (IData)(1U))) ? 0U : (1U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp))));
        }
        if ((0U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp))) {
            if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__divergence_event) 
                 & (6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state)))) {
                __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4 
                    = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask;
                __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4 
                    = (3U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer));
                __VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4 = 1U;
                __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_stack__v0 
                    = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head_next;
                __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_stack__v0 
                    = (3U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer));
                __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack__v4 
                    = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
                __VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack__v4 
                    = (3U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer));
                __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer)));
            }
            if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event) 
                 & (4U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state)))) {
                if ((0U < (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer))) {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_threads_mask 
                        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack
                        [(3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer) 
                                - (IData)(1U)))];
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__empty = 0U;
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_head 
                        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_stack
                        [(3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer) 
                                - (IData)(1U)))];
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_pc 
                        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack
                        [(3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer) 
                                - (IData)(1U)))];
                    __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer 
                        = (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer) 
                                   - (IData)(1U)));
                } else {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__empty = 1U;
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_threads_mask = 0xfU;
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_head = 0U;
                }
            }
        }
    }
    if ((2U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset))) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__next_pc = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__next_pc = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__next_pc = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__next_pc = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk1__DOT__i = 1U;
        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v0 = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready = 1U;
        __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp = 0U;
        __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state = 0U;
        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v0 = 1U;
        __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_threads_mask = 0U;
        __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v1 = 1U;
    } else {
        if ((2U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start))) {
            if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__divergence_event) 
                 & (6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state)))) {
                if ((vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
                     [1U] != (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate))) {
                    if (((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))
                          ? (2U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks
                             [(1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp))])
                          : 0U)) {
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head = 1U;
                    }
                }
                if ((vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
                     [2U] != (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate))) {
                    if (((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))
                          ? (4U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks
                             [(1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp))])
                          : 0U)) {
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head = 2U;
                    }
                }
                if ((vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
                     [3U] != (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate))) {
                    if (((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))
                          ? (8U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks
                             [(1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp))])
                          : 0U)) {
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head = 3U;
                    }
                }
            }
            if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event) 
                 & (5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state)))) {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head 
                    = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoin_event_head;
            }
        }
        if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__next_pc 
                    = (0xffU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_pc_mux)
                                 ? ((0U != ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__nzp) 
                                            & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp)))
                                     ? (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate)
                                     : ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event)
                                         ? (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event_pc)
                                         : ((IData)(1U) 
                                            + (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc))))
                                 : ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc))));
            }
        } else if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__next_pc 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc)));
        }
        if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__next_pc 
                    = (0xffU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_pc_mux)
                                 ? ((0U != ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__nzp) 
                                            & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp)))
                                     ? (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate)
                                     : ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event)
                                         ? (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event_pc)
                                         : ((IData)(1U) 
                                            + (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc))))
                                 : ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc))));
            }
        } else if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__next_pc 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc)));
        }
        if ((4U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__next_pc 
                    = (0xffU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_pc_mux)
                                 ? ((0U != ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__nzp) 
                                            & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp)))
                                     ? (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate)
                                     : ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event)
                                         ? (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event_pc)
                                         : ((IData)(1U) 
                                            + (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc))))
                                 : ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc))));
            }
        } else if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__next_pc 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc)));
        }
        if ((8U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__next_pc 
                    = (0xffU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_pc_mux)
                                 ? ((0U != ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__nzp) 
                                            & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp)))
                                     ? (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate)
                                     : ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event)
                                         ? (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event_pc)
                                         : ((IData)(1U) 
                                            + (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc))))
                                 : ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc))));
            }
        } else if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__next_pc 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc)));
        }
        if ((4U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state))) {
            if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state))) {
                if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state)))) {
                    if (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_ret) {
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h920e3ca9__0 = 7U;
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h39e7ab3d__0 = 0U;
                        if ((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))) {
                            __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1 
                                = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h920e3ca9__0;
                            __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1 
                                = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                            __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1 = 1U;
                            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready 
                                = (((~ ((IData)(1U) 
                                        << (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))) 
                                    & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready)) 
                                   | (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h39e7ab3d__0) 
                                            << (1U 
                                                & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))));
                        }
                    } else if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event) 
                                & (~ (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__empty)))) {
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_hbb256656__0 = 0U;
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_hfc72edf2__0 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__rejoin_event_pc;
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h39e7ab3d__1 = 1U;
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h920e3ca9__1 = 1U;
                        if ((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))) {
                            __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1 
                                = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_hbb256656__0;
                            __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1 
                                = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                            __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1 = 1U;
                            __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1 
                                = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_hfc72edf2__0;
                            __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1 
                                = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                            __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1 = 1U;
                            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready 
                                = (((~ ((IData)(1U) 
                                        << (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))) 
                                    & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready)) 
                                   | (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h39e7ab3d__1) 
                                            << (1U 
                                                & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))));
                            __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2 
                                = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h920e3ca9__1;
                            __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2 
                                = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                            __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2 = 1U;
                        }
                    } else {
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_hbb256656__1 = 0U;
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_hfc72edf2__1 
                            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
                            [(3U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__head))];
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h39e7ab3d__2 = 1U;
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h920e3ca9__2 = 1U;
                        if ((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))) {
                            __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2 
                                = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_hbb256656__1;
                            __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2 
                                = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                            __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2 = 1U;
                            __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2 
                                = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_hfc72edf2__1;
                            __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2 
                                = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                            __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2 = 1U;
                            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready 
                                = (((~ ((IData)(1U) 
                                        << (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))) 
                                    & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready)) 
                                   | (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h39e7ab3d__2) 
                                            << (1U 
                                                & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))));
                            __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3 
                                = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h920e3ca9__2;
                            __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3 
                                = (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
                            __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3 = 1U;
                        }
                    }
                    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state))) {
                __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state = 6U;
            } else {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__any_lsu_waiting = 0U;
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i = 0U;
                {
                    while (VL_GTS_III(32, 4U, vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i)) {
                        if (((1U == vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_state
                              [(3U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i)]) 
                             | (2U == vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_state
                                [(3U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i)]))) {
                            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__any_lsu_waiting = 1U;
                            goto __Vlabel6;
                        }
                        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i 
                            = ((IData)(1U) + vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i);
                    }
                    __Vlabel6: ;
                }
                if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__any_lsu_waiting)))) {
                    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state = 5U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state))) {
            __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state 
                = ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state))
                    ? 4U : 3U);
        } else if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state))) {
            if ((2U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_state))) {
                __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state = 2U;
            }
        } else if ((2U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start))) {
            __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp 
                = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp;
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_hfb768481__0 = 1U;
            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h9de7772c__0 = 0U;
            if ((0U >= (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp))) {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__current_pc 
                    = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs
                    [vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp];
                __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state 
                    = (7U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states
                       [vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp]);
                __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3 
                    = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_hfb768481__0;
                __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3 
                    = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp;
                __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3 = 1U;
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp))) 
                        & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready)) 
                       | (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT____Vlvbound_h9de7772c__0) 
                                << (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp))));
            } else {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__current_pc = 0U;
                __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state = 0U;
            }
            __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp 
                = (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp) 
                    == ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__total_warps) 
                        - (IData)(1U))) ? 0U : (1U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp))));
        }
        if ((0U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp))) {
            if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__divergence_event) 
                 & (6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state)))) {
                __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4 
                    = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask;
                __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4 
                    = (3U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer));
                __VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4 = 1U;
                __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_stack__v0 
                    = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head_next;
                __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_stack__v0 
                    = (3U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer));
                __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack__v4 
                    = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
                __VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack__v4 
                    = (3U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer));
                __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer)));
            }
            if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event) 
                 & (4U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state)))) {
                if ((0U < (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer))) {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_threads_mask 
                        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack
                        [(3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer) 
                                - (IData)(1U)))];
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__empty = 0U;
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_head 
                        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_stack
                        [(3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer) 
                                - (IData)(1U)))];
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_pc 
                        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack
                        [(3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer) 
                                - (IData)(1U)))];
                    __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer 
                        = (0xfU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer) 
                                   - (IData)(1U)));
                } else {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__empty = 1U;
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_threads_mask = 0xfU;
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_head = 0U;
                }
            }
        }
    }
    vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__controller_state.commit(vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state);
    vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__current_consumer.commit(vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer);
    vlSelfRef.gpu__DOT__lsu_read_address[0U] = __VdlyVal__gpu__DOT__lsu_read_address__v0;
    vlSelfRef.gpu__DOT__lsu_read_address[1U] = __VdlyVal__gpu__DOT__lsu_read_address__v1;
    vlSelfRef.gpu__DOT__lsu_read_address[2U] = __VdlyVal__gpu__DOT__lsu_read_address__v2;
    vlSelfRef.gpu__DOT__lsu_read_address[3U] = __VdlyVal__gpu__DOT__lsu_read_address__v3;
    vlSelfRef.gpu__DOT__lsu_read_address[4U] = __VdlyVal__gpu__DOT__lsu_read_address__v4;
    vlSelfRef.gpu__DOT__lsu_read_address[5U] = __VdlyVal__gpu__DOT__lsu_read_address__v5;
    vlSelfRef.gpu__DOT__lsu_read_address[6U] = __VdlyVal__gpu__DOT__lsu_read_address__v6;
    vlSelfRef.gpu__DOT__lsu_read_address[7U] = __VdlyVal__gpu__DOT__lsu_read_address__v7;
    vlSelfRef.gpu__DOT__lsu_write_address[0U] = __VdlyVal__gpu__DOT__lsu_write_address__v0;
    vlSelfRef.gpu__DOT__lsu_write_address[1U] = __VdlyVal__gpu__DOT__lsu_write_address__v1;
    vlSelfRef.gpu__DOT__lsu_write_address[2U] = __VdlyVal__gpu__DOT__lsu_write_address__v2;
    vlSelfRef.gpu__DOT__lsu_write_address[3U] = __VdlyVal__gpu__DOT__lsu_write_address__v3;
    vlSelfRef.gpu__DOT__lsu_write_address[4U] = __VdlyVal__gpu__DOT__lsu_write_address__v4;
    vlSelfRef.gpu__DOT__lsu_write_address[5U] = __VdlyVal__gpu__DOT__lsu_write_address__v5;
    vlSelfRef.gpu__DOT__lsu_write_address[6U] = __VdlyVal__gpu__DOT__lsu_write_address__v6;
    vlSelfRef.gpu__DOT__lsu_write_address[7U] = __VdlyVal__gpu__DOT__lsu_write_address__v7;
    vlSelfRef.gpu__DOT__lsu_write_data[0U] = __VdlyVal__gpu__DOT__lsu_write_data__v0;
    vlSelfRef.gpu__DOT__lsu_write_data[1U] = __VdlyVal__gpu__DOT__lsu_write_data__v1;
    vlSelfRef.gpu__DOT__lsu_write_data[2U] = __VdlyVal__gpu__DOT__lsu_write_data__v2;
    vlSelfRef.gpu__DOT__lsu_write_data[3U] = __VdlyVal__gpu__DOT__lsu_write_data__v3;
    vlSelfRef.gpu__DOT__lsu_write_data[4U] = __VdlyVal__gpu__DOT__lsu_write_data__v4;
    vlSelfRef.gpu__DOT__lsu_write_data[5U] = __VdlyVal__gpu__DOT__lsu_write_data__v5;
    vlSelfRef.gpu__DOT__lsu_write_data[6U] = __VdlyVal__gpu__DOT__lsu_write_data__v6;
    vlSelfRef.gpu__DOT__lsu_write_data[7U] = __VdlyVal__gpu__DOT__lsu_write_data__v7;
    if (__VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v0) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data[0U] = 0U;
    }
    if (__VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v1) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data[1U] = 0U;
    }
    if (__VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v2) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data[2U] = 0U;
    }
    if (__VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v3) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data[3U] = 0U;
    }
    if (__VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v4) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data[__VdlyDim0__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v4] 
            = __VdlyVal__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v4;
    }
    if (__VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v5) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data[__VdlyDim0__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v5] 
            = __VdlyVal__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v5;
    }
    if (__VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v6) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data[__VdlyDim0__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v6] 
            = __VdlyVal__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v6;
    }
    if (__VdlySet__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v7) {
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data[__VdlyDim0__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v7] 
            = __VdlyVal__gpu__DOT__data_memory_controller__DOT__consumer_read_data__v7;
    }
    vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_read_address.commit(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address);
    vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_write_address.commit(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address);
    vlSelfRef.__VdlyCommitQueuegpu__DOT__data_memory_controller__DOT__mem_write_data.commit(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data);
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v0) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks[0U] = 0xfU;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1] 
            = ((0xdU & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks
                [__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1]) 
               | ((IData)(__VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1) 
                  << 1U));
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2] 
            = ((0xbU & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks
                [__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2]) 
               | ((IData)(__VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2) 
                  << 2U));
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3] 
            = ((7U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks
                [__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3]) 
               | ((IData)(__VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3) 
                  << 3U));
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v0) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks[0U] = 0xfU;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1] 
            = ((0xdU & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks
                [__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1]) 
               | ((IData)(__VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v1) 
                  << 1U));
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2] 
            = ((0xbU & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks
                [__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2]) 
               | ((IData)(__VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v2) 
                  << 2U));
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3] 
            = ((7U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks
                [__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3]) 
               | ((IData)(__VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v3) 
                  << 3U));
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks__v4;
    }
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__start_execution 
        = __Vdly__gpu__DOT__dispatch_instance__DOT__start_execution;
    if (__VdlySet__gpu__DOT__dispatch_instance__DOT__core_block_id__v0) {
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id[0U] = 0U;
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count[0U] = 4U;
    }
    if (__VdlySet__gpu__DOT__dispatch_instance__DOT__core_block_id__v1) {
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id[1U] = 0U;
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count[1U] = 4U;
    }
    if (__VdlySet__gpu__DOT__dispatch_instance__DOT__core_block_id__v2) {
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id[0U] 
            = __VdlyVal__gpu__DOT__dispatch_instance__DOT__core_block_id__v2;
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count[0U] 
            = __VdlyVal__gpu__DOT__dispatch_instance__DOT__core_thread_count__v2;
    }
    if (__VdlySet__gpu__DOT__dispatch_instance__DOT__core_block_id__v3) {
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id[1U] 
            = __VdlyVal__gpu__DOT__dispatch_instance__DOT__core_block_id__v3;
        vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count[1U] 
            = __VdlyVal__gpu__DOT__dispatch_instance__DOT__core_thread_count__v3;
    }
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp 
        = __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp;
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v0) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states[0U] = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status[0U] = 0U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2;
    }
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp 
        = __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp;
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v1;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v2;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status__v3;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v1;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v2;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states__v3;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v0) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states[0U] = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status[0U] = 0U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v1;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs__v2;
    }
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer 
        = __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer;
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v0) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack[0U] = 0U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v1) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack[3U] = 0U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_stack[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_stack__v0] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_stack__v0;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack[__VdlyDim0__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack__v4] 
            = __VdlyVal__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack__v4;
    }
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp 
        = __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer 
        = __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__stack_pointer;
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v0) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack[0U] = 0U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v1) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack[3U] = 0U;
    }
    if (__VdlySet__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_stack__v4;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_stack[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_stack__v0] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_stack__v0;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack[__VdlyDim0__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack__v4] 
            = __VdlyVal__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__pc_stack__v4;
    }
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp 
        = __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups[0U][0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
        [0U][0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups[0U][1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
        [0U][1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups[0U][2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
        [0U][2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups[0U][3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
        [0U][3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups[0U][0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
        [0U][0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups[0U][1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
        [0U][1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups[0U][2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
        [0U][2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups[0U][3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
        [0U][3U];
    vlSelfRef.gpu__DOT__dcr_instance__DOT__thread_count 
        = vlSelfRef.gpu__DOT__dcr_instance__DOT__device_conrol_register;
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__total_blocks 
        = (0xffU & (((IData)(3U) + (IData)(vlSelfRef.gpu__DOT__dcr_instance__DOT__device_conrol_register)) 
                    >> 2U));
    vlSelfRef.gpu__DOT__thread_count = vlSelfRef.gpu__DOT__dcr_instance__DOT__device_conrol_register;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__done 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__done 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__done 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__done 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done;
    vlSelfRef.gpu__DOT__core_done = (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done) 
                                      << 1U) | (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_ret 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_ret;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_ret 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_ret;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_pc_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_pc_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rt_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rt_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rd_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rs_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rs_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_pc_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_pc_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rt_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rt_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rd_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rs_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rs_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__instruction;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__program_mem_read_valid 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_valid;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__program_mem_read_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__instruction;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__program_mem_read_valid 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_valid;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__program_mem_read_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_address;
    if (vlSelfRef.reset) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__channel_serving_consumer = 0U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_valid = 0U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_write_valid = 0U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready = 0U;
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_ready = 0U;
        vlSelfRef.__VdlyCommitQueuegpu__DOT__program_memory_controller__DOT__mem_read_address.enqueue(0U, 0U);
        vlSelfRef.__VdlyCommitQueuegpu__DOT__program_memory_controller__DOT__mem_write_address.enqueue(0U, 0U);
        vlSelfRef.__VdlyCommitQueuegpu__DOT__program_memory_controller__DOT__mem_write_data.enqueue(0U, 0U);
        __VdlySet__gpu__DOT__program_memory_controller__DOT__consumer_read_data__v0 = 1U;
        vlSelfRef.__VdlyCommitQueuegpu__DOT__program_memory_controller__DOT__current_consumer.enqueue(0U, 0U);
        vlSelfRef.__VdlyCommitQueuegpu__DOT__program_memory_controller__DOT__controller_state.enqueue(0U, 0U);
    } else {
        if ((0U == vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state
             [0U])) {
            vlSelfRef.gpu__DOT__program_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0U;
            {
                while (VL_GTS_III(32, 2U, vlSelfRef.gpu__DOT__program_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)) {
                    if ((1U & (((IData)(vlSelfRef.gpu__DOT__fetcher_read_valid) 
                                >> (1U & vlSelfRef.gpu__DOT__program_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)) 
                               & (~ ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__channel_serving_consumer) 
                                     >> (1U & vlSelfRef.gpu__DOT__program_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)))))) {
                        vlSelfRef.gpu__DOT__program_memory_controller__DOT__channel_serving_consumer 
                            = ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__channel_serving_consumer) 
                               | (3U & ((IData)(1U) 
                                        << (1U & vlSelfRef.gpu__DOT__program_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j))));
                        vlSelfRef.gpu__DOT__program_memory_controller__DOT____Vlvbound_hf51c3ca2__0 
                            = (1U & vlSelfRef.gpu__DOT__program_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
                        __VdlyVal__gpu__DOT__program_memory_controller__DOT__current_consumer__v1 
                            = vlSelfRef.gpu__DOT__program_memory_controller__DOT____Vlvbound_hf51c3ca2__0;
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__program_memory_controller__DOT__current_consumer.enqueue(__VdlyVal__gpu__DOT__program_memory_controller__DOT__current_consumer__v1, 0U);
                        vlSelfRef.gpu__DOT__program_memory_controller__DOT____Vlvbound_h7796e796__0 = 1U;
                        vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_valid 
                            = vlSelfRef.gpu__DOT__program_memory_controller__DOT____Vlvbound_h7796e796__0;
                        vlSelfRef.gpu__DOT__program_memory_controller__DOT____Vlvbound_h2fbf086c__0 
                            = vlSelfRef.gpu__DOT__fetcher_read_address
                            [(1U & vlSelfRef.gpu__DOT__program_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)];
                        __VdlyVal__gpu__DOT__program_memory_controller__DOT__mem_read_address__v1 
                            = vlSelfRef.gpu__DOT__program_memory_controller__DOT____Vlvbound_h2fbf086c__0;
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__program_memory_controller__DOT__mem_read_address.enqueue(__VdlyVal__gpu__DOT__program_memory_controller__DOT__mem_read_address__v1, 0U);
                        vlSelfRef.gpu__DOT__program_memory_controller__DOT____Vlvbound_hd1a26f10__0 = 2U;
                        __VdlyVal__gpu__DOT__program_memory_controller__DOT__controller_state__v1 
                            = vlSelfRef.gpu__DOT__program_memory_controller__DOT____Vlvbound_hd1a26f10__0;
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__program_memory_controller__DOT__controller_state.enqueue(__VdlyVal__gpu__DOT__program_memory_controller__DOT__controller_state__v1, 0U);
                        goto __Vlabel7;
                    } else if ((1U & (((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid) 
                                       >> (1U & vlSelfRef.gpu__DOT__program_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)) 
                                      & (~ ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__channel_serving_consumer) 
                                            >> (1U 
                                                & vlSelfRef.gpu__DOT__program_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)))))) {
                        vlSelfRef.gpu__DOT__program_memory_controller__DOT__channel_serving_consumer 
                            = ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__channel_serving_consumer) 
                               | (3U & ((IData)(1U) 
                                        << (1U & vlSelfRef.gpu__DOT__program_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j))));
                        vlSelfRef.gpu__DOT__program_memory_controller__DOT____Vlvbound_hf51c3ca2__1 
                            = (1U & vlSelfRef.gpu__DOT__program_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
                        __VdlyVal__gpu__DOT__program_memory_controller__DOT__current_consumer__v2 
                            = vlSelfRef.gpu__DOT__program_memory_controller__DOT____Vlvbound_hf51c3ca2__1;
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__program_memory_controller__DOT__current_consumer.enqueue(__VdlyVal__gpu__DOT__program_memory_controller__DOT__current_consumer__v2, 0U);
                        vlSelfRef.gpu__DOT__program_memory_controller__DOT____Vlvbound_h198e8bbb__0 = 1U;
                        vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_write_valid 
                            = vlSelfRef.gpu__DOT__program_memory_controller__DOT____Vlvbound_h198e8bbb__0;
                        vlSelfRef.gpu__DOT__program_memory_controller__DOT____Vlvbound_h7cba4470__0 
                            = vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address
                            [(1U & vlSelfRef.gpu__DOT__program_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)];
                        __VdlyVal__gpu__DOT__program_memory_controller__DOT__mem_write_address__v1 
                            = vlSelfRef.gpu__DOT__program_memory_controller__DOT____Vlvbound_h7cba4470__0;
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__program_memory_controller__DOT__mem_write_address.enqueue(__VdlyVal__gpu__DOT__program_memory_controller__DOT__mem_write_address__v1, 0U);
                        vlSelfRef.gpu__DOT__program_memory_controller__DOT____Vlvbound_h4c27d88a__0 
                            = vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_data
                            [(1U & vlSelfRef.gpu__DOT__program_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)];
                        __VdlyVal__gpu__DOT__program_memory_controller__DOT__mem_write_data__v1 
                            = vlSelfRef.gpu__DOT__program_memory_controller__DOT____Vlvbound_h4c27d88a__0;
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__program_memory_controller__DOT__mem_write_data.enqueue(__VdlyVal__gpu__DOT__program_memory_controller__DOT__mem_write_data__v1, 0U);
                        vlSelfRef.gpu__DOT__program_memory_controller__DOT____Vlvbound_hd1a26f10__1 = 3U;
                        __VdlyVal__gpu__DOT__program_memory_controller__DOT__controller_state__v2 
                            = vlSelfRef.gpu__DOT__program_memory_controller__DOT____Vlvbound_hd1a26f10__1;
                        vlSelfRef.__VdlyCommitQueuegpu__DOT__program_memory_controller__DOT__controller_state.enqueue(__VdlyVal__gpu__DOT__program_memory_controller__DOT__controller_state__v2, 0U);
                        goto __Vlabel7;
                    }
                    vlSelfRef.gpu__DOT__program_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j 
                        = ((IData)(1U) + vlSelfRef.gpu__DOT__program_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
                }
                __Vlabel7: ;
            }
        } else if ((2U == vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state
                    [0U])) {
            if (vlSelfRef.program_mem_read_ready) {
                vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_valid = 0U;
                vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready 
                    = ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready) 
                       | (3U & ((IData)(1U) << vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                [0U])));
                __VdlyVal__gpu__DOT__program_memory_controller__DOT__consumer_read_data__v1 
                    = vlSelfRef.program_mem_read_data
                    [0U];
                __VdlyDim0__gpu__DOT__program_memory_controller__DOT__consumer_read_data__v1 
                    = vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                    [0U];
                __VdlySet__gpu__DOT__program_memory_controller__DOT__consumer_read_data__v1 = 1U;
                vlSelfRef.__VdlyCommitQueuegpu__DOT__program_memory_controller__DOT__controller_state.enqueue(4U, 0U);
            }
        } else if ((3U == vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state
                    [0U])) {
            if (vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_write_ready) {
                vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_write_valid = 0U;
                vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_ready 
                    = ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_ready) 
                       | (3U & ((IData)(1U) << vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                                [0U])));
                vlSelfRef.__VdlyCommitQueuegpu__DOT__program_memory_controller__DOT__controller_state.enqueue(5U, 0U);
            }
        } else if ((4U == vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state
                    [0U])) {
            if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__fetcher_read_valid) 
                          >> vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                          [0U])))) {
                vlSelfRef.gpu__DOT__program_memory_controller__DOT__channel_serving_consumer 
                    = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                           [0U])) & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__channel_serving_consumer));
                vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready 
                    = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                           [0U])) & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready));
                vlSelfRef.__VdlyCommitQueuegpu__DOT__program_memory_controller__DOT__controller_state.enqueue(0U, 0U);
            }
        } else if ((5U == vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state
                    [0U])) {
            if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid) 
                          >> vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                          [0U])))) {
                vlSelfRef.gpu__DOT__program_memory_controller__DOT__channel_serving_consumer 
                    = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                           [0U])) & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__channel_serving_consumer));
                vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_ready 
                    = ((~ ((IData)(1U) << vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer
                           [0U])) & (IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_ready));
                vlSelfRef.__VdlyCommitQueuegpu__DOT__program_memory_controller__DOT__controller_state.enqueue(0U, 0U);
            }
        }
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__unnamedblk2__DOT__i = 1U;
    }
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_state[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_address[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_address[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_data[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_state[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_address[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_address[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_data[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_state[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_address[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_address[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_data[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_state[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_address[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_address[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_data[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_data[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_data[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_data[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_data[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready 
        = (0xfU & (IData)(vlSelfRef.gpu__DOT__lsu_read_ready));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready 
        = (0xfU & (IData)(vlSelfRef.gpu__DOT__lsu_write_ready));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_state[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_address[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_address[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_data[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_state[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_address[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_address[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_data[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_state[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_address[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_address[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_data[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_state[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_address[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_address[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_data[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_data[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_data[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_data[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_data[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready 
        = (0xfU & ((IData)(vlSelfRef.gpu__DOT__lsu_read_ready) 
                   >> 4U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready 
        = (0xfU & ((IData)(vlSelfRef.gpu__DOT__lsu_write_ready) 
                   >> 4U));
    vlSelfRef.data_mem_read_valid = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid;
    vlSelfRef.gpu__DOT__data_mem_read_valid = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid;
    vlSelfRef.data_mem_write_valid = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid;
    vlSelfRef.gpu__DOT__data_mem_write_valid = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address[7U] 
        = vlSelfRef.gpu__DOT__lsu_read_address[7U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address[6U] 
        = vlSelfRef.gpu__DOT__lsu_read_address[6U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address[5U] 
        = vlSelfRef.gpu__DOT__lsu_read_address[5U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address[4U] 
        = vlSelfRef.gpu__DOT__lsu_read_address[4U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address[3U] 
        = vlSelfRef.gpu__DOT__lsu_read_address[3U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address[2U] 
        = vlSelfRef.gpu__DOT__lsu_read_address[2U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address[1U] 
        = vlSelfRef.gpu__DOT__lsu_read_address[1U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address[0U] 
        = vlSelfRef.gpu__DOT__lsu_read_address[0U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address[7U] 
        = vlSelfRef.gpu__DOT__lsu_write_address[7U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address[6U] 
        = vlSelfRef.gpu__DOT__lsu_write_address[6U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address[5U] 
        = vlSelfRef.gpu__DOT__lsu_write_address[5U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address[4U] 
        = vlSelfRef.gpu__DOT__lsu_write_address[4U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address[3U] 
        = vlSelfRef.gpu__DOT__lsu_write_address[3U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address[2U] 
        = vlSelfRef.gpu__DOT__lsu_write_address[2U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address[1U] 
        = vlSelfRef.gpu__DOT__lsu_write_address[1U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address[0U] 
        = vlSelfRef.gpu__DOT__lsu_write_address[0U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data[7U] 
        = vlSelfRef.gpu__DOT__lsu_write_data[7U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data[6U] 
        = vlSelfRef.gpu__DOT__lsu_write_data[6U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data[5U] 
        = vlSelfRef.gpu__DOT__lsu_write_data[5U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data[4U] 
        = vlSelfRef.gpu__DOT__lsu_write_data[4U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data[3U] 
        = vlSelfRef.gpu__DOT__lsu_write_data[3U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data[2U] 
        = vlSelfRef.gpu__DOT__lsu_write_data[2U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data[1U] 
        = vlSelfRef.gpu__DOT__lsu_write_data[1U];
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data[0U] 
        = vlSelfRef.gpu__DOT__lsu_write_data[0U];
    vlSelfRef.gpu__DOT__lsu_read_data[7U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data
        [7U];
    vlSelfRef.gpu__DOT__lsu_read_data[6U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data
        [6U];
    vlSelfRef.gpu__DOT__lsu_read_data[5U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data
        [5U];
    vlSelfRef.gpu__DOT__lsu_read_data[4U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data
        [4U];
    vlSelfRef.gpu__DOT__lsu_read_data[3U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data
        [3U];
    vlSelfRef.gpu__DOT__lsu_read_data[2U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data
        [2U];
    vlSelfRef.gpu__DOT__lsu_read_data[1U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data
        [1U];
    vlSelfRef.gpu__DOT__lsu_read_data[0U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data
        [0U];
    vlSelfRef.gpu__DOT__data_mem_read_address[3U] = 
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address
        [3U];
    vlSelfRef.gpu__DOT__data_mem_read_address[2U] = 
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address
        [2U];
    vlSelfRef.gpu__DOT__data_mem_read_address[1U] = 
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address
        [1U];
    vlSelfRef.gpu__DOT__data_mem_read_address[0U] = 
        vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address
        [0U];
    vlSelfRef.gpu__DOT__data_mem_write_address[3U] 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address
        [3U];
    vlSelfRef.gpu__DOT__data_mem_write_address[2U] 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address
        [2U];
    vlSelfRef.gpu__DOT__data_mem_write_address[1U] 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address
        [1U];
    vlSelfRef.gpu__DOT__data_mem_write_address[0U] 
        = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address
        [0U];
    vlSelfRef.gpu__DOT__data_mem_write_data[3U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data
        [3U];
    vlSelfRef.gpu__DOT__data_mem_write_data[2U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data
        [2U];
    vlSelfRef.gpu__DOT__data_mem_write_data[1U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data
        [1U];
    vlSelfRef.gpu__DOT__data_mem_write_data[0U] = vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data
        [0U];
    vlSelfRef.gpu__DOT__lsu_read_valid = ((0xc0U & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid)) 
                                          | ((0x20U 
                                              & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_valid) 
                                                 << 4U)) 
                                             | ((0x10U 
                                                 & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_valid) 
                                                    << 4U)) 
                                                | (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_valid))));
    vlSelfRef.gpu__DOT__lsu_read_valid = ((0x3fU & (IData)(vlSelfRef.gpu__DOT__lsu_read_valid)) 
                                          | (0xc0U 
                                             & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_valid) 
                                                << 4U)));
    vlSelfRef.gpu__DOT__lsu_write_valid = ((0xc0U & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                                           | ((0x20U 
                                               & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_valid) 
                                                  << 4U)) 
                                              | ((0x10U 
                                                  & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_valid) 
                                                     << 4U)) 
                                                 | (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_valid))));
    vlSelfRef.gpu__DOT__lsu_write_valid = ((0x3fU & (IData)(vlSelfRef.gpu__DOT__lsu_write_valid)) 
                                           | (0xc0U 
                                              & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_valid) 
                                                 << 4U)));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__head 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__masks[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__head 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__masks[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks
        [0U];
    vlSelfRef.done = vlSelfRef.gpu__DOT__dispatch_instance__DOT__done;
    vlSelfRef.gpu__DOT__done = vlSelfRef.gpu__DOT__dispatch_instance__DOT__done;
    vlSelfRef.gpu__DOT__core_block_id[1U] = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id
        [1U];
    vlSelfRef.gpu__DOT__core_block_id[0U] = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id
        [0U];
    vlSelfRef.gpu__DOT__core_thread_count[1U] = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count
        [1U];
    vlSelfRef.gpu__DOT__core_thread_count[0U] = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_states[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_status[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_states[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_status[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoining_threads_mask 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_threads_mask;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoin_event_head 
        = (0xfU & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_head));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__empty 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__empty;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__empty 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__empty;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__enable 
        = (0U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__warp 
        = (3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__warp 
        = (3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__warp 
        = (3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__warp 
        = (3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoining_threads_mask 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_threads_mask;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoin_event_head 
        = (0xfU & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_head));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__empty 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__empty;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__empty 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__empty;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoining_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__enable 
        = (0U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__warp 
        = (3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__warp 
        = (3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__warp 
        = (3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__warp 
        = (3U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_ids[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_ids[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_ids[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_ids[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_groups[0U][0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
        [0U][0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_groups[0U][1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
        [0U][1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_groups[0U][2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
        [0U][2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_groups[0U][3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
        [0U][3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_ids[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_ids[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_ids[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_ids[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_groups[0U][0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
        [0U][0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_groups[0U][1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
        [0U][1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_groups[0U][2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
        [0U][2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_groups[0U][3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
        [0U][3U];
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__thread_count 
        = vlSelfRef.gpu__DOT__thread_count;
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_done 
        = vlSelfRef.gpu__DOT__core_done;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_ret 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_ret;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_ret 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_ret;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_pc_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_pc_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_pc_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_pc_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rt_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rt_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rt_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rt_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rs_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rs_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rs_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rs_address;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_pc_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_pc_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_pc_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_pc_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rt_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rt_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rt_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rt_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rs_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rs_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rs_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rs_address;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__fetcher_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__instruction 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__fetcher_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__instruction 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction;
    if ((1U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset))) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__nzp = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__nzp = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__nzp = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__nzp = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head_next = 0U;
    } else {
        if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                if (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp_write_enable) {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__nzp 
                        = (7U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg));
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                if (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp_write_enable) {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__nzp 
                        = (7U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg));
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                if (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp_write_enable) {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__nzp 
                        = (7U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg));
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                if (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp_write_enable) {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__nzp 
                        = (7U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg));
                }
            }
        }
        if ((1U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start))) {
            if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__divergence_event) 
                 & (6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state)))) {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask = 0U;
                if ((vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
                     [1U] == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate))) {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask 
                        = (2U | (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask));
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head_next = 1U;
                }
                if ((vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
                     [2U] == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate))) {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask 
                        = (4U | (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask));
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head_next = 2U;
                }
                if ((vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
                     [3U] == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate))) {
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask 
                        = (8U | (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask));
                    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head_next = 3U;
                }
            }
        }
    }
    if ((2U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset))) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__nzp = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__nzp = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__nzp = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__nzp = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head_next = 0U;
    } else {
        if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                if (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp_write_enable) {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__nzp 
                        = (7U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg));
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                if (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp_write_enable) {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__nzp 
                        = (7U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg));
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                if (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp_write_enable) {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__nzp 
                        = (7U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg));
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                if (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp_write_enable) {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__nzp 
                        = (7U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg));
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start))) {
            if (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__divergence_event) 
                 & (6U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state)))) {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask = 0U;
                if ((vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
                     [1U] == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate))) {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask 
                        = (2U | (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask));
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head_next = 1U;
                }
                if ((vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
                     [2U] == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate))) {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask 
                        = (4U | (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask));
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head_next = 2U;
                }
                if ((vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
                     [3U] == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate))) {
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask 
                        = (8U | (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask));
                    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head_next = 3U;
                }
            }
        }
    }
    vlSelfRef.__VdlyCommitQueuegpu__DOT__program_memory_controller__DOT__mem_write_address.commit(vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_write_address);
    vlSelfRef.__VdlyCommitQueuegpu__DOT__program_memory_controller__DOT__mem_write_data.commit(vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_write_data);
    vlSelfRef.__VdlyCommitQueuegpu__DOT__program_memory_controller__DOT__controller_state.commit(vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state);
    vlSelfRef.__VdlyCommitQueuegpu__DOT__program_memory_controller__DOT__current_consumer.commit(vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer);
    vlSelfRef.gpu__DOT__fetcher_read_valid = (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_valid) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_valid));
    vlSelfRef.__VdlyCommitQueuegpu__DOT__program_memory_controller__DOT__mem_read_address.commit(vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_address);
    vlSelfRef.gpu__DOT__fetcher_read_address[0U] = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_address;
    vlSelfRef.gpu__DOT__fetcher_read_address[1U] = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_address;
    if (__VdlySet__gpu__DOT__program_memory_controller__DOT__consumer_read_data__v0) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_data[0U] = 0U;
    }
    if (__VdlySet__gpu__DOT__program_memory_controller__DOT__consumer_read_data__v1) {
        vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_data[__VdlyDim0__gpu__DOT__program_memory_controller__DOT__consumer_read_data__v1] 
            = __VdlyVal__gpu__DOT__program_memory_controller__DOT__consumer_read_data__v1;
    }
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_state
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_state
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_state
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_state
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_address
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_address
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_address
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_address
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_address
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_address
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_address
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_address
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_data
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_data
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_data
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_data
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_state
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_state
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_state
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_state
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_address
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_address
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_address
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_address
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_address
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_address
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_address
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_address
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_data
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_data
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_data
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_data
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes
        [3U];
    vlSelfRef.gpu__DOT__lsu_read_ready = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready;
    vlSelfRef.gpu__DOT__lsu_write_ready = vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready;
    vlSelfRef.data_mem_read_address[3U] = vlSelfRef.gpu__DOT__data_mem_read_address
        [3U];
    vlSelfRef.data_mem_read_address[2U] = vlSelfRef.gpu__DOT__data_mem_read_address
        [2U];
    vlSelfRef.data_mem_read_address[1U] = vlSelfRef.gpu__DOT__data_mem_read_address
        [1U];
    vlSelfRef.data_mem_read_address[0U] = vlSelfRef.gpu__DOT__data_mem_read_address
        [0U];
    vlSelfRef.data_mem_write_address[3U] = vlSelfRef.gpu__DOT__data_mem_write_address
        [3U];
    vlSelfRef.data_mem_write_address[2U] = vlSelfRef.gpu__DOT__data_mem_write_address
        [2U];
    vlSelfRef.data_mem_write_address[1U] = vlSelfRef.gpu__DOT__data_mem_write_address
        [1U];
    vlSelfRef.data_mem_write_address[0U] = vlSelfRef.gpu__DOT__data_mem_write_address
        [0U];
    vlSelfRef.data_mem_write_data[3U] = vlSelfRef.gpu__DOT__data_mem_write_data
        [3U];
    vlSelfRef.data_mem_write_data[2U] = vlSelfRef.gpu__DOT__data_mem_write_data
        [2U];
    vlSelfRef.data_mem_write_data[1U] = vlSelfRef.gpu__DOT__data_mem_write_data
        [1U];
    vlSelfRef.data_mem_write_data[0U] = vlSelfRef.gpu__DOT__data_mem_write_data
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_valid 
        = ((((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_valid) 
             << 3U) | ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_valid) 
                       << 2U)) | (((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid) 
                                   << 1U) | (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid)));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_valid 
        = ((((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_valid) 
             << 3U) | ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_valid) 
                       << 2U)) | (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid) 
                                   << 1U) | (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid)));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_valid 
        = ((((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_valid) 
             << 3U) | ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_valid) 
                       << 2U)) | (((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid) 
                                   << 1U) | (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid)));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_valid 
        = ((((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_valid) 
             << 3U) | ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_valid) 
                       << 2U)) | (((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid) 
                                   << 1U) | (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid)));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__masks[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__masks
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__masks[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__masks
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__block_id 
        = vlSelfRef.gpu__DOT__core_block_id[0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__block_id 
        = vlSelfRef.gpu__DOT__core_block_id[1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__enable 
        = (0U < vlSelfRef.gpu__DOT__core_thread_count
           [0U]);
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__enable 
        = (1U < vlSelfRef.gpu__DOT__core_thread_count
           [0U]);
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__enable 
        = (2U < vlSelfRef.gpu__DOT__core_thread_count
           [0U]);
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__enable 
        = (3U < vlSelfRef.gpu__DOT__core_thread_count
           [0U]);
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__enable 
        = (0U < vlSelfRef.gpu__DOT__core_thread_count
           [1U]);
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__enable 
        = (1U < vlSelfRef.gpu__DOT__core_thread_count
           [1U]);
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__enable 
        = (2U < vlSelfRef.gpu__DOT__core_thread_count
           [1U]);
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__enable 
        = (3U < vlSelfRef.gpu__DOT__core_thread_count
           [1U]);
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__total_warps 
        = (0xffU & (((IData)(3U) + vlSelfRef.gpu__DOT__core_thread_count
                     [0U]) >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__total_warps 
        = (0xffU & (((IData)(3U) + vlSelfRef.gpu__DOT__core_thread_count
                     [1U]) >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__thread_count 
        = vlSelfRef.gpu__DOT__core_thread_count[0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__thread_count 
        = vlSelfRef.gpu__DOT__core_thread_count[1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rejoin_event_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__divergence_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__divergence_event;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state 
        = __Vdly__gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__warp 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__rejoin_event_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rejoin_event_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__divergence_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__divergence_event;
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start 
        = __Vdly__gpu__DOT__dispatch_instance__DOT__core_start;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state 
        = __Vdly__gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__warp 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_groups
        [((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp))) 
          && (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp)))]
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_groups
        [((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp))) 
          && (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp)))]
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_groups
        [((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp))) 
          && (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp)))]
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_groups
        [((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp))) 
          && (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp)))]
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_groups
        [((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp))) 
          && (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp)))]
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_groups
        [((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp))) 
          && (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp)))]
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_groups
        [((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp))) 
          && (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp)))]
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_groups
        [((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp))) 
          && (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp)))]
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_valid 
        = vlSelfRef.gpu__DOT__fetcher_read_valid;
    vlSelfRef.program_mem_read_valid = vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_valid;
    vlSelfRef.gpu__DOT__program_mem_read_valid = vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_valid;
    vlSelfRef.gpu__DOT__program_mem_read_address[0U] 
        = vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_address
        [0U];
    vlSelfRef.gpu__DOT__fetcher_read_ready = vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__program_mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__program_mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready) 
                 >> 1U));
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_address[1U] 
        = vlSelfRef.gpu__DOT__fetcher_read_address[1U];
    vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_address[0U] 
        = vlSelfRef.gpu__DOT__fetcher_read_address[0U];
    vlSelfRef.gpu__DOT__fetcher_read_data[1U] = vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_data
        [1U];
    vlSelfRef.gpu__DOT__fetcher_read_data[0U] = vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_data
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_ready 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready) 
                 >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready) 
                 >> 3U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_ready 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready) 
                 >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready) 
                 >> 3U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_ready 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready) 
                 >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready) 
                 >> 3U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_ready 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready) 
                 >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready) 
                 >> 3U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_valid 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_valid;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_valid 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_valid;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_valid 
        = vlSelfRef.gpu__DOT__lsu_read_valid;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_valid 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_valid;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_valid 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_valid;
    vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_valid 
        = vlSelfRef.gpu__DOT__lsu_write_valid;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__block_id;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__block_id;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__block_id;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__block_id;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__block_id;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__block_id;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__block_id;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__block_id;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__total_warps 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__total_warps;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__total_warps 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__total_warps;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__thread_count 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__thread_count;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__thread_count 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__thread_count;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__warp_next_mask 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_next 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head_next;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__divergence_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__divergence_event;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__next_pcs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__next_pcs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__next_pcs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__next_pcs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__warp_next_mask 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_next_mask;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__head_next 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__head_next;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__divergence_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__divergence_event;
    vlSelfRef.gpu__DOT__core_start = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__start 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__start 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__next_pcs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__next_pcs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__next_pcs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__next_pcs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoin_event;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__rejoin_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__rejoin_event;
    vlSelfRef.program_mem_read_address[0U] = vlSelfRef.gpu__DOT__program_mem_read_address
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_ready 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__program_mem_read_ready;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_ready 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__program_mem_read_ready;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__program_mem_read_data 
        = vlSelfRef.gpu__DOT__fetcher_read_data[0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__program_mem_read_data 
        = vlSelfRef.gpu__DOT__fetcher_read_data[1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__thread_count 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__thread_count;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__thread_count 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__thread_count;
    if ((1U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset))) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg = 0U;
    } else {
        if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg 
                    = (0xffU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_output_mux)
                                 ? (((0U < (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                            [0U] - 
                                            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                            [0U])) 
                                     << 2U) | ((0U 
                                                == 
                                                (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                                 [0U] 
                                                 - 
                                                 vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                                 [0U])) 
                                               << 1U))
                                 : ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                     ? ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                         ? VL_DIV_III(8, 
                                                      vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                                      [0U], 
                                                      vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                                      [0U])
                                         : (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                            [0U] * 
                                            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                            [0U])) : 
                                    ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                      ? (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                         [0U] - vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                         [0U]) : (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                                  [0U] 
                                                  + 
                                                  vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                                  [0U])))));
            }
        }
        if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg 
                    = (0xffU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_output_mux)
                                 ? (((0U < (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                            [1U] - 
                                            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                            [1U])) 
                                     << 2U) | ((0U 
                                                == 
                                                (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                                 [1U] 
                                                 - 
                                                 vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                                 [1U])) 
                                               << 1U))
                                 : ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                     ? ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                         ? VL_DIV_III(8, 
                                                      vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                                      [1U], 
                                                      vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                                      [1U])
                                         : (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                            [1U] * 
                                            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                            [1U])) : 
                                    ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                      ? (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                         [1U] - vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                         [1U]) : (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                                  [1U] 
                                                  + 
                                                  vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                                  [1U])))));
            }
        }
        if ((4U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg 
                    = (0xffU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_output_mux)
                                 ? (((0U < (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                            [2U] - 
                                            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                            [2U])) 
                                     << 2U) | ((0U 
                                                == 
                                                (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                                 [2U] 
                                                 - 
                                                 vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                                 [2U])) 
                                               << 1U))
                                 : ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                     ? ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                         ? VL_DIV_III(8, 
                                                      vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                                      [2U], 
                                                      vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                                      [2U])
                                         : (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                            [2U] * 
                                            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                            [2U])) : 
                                    ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                      ? (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                         [2U] - vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                         [2U]) : (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                                  [2U] 
                                                  + 
                                                  vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                                  [2U])))));
            }
        }
        if ((8U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg 
                    = (0xffU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_output_mux)
                                 ? (((0U < (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                            [3U] - 
                                            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                            [3U])) 
                                     << 2U) | ((0U 
                                                == 
                                                (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                                 [3U] 
                                                 - 
                                                 vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                                 [3U])) 
                                               << 1U))
                                 : ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                     ? ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                         ? VL_DIV_III(8, 
                                                      vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                                      [3U], 
                                                      vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                                      [3U])
                                         : (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                            [3U] * 
                                            vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                            [3U])) : 
                                    ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                      ? (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                         [3U] - vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                         [3U]) : (vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
                                                  [3U] 
                                                  + 
                                                  vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
                                                  [3U])))));
            }
        }
    }
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1 
        = ((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))
            ? vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__masks
           [(1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp))]
            : 0U);
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state;
    if ((2U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset))) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg = 0U;
    } else {
        if ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg 
                    = (0xffU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_output_mux)
                                 ? (((0U < (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                            [0U] - 
                                            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                            [0U])) 
                                     << 2U) | ((0U 
                                                == 
                                                (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                                 [0U] 
                                                 - 
                                                 vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                                 [0U])) 
                                               << 1U))
                                 : ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                     ? ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                         ? VL_DIV_III(8, 
                                                      vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                                      [0U], 
                                                      vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                                      [0U])
                                         : (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                            [0U] * 
                                            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                            [0U])) : 
                                    ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                      ? (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                         [0U] - vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                         [0U]) : (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                                  [0U] 
                                                  + 
                                                  vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                                  [0U])))));
            }
        }
        if ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg 
                    = (0xffU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_output_mux)
                                 ? (((0U < (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                            [1U] - 
                                            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                            [1U])) 
                                     << 2U) | ((0U 
                                                == 
                                                (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                                 [1U] 
                                                 - 
                                                 vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                                 [1U])) 
                                               << 1U))
                                 : ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                     ? ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                         ? VL_DIV_III(8, 
                                                      vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                                      [1U], 
                                                      vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                                      [1U])
                                         : (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                            [1U] * 
                                            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                            [1U])) : 
                                    ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                      ? (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                         [1U] - vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                         [1U]) : (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                                  [1U] 
                                                  + 
                                                  vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                                  [1U])))));
            }
        }
        if ((4U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg 
                    = (0xffU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_output_mux)
                                 ? (((0U < (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                            [2U] - 
                                            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                            [2U])) 
                                     << 2U) | ((0U 
                                                == 
                                                (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                                 [2U] 
                                                 - 
                                                 vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                                 [2U])) 
                                               << 1U))
                                 : ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                     ? ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                         ? VL_DIV_III(8, 
                                                      vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                                      [2U], 
                                                      vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                                      [2U])
                                         : (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                            [2U] * 
                                            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                            [2U])) : 
                                    ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                      ? (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                         [2U] - vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                         [2U]) : (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                                  [2U] 
                                                  + 
                                                  vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                                  [2U])))));
            }
        }
        if ((8U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1))) {
            if ((5U == (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state))) {
                vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg 
                    = (0xffU & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_output_mux)
                                 ? (((0U < (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                            [3U] - 
                                            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                            [3U])) 
                                     << 2U) | ((0U 
                                                == 
                                                (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                                 [3U] 
                                                 - 
                                                 vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                                 [3U])) 
                                               << 1U))
                                 : ((2U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                     ? ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                         ? VL_DIV_III(8, 
                                                      vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                                      [3U], 
                                                      vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                                      [3U])
                                         : (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                            [3U] * 
                                            vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                            [3U])) : 
                                    ((1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux))
                                      ? (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                         [3U] - vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                         [3U]) : (vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
                                                  [3U] 
                                                  + 
                                                  vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
                                                  [3U])))));
            }
        }
    }
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1 
        = ((0U >= (1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp)))
            ? vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__masks
           [(1U & (IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp))]
            : 0U);
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset 
        = __Vdly__gpu__DOT__dispatch_instance__DOT__core_reset;
    if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset) 
                  >> 1U)))) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk3__DOT__i = 2U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk3__DOT__i = 3U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk3__DOT__i = 4U;
    }
    if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset)))) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk3__DOT__i = 2U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk3__DOT__i = 3U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk3__DOT__i = 4U;
    }
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__divergence_event;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__divergence_event;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__start 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__start;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__start 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__start;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__decoded_immediate 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__program_mem_read_data;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_data 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__program_mem_read_data;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 3U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 3U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 3U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg;
    if ((1U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset))) {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk2__DOT__i = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk2__DOT__i = 2U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk2__DOT__i = 3U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk2__DOT__i = 4U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[3U] = 0U;
    } else {
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [0U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes
            [0U];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [1U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes
            [1U];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [2U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes
            [2U];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [3U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes
            [3U];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[0U] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
              [0U])];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[1U] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
              [1U])];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[2U] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
              [2U])];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[3U] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
              [3U])];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[0U] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
              [0U])];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[1U] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
              [1U])];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[2U] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
              [2U])];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[3U] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
              [3U])];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [0U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes
            [0U];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [1U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes
            [1U];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [2U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes
            [2U];
        vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [3U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes
            [3U];
    }
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 2U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 3U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 3U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__enable 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____VdfgRegularize_h47660625_9_1) 
                 >> 3U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__alu_out_reg;
    if ((2U & (IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset))) {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk2__DOT__i = 1U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk2__DOT__i = 2U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk2__DOT__i = 3U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk2__DOT__i = 4U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[3U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[0U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[1U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[2U] = 0U;
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[3U] = 0U;
    } else {
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [0U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes
            [0U];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [1U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes
            [1U];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [2U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes
            [2U];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [3U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes
            [3U];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[0U] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
              [0U])];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[1U] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
              [1U])];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[2U] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
              [2U])];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[3U] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
              [3U])];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[0U] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
              [0U])];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[1U] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
              [1U])];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[2U] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
              [2U])];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[3U] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs
            [(3U & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
              [3U])];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [0U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes
            [0U];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [1U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes
            [1U];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [2U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes
            [2U];
        vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[(3U 
                                                                                & vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads
                                                                                [3U])] 
            = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes
            [3U];
    }
    vlSelfRef.gpu__DOT__core_reset = vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset) 
                 >> 0U));
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset 
        = (1U & ((IData)(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset) 
                 >> 1U));
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_event 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_event;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__next_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__divergence_event 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_event;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__start;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__start;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__next_pc 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__decoded_immediate;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs[0U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs[1U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs[2U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs[3U] 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__2__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__3__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs
        [0U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs
        [1U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs
        [2U];
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs
        [3U];
    vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__reset;
    vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__divergence_stack_gen__BRA__0__KET____DOT__divergence_stack_inst__DOT__reset 
        = vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__reset;
}
