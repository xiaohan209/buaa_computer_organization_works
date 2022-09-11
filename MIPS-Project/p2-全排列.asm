.data
biaoji: .space 32
array: .space 32
zhan: .space 100

.text
la $sp,zhan
addiu $sp,$sp,100
li $v0,5
syscall
move $s0,$v0 #s0 is n
li $a1,0
jal ret
nop
li $v0,10
syscall
ret:
move $t0,$zero
beq $a1,$s0,dayin
loop:
beq $t0,$s0,hui
sll $t3,$t0,2
lw $t8,biaoji($t3)
beq $t8,$zero,next
con:
addiu $t0,$t0,1
j loop

next:
sll $t3,$a1,2
addiu $t1,$t0,1
sw $t1,array($t3)
sll $t3,$t0,2
li $t1,1
sw $t1,biaoji($t3)
subiu $sp,$sp,12
sw $ra,0($sp)
sw $t0,4($sp)
sw $a1,8($sp)
addiu $a1,$a1,1
jal ret
nop
lw $ra,0($sp)
lw $t0,4($sp)
lw $a1,8($sp)
addiu $sp,$sp,12
sll $t3,$t0,2
sw $zero,biaoji($t3)
j con

hui:
jr $ra

dayin:
beq $t0,$s0,dayinend
sll $t3,$t0,2
lw $a0,array($t3)
li $v0,1
syscall
li $a0,32
li $v0,11
syscall
addiu $t0,$t0,1
j dayin
dayinend:
li $v0,11
li $a0,10
syscall
jr $ra
