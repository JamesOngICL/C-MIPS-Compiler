.text 
.globl r1
.ent r1
r1:
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
##Here 1
addiu $2,$30,8
sw $2,-4($30)
nop
nop
lw $2,0($2)
sw $2,-4($30)
#SP-8
nop
li $2, 0
li $2, 0
sw $2,-8($30)
lw $2,-4($30)
lw $8,-8($30)
xor $2,$2,$8
sltu $2,$2,1
sw $2,-4($30)
lw $2,-4($30)
bne $0,$2,jump_cond2_1
##if_true->generateMIPS(dst,context)
addu $t0,$2,$2
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
subu $2,$2,$8
sw $2,-12($30)
lw $8,-12($30)
sw $8,-4($30)
lw $4,-4($30)
addiu $sp, $sp,-8
la $2,r2
jalr $2
addiu $sp, $sp,8
sw $2,-4($30)
addiu $2,$30,8
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
sw $8,-8($30)
lw $4,-8($30)
addiu $sp, $sp,-12
la $2,r2
jalr $2
addiu $sp, $sp,12
sw $2,-8($30)
lw $2,-4($30)
lw $8,-8($30)
addu $2,$2,$8
sw $2,-4($30)
b RETURN_1
beq $0,$0,jump_cond1_2
addu $t0,$2,$2
jump_cond2_1:
#SP-4
nop
li $2, 0
li $2, 1
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
.end r1
