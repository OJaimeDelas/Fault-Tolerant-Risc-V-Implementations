// NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE
// This is an automatically generated file by jaime on qui 01 ago 2024 17:42:54 WEST
//
// cmd:    veer -unset=assert_on -snapshot=MinimalRVfpga -set=reset_vec=0x80000000 -set=ret_stack_size=2 -set=btb_enable=0 -set=btb_fullya=0 -set=dccm_enable=1 -set=dccm_num_banks=4 -set=dccm_size=256 -set=btb_enable=0 -set=dma_buf_depth=2 -set=iccm_enable=1 -set=iccm_size=512 -set=text_in_iccm=1 -set=icache_enable=0 -set=icache_ecc=0 -set=pic_size=32 -set=bitmanip_zba=0 -set=bitmanip_zbb=0 -set=bitmanip_zbc=0 -set=bitmanip_zbe=0 -set=bitmanip_zbf=0 -set=bitmanip_zbp=0 -set=bitmanip_zbr=0 -set=bitmanip_zbs=0 -set=fast_interrupt_redirect=0 
//

`include "common_defines.vh"
`undef RV_ASSERT_ON
`undef TEC_RV_ICG
`define RV_PHYSICAL 1