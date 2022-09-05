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
##Type: 1
sw $4,8($30)
addiu $2,$30,8
sw $2,-4($30)
nop
nop
lw $2,0($2)
sw $2,-4($30)
#SP-8
nop
li $2, 0
li $2, 1
sw $2,-8($30)
li $2,0
lw $2,-4($30)
lw $4,-8($30)
beq $2,$4,case_3
#SP-8
nop
li $2, 0
li $2, 2
sw $2,-8($30)
li $2,0
lw $2,-4($30)
lw $4,-8($30)
beq $2,$4,case_4
b exit_2
case_3:
#SP-4
nop
li $2, 0
li $2, 10
sw $2,-4($30)
b RETURN_1
case_4:
#SP-4
nop
li $2, 0
li $2, 11
sw $2,-4($30)
b RETURN_1

exit_2:
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
