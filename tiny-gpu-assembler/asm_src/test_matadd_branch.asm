; Vector addition with branch-based control flow, 8 threads
; Same algorithm as matadd_8_threads but uses branch to skip inactive threads.
; A[0..7] at byte 0..28, B at 32..60, C at 64..92
.threads 8
.data 41 42 43 44 45 46 47 48
.data 51 52 53 54 55 56 57 58

csrr  a0, 0xCC1
csrr  a1, 0xCC2
mul   a0, a0, a1
csrr  a1, 0xCC0
add   a0, a0, a1          ; a0 = i

; guard: skip if i >= 8
li    t6, 8
bge   a0, t6, DONE

slli  t0, a0, 2

li    t1, 0
add   t1, t1, t0
lw    t1, 0(t1)           ; A[i]

li    t2, 32
add   t2, t2, t0
lw    t2, 0(t2)           ; B[i]

add   t3, t1, t2

li    t4, 64
add   t4, t4, t0
sw    t3, 0(t4)

DONE:
ebreak
