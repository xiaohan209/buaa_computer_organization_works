.data
matrix: .space 800
biaoji: .space 800
zhan: .space 2000
.text
move $s0,$zero #s0 is sum
la $sp,zhan
addiu $sp,$sp,2000
jal duru
nop
move $a1,$s3
move $a2,$s4
li $t8,1
mul $t9,$s3,$s2
add $t9,$t9,$s4
sll $t9,$t9,2
sw $t8,biaoji($t9)
jal find
nop
move $a0,$s0
li $v0,1
syscall
li $v0,10
syscall

#################################

duru:
li $v0,5
syscall
move $s1,$v0 #s1 is row
li $v0,5
syscall
move $s2,$v0 #s2 is column
move $t0,$zero
loop1:
beq $t0,$s1,loop1end
move $t1,$zero
loop2:
beq $t1,$s2,loop2end
li $v0,5
syscall
move $t8,$v0
mul $t9,$t0,$s2
add $t9,$t9,$t1
sll $t9,$t9,2
sw $t8,matrix($t9)
addiu $t1,$t1,1
j loop2
nop
loop2end:
addiu $t0,$t0,1
j loop1
nop
loop1end:
li $v0,5
syscall
move $s3,$v0
addiu $s3,$s3,-1 # s3 is start:i
li $v0,5
syscall
move $s4,$v0 
addiu $s4,$s4,-1 # s4 is start:j
li $v0,5
syscall
move $s5,$v0 
addiu $s5,$s5,-1 #s5 is end:i
li $v0,5
syscall
move $s6,$v0
addiu $s6,$s6,-1 #s6 is end:j
jr $ra
nop

###################################

find:
beq $a1,$s5,eq1
nop

bltz $a1,out
nop
bltz $a2,out
nop
beq $a1,$s1,out
nop
beq $a2,$s2,out
nop

shang:
beq $a1,$zero,zuo
addi $t9,$a1,-1
mul $t9,$t9,$s2
add $t9,$t9,$a2
sll $t9,$t9,2
lw $t7,matrix($t9)
lw $t8,biaoji($t9)
beqz $t7,shang1
nop

zuo:
beq $a2,$zero,you
mul $t9,$a1,$s2
add $t9,$t9,$a2
addi $t9,$t9,-1
sll $t9,$t9,2
lw $t7,matrix($t9)
lw $t8,biaoji($t9)
beqz $t7,zuo1
nop

you:
beq $a2,$s2,xia
mul $t9,$a1,$s2
add $t9,$t9,$a2
addi $t9,$t9,1
sll $t9,$t9,2
lw $t7,matrix($t9)
lw $t8,biaoji($t9)
beqz $t7,you1
nop

xia:
beq $a1,$s1,out
addi $t9,$a1,1
mul $t9,$t9,$s2
add $t9,$t9,$a2
sll $t9,$t9,2
lw $t7,matrix($t9)
lw $t8,biaoji($t9)
beqz $t7,xia1
nop

out:
jr $ra
nop
#################
eq1:
beq $a2,$s6,eq2
nop
j shang

eq2:
addiu $s0,$s0,1
j out
nop

shang1:
beqz $t8,shang2
j zuo
nop
shang2:
li $t8,1
sw $t8,biaoji($t9)
addiu $sp,$sp,-16
sw $ra,0($sp)
sw $a1,4($sp)
sw $a2,8($sp)
sw $t9,12($sp)
addiu $t8,$a1,-1
move $a1,$t8
jal find
lw $ra,0($sp)
lw $a1,4($sp)
lw $a2,8($sp)
lw $t9,12($sp)
addiu $sp,$sp,16
sw $zero,biaoji($t9)
j zuo
nop

zuo1:
beqz $t8,zuo2
j you
nop
zuo2:
li $t8,1
sw $t8,biaoji($t9)
addiu $sp,$sp,-16
sw $ra,0($sp)
sw $a1,4($sp)
sw $a2,8($sp)
sw $t9,12($sp)
addiu $t8,$a2,-1
move $a2,$t8
jal find
lw $ra,0($sp)
lw $a1,4($sp)
lw $a2,8($sp)
lw $t9,12($sp)
addiu $sp,$sp,16
sw $zero,biaoji($t9)
j you
nop

you1:
beqz $t8,you2
j xia
you2:
li $t8,1
sw $t8,biaoji($t9)
addiu $sp,$sp,-16
sw $ra,0($sp)
sw $a1,4($sp)
sw $a2,8($sp)
sw $t9,12($sp)
addiu $t8,$a2,1
move $a2,$t8
jal find
lw $ra,0($sp)
lw $a1,4($sp)
lw $a2,8($sp)
lw $t9,12($sp)
addiu $sp,$sp,16
sw $zero,biaoji($t9)
j xia
nop

xia1:
beqz $t8,xia2
j out
nop
xia2:
li $t8,1
sw $t8,biaoji($t9)
addiu $sp,$sp,-16
sw $ra,0($sp)
sw $a1,4($sp)
sw $a2,8($sp)
sw $t9,12($sp)
addiu $t8,$a1,1
move $a1,$t8
jal find
lw $ra,0($sp)
lw $a1,4($sp)
lw $a2,8($sp)
lw $t9,12($sp)
addiu $sp,$sp,16
sw $zero,biaoji($t9)
j out
nop
################################
