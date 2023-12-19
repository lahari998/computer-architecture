.data
.word 0x0000000000D18863
.text
lui x3,0x10000
lw x4, 0(x3)
andi x2,x4,0x7F

li x3,0x33
beq x2,x3,R_type


li x3,0x13
beq x2,x3,I_type

li x4,0x03
beq x2,x4,I_type

li x5,0x73
beq x2,x5,I_type

li x6,0x67
beq x2,x6,I_type

li x3,0x6F
beq x2,x3,J_type

li x3,0x23
beq x2,x3,S_type

li x3,0x63
beq x2,x3,B_type

li x3,0x17
beq x2,x3,U_type

li x3,0x37
beq x2,x3,U_type

j unrecognized
    
R_type:
    li x10, 1
    j done

I_type:
    li x10,2
    j done

J_type:
    li x10,5
    j done
    
S_type:
    li x10,4
    j done
    
B_type:
    li x10,3
    j done
    
U_type:
    li x10,6
    j done
    
unrecognized:
    li x10,0
    
done:
    sw x10,0(x10)