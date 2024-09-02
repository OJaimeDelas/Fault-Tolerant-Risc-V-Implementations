#  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE
#  This is an automatically generated file by jaime on ter 27 ago 2024 14:37:14 WEST
# 
#  cmd:    veer -unset=assert_on -snapshot=MinimalRVfpga -set=reset_vec=0x80000000 -set=ret_stack_size=2 -set=btb_enable=0 -set=btb_fullya=0-set=dccm_enable=1 -set=dccm_num_banks=4 -set=dccm_size=256 -set=dma_buf_depth=2 -set=iccm_enable=1 -set=iccm_size=256 -set=text_in_iccm=1 -set=icache_enable=0 -set=icache_ecc=0 -set=icache_size=8 -set=icache_2banks=0 -set=icache_num_ways=2 -set=pic_size=32 --set=bitmanip_zba=0 -set=bitmanip_zbb=0 -set=bitmanip_zbc=0 -set=bitmanip_zbe=0 -set=bitmanip_zbf=0 -set=bitmanip_zbp=0 -set=bitmanip_zbr=0 -set=bitmanip_zbs=0 -set=fast_interrupt_redirect=0 
# 
# To use this in a perf script, use 'require $RV_ROOT/configs/config.pl'
# Reference the hash via $config{name}..


%config = (
            'num_mmode_perf_regs' => '4',
            'reset_vec' => '0x80000000',
            'iccm' => {
                        'iccm_reserved' => '0x1000',
                        'iccm_rows' => '16384',
                        'iccm_num_banks' => '4',
                        'iccm_size_256' => '',
                        'iccm_size' => 256,
                        'iccm_bank_index_lo' => 4,
                        'iccm_eadr' => '0xee03ffff',
                        'iccm_bank_bits' => 2,
                        'iccm_index_bits' => 14,
                        'iccm_data_cell' => 'ram_16384x39',
                        'iccm_region' => '0xe',
                        'iccm_offset' => '0xe000000',
                        'iccm_enable' => 1,
                        'iccm_bank_hi' => 3,
                        'iccm_num_banks_4' => '',
                        'iccm_bits' => 18,
                        'iccm_sadr' => '0xee000000'
                      },
            'bht' => {
                       'bht_size' => 512,
                       'bht_addr_hi' => 9,
                       'bht_array_depth' => 256,
                       'bht_addr_lo' => '2',
                       'bht_ghr_hash_1' => '',
                       'bht_ghr_size' => 8,
                       'bht_hash_string' => '{hashin[8+1:2]^ghr[8-1:0]}// cf2',
                       'bht_ghr_range' => '7:0'
                     },
            'regwidth' => '32',
            'btb' => {
                       'btb_btag_fold' => 0,
                       'btb_index3_lo' => 18,
                       'btb_index2_lo' => 10,
                       'btb_toffset_size' => '12',
                       'btb_addr_lo' => '2',
                       'btb_btag_size' => 5,
                       'btb_array_depth' => 256,
                       'btb_index3_hi' => 25,
                       'btb_index2_hi' => 17,
                       'btb_fold2_index_hash' => 0,
                       'btb_size' => 512,
                       'btb_index1_hi' => 9,
                       'btb_index1_lo' => '2',
                       'btb_addr_hi' => 9
                     },
            'max_mmode_perf_event' => '516',
            'even_odd_trigger_chains' => 'true',
            'retstack' => {
                            'ret_stack_size' => '2'
                          },
            'dccm' => {
                        'dccm_num_banks' => '4',
                        'dccm_data_width' => 32,
                        'dccm_rows' => '16384',
                        'dccm_reserved' => '0x1400',
                        'lsu_sb_bits' => 18,
                        'dccm_size' => 256,
                        'dccm_size_256' => '',
                        'dccm_data_cell' => 'ram_16384x39',
                        'dccm_region' => '0xf',
                        'dccm_byte_width' => '4',
                        'dccm_ecc_width' => 7,
                        'dccm_index_bits' => 14,
                        'dccm_bank_bits' => 2,
                        'dccm_eadr' => '0xf007ffff',
                        'dccm_sadr' => '0xf0040000',
                        'dccm_width_bits' => 2,
                        'dccm_bits' => 18,
                        'dccm_num_banks_4' => '',
                        'dccm_enable' => '1',
                        'dccm_offset' => '0x40000',
                        'dccm_fdata_width' => 39
                      },
            'config_key' => '32\'hdeadbeef',
            'triggers' => [
                            {
                              'poke_mask' => [
                                               '0x081818c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ],
                              'mask' => [
                                          '0x081818c7',
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
                                          '0x081810c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ],
                              'poke_mask' => [
                                               '0x081810c7',
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
                              'poke_mask' => [
                                               '0x081818c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ],
                              'mask' => [
                                          '0x081818c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ]
                            },
                            {
                              'mask' => [
                                          '0x081810c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ],
                              'poke_mask' => [
                                               '0x081810c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ],
                              'reset' => [
                                           '0x23e00000',
                                           '0x00000000',
                                           '0x00000000'
                                         ]
                            }
                          ],
            'tec_rv_icg' => 'clockhdr',
            'core' => {
                        'lsu_stbuf_depth' => '4',
                        'div_bit' => '4',
                        'iccm_icache' => 'derived',
                        'bitmanip_zbc' => '0',
                        'lsu2dma' => 0,
                        'bitmanip_zbf' => 0,
                        'bitmanip_zbs' => '0',
                        'lsu_num_nbload_width' => '2',
                        'bitmanip_zba' => '0',
                        'fast_interrupt_redirect' => '0',
                        'dma_buf_depth' => '2',
                        'bitmanip_zbr' => 0,
                        'div_new' => 1,
                        'bitmanip_zbe' => 0,
                        'bitmanip_zbb' => '0',
                        'iccm_only' => 1,
                        'bitmanip_zbp' => 0,
                        'no_iccm_no_icache' => 'derived',
                        'lsu_num_nbload' => '4',
                        'icache_only' => 'derived',
                        'timer_legal_en' => '1',
                        'fpga_optimize' => 1
                      },
            'physical' => '1',
            'user_ec_rv_icg' => 'user_clock_gate',
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
            'xlen' => 32,
            'memmap' => {
                          'consoleio' => '0xd0580000',
                          'unused_region3' => '0x50000000',
                          'unused_region1' => '0x70000000',
                          'unused_region5' => '0x30000000',
                          'unused_region0' => '0x90000000',
                          'serialio' => '0xd0580000',
                          'unused_region8' => '0x00000000',
                          'unused_region7' => '0x10000000',
                          'unused_region2' => '0x60000000',
                          'external_data_1' => '0xb0000000',
                          'unused_region4' => '0x40000000',
                          'unused_region6' => '0x20000000',
                          'external_data' => '0xc0580000',
                          'debug_sb_mem' => '0xa0580000'
                        },
            'icache' => {
                          'icache_data_depth' => '256',
                          'icache_bank_width' => 8,
                          'icache_banks_way' => 2,
                          'icache_data_cell' => 'ram_256x68',
                          'icache_num_beats' => 8,
                          'icache_data_width' => 64,
                          'icache_tag_lo' => 12,
                          'icache_bank_hi' => 3,
                          'icache_num_lines_bank' => '32',
                          'icache_num_bypass' => '2',
                          'icache_tag_depth' => '64',
                          'icache_num_bypass_width' => 2,
                          'icache_num_lines_way' => '64',
                          'icache_num_lines' => 128,
                          'icache_beat_addr_hi' => 5,
                          'icache_fdata_width' => 68,
                          'icache_tag_cell' => 'ram_64x21',
                          'icache_bank_lo' => 3,
                          'icache_bank_bits' => 1,
                          'icache_beat_bits' => 3,
                          'icache_tag_index_lo' => '6',
                          'icache_data_index_lo' => 4,
                          'icache_ecc' => '0',
                          'icache_size' => 8,
                          'icache_tag_num_bypass_width' => 2,
                          'icache_index_hi' => 11,
                          'icache_waypack' => '1',
                          'icache_tag_num_bypass' => '2',
                          'icache_ln_sz' => 64,
                          'icache_bypass_enable' => '1',
                          'icache_status_bits' => 1,
                          'icache_num_ways' => 2,
                          'icache_scnd_last' => 6,
                          'icache_tag_bypass_enable' => '1'
                        },
            'harts' => 1,
            'protection' => {
                              'data_access_addr7' => '0x00000000',
                              'inst_access_mask7' => '0xffffffff',
                              'inst_access_enable3' => '0x0',
                              'data_access_enable4' => '0x0',
                              'inst_access_mask2' => '0xffffffff',
                              'data_access_addr2' => '0x00000000',
                              'data_access_addr6' => '0x00000000',
                              'data_access_addr4' => '0x00000000',
                              'inst_access_mask4' => '0xffffffff',
                              'inst_access_mask6' => '0xffffffff',
                              'inst_access_mask3' => '0xffffffff',
                              'data_access_addr3' => '0x00000000',
                              'data_access_addr1' => '0x00000000',
                              'data_access_enable2' => '0x0',
                              'inst_access_mask1' => '0xffffffff',
                              'data_access_enable3' => '0x0',
                              'inst_access_enable4' => '0x0',
                              'data_access_mask7' => '0xffffffff',
                              'inst_access_addr7' => '0x00000000',
                              'inst_access_enable2' => '0x0',
                              'data_access_mask1' => '0xffffffff',
                              'inst_access_addr1' => '0x00000000',
                              'inst_access_addr3' => '0x00000000',
                              'data_access_mask3' => '0xffffffff',
                              'data_access_mask6' => '0xffffffff',
                              'data_access_mask4' => '0xffffffff',
                              'inst_access_addr4' => '0x00000000',
                              'inst_access_addr6' => '0x00000000',
                              'inst_access_addr2' => '0x00000000',
                              'data_access_mask2' => '0xffffffff',
                              'data_access_mask0' => '0xffffffff',
                              'inst_access_addr0' => '0x00000000',
                              'data_access_enable0' => '0x0',
                              'data_access_enable5' => '0x0',
                              'inst_access_enable1' => '0x0',
                              'inst_access_enable7' => '0x0',
                              'inst_access_addr5' => '0x00000000',
                              'inst_access_enable6' => '0x0',
                              'data_access_mask5' => '0xffffffff',
                              'data_access_addr0' => '0x00000000',
                              'inst_access_mask0' => '0xffffffff',
                              'inst_access_mask5' => '0xffffffff',
                              'data_access_enable6' => '0x0',
                              'data_access_addr5' => '0x00000000',
                              'data_access_enable1' => '0x0',
                              'data_access_enable7' => '0x0',
                              'inst_access_enable5' => '0x0',
                              'inst_access_enable0' => '0x0'
                            },
            'csr' => {
                       'mhpmevent5' => {
                                         'reset' => '0x0',
                                         'exists' => 'true',
                                         'mask' => '0xffffffff'
                                       },
                       'mhartid' => {
                                      'reset' => '0x0',
                                      'exists' => 'true',
                                      'mask' => '0x0',
                                      'poke_mask' => '0xfffffff0'
                                    },
                       'pmpcfg1' => {
                                      'exists' => 'false'
                                    },
                       'meicidpl' => {
                                       'number' => '0xbcb',
                                       'reset' => '0x0',
                                       'comment' => 'External interrupt claim id priority level.',
                                       'exists' => 'true',
                                       'mask' => '0xf'
                                     },
                       'mfdc' => {
                                   'number' => '0x7f9',
                                   'reset' => '0x00070040',
                                   'exists' => 'true',
                                   'mask' => '0x00071fff'
                                 },
                       'meipt' => {
                                    'exists' => 'true',
                                    'comment' => 'External interrupt priority threshold.',
                                    'reset' => '0x0',
                                    'number' => '0xbc9',
                                    'mask' => '0xf'
                                  },
                       'meicpct' => {
                                      'comment' => 'External claim id/priority capture.',
                                      'exists' => 'true',
                                      'number' => '0xbca',
                                      'reset' => '0x0',
                                      'mask' => '0x0'
                                    },
                       'mhpmevent6' => {
                                         'mask' => '0xffffffff',
                                         'reset' => '0x0',
                                         'exists' => 'true'
                                       },
                       'cycle' => {
                                    'exists' => 'false'
                                  },
                       'mhpmcounter5h' => {
                                            'reset' => '0x0',
                                            'exists' => 'true',
                                            'mask' => '0xffffffff'
                                          },
                       'pmpaddr4' => {
                                       'exists' => 'false'
                                     },
                       'pmpaddr3' => {
                                       'exists' => 'false'
                                     },
                       'mfdhs' => {
                                    'mask' => '0x00000003',
                                    'exists' => 'true',
                                    'comment' => 'Force Debug Halt Status',
                                    'reset' => '0x0',
                                    'number' => '0x7cf'
                                  },
                       'pmpaddr12' => {
                                        'exists' => 'false'
                                      },
                       'pmpaddr6' => {
                                       'exists' => 'false'
                                     },
                       'pmpaddr14' => {
                                        'exists' => 'false'
                                      },
                       'mimpid' => {
                                     'mask' => '0x0',
                                     'reset' => '0x4',
                                     'exists' => 'true'
                                   },
                       'mhpmcounter3h' => {
                                            'mask' => '0xffffffff',
                                            'reset' => '0x0',
                                            'exists' => 'true'
                                          },
                       'mcounteren' => {
                                         'exists' => 'false'
                                       },
                       'mstatus' => {
                                      'exists' => 'true',
                                      'reset' => '0x1800',
                                      'mask' => '0x88'
                                    },
                       'pmpaddr9' => {
                                       'exists' => 'false'
                                     },
                       'mdccmect' => {
                                       'exists' => 'true',
                                       'number' => '0x7f2',
                                       'reset' => '0x0',
                                       'mask' => '0xffffffff'
                                     },
                       'mitcnt0' => {
                                      'number' => '0x7d2',
                                      'reset' => '0x0',
                                      'exists' => 'true',
                                      'mask' => '0xffffffff'
                                    },
                       'mvendorid' => {
                                        'mask' => '0x0',
                                        'reset' => '0x45',
                                        'exists' => 'true'
                                      },
                       'mrac' => {
                                   'reset' => '0x0',
                                   'number' => '0x7c0',
                                   'exists' => 'true',
                                   'comment' => 'Memory region io and cache control.',
                                   'shared' => 'true',
                                   'mask' => '0xffffffff'
                                 },
                       'mitbnd0' => {
                                      'exists' => 'true',
                                      'number' => '0x7d3',
                                      'reset' => '0xffffffff',
                                      'mask' => '0xffffffff'
                                    },
                       'dicago' => {
                                     'exists' => 'true',
                                     'comment' => 'Cache diagnostics.',
                                     'reset' => '0x0',
                                     'number' => '0x7cb',
                                     'debug' => 'true',
                                     'mask' => '0x0'
                                   },
                       'time' => {
                                   'exists' => 'false'
                                 },
                       'pmpaddr0' => {
                                       'exists' => 'false'
                                     },
                       'mhpmcounter4h' => {
                                            'exists' => 'true',
                                            'reset' => '0x0',
                                            'mask' => '0xffffffff'
                                          },
                       'mitctl0' => {
                                      'mask' => '0x00000007',
                                      'reset' => '0x1',
                                      'number' => '0x7d4',
                                      'exists' => 'true'
                                    },
                       'pmpaddr5' => {
                                       'exists' => 'false'
                                     },
                       'mip' => {
                                  'exists' => 'true',
                                  'reset' => '0x0',
                                  'poke_mask' => '0x70000888',
                                  'mask' => '0x0'
                                },
                       'mpmc' => {
                                   'reset' => '0x2',
                                   'number' => '0x7c6',
                                   'exists' => 'true',
                                   'mask' => '0x2'
                                 },
                       'mhpmcounter6' => {
                                           'exists' => 'true',
                                           'reset' => '0x0',
                                           'mask' => '0xffffffff'
                                         },
                       'marchid' => {
                                      'mask' => '0x0',
                                      'exists' => 'true',
                                      'reset' => '0x00000010'
                                    },
                       'mhpmevent3' => {
                                         'reset' => '0x0',
                                         'exists' => 'true',
                                         'mask' => '0xffffffff'
                                       },
                       'dmst' => {
                                   'mask' => '0x0',
                                   'debug' => 'true',
                                   'number' => '0x7c4',
                                   'reset' => '0x0',
                                   'comment' => 'Memory synch trigger: Flush caches in debug mode.',
                                   'exists' => 'true'
                                 },
                       'pmpaddr2' => {
                                       'exists' => 'false'
                                     },
                       'pmpaddr1' => {
                                       'exists' => 'false'
                                     },
                       'dicad1' => {
                                     'comment' => 'Cache diagnostics.',
                                     'exists' => 'true',
                                     'number' => '0x7ca',
                                     'reset' => '0x0',
                                     'mask' => '0x3',
                                     'debug' => 'true'
                                   },
                       'dicawics' => {
                                       'debug' => 'true',
                                       'mask' => '0x0130fffc',
                                       'exists' => 'true',
                                       'comment' => 'Cache diagnostics.',
                                       'reset' => '0x0',
                                       'number' => '0x7c8'
                                     },
                       'mhpmcounter4' => {
                                           'mask' => '0xffffffff',
                                           'reset' => '0x0',
                                           'exists' => 'true'
                                         },
                       'mhpmevent4' => {
                                         'reset' => '0x0',
                                         'exists' => 'true',
                                         'mask' => '0xffffffff'
                                       },
                       'mitctl1' => {
                                      'mask' => '0x0000000f',
                                      'exists' => 'true',
                                      'number' => '0x7d7',
                                      'reset' => '0x1'
                                    },
                       'dicad0' => {
                                     'reset' => '0x0',
                                     'number' => '0x7c9',
                                     'exists' => 'true',
                                     'comment' => 'Cache diagnostics.',
                                     'debug' => 'true',
                                     'mask' => '0xffffffff'
                                   },
                       'mhpmcounter6h' => {
                                            'reset' => '0x0',
                                            'exists' => 'true',
                                            'mask' => '0xffffffff'
                                          },
                       'misa' => {
                                   'reset' => '0x40001104',
                                   'exists' => 'true',
                                   'mask' => '0x0'
                                 },
                       'pmpaddr8' => {
                                       'exists' => 'false'
                                     },
                       'mfdht' => {
                                    'number' => '0x7ce',
                                    'reset' => '0x0',
                                    'comment' => 'Force Debug Halt Threshold',
                                    'exists' => 'true',
                                    'mask' => '0x0000003f',
                                    'shared' => 'true'
                                  },
                       'mitbnd1' => {
                                      'mask' => '0xffffffff',
                                      'reset' => '0xffffffff',
                                      'number' => '0x7d6',
                                      'exists' => 'true'
                                    },
                       'mhpmcounter3' => {
                                           'exists' => 'true',
                                           'reset' => '0x0',
                                           'mask' => '0xffffffff'
                                         },
                       'dcsr' => {
                                   'exists' => 'true',
                                   'reset' => '0x40000003',
                                   'poke_mask' => '0x00008dcc',
                                   'debug' => 'true',
                                   'mask' => '0x00008c04'
                                 },
                       'mcountinhibit' => {
                                            'reset' => '0x0',
                                            'exists' => 'true',
                                            'commnet' => 'Performance counter inhibit. One bit per counter.',
                                            'mask' => '0x7d',
                                            'poke_mask' => '0x7d'
                                          },
                       'mitcnt1' => {
                                      'exists' => 'true',
                                      'reset' => '0x0',
                                      'number' => '0x7d5',
                                      'mask' => '0xffffffff'
                                    },
                       'pmpaddr10' => {
                                        'exists' => 'false'
                                      },
                       'pmpcfg2' => {
                                      'exists' => 'false'
                                    },
                       'pmpcfg3' => {
                                      'exists' => 'false'
                                    },
                       'miccmect' => {
                                       'mask' => '0xffffffff',
                                       'reset' => '0x0',
                                       'number' => '0x7f1',
                                       'exists' => 'true'
                                     },
                       'instret' => {
                                      'exists' => 'false'
                                    },
                       'pmpaddr15' => {
                                        'exists' => 'false'
                                      },
                       'mhpmcounter5' => {
                                           'mask' => '0xffffffff',
                                           'reset' => '0x0',
                                           'exists' => 'true'
                                         },
                       'mscause' => {
                                      'number' => '0x7ff',
                                      'reset' => '0x0',
                                      'exists' => 'true',
                                      'mask' => '0x0000000f'
                                    },
                       'mcgc' => {
                                   'mask' => '0x000003ff',
                                   'poke_mask' => '0x000003ff',
                                   'number' => '0x7f8',
                                   'reset' => '0x200',
                                   'exists' => 'true'
                                 },
                       'pmpaddr13' => {
                                        'exists' => 'false'
                                      },
                       'pmpaddr11' => {
                                        'exists' => 'false'
                                      },
                       'mcpc' => {
                                   'mask' => '0x0',
                                   'number' => '0x7c2',
                                   'reset' => '0x0',
                                   'comment' => 'Core pause',
                                   'exists' => 'true'
                                 },
                       'micect' => {
                                     'exists' => 'true',
                                     'number' => '0x7f0',
                                     'reset' => '0x0',
                                     'mask' => '0xffffffff'
                                   },
                       'tselect' => {
                                      'exists' => 'true',
                                      'reset' => '0x0',
                                      'mask' => '0x3'
                                    },
                       'mie' => {
                                  'mask' => '0x70000888',
                                  'exists' => 'true',
                                  'reset' => '0x0'
                                },
                       'pmpaddr7' => {
                                       'exists' => 'false'
                                     },
                       'pmpcfg0' => {
                                      'exists' => 'false'
                                    },
                       'meicurpl' => {
                                       'reset' => '0x0',
                                       'number' => '0xbcc',
                                       'exists' => 'true',
                                       'comment' => 'External interrupt current priority level.',
                                       'mask' => '0xf'
                                     }
                     },
            'numiregs' => '32',
            'target' => 'default',
            'pic' => {
                       'pic_meigwclr_count' => 31,
                       'pic_meie_count' => 31,
                       'pic_region' => '0xf',
                       'pic_meipl_offset' => '0x0000',
                       'pic_total_int_plus1' => 32,
                       'pic_meipt_offset' => '0x3004',
                       'pic_mpiccfg_offset' => '0x3000',
                       'pic_meigwclr_offset' => '0x5000',
                       'pic_base_addr' => '0xf00c0000',
                       'pic_meigwctrl_offset' => '0x4000',
                       'pic_meip_count' => 1,
                       'pic_meip_mask' => '0x0',
                       'pic_meip_offset' => '0x1000',
                       'pic_mpiccfg_mask' => '0x1',
                       'pic_bits' => 15,
                       'pic_meigwclr_mask' => '0x0',
                       'pic_int_words' => 1,
                       'pic_size' => 32,
                       'pic_mpiccfg_count' => 1,
                       'pic_meipt_count' => 31,
                       'pic_meipl_mask' => '0xf',
                       'pic_meigwctrl_count' => 31,
                       'pic_meipt_mask' => '0x0',
                       'pic_total_int' => 31,
                       'pic_offset' => '0xc0000',
                       'pic_meipl_count' => 31,
                       'pic_meie_offset' => '0x2000',
                       'pic_meigwctrl_mask' => '0x3',
                       'pic_meie_mask' => '0x1'
                     },
            'testbench' => {
                             'TOP' => 'tb_top',
                             'lderr_rollback' => '1',
                             'ext_datawidth' => '64',
                             'CPU_TOP' => '`RV_TOP.veer',
                             'RV_TOP' => '`TOP.rvtop',
                             'build_axi_native' => 1,
                             'SDVT_AHB' => '0',
                             'sterr_rollback' => '0',
                             'ext_addrwidth' => '32',
                             'clock_period' => '100',
                             'assert_on' => '',
                             'build_axi4' => 1
                           },
            'bus' => {
                       'lsu_bus_id' => '1',
                       'sb_bus_tag' => '1',
                       'ifu_bus_id' => '1',
                       'dma_bus_tag' => '1',
                       'lsu_bus_prty' => '2',
                       'ifu_bus_prty' => '2',
                       'dma_bus_id' => '1',
                       'bus_prty_default' => '3',
                       'sb_bus_prty' => '2',
                       'sb_bus_id' => '1',
                       'lsu_bus_tag' => 3,
                       'dma_bus_prty' => '2',
                       'ifu_bus_tag' => '3'
                     },
            'nmi_vec' => '0x11110000'
          );
1;
