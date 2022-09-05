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
##Type: 2
swc1 $12,8($30)
##Type: 1
sw $5,12($30)
li.s $f0, 1
swc1 $f0,-8($30)
li $8,0
lw $8,-8($30)
sw $8,-4($30)
#SP-12
nop
li $2, 0
li $2, 0
sw $2,-12($30)
li $8,0
lw $8,-12($30)
sw $8,-8($30)
whileopen_1:
lw $4,-12($30)
addiu $2,$30,-8
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
slt $2,$2,$8
sw $2,-12($30)
beq $0, $2,whileclose_2
addiu $2,$30,-8
sw $2,-16($30)
nop
addiu $2,$30,-8
sw $2,-20($30)
nop
nop
lw $2,0($2)
sw $2,-20($30)
#SP-24
nop
li $2, 0
li $2, 1
sw $2,-24($30)
lw $2,-20($30)
lw $8,-24($30)
addu $2,$2,$8
sw $2,-20($30)
lw $8,-20($30)
lw $2,-16($30)
sw $8,0($2)
sw $8,-16($30)
addiu $2,$30,-4
sw $2,-16($30)
nop
addiu $2,$30,-4
sw $2,-20($30)
nop
nop
lw $2,0($2)
sw $2,-20($30)
addiu $2,$30,8
sw $2,-24($30)
nop
nop
lw $2,0($2)
sw $2,-24($30)
lw $2,-20($30)
lw $8,-24($30)
mtc1 $2,$f0
mtc1 $8,$f1
mul.s $f0,$f0,$f1
mfc1 $2,$f0
sw $2,-20($30)
lwc1 $f0,-20($30)
lw $8,-20($30)
lw $2,-16($30)
sw $8,0($2)
sw $8,-16($30)
b whileopen_1
whileclose_2:
addiu $2,$30,-4
sw $2,-48($30)
nop
nop
lw $2,0($2)
sw $2,-48($30)
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
