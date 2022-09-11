.data
array: .space 100
.text
li $v0,5
syscall
move $s0,$v0 #s0 is n
move $t0,$zero
loopin:
beq $t0,$s0,inend
li $v0,12
syscall
sll $t3,$t0,2
sw $v0,array($t3)
addiu $t0,$t0,1
j loopin
inend:
move $t0,$zero
loopb:
beq $t0,$s0,right
sll $t3,$t0,2
lw $t8,array($t3)
subu $t3,$s0,$t0
subi $t3,$t3,1
sll $t3,$t3,2
lw $t9,array($t3)
bne $t8,$t9,false
addiu $t0,$t0,1
j loopb

right:
li $v0,1
li $a0,1
syscall
li $v0,10
syscall
false:
li $v0,1
li $a0,0
syscall
li $v0,10
syscall