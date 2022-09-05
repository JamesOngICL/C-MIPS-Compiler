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
##Type: 1
sw $4,8($30)
##Type: 1
sw $5,12($30)
sw $0,-4($30)
addiu $2,$30,-4
sw $2,-8($30)
nop
addiu $2,$30,8
sw $2,-12($30)
nop
nop
lw $2,0($2)
sw $2,-12($30)
addiu $2,$30,12
sw $2,-16($30)
nop
nop
lw $2,0($2)
sw $2,-16($30)
lw $2,-12($30)
lw $8,-16($30)
slt $2,$8,$2
xori $2,$2,1
andi $2,$2,255
sw $2,-12($30)
lw $8,-12($30)
lw $2,-8($30)
sw $8,0($2)
sw $8,-8($30)
addiu $2,$30,-4
sw $2,-8($30)
nop
nop
lw $2,0($2)
sw $2,-8($30)
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
