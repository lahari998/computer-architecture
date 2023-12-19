 .section .data
 L1: .word 1000000
 .section .text
 .global main

 main:
  la x3, L1
  li x1,0x10012004
  sw x0, 0(x1)
  li x2,0x10012008
  li x4, 0x00000020
  sw x4, 0(x2)
 loop:
  li x5, 0x1001200C
  li x4, 0x00000020
  sw x4, 0(x5)
  lw x6, 0(x3)
  delay_on:
   addi x6, x6, -1
   bnez x6, delay_on
   sw x0, 0(x5)
   lw x7, 0(x3)
  delay_off:
   addi x7, x7, -1
   bnez x7, delay_off
   j loop
