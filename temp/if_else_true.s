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
##Here 1
#SP-4
nop
li $2, 0
li $2, 1
sw $2,-4($30)
lw $2,-4($30)
bne $0,$2,jump_cond2_1
##if_true->generateMIPS(dst,context)
addu $t0,$2,$2
#SP-4
nop
li $2, 0
li $2, 10
sw $2,-4($30)
b RETURN_1
beq $0,$0,jump_cond1_2
addu $t0,$2,$2
jump_cond2_1:
#SP-4
nop
li $2, 0
li $2, 11
sw $2,-4($30)
b RETURN_1
jump_cond1_2:
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
