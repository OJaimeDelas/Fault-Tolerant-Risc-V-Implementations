// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// Abstract primitives wrapper.
//
// This file is a stop-gap until the DV file list is generated by FuseSoC.
// Its contents are taken from the file which would be generated by FuseSoC.
// https://github.com/lowRISC/ibex/issues/893

module prim_clock_mux2 #(
  parameter bit NoFpgaBufG = 1'b0
) (
  input        clk0_i,
  input        clk1_i,
  input        sel_i,
  output logic clk_o
);

if (1) begin : gen_generic
  prim_generic_clock_mux2 #(
    .NoFpgaBufG(NoFpgaBufG)
  ) u_impl_generic (
    .*
  );
end

endmodule
