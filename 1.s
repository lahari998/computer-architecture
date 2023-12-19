.data
#The following line defines the 15 values present in the memory.
# We would use different values in our evaluation and
# hence you should try various combinations of these values in your testing.
.dword 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 523, 524, 525, 533, 512
#(dword stands for doubleword)

.text
    #The following line initializes register x3 with 0x10000000 
    #so that you can use x3 for referencing various memory locations. 
    lui x3, 0x10000
    #your code starts here
     
    ld x4, 0(x3)
    ld x5, 8(x3)
    ld x6, 16(x3)
    ld x7, 24(x3)
    ld x8, 32(x3)
    ld x9, 40(x3)
    ld x11, 48(x3)
    ld x12, 56(x3)
    ld x13, 64(x3)
    ld x14, 72(x3)
    
    add x5,x4,x5
    add x6,x5,x6
    add x7,x6,x7
    add x8,x7,x8
    add x9,x8,x9
    add x11,x9,x11
    add x12,x11,x12
    add x13,x12,x13
    add x14,x13,x14
    
    ld x4, 80(x3)
    ld x5, 88(x3)
    ld x6, 96(x3)
    ld x7, 104(x3)
    ld x8, 112(x3)
    
    add x5,x4,x5
    add x6,x5,x6
    add x7,x6,x7
    add x8,x7,x8
    
    sub x10,x14,x8
    
    
 
    
   #    WRITE YOUR CODE HERE
 
    
    #The final result should be in register x10
