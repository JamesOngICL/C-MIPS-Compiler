.text 
.globl multiply
.ent multiply
multiply:
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
#SP-8
nop
li $2, 0
li $2, 0
sw $2,-8($30)
li $8,0
lw $8,-8($30)
sw $8,-4($30)
addiu $2,$30,8
sw $2,-8($30)
nop
nop
lw $2,0($2)
sw $2,-8($30)
#SP-12
nop
li $2, 0
li $2, 0
sw $2,-12($30)
lw $2,-8($30)
lw $8,-12($30)
slt $2,$2,$8
sw $2,-8($30)
beq $0,$2,exit_1
addiu $2,$30,8
sw $2,-20($30)
nop
nop
lw $2,0($2)
sw $2,-20($30)
lw $2,-20($30)
sub $2,$0,$2
sw $2,-20($30)
lw $8,-20($30)
sw $8,-12($30)
addiu $2,$30,12
sw $2,-20($30)
nop
nop
lw $2,0($2)
sw $2,-20($30)
lw $8,-20($30)
sw $8,-8($30)
lw $4,-12($30)
lw $5,-8($30)
addiu $sp, $sp,-16
la $2,multiply
jalr $2
addiu $sp, $sp,16
sw $2,-8($30)
lw $2,-8($30)
sub $2,$0,$2
sw $2,-8($30)
b RETURN_1
exit_1:
whileopen_2:
lw $4,-20($30)
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
lw $2,-20($30)
lw $8,-24($30)
slt $2,$8,$2
sw $2,-20($30)
beq $0, $2,whileclose_3
addiu $2,$30,-4
sw $2,-24($30)
nop
addiu $2,$30,-4
sw $2,-28($30)
nop
nop
lw $2,0($2)
sw $2,-28($30)
addiu $2,$30,12
sw $2,-32($30)
nop
nop
lw $2,0($2)
sw $2,-32($30)
lw $2,-28($30)
lw $8,-32($30)
addu $2,$2,$8
sw $2,-28($30)
lw $8,-28($30)
lw $2,-24($30)
sw $8,0($2)
sw $8,-24($30)
addiu $2,$30,8
sw $2,-24($30)
nop
addiu $2,$30,8
sw $2,-28($30)
nop
nop
lw $2,0($2)
sw $2,-28($30)
#SP-32
nop
li $2, 0
li $2, 1
sw $2,-32($30)
lw $2,-28($30)
lw $8,-32($30)
subu $2,$2,$8
sw $2,-28($30)
lw $8,-28($30)
lw $2,-24($30)
sw $8,0($2)
sw $8,-24($30)
b whileopen_2
whileclose_3:
addiu $2,$30,-4
sw $2,-80($30)
nop
nop
lw $2,0($2)
sw $2,-80($30)
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
.end multiply
