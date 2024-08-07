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


.section .midccm
#A: .space 4 # 4 Bytes, an integer

.text
main:

la t0, 0x0 # t0 = addr(A)

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

   add t4, t4, t5          # t4 = t4 + t5
   sub t3, t4, t3          # t3 = t4 - t3
   add t2, t2, t4          # t2 = t2 + t4

   and t2,t2,t3   # t2 = t2 and t3 


   addi x13,x0, 0x2 #Number of shift loop iterations

   SHIFT_x13:

      sll t2, t2, t1   # t2 = t2*2^(t1)
      xori t2,t2, 170 # xor with 10101010

      sub x13,x13, t1 # Decrease shift loop counter
      bge x13, zero, SHIFT_x13 # Keep branching if not enough iterations

   
   and t2,t2,x14 # only keep some bits (x14)
   
   sw t2, (t0) # Store value of t2

   INSERT_NOPS_5

   addi t1,x0, 0x1 #Reset increment values
   addi t2,x0, 0x2
   addi t3,x0, 0x3
   addi t4,x0, 0x4

   addi x12, x12, -1 #Decrease loop counter

   bne x12, zero, REPEAT_x12    # Repeat the loop

.end