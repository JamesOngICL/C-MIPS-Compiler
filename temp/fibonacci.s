.text 
.globl fib
.ent fib
fib:
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
slt $2,$8,$2
xori $2,$2,1
andi $2,$2,255
sw $2,-4($30)
beq $0,$2,exit_1
#SP-4
nop
li $2, 0
li $2, 0
sw $2,-4($30)
b RETURN_1
exit_1:
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
xor $2,$2,$8
sltu $2,$2,1
sw $2,-4($30)
beq $0,$2,exit_2
#SP-4
nop
li $2, 0
li $2, 1
sw $2,-4($30)
b RETURN_1
exit_2:
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
la $2,fib
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
li $2, 2
sw $2,-20($30)
lw $2,-16($30)
lw $8,-20($30)
subu $2,$2,$8
sw $2,-16($30)
lw $8,-16($30)
sw $8,-8($30)
lw $4,-8($30)
addiu $sp, $sp,-12
la $2,fib
jalr $2
addiu $sp, $sp,12
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
.end fib
