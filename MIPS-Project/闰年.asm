li $v0,5
syscall
move $t1,$v0
div $t2,$t1,400
mul $t3,$t2,400
sub $t4,$t1,$t3
beq $t4,$0,run

div $t2,$t1,100
mul $t3,$t2,100
sub $t4,$t1,$t3
beq $t4,$0,ping

div $t2,$t1,4
mul $t3,$t2,4
sub $t4,$t1,$t3
beq $t4,$0,run

j ping

run: 
li $v0,1
li $a0,1
li $t5,1
syscall 
li $v0,10
syscall

ping:
li $v0,1
li $a0,0
li $t5,0
syscall
li $v0,10
syscall