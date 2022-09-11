.data 
mt1: .space 400
mt2: .space 400
.text
li $v0,5
syscall
move $s0,$v0 #s0 is n
mul $s1,$s0,$s0 #s1 is n^2
move $t0,$zero
move $t1,$zero
loop1:
beq $t0,$s1,loop2 
li $v0,5
syscall
sll $t3,$t0,2
sw $v0,mt1($t3)
addiu $t0,$t0,1
j loop1

loop2:
beq $t1,$s1,start 
li $v0,5
syscall
sll $t3,$t1,2
sw $v0,mt2($t3)
addiu $t1,$t1,1
j loop2

start:
move $t0,$zero #t0 is mt1's row

loopa:
move $t1,$zero #t1 is mt2's column
beq $t0,$s0,enda
loopb:
beq $t1,$s0,endb
move $s2,$zero #s2 is sum
move $t2,$zero #t2 is neibuxunhuanliang
loopx:
beq $t2,$s0,endx
mul $t3,$t0,$s0
addu $t3,$t3,$t2
sll $t3,$t3,2
lw $t8,mt1($t3)
mul $t3,$t2,$s0
addu $t3,$t3,$t1
sll $t3,$t3,2
lw $t9,mt2($t3)
mul $t7,$t8,$t9
addu $s2,$s2,$t7
addiu $t2,$t2,1
j loopx
endx:
li $v0,1
move $a0,$s2
syscall
li $v0,11
li $a0,32
syscall
addiu $t1,$t1,1
j loopb
endb:
li $v0,11
li $a0,10
syscall
addiu $t0,$t0,1
j loopa

enda:
li $v0,10
syscall


