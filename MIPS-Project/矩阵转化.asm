.data 
matrix: .space 10000
kong: .asciiz " "
huan: .asciiz "\n"
.text
li $v0,5
syscall
move $t0,$v0 # t0 hangshu
li $v0,5
syscall
move $t1,$v0 # t1 lieshu
mul $t2,$t0,$t1 #t2 zonggeshu
move $t3,$0 # s0 bianliang i

xunhuan1:
beq $t3,$t2,chu
nop
li $v0,5
syscall
mul $t4,$t3,4
sw $v0,matrix($t4)
addi $t3,$t3,1
j xunhuan1
nop

chu:
beq $t3,0,out
nop
subi $t5,$t3,1
mul $t4,$t5,4 #t4=(t3-1)*4
lw $t9,matrix($t4)
bne $t9,0,print
nop
subi $t3,$t3,1
j chu
nop

print:
subi $t3,$t3,1
divu $t3,$t1
mflo $t6 
addiu $t6,$t6,1 #t6 hang
mfhi $t7
addiu $t7,$t7,1 #t7 lie
move $a0,$t6
li $v0 1
syscall
la $a0,kong
li $v0,4
syscall
move $a0,$t7
li $v0,1
syscall
la $a0,kong
li $v0,4
syscall
move $a0,$t9
li $v0,1
syscall
la $a0,huan
li $v0,4
syscall
j chu
nop

out:
li $v0,10
syscall

