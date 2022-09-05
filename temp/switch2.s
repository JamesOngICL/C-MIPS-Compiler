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
sw $0,-4($30)
addiu $2,$30,-4
sw $2,-8($30)
nop
#SP-12
nop
li $2, 0
li $2, 0
sw $2,-12($30)
lw $8,-12($30)
lw $2,-8($30)
sw $8,0($2)
sw $8,-8($30)
addiu $2,$30,8
sw $2,-20($30)
nop
nop
lw $2,0($2)
sw $2,-20($30)
#SP-24
nop
li $2, 0
li $2, 0
sw $2,-24($30)
li $2,0
lw $2,-20($30)
lw $4,-24($30)
beq $2,$4,case_3
#SP-24
nop
li $2, 0
li $2, 2
sw $2,-24($30)
li $2,0
lw $2,-20($30)
lw $4,-24($30)
beq $2,$4,case_4
#SP-24
nop
li $2, 0
li $2, 1
sw $2,-24($30)
li $2,0
lw $2,-20($30)
lw $4,-24($30)
beq $2,$4,case_5
li $0,0
beq $0,$0,default_6
b exit_2
case_3:
addiu $2,$30,-4
sw $2,-8($30)
nop
#SP-12
nop
li $2, 0
li $2, 1
sw $2,-12($30)
lw $8,-12($30)
lw $2,-8($30)
sw $8,0($2)
sw $8,-8($30)
b exit_2
case_4:
addiu $2,$30,-4
sw $2,-8($30)
nop
#SP-12
nop
li $2, 0
li $2, 2
sw $2,-12($30)
lw $8,-12($30)
lw $2,-8($30)
sw $8,0($2)
sw $8,-8($30)
case_5:
addiu $2,$30,-4
sw $2,-8($30)
nop
addiu $2,$30,-4
sw $2,-12($30)
nop
nop
lw $2,0($2)
sw $2,-12($30)
#SP-16
nop
li $2, 0
li $2, 1
sw $2,-16($30)
lw $2,-12($30)
lw $8,-16($30)
addu $2,$2,$8
sw $2,-12($30)
lw $8,-12($30)
lw $2,-8($30)
sw $8,0($2)
sw $8,-8($30)
b exit_2
default_6:
addiu $2,$30,-4
sw $2,-8($30)
nop
addiu $2,$30,8
sw $2,-12($30)
nop
nop
lw $2,0($2)
sw $2,-12($30)
#SP-16
nop
li $2, 0
li $2, 1
sw $2,-16($30)
lw $2,-12($30)
lw $8,-16($30)
addu $2,$2,$8
sw $2,-12($30)
lw $8,-12($30)
lw $2,-8($30)
sw $8,0($2)
sw $8,-8($30)

exit_2:
addiu $2,$30,-4
sw $2,-20($30)
nop
nop
lw $2,0($2)
sw $2,-20($30)
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
