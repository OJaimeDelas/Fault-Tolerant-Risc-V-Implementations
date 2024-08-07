#  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE
#  This is an automatically generated file by jaime on qui 01 ago 2024 17:42:54 WEST
# 
#  cmd:    veer -unset=assert_on -snapshot=MinimalRVfpga -set=reset_vec=0x80000000 -set=ret_stack_size=2 -set=btb_enable=0 -set=btb_fullya=0 -set=dccm_enable=1 -set=dccm_num_banks=4 -set=dccm_size=256 -set=btb_enable=0 -set=dma_buf_depth=2 -set=iccm_enable=1 -set=iccm_size=512 -set=text_in_iccm=1 -set=icache_enable=0 -set=icache_ecc=0 -set=pic_size=32 -set=bitmanip_zba=0 -set=bitmanip_zbb=0 -set=bitmanip_zbc=0 -set=bitmanip_zbe=0 -set=bitmanip_zbf=0 -set=bitmanip_zbp=0 -set=bitmanip_zbr=0 -set=bitmanip_zbs=0 -set=fast_interrupt_redirect=0 
# 
# To use this in a perf script, use 'require $RV_ROOT/configs/config.pl'
# Reference the hash via $config{name}..


%config = (
            'target' => 'default',
            'user_ec_rv_icg' => 'user_clock_gate',
            'iccm' => {
                        'iccm_size' => 512,
                        'iccm_data_cell' => 'ram_32768x39',
                        'iccm_bank_index_lo' => 4,
                        'iccm_region' => '0xe',
                        'iccm_num_banks_4' => '',
                        'iccm_size_512' => '',
                        'iccm_eadr' => '0xee07ffff',
                        'iccm_enable' => 1,
                        'iccm_rows' => '32768',
                        'iccm_bits' => 19,
                        'iccm_reserved' => '0x1000',
                        'iccm_sadr' => '0xee000000',
                        'iccm_bank_bits' => 2,
                        'iccm_index_bits' => 15,
                        'iccm_offset' => '0xe000000',
                        'iccm_num_banks' => '4',
                        'iccm_bank_hi' => 3
                      },
            'btb' => {
                       'btb_toffset_size' => '12',
                       'btb_index3_lo' => 18,
                       'btb_addr_lo' => '2',
                       'btb_index2_lo' => 10,
                       'btb_index1_hi' => 9,
                       'btb_btag_fold' => 0,
                       'btb_size' => 512,
                       'btb_array_depth' => 256,
                       'btb_addr_hi' => 9,
                       'btb_index3_hi' => 25,
                       'btb_fold2_index_hash' => 0,
                       'btb_index1_lo' => '2',
                       'btb_index2_hi' => 17,
                       'btb_btag_size' => 5
                     },
            'config_key' => '32\'hdeadbeef',
            'icache' => {
                          'icache_bank_width' => 8,
                          'icache_bank_hi' => 3,
                          'icache_waypack' => '1',
                          'icache_data_width' => 64,
                          'icache_scnd_last' => 6,
                          'icache_tag_num_bypass_width' => 2,
                          'icache_ecc' => '0',
                          'icache_num_beats' => 8,
                          'icache_banks_way' => 2,
                          'icache_beat_bits' => 3,
                          'icache_tag_index_lo' => '6',
                          'icache_ln_sz' => 64,
                          'icache_fdata_width' => 68,
                          'icache_data_cell' => 'ram_512x68',
                          'icache_num_lines' => 256,
                          'icache_bank_lo' => 3,
                          'icache_tag_bypass_enable' => '1',
                          'icache_num_bypass' => '2',
                          'icache_num_lines_way' => '128',
                          'icache_num_ways' => 2,
                          'icache_bank_bits' => 1,
                          'icache_2banks' => '1',
                          'icache_status_bits' => 1,
                          'icache_beat_addr_hi' => 5,
                          'icache_bypass_enable' => '1',
                          'icache_tag_cell' => 'ram_128x21',
                          'icache_tag_num_bypass' => '2',
                          'icache_size' => 16,
                          'icache_num_lines_bank' => '64',
                          'icache_index_hi' => 12,
                          'icache_data_index_lo' => 4,
                          'icache_data_depth' => '512',
                          'icache_tag_depth' => '128',
                          'icache_num_bypass_width' => 2,
                          'icache_tag_lo' => 13
                        },
            'pic' => {
                       'pic_meipl_mask' => '0xf',
                       'pic_region' => '0xf',
                       'pic_meie_count' => 31,
                       'pic_meip_offset' => '0x1000',
                       'pic_total_int_plus1' => 32,
                       'pic_mpiccfg_count' => 1,
                       'pic_base_addr' => '0xf00c0000',
                       'pic_meigwctrl_offset' => '0x4000',
                       'pic_meipt_offset' => '0x3004',
                       'pic_meip_mask' => '0x0',
                       'pic_meigwclr_count' => 31,
                       'pic_meigwctrl_mask' => '0x3',
                       'pic_meipl_count' => 31,
                       'pic_bits' => 15,
                       'pic_total_int' => 31,
                       'pic_meipl_offset' => '0x0000',
                       'pic_meie_offset' => '0x2000',
                       'pic_meip_count' => 1,
                       'pic_meigwclr_offset' => '0x5000',
                       'pic_meie_mask' => '0x1',
                       'pic_offset' => '0xc0000',
                       'pic_int_words' => 1,
                       'pic_meigwclr_mask' => '0x0',
                       'pic_mpiccfg_offset' => '0x3000',
                       'pic_meipt_mask' => '0x0',
                       'pic_meigwctrl_count' => 31,
                       'pic_meipt_count' => 31,
                       'pic_mpiccfg_mask' => '0x1',
                       'pic_size' => 32
                     },
            'reset_vec' => '0x80000000',
            'even_odd_trigger_chains' => 'true',
            'memmap' => {
                          'external_data' => '0xc0580000',
                          'unused_region4' => '0x40000000',
                          'unused_region6' => '0x20000000',
                          'unused_region7' => '0x10000000',
                          'serialio' => '0xd0580000',
                          'unused_region1' => '0x70000000',
                          'external_data_1' => '0xb0000000',
                          'unused_region8' => '0x00000000',
                          'unused_region3' => '0x50000000',
                          'debug_sb_mem' => '0xa0580000',
                          'unused_region5' => '0x30000000',
                          'unused_region0' => '0x90000000',
                          'consoleio' => '0xd0580000',
                          'unused_region2' => '0x60000000'
                        },
            'dccm' => {
                        'dccm_ecc_width' => 7,
                        'dccm_bank_bits' => 2,
                        'dccm_sadr' => '0xf0040000',
                        'lsu_sb_bits' => 18,
                        'dccm_reserved' => '0x1400',
                        'dccm_data_width' => 32,
                        'dccm_byte_width' => '4',
                        'dccm_num_banks' => '4',
                        'dccm_offset' => '0x40000',
                        'dccm_index_bits' => 14,
                        'dccm_data_cell' => 'ram_16384x39',
                        'dccm_width_bits' => 2,
                        'dccm_size' => 256,
                        'dccm_rows' => '16384',
                        'dccm_enable' => '1',
                        'dccm_bits' => 18,
                        'dccm_num_banks_4' => '',
                        'dccm_eadr' => '0xf007ffff',
                        'dccm_size_256' => '',
                        'dccm_fdata_width' => 39,
                        'dccm_region' => '0xf'
                      },
            'num_mmode_perf_regs' => '4',
            'bus' => {
                       'ifu_bus_prty' => '2',
                       'dma_bus_id' => '1',
                       'dma_bus_tag' => '1',
                       'lsu_bus_prty' => '2',
                       'ifu_bus_tag' => '3',
                       'sb_bus_id' => '1',
                       'ifu_bus_id' => '1',
                       'sb_bus_prty' => '2',
                       'sb_bus_tag' => '1',
                       'lsu_bus_id' => '1',
                       'lsu_bus_tag' => 3,
                       'bus_prty_default' => '3',
                       'dma_bus_prty' => '2'
                     },
            'xlen' => 32,
            'numiregs' => '32',
            'protection' => {
                              'inst_access_addr3' => '0x00000000',
                              'data_access_mask4' => '0xffffffff',
                              'inst_access_mask7' => '0xffffffff',
                              'inst_access_enable0' => '0x0',
                              'data_access_enable7' => '0x0',
                              'data_access_addr2' => '0x00000000',
                              'data_access_enable2' => '0x0',
                              'inst_access_mask5' => '0xffffffff',
                              'inst_access_mask2' => '0xffffffff',
                              'data_access_addr5' => '0x00000000',
                              'data_access_addr7' => '0x00000000',
                              'data_access_enable4' => '0x0',
                              'inst_access_addr4' => '0x00000000',
                              'data_access_mask3' => '0xffffffff',
                              'inst_access_addr5' => '0x00000000',
                              'data_access_mask2' => '0xffffffff',
                              'data_access_addr4' => '0x00000000',
                              'inst_access_addr7' => '0x00000000',
                              'inst_access_enable4' => '0x0',
                              'inst_access_mask3' => '0xffffffff',
                              'data_access_addr3' => '0x00000000',
                              'data_access_mask7' => '0xffffffff',
                              'inst_access_mask4' => '0xffffffff',
                              'inst_access_enable7' => '0x0',
                              'inst_access_addr2' => '0x00000000',
                              'data_access_mask5' => '0xffffffff',
                              'inst_access_enable2' => '0x0',
                              'data_access_enable0' => '0x0',
                              'inst_access_addr6' => '0x00000000',
                              'data_access_addr1' => '0x00000000',
                              'data_access_enable6' => '0x0',
                              'data_access_enable3' => '0x0',
                              'data_access_addr0' => '0x00000000',
                              'data_access_enable5' => '0x0',
                              'inst_access_mask0' => '0xffffffff',
                              'data_access_enable1' => '0x0',
                              'inst_access_mask1' => '0xffffffff',
                              'data_access_mask6' => '0xffffffff',
                              'data_access_mask0' => '0xffffffff',
                              'inst_access_enable1' => '0x0',
                              'data_access_mask1' => '0xffffffff',
                              'inst_access_mask6' => '0xffffffff',
                              'data_access_addr6' => '0x00000000',
                              'inst_access_addr1' => '0x00000000',
                              'inst_access_enable6' => '0x0',
                              'inst_access_enable3' => '0x0',
                              'inst_access_enable5' => '0x0',
                              'inst_access_addr0' => '0x00000000'
                            },
            'regwidth' => '32',
            'core' => {
                        'timer_legal_en' => '1',
                        'div_new' => 1,
                        'lsu_num_nbload_width' => '2',
                        'iccm_icache' => 'derived',
                        'dma_buf_depth' => '2',
                        'lsu2dma' => 0,
                        'iccm_only' => 1,
                        'bitmanip_zbp' => 0,
                        'bitmanip_zbr' => 0,
                        'lsu_stbuf_depth' => '4',
                        'icache_only' => 'derived',
                        'bitmanip_zba' => '0',
                        'no_iccm_no_icache' => 'derived',
                        'bitmanip_zbc' => '0',
                        'fast_interrupt_redirect' => '0',
                        'bitmanip_zbs' => '0',
                        'div_bit' => '4',
                        'bitmanip_zbb' => '0',
                        'fpga_optimize' => 1,
                        'bitmanip_zbf' => 0,
                        'lsu_num_nbload' => '4',
                        'bitmanip_zbe' => 0
                      },
            'testbench' => {
                             'ext_addrwidth' => '32',
                             'lderr_rollback' => '1',
                             'RV_TOP' => '`TOP.rvtop',
                             'SDVT_AHB' => '0',
                             'assert_on' => '',
                             'TOP' => 'tb_top',
                             'clock_period' => '100',
                             'CPU_TOP' => '`RV_TOP.veer',
                             'build_axi_native' => 1,
                             'build_axi4' => 1,
                             'sterr_rollback' => '0',
                             'ext_datawidth' => '64'
                           },
            'bht' => {
                       'bht_size' => 512,
                       'bht_ghr_hash_1' => '',
                       'bht_ghr_range' => '7:0',
                       'bht_hash_string' => '{hashin[8+1:2]^ghr[8-1:0]}// cf2',
                       'bht_addr_hi' => 9,
                       'bht_array_depth' => 256,
                       'bht_ghr_size' => 8,
                       'bht_addr_lo' => '2'
                     },
            'harts' => 1,
            'nmi_vec' => '0x11110000',
            'triggers' => [
                            {
                              'reset' => [
                                           '0x23e00000',
                                           '0x00000000',
                                           '0x00000000'
                                         ],
                              'mask' => [
                                          '0x081818c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ],
                              'poke_mask' => [
                                               '0x081818c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ]
                            },
                            {
                              'poke_mask' => [
                                               '0x081810c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ],
                              'mask' => [
                                          '0x081810c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ],
                              'reset' => [
                                           '0x23e00000',
                                           '0x00000000',
                                           '0x00000000'
                                         ]
                            },
                            {
                              'reset' => [
                                           '0x23e00000',
                                           '0x00000000',
                                           '0x00000000'
                                         ],
                              'mask' => [
                                          '0x081818c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ],
                              'poke_mask' => [
                                               '0x081818c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ]
                            },
                            {
                              'reset' => [
                                           '0x23e00000',
                                           '0x00000000',
                                           '0x00000000'
                                         ],
                              'mask' => [
                                          '0x081810c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ],
                              'poke_mask' => [
                                               '0x081810c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ]
                            }
                          ],
            'tec_rv_icg' => 'clockhdr',
            'retstack' => {
                            'ret_stack_size' => '2'
                          },
            'physical' => '1',
            'perf_events' => [
                               1,
                               2,
                               3,
                               4,
                               5,
                               6,
                               7,
                               8,
                               9,
                               10,
                               11,
                               12,
                               13,
                               14,
                               15,
                               16,
                               17,
                               18,
                               19,
                               20,
                               21,
                               22,
                               23,
                               24,
                               25,
                               26,
                               27,
                               28,
                               30,
                               31,
                               32,
                               34,
                               35,
                               36,
                               37,
                               38,
                               39,
                               40,
                               41,
                               42,
                               43,
                               44,
                               45,
                               46,
                               47,
                               48,
                               49,
                               50,
                               54,
                               55,
                               56,
                               512,
                               513,
                               514,
                               515,
                               516
                             ],
            'csr' => {
                       'mip' => {
                                  'exists' => 'true',
                                  'poke_mask' => '0x70000888',
                                  'reset' => '0x0',
                                  'mask' => '0x0'
                                },
                       'dicad0' => {
                                     'mask' => '0xffffffff',
                                     'number' => '0x7c9',
                                     'reset' => '0x0',
                                     'exists' => 'true',
                                     'debug' => 'true',
                                     'comment' => 'Cache diagnostics.'
                                   },
                       'marchid' => {
                                      'exists' => 'true',
                                      'mask' => '0x0',
                                      'reset' => '0x00000010'
                                    },
                       'pmpaddr0' => {
                                       'exists' => 'false'
                                     },
                       'mcounteren' => {
                                         'exists' => 'false'
                                       },
                       'mstatus' => {
                                      'exists' => 'true',
                                      'reset' => '0x1800',
                                      'mask' => '0x88'
                                    },
                       'mhpmevent3' => {
                                         'exists' => 'true',
                                         'mask' => '0xffffffff',
                                         'reset' => '0x0'
                                       },
                       'pmpaddr15' => {
                                        'exists' => 'false'
                                      },
                       'mcgc' => {
                                   'exists' => 'true',
                                   'poke_mask' => '0x000003ff',
                                   'number' => '0x7f8',
                                   'reset' => '0x200',
                                   'mask' => '0x000003ff'
                                 },
                       'mhpmcounter3h' => {
                                            'mask' => '0xffffffff',
                                            'reset' => '0x0',
                                            'exists' => 'true'
                                          },
                       'pmpaddr14' => {
                                        'exists' => 'false'
                                      },
                       'mhpmcounter6h' => {
                                            'exists' => 'true',
                                            'reset' => '0x0',
                                            'mask' => '0xffffffff'
                                          },
                       'mitbnd0' => {
                                      'exists' => 'true',
                                      'number' => '0x7d3',
                                      'reset' => '0xffffffff',
                                      'mask' => '0xffffffff'
                                    },
                       'meicurpl' => {
                                       'number' => '0xbcc',
                                       'reset' => '0x0',
                                       'comment' => 'External interrupt current priority level.',
                                       'mask' => '0xf',
                                       'exists' => 'true'
                                     },
                       'pmpcfg0' => {
                                      'exists' => 'false'
                                    },
                       'pmpaddr6' => {
                                       'exists' => 'false'
                                     },
                       'mdccmect' => {
                                       'number' => '0x7f2',
                                       'reset' => '0x0',
                                       'mask' => '0xffffffff',
                                       'exists' => 'true'
                                     },
                       'mhpmcounter3' => {
                                           'mask' => '0xffffffff',
                                           'reset' => '0x0',
                                           'exists' => 'true'
                                         },
                       'mrac' => {
                                   'exists' => 'true',
                                   'shared' => 'true',
                                   'mask' => '0xffffffff',
                                   'comment' => 'Memory region io and cache control.',
                                   'number' => '0x7c0',
                                   'reset' => '0x0'
                                 },
                       'pmpaddr8' => {
                                       'exists' => 'false'
                                     },
                       'mfdhs' => {
                                    'comment' => 'Force Debug Halt Status',
                                    'number' => '0x7cf',
                                    'reset' => '0x0',
                                    'mask' => '0x00000003',
                                    'exists' => 'true'
                                  },
                       'mfdht' => {
                                    'exists' => 'true',
                                    'shared' => 'true',
                                    'mask' => '0x0000003f',
                                    'comment' => 'Force Debug Halt Threshold',
                                    'number' => '0x7ce',
                                    'reset' => '0x0'
                                  },
                       'mhpmcounter6' => {
                                           'exists' => 'true',
                                           'mask' => '0xffffffff',
                                           'reset' => '0x0'
                                         },
                       'pmpaddr10' => {
                                        'exists' => 'false'
                                      },
                       'mfdc' => {
                                   'mask' => '0x00071fff',
                                   'number' => '0x7f9',
                                   'reset' => '0x00070040',
                                   'exists' => 'true'
                                 },
                       'dmst' => {
                                   'exists' => 'true',
                                   'reset' => '0x0',
                                   'number' => '0x7c4',
                                   'mask' => '0x0',
                                   'comment' => 'Memory synch trigger: Flush caches in debug mode.',
                                   'debug' => 'true'
                                 },
                       'meicidpl' => {
                                       'comment' => 'External interrupt claim id priority level.',
                                       'number' => '0xbcb',
                                       'reset' => '0x0',
                                       'mask' => '0xf',
                                       'exists' => 'true'
                                     },
                       'mhpmevent4' => {
                                         'reset' => '0x0',
                                         'mask' => '0xffffffff',
                                         'exists' => 'true'
                                       },
                       'pmpcfg1' => {
                                      'exists' => 'false'
                                    },
                       'mie' => {
                                  'mask' => '0x70000888',
                                  'reset' => '0x0',
                                  'exists' => 'true'
                                },
                       'mitbnd1' => {
                                      'mask' => '0xffffffff',
                                      'reset' => '0xffffffff',
                                      'number' => '0x7d6',
                                      'exists' => 'true'
                                    },
                       'pmpcfg2' => {
                                      'exists' => 'false'
                                    },
                       'instret' => {
                                      'exists' => 'false'
                                    },
                       'time' => {
                                   'exists' => 'false'
                                 },
                       'meipt' => {
                                    'mask' => '0xf',
                                    'reset' => '0x0',
                                    'number' => '0xbc9',
                                    'comment' => 'External interrupt priority threshold.',
                                    'exists' => 'true'
                                  },
                       'pmpaddr1' => {
                                       'exists' => 'false'
                                     },
                       'mimpid' => {
                                     'reset' => '0x4',
                                     'mask' => '0x0',
                                     'exists' => 'true'
                                   },
                       'mcpc' => {
                                   'exists' => 'true',
                                   'comment' => 'Core pause',
                                   'number' => '0x7c2',
                                   'reset' => '0x0',
                                   'mask' => '0x0'
                                 },
                       'dicago' => {
                                     'exists' => 'true',
                                     'number' => '0x7cb',
                                     'reset' => '0x0',
                                     'mask' => '0x0',
                                     'comment' => 'Cache diagnostics.',
                                     'debug' => 'true'
                                   },
                       'pmpaddr13' => {
                                        'exists' => 'false'
                                      },
                       'pmpcfg3' => {
                                      'exists' => 'false'
                                    },
                       'mhpmevent5' => {
                                         'reset' => '0x0',
                                         'mask' => '0xffffffff',
                                         'exists' => 'true'
                                       },
                       'pmpaddr4' => {
                                       'exists' => 'false'
                                     },
                       'dcsr' => {
                                   'poke_mask' => '0x00008dcc',
                                   'exists' => 'true',
                                   'reset' => '0x40000003',
                                   'debug' => 'true',
                                   'mask' => '0x00008c04'
                                 },
                       'misa' => {
                                   'exists' => 'true',
                                   'reset' => '0x40001104',
                                   'mask' => '0x0'
                                 },
                       'pmpaddr12' => {
                                        'exists' => 'false'
                                      },
                       'mpmc' => {
                                   'exists' => 'true',
                                   'mask' => '0x2',
                                   'reset' => '0x2',
                                   'number' => '0x7c6'
                                 },
                       'mitcnt1' => {
                                      'number' => '0x7d5',
                                      'reset' => '0x0',
                                      'mask' => '0xffffffff',
                                      'exists' => 'true'
                                    },
                       'pmpaddr5' => {
                                       'exists' => 'false'
                                     },
                       'mhpmcounter5' => {
                                           'exists' => 'true',
                                           'mask' => '0xffffffff',
                                           'reset' => '0x0'
                                         },
                       'dicawics' => {
                                       'comment' => 'Cache diagnostics.',
                                       'debug' => 'true',
                                       'exists' => 'true',
                                       'mask' => '0x0130fffc',
                                       'reset' => '0x0',
                                       'number' => '0x7c8'
                                     },
                       'mitctl1' => {
                                      'exists' => 'true',
                                      'number' => '0x7d7',
                                      'reset' => '0x1',
                                      'mask' => '0x0000000f'
                                    },
                       'mhpmcounter4h' => {
                                            'exists' => 'true',
                                            'reset' => '0x0',
                                            'mask' => '0xffffffff'
                                          },
                       'pmpaddr11' => {
                                        'exists' => 'false'
                                      },
                       'cycle' => {
                                    'exists' => 'false'
                                  },
                       'pmpaddr2' => {
                                       'exists' => 'false'
                                     },
                       'mvendorid' => {
                                        'mask' => '0x0',
                                        'reset' => '0x45',
                                        'exists' => 'true'
                                      },
                       'mscause' => {
                                      'exists' => 'true',
                                      'reset' => '0x0',
                                      'number' => '0x7ff',
                                      'mask' => '0x0000000f'
                                    },
                       'mhpmcounter4' => {
                                           'exists' => 'true',
                                           'mask' => '0xffffffff',
                                           'reset' => '0x0'
                                         },
                       'mhpmevent6' => {
                                         'exists' => 'true',
                                         'mask' => '0xffffffff',
                                         'reset' => '0x0'
                                       },
                       'tselect' => {
                                      'exists' => 'true',
                                      'reset' => '0x0',
                                      'mask' => '0x3'
                                    },
                       'dicad1' => {
                                     'exists' => 'true',
                                     'number' => '0x7ca',
                                     'reset' => '0x0',
                                     'mask' => '0x3',
                                     'comment' => 'Cache diagnostics.',
                                     'debug' => 'true'
                                   },
                       'mhpmcounter5h' => {
                                            'exists' => 'true',
                                            'mask' => '0xffffffff',
                                            'reset' => '0x0'
                                          },
                       'micect' => {
                                     'reset' => '0x0',
                                     'number' => '0x7f0',
                                     'mask' => '0xffffffff',
                                     'exists' => 'true'
                                   },
                       'meicpct' => {
                                      'exists' => 'true',
                                      'reset' => '0x0',
                                      'number' => '0xbca',
                                      'comment' => 'External claim id/priority capture.',
                                      'mask' => '0x0'
                                    },
                       'pmpaddr9' => {
                                       'exists' => 'false'
                                     },
                       'pmpaddr7' => {
                                       'exists' => 'false'
                                     },
                       'mitcnt0' => {
                                      'reset' => '0x0',
                                      'number' => '0x7d2',
                                      'mask' => '0xffffffff',
                                      'exists' => 'true'
                                    },
                       'mhartid' => {
                                      'mask' => '0x0',
                                      'reset' => '0x0',
                                      'exists' => 'true',
                                      'poke_mask' => '0xfffffff0'
                                    },
                       'mcountinhibit' => {
                                            'reset' => '0x0',
                                            'mask' => '0x7d',
                                            'exists' => 'true',
                                            'commnet' => 'Performance counter inhibit. One bit per counter.',
                                            'poke_mask' => '0x7d'
                                          },
                       'pmpaddr3' => {
                                       'exists' => 'false'
                                     },
                       'miccmect' => {
                                       'exists' => 'true',
                                       'mask' => '0xffffffff',
                                       'reset' => '0x0',
                                       'number' => '0x7f1'
                                     },
                       'mitctl0' => {
                                      'mask' => '0x00000007',
                                      'number' => '0x7d4',
                                      'reset' => '0x1',
                                      'exists' => 'true'
                                    }
                     },
            'max_mmode_perf_event' => '516'
          );
1;
