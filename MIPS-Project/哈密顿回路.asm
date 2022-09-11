.data
matrix: .space 256
biaoji: .space 32
zhan: .space 1000
.macro getindex(%ans,%i,%j)
subi %ans,%i,1
mul %ans,%ans,$s0
addu %ans,%ans,%j
subi %ans,%ans,1
sll %ans,%ans,2
.end_macro

.text
main:
la $sp,zhan
addiu $sp,$sp,1000 #move sp to stack
li $s2,1	#s2 is 1
jal read
nop
subi $s3,$s0,1    #s3 is n-1
move $a0,$zero
move $a1,$zero
sw $s2,biaoji($zero)
jal hamiton
nop
li $v0,1
li $a0,0
syscall
li $v0,10
syscall
read:
li $v0,5
syscall
move $s0,$v0	#s0 count of point
li $v0,5
syscall
move $s1,$v0	#s1 count of side
move $t0,$zero	#t0 variate i
duru:		# matrix to decribe side
beq $t0,$s1,duruend
nop
li $v0,5
syscall
move $t4,$v0	#t4 left point
li $v0,5	
syscall
move $t5,$v0	#t5 right point
getindex($t3,$t4,$t5)
sw $s2,matrix($t3)
getindex($t3,$t5,$t4)
sw $s2,matrix($t3)	#put it into matrix
addiu $t0,$t0,1
j duru
nop
duruend:
jr $ra
nop
hamiton:
move $t0,$zero
beq $a0,$s3,panduan	#a0 is n-1?
nop
loop_f:
beq $t0,$s0,hamiton_end	#loop
nop
sll $t3,$t0,2
lw $t8,biaoji($t3)	#t3=biaoji[i]
bne $t8,$zero,p
mul $t3,$a1,$s0
addu $t3,$t3,$t0
sll $t3,$t3,2
lw $t8,matrix($t3)	#t3=matrix[dingdian][i]
bne $t8,1,p
sll $t3,$t0,2
sw $s2,biaoji($t3)	#biaoji[i]=1
subiu $sp,$sp,16
sw $ra,($sp)	  #0 is ra
sw $a0,4($sp)   #4 is count of floor
sw $a1,8($sp)   #8 is count of point
sw $t0,12($sp)	  #12 is 'i'
addi $a0,$a0,1
move $a1,$t0
jal hamiton
nop
lw $ra,($sp)
lw $a0,4($sp)
lw $a1,8($sp)
lw $t0,12($sp)
addiu $sp,$sp,16
sll $t3,$t0,2
sw $zero,biaoji($t3)	#biaoji[i]=0

p:addiu $t0,$t0,1
j loop_f
nop
panduan:
sll $t3,$a1,2
lw $t8,matrix($t3)
beq $t8,1,end
nop
jr $ra
nop
hamiton_end:
jr $ra
nop
end:
li $v0,1
li $a0,1
syscall
li $v0,10
syscall


















