; Vector addition: C[i] = A[i] + B[i], 8 threads
; Memory layout (word-addressed, 4 bytes/word):
;   A[0..7] at byte addresses   0..28  (baseA = 0)
;   B[0..7] at byte addresses  32..60  (baseB = 32)
;   C[0..7] at byte addresses  64..92  (baseC = 64)
.threads 8
.data 41 42 43 44 45 46 47 48   ; matrix A (1x8)
.data 51 52 53 54 55 56 57 58   ; matrix B (1x8)

; i = blockIdx * blockDim + threadIdx
csrr  a0, 0xCC1          ; a0 = blockIdx
csrr  a1, 0xCC2          ; a1 = blockDim
mul   a0, a0, a1          ; a0 = blockIdx * blockDim
csrr  a1, 0xCC0          ; a1 = threadIdx
add   a0, a0, a1          ; a0 = i

slli  t0, a0, 2           ; byte offset = i * 4

li    t1, 0               ; baseA
add   t1, t1, t0          ; addr(A[i])
lw    t1, 0(t1)           ; t1 = A[i]

li    t2, 32              ; baseB
add   t2, t2, t0          ; addr(B[i])
lw    t2, 0(t2)           ; t2 = B[i]

add   t3, t1, t2          ; t3 = C[i] = A[i] + B[i]

li    t4, 64              ; baseC
add   t4, t4, t0          ; addr(C[i])
sw    t3, 0(t4)           ; store C[i]

ebreak
