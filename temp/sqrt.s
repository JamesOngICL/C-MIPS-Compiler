.text 
.globl bsqrt
.ent bsqrt
bsqrt:
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
whileopen_1:
lw $4,-4($30)
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
lw $2,-4($30)
lw $8,-8($30)
addu $2,$2,$8
sw $2,-4($30)
addiu $2,$30,12
sw $2,-8($30)
nop
nop
lw $2,0($2)
sw $2,-8($30)
lw $2,-4($30)
lw $8,-8($30)
slt $2,$2,$8
sw $2,-4($30)
beq $0, $2,whileclose_2
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
addu $2,$2,$8
sw $2,-12($30)
#SP-16
nop
li $2, 0
li $2, 1
sw $2,-16($30)
lw $2,-12($30)
lw $8,-16($30)
srav $2,$2,$8
sw $2,-12($30)
li $8,0
lw $8,-12($30)
sw $8,-8($30)
addiu $2,$30,-8
sw $2,-16($30)
nop
nop
lw $2,0($2)
sw $2,-16($30)
addiu $2,$30,-8
sw $2,-20($30)
nop
nop
lw $2,0($2)
sw $2,-20($30)
lw $2,-16($30)
lw $8,-20($30)
multu $2,$8
mflo $2
sw $2,-16($30)
li $8,0
lw $8,-16($30)
sw $8,-12($30)
##Here 1
addiu $2,$30,-12
sw $2,-16($30)
nop
nop
lw $2,0($2)
sw $2,-16($30)
addiu $2,$30,16
sw $2,-20($30)
nop
nop
lw $2,0($2)
sw $2,-20($30)
lw $2,-16($30)
lw $8,-20($30)
slt $2,$8,$2
xori $2,$2,1
andi $2,$2,255
sw $2,-16($30)
lw $2,-16($30)
bne $0,$2,jump_cond2_3
##if_true->generateMIPS(dst,context)
addu $t0,$2,$2
addiu $2,$30,12
sw $2,-16($30)
nop
addiu $2,$30,-8
sw $2,-20($30)
nop
nop
lw $2,0($2)
sw $2,-20($30)
lw $8,-20($30)
lw $2,-16($30)
sw $8,0($2)
sw $8,-16($30)
beq $0,$0,jump_cond1_4
addu $t0,$2,$2
jump_cond2_3:
addiu $2,$30,8
sw $2,-52($30)
nop
addiu $2,$30,-8
sw $2,-56($30)
nop
nop
lw $2,0($2)
sw $2,-56($30)
lw $8,-56($30)
lw $2,-52($30)
sw $8,0($2)
sw $8,-52($30)
jump_cond1_4:
b whileopen_1
whileclose_2:
##Here 1
addiu $2,$30,8
sw $2,-16($30)
nop
nop
lw $2,0($2)
sw $2,-16($30)
addiu $2,$30,8
sw $2,-20($30)
nop
nop
lw $2,0($2)
sw $2,-20($30)
lw $2,-16($30)
lw $8,-20($30)
multu $2,$8
mflo $2
sw $2,-16($30)
addiu $2,$30,16
sw $2,-20($30)
nop
nop
lw $2,0($2)
sw $2,-20($30)
lw $2,-16($30)
lw $8,-20($30)
slt $2,$2,$8
sw $2,-16($30)
lw $2,-16($30)
bne $0,$2,jump_cond2_5
##if_true->generateMIPS(dst,context)
addu $t0,$2,$2
addiu $2,$30,8
sw $2,-16($30)
nop
nop
lw $2,0($2)
sw $2,-16($30)
b RETURN_1
beq $0,$0,jump_cond1_6
addu $t0,$2,$2
jump_cond2_5:
addiu $2,$30,12
sw $2,-52($30)
nop
nop
lw $2,0($2)
sw $2,-52($30)
b RETURN_1
jump_cond1_6:
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
.end bsqrt
