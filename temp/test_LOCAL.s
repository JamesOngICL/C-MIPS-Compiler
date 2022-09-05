.text 
.globl ffff
.ent ffff
ffff:
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
addiu $2,$30,-4
sw $2,-8($30)
nop
#SP-12
nop
li $2, 0
li $2, 10
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
.end ffff
