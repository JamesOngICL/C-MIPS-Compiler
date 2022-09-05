.globl vv
.data
vv:
.word 13
.globl yy
.data
yy:
.word 10
.text 
.globl g
.ent g
g:
sw $31, -4($29)
sw $30, -8($29)
addiu $29,$29,-1
addiu $29,$29,-1
addiu $29,$29,-1
addiu $29,$29,-1
addiu $29,$29,-1
addiu $29,$29,-1
addiu $29,$29,-1
addiu $29,$29,-1
move $30,$29
nop
la $2,vv
sw $2,-4($30)
nop
nop
lw $2,0($2)
sw $2,-4($30)
nop
la $2,yy
sw $2,-8($30)
nop
nop
lw $2,0($2)
sw $2,-8($30)
lw $2,-4($30)
lw $8,-8($30)
addu $2,$2,$8
sw $2,-4($30)
b RETURN_1
RETURN_1:
move $29, $30
addiu $29,$29,1
addiu $29,$29,1
addiu $29,$29,1
addiu $29,$29,1
addiu $29,$29,1
addiu $29,$29,1
addiu $29,$29,1
addiu $29,$29,1
li $30,0
lw $30,-8($29)
lw $31,-4($29)
jr $31
nop
nop
nop
.end g
