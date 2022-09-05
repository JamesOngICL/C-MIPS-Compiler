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
sw $0,-4($30)
sw $0,-8($30)
addiu $2,$30,-8
sw $2,-12($30)
nop
#SP-16
nop
li $2, 0
li $2, 0
sw $2,-16($30)
lw $8,-16($30)
lw $2,-12($30)
sw $8,0($2)
sw $8,-12($30)
addiu $2,$30,-4
sw $2,-12($30)
nop
#SP-16
nop
li $2, 0
li $2, 0
sw $2,-16($30)
lw $8,-16($30)
lw $2,-12($30)
sw $8,0($2)
sw $8,-12($30)
foropen_1:
addiu $2,$30,-4
sw $2,-12($30)
nop
nop
lw $2,0($2)
sw $2,-12($30)
#SP-16
nop
li $2, 0
li $2, 10
sw $2,-16($30)
lw $2,-12($30)
lw $8,-16($30)
slt $2,$2,$8
sw $2,-12($30)
lw $4,-12($30)
beq $0,$4,forclose_2
addiu $2,$30,-8
sw $2,-12($30)
nop
addiu $2,$30,-8
sw $2,-16($30)
nop
nop
lw $2,0($2)
sw $2,-16($30)
#SP-20
nop
li $2, 0
li $2, 1
sw $2,-20($30)
lw $2,-16($30)
lw $8,-20($30)
subu $2,$2,$8
sw $2,-16($30)
lw $8,-16($30)
lw $2,-12($30)
sw $8,0($2)
sw $8,-12($30)
addiu $2,$30,-4
sw $2,-36($30)
nop
addiu $2,$30,-4
sw $2,-40($30)
nop
nop
lw $2,0($2)
sw $2,-40($30)
#SP-44
nop
li $2, 0
li $2, 1
sw $2,-44($30)
lw $2,-40($30)
lw $8,-44($30)
addu $2,$2,$8
sw $2,-40($30)
lw $8,-40($30)
lw $2,-36($30)
sw $8,0($2)
sw $8,-36($30)
b foropen_1
forclose_2:
addiu $2,$30,-8
sw $2,-36($30)
nop
nop
lw $2,0($2)
sw $2,-36($30)
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
