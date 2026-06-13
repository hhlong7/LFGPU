; Vector addition: C[i] = A[i] + B[i], 32 threads
; A[0..31] at byte addresses 0..124 (baseA=0), B at 128..252, C at 256..380
.threads 32
.data 1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16
.data 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32
.data 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17
.data 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1

csrr  a0, 0xCC1
csrr  a1, 0xCC2
mul   a0, a0, a1
csrr  a1, 0xCC0
add   a0, a0, a1          ; a0 = i

slli  t0, a0, 2           ; byte offset = i * 4

li    t1, 0
add   t1, t1, t0
lw    t1, 0(t1)           ; A[i]

li    t2, 128
add   t2, t2, t0
lw    t2, 0(t2)           ; B[i]

add   t3, t1, t2

li    t4, 256
add   t4, t4, t0
sw    t3, 0(t4)           ; C[i] = A[i] + B[i]

ebreak
