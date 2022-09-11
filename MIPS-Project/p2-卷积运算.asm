.data
matrix: .space 500
he: .space 500
.text
li $v0,5
syscall
move $s0,$v0 #s0 is m1
li $v0,5
syscall
move $s1,$v0 #s1 is n1
li $v0,5
syscall
move $s2,$v0 #s2 is m2
li $v0,5
syscall
move $s3,$v0 #s3 is n2
mul $s4,$s0,$s1 #s4 is number of matrix
mul $s5,$s2,$s3 #s5 is number of he
subu $s6,$s0,$s2
addiu $s6,$s6,1 #s6 is m1-m2+1
subu $s7,$s1,$s3
addiu $s7,$s7,1 #s7 is n1-n2+1
move $t0,$zero
move $t1,$zero
loopa:
beq $t0,$s4,loopb
sll $t3,$t0,2
li $v0,5
syscall
sw $v0,matrix($t3)
addiu $t0,$t0,1
j loopa
nop
loopb:
beq $t1,$s5,start
sll $t3,$t1,2
li $v0,5
syscall
sw $v0,he($t3)
addiu $t1,$t1,1
j loopb
nop
start:
move $t0,$zero

loopw:
beq $t0,$s6,end
move $t1,$zero
loopx:
beq $t1,$s7,loopxend
move $t7,$zero #t7 is sum
move $t8,$zero
loopy:
beq $t8,$s2,loopyend
move $t9,$zero
loopz:
beq $t9,$s3,loopzend
addu $t2,$t0,$t8
mul $t2,$t2,$s1
addu $t2,$t2,$t1
addu $t2,$t2,$t9
sll $t3,$t2,2
lw $t4,matrix($t3)
mul $t2,$t8,$s3
addu $t2,$t2,$t9
sll $t3,$t2,2
lw $t5,he($t3)
mul $t6,$t4,$t5
addu $t7,$t7,$t6



addiu $t9,$t9,1
j loopz
nop
loopzend:

addiu $t8,$t8,1
j loopy
nop

loopyend:
li $v0,1
move $a0,$t7
syscall
li $v0,11
li $a0,32
syscall

addiu $t1,$t1,1
j loopx
nop
loopxend:
li $v0,11
li $a0,10
syscall
addiu $t0,$t0,1
j loopw
nop
end:
li $v0,10
syscall



















