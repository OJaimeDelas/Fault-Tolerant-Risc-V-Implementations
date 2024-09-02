/*
 NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE
 This is an automatically generated file by jaime on ter 27 ago 2024 14:37:14 WEST

 cmd:    veer -unset=assert_on -snapshot=MinimalRVfpga -set=reset_vec=0x80000000 -set=ret_stack_size=2 -set=btb_enable=0 -set=btb_fullya=0-set=dccm_enable=1 -set=dccm_num_banks=4 -set=dccm_size=256 -set=dma_buf_depth=2 -set=iccm_enable=1 -set=iccm_size=256 -set=text_in_iccm=1 -set=icache_enable=0 -set=icache_ecc=0 -set=icache_size=8 -set=icache_2banks=0 -set=icache_num_ways=2 -set=pic_size=32 --set=bitmanip_zba=0 -set=bitmanip_zbb=0 -set=bitmanip_zbc=0 -set=bitmanip_zbe=0 -set=bitmanip_zbf=0 -set=bitmanip_zbp=0 -set=bitmanip_zbr=0 -set=bitmanip_zbs=0 -set=fast_interrupt_redirect=0 

*/
OUTPUT_ARCH( "riscv" )
ENTRY(_start)

SECTIONS
{
  . = 0x80000000;
  .text.init .  : { *(.text.init) }
  
  .text . : { *(.text) }
  _end = .;
  . = 0xd0580000;
  .data.io .  : { *(.data.io) }
    . = 0xf0040000 ;
  .data  :  ALIGN(0x800) { *(.*data) *(.rodata*)}
  .bss :  {BSS_START = .; *(.*bss)}
  BSS_END = .;
  STACK = ALIGN(16) + 0x1000;
  
    . = 0xfffffff8; .data.ctl : { LONG(0xf0040000); LONG(STACK) }
}

