.text 
.globl f
.ent f
f:
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
#SP-16
nop
li $2, 0
li $2, 10
sw $2,-16($30)
lw $8,-16($30)
sw $8,-8($30)
#SP-16
nop
li $2, 0
li $2, 20
sw $2,-16($30)
lw $8,-16($30)
sw $8,-4($30)
lw $4,-8($30)
lw $5,-4($30)
addiu $sp, $sp,-12
la $2,g
jalr $2
addiu $sp, $sp,12
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
.end f
