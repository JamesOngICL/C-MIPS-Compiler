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
##Type: 1
sw $5,12($30)
##Type: 1
sw $6,16($30)
##Type: 1
sw $7,20($30)
##Type: 1
sw $8,24($30)
addiu $2,$30,8
sw $2,-4($30)
nop
nop
lw $2,0($2)
sw $2,-4($30)
addiu $2,$30,12
sw $2,-8($30)
nop
nop
lw $2,0($2)
sw $2,-8($30)
lw $2,-4($30)
lw $8,-8($30)
addu $2,$2,$8
sw $2,-4($30)
addiu $2,$30,16
sw $2,-8($30)
nop
nop
lw $2,0($2)
sw $2,-8($30)
lw $2,-4($30)
lw $8,-8($30)
addu $2,$2,$8
sw $2,-4($30)
addiu $2,$30,20
sw $2,-8($30)
nop
nop
lw $2,0($2)
sw $2,-8($30)
lw $2,-4($30)
lw $8,-8($30)
addu $2,$2,$8
sw $2,-4($30)
addiu $2,$30,24
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
#SP-28
nop
li $2, 0
li $2, 1
sw $2,-28($30)
lw $8,-28($30)
sw $8,-20($30)
#SP-28
nop
li $2, 0
li $2, 2
sw $2,-28($30)
lw $8,-28($30)
sw $8,-16($30)
#SP-28
nop
li $2, 0
li $2, 3
sw $2,-28($30)
lw $8,-28($30)
sw $8,-12($30)
#SP-28
nop
li $2, 0
li $2, 4
sw $2,-28($30)
lw $8,-28($30)
sw $8,-8($30)
#SP-28
nop
li $2, 0
li $2, 5
sw $2,-28($30)
lw $8,-28($30)
sw $8,-4($30)
lw $4,-20($30)
lw $5,-16($30)
lw $6,-12($30)
lw $7,-8($30)
sw $8,-8($30)
addiu $sp, $sp,-24
la $2,g
jalr $2
addiu $sp, $sp,24
sw $2,-4($30)
b RETURN_2
RETURN_2:
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
