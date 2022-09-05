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
##Type: 2
swc1 $14,12($30)
##Type: 2
sw $6,16($30)
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
addiu $2,$30,16
sw $2,-12($30)
nop
nop
lw $2,0($2)
sw $2,-12($30)
lw $2,-8($30)
lw $8,-12($30)
mtc1 $2,$f0
mtc1 $8,$f1
mul.s $f0,$f0,$f1
mfc1 $2,$f0
sw $2,-8($30)
lwc1 $f0,-8($30)
lw $2,-4($30)
lw $8,-8($30)
mtc1 $2,$f0
mtc1 $8,$f1
add.s $f0,$f0,$f1
mfc1 $2,$f0
sw $2,-4($30)
lwc1 $f0,-4($30)
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
