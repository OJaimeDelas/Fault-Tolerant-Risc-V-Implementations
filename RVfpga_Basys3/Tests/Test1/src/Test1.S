#              Test1
# This code is used to verify the functioning of a CPU Pipeline.
# It consists on a sequence of operations, that target the Arithmetic Unit,
# the Branch Controller, the Register File and the Memory Controller.
# 
# The program works on a variable named Value, allocated in 4B of memory,
# 4 temporary constants are used to operate on Value, whose address is t0.
#
# The Outer Loop (REPEAT_X12) executes 3 times. For each, the inner loop
# (REPEAT_X13) operates another 2 times.
# With each Outer Loop execution, the Value is updated in the DCCM.
#
# The first loop starts with Value = 1.
# Then: 1 - 22 - 14 - 14
#
#  -------- Verilator Simulation -----
#
# In the Verilator simulation, with the default memory placement,
# the program start at 27160ps marker, at pc=0x800
# - Check Test1.dis (built with "make Test1.dis") to vizualize addresses and opcodes
# 
# The values of "Value" can be checked in the AND t2, t2, x14 operation
# The address of this operation is 0x85c, opcode is 00e3f3b3
#
# The AND result can be seen in "result[31:0]" signal, already configured
# in the .tcl file. The first result can be seen at 28600ps marker.



#define INSERT_NOPS_1	   nop;
#define INSERT_NOPS_2	   nop; INSERT_NOPS_1
#define INSERT_NOPS_3	   nop; INSERT_NOPS_2
#define INSERT_NOPS_4	   nop; INSERT_NOPS_3
#define INSERT_NOPS_5	   nop; INSERT_NOPS_4
#define INSERT_NOPS_6	   nop; INSERT_NOPS_5
#define INSERT_NOPS_7	   nop; INSERT_NOPS_6
#define INSERT_NOPS_8	   nop; INSERT_NOPS_7
#define INSERT_NOPS_9	   nop; INSERT_NOPS_8
#define INSERT_NOPS_10	   nop; INSERT_NOPS_9


.globl main

.data
Value: .byte 4 # .data is DCCM in the .ld file. This line defines a 4B variable in the DCCM

.text # From this line on, everything is on the ICCM

main:

la t0, Value # t0 = addr(Value) (t0 = DCCM Starting Address - 0xf0040000)

addi t1,x0, 0x1 # Used in multiplication/shift (x 2^(t1))
addi t2,x0, 0x2
addi t3,x0, 0x3
addi t4,x0, 0x4

addi x14,x0, 0x1f # Bits to retain in t2 before store in each loop ("or" instruction) - 0001 1111

sw t1, (t0) # Now there is the value 1 in DCCM[A]

addi x12,x0, 0x3 #Number of main loop iterations

REPEAT_x12:
   INSERT_NOPS_5
   lw t5, (t0) # Gather previous value of t2 (starts with =1, stored by t1)

   add t4, t4, t5          # t4 = t4 + t5 (t4 = 4 + 1 = 5)
   sub t3, t4, t3          # t3 = t4 - t3 (t3 = 5 - 3 = 2)
   add t2, t2, t4          # t2 = t2 + t4 (t2 = 2 + 5 = 7)

   and t2,t2,t3   # t2 = t2 and t3 (t2 = 0000 0111 & 0000 0010 = 0000 0010 = 2) 


   addi x13,x0, 0x1 #Number of shift loop iterations

   SHIFT_x13:

      sll t2, t2, t1   # t2 = t2*2^(t1) (t2 = 2 * 2^(1) = 4)
      xori t2,t2, 170 # xor with 10101010 (t2 = 0000 0100 xor 10101010 = 1010 1110)

      sub x13,x13, t1 # Decrease shift loop counter
      bge x13, zero, SHIFT_x13 # Keep branching if not enough iterations - after 1st time completion: t2= 1111 0110

   
   and t2,t2,x14 # only keep some bits (x14) (t2 = 1111 0110 & 0001 0111 = 0001 0110 = 22)
   
   sw t2, (t0) # Store value of t2

   INSERT_NOPS_5

   addi t1,x0, 0x1 #Reset increment values
   addi t2,x0, 0x2
   addi t3,x0, 0x3
   addi t4,x0, 0x4

   addi x12, x12, -1 #Decrease loop counter

   bne x12, zero, REPEAT_x12    # Repeat the loop

.end