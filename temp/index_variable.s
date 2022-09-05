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
sw $0,-160($30)
nop
nop
addiu $2,$30,-4
sw $2,-44($30)
nop
#SP-48
nop
li $2, 0
li $2, 0
sw $2,-48($30)
lw $8,-48($30)
lw $2,-44($30)
sw $8,0($2)
sw $8,-44($30)
foropen_1:
addiu $2,$30,-4
sw $2,-44($30)
nop
nop
lw $2,0($2)
sw $2,-44($30)
#SP-48
nop
li $2, 0
li $2, 8
sw $2,-48($30)
lw $2,-44($30)
lw $8,-48($30)
slt $2,$2,$8
sw $2,-44($30)
lw $4,-44($30)
beq $0,$4,forclose_2
addiu $2,$30,-40
sw $2,-44($30)
nop
##array here
addiu $2,$30,-4
sw $2,-48($30)
nop
nop
lw $2,0($2)
sw $2,-48($30)
lw $8,-48($30)
lw $4,-44($30)
sll $8,$8,1
sll $8,$8,1
addu $4,$4,$8
sw $4,-44($30)
addiu $2,$30,-4
sw $2,-48($30)
nop
nop
lw $2,0($2)
sw $2,-48($30)
lw $8,-48($30)
lw $2,-44($30)
sw $8,0($2)
sw $8,-44($30)
addiu $2,$30,-4
sw $2,-164($30)
nop
addiu $2,$30,-4
sw $2,-168($30)
nop
nop
lw $2,0($2)
sw $2,-168($30)
#SP-172
nop
li $2, 0
li $2, 1
sw $2,-172($30)
lw $2,-168($30)
lw $8,-172($30)
addu $2,$2,$8
sw $2,-168($30)
lw $8,-168($30)
lw $2,-164($30)
sw $8,0($2)
sw $8,-164($30)
b foropen_1
forclose_2:
addiu $2,$30,-40
sw $2,-164($30)
nop
##array here
#SP-168
nop
li $2, 0
li $2, 4
sw $2,-168($30)
lw $8,-168($30)
lw $4,-164($30)
sll $8,$8,1
sll $8,$8,1
addu $4,$4,$8
sw $4,-164($30)
lw $2,-164($30)
lw $2,0($2)
sw $2,-164($30)
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
