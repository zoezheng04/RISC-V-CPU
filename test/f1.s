main:
    addi    t1, zero, 0xff          # load t1 with 255
    addi    t2, zero, 0x1           # load t2 with 1
    addi    a0, zero, 0x0           # a0 is output, initialise with 0
    addi    a2, zero, 0x8           # load a2 with 8 - a2 is the seed of the lfsr

mloop:
    addi    a1, zero, 0x0           # a1 is the f1 sequence
    addi    a0, a1, 0x0             # load a0 with a1

iloop:
    jal     ra, light               # ra - return address
    addi    a0, a1, 0x0             # load a0 with a1
    beq     a1, t1, lfsr            # if a1 = 255, branch to lfsr
    bne     t1, zero, iloop         # else always branch to iloop

light:
    slli    a1, a1, 0x1             # left shift by 1
    addi    a1, a1, 0x1             # add 1
    addi    t3, zero, 0x1           # load t3 with 1

delay:
    sub     t3, t3, t2              # t3 = t3 - 1
    bne     t3, zero, delay         # if t3 does not equal 0, branch to delay
    jalr    zero, 0(ra)             # jump to stored return address

lfsr:
    srli    a3, a2, 0x2             # shift bit at position 3 to the first bit
    srli    a4, a2, 0x6             # shift bit at position 7 to the first bit
    xor     a5, a4, a3              # XOR bits at positions 3 and 7 - taps
    andi    a5, a5, 0x1             # extract the feedback bit
    slli    a6, a2, 0x1             # shift seed to the left for 1 bit
    or      a6, a6, a5              # add the feedback bit
    andi    a6, a6, 0x7f            # make sure that number generated is 7-bit long (h7f = d127 = b1111111)
    addi    a2, a6, 0x0             # store the random number in a2
    addi    t4, a2, 0x0             # load t4 with a2 (the random number)

countdown:
    sub     t4, t4, t2              # t4 = t4 - 1
    bne     t4, zero, countdown     # keep subtracting until t4 = 0
    beq     t4, zero, mloop         # if t4 = 0, branch to mloop
