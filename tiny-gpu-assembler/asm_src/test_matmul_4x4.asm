; Matrix multiply: C = A * B, both 4x4, 16 threads
; Thread i computes C[row][col], row=i/N, col=i%N, N=4
; A at byte 0..60 (baseA=0), B at 64..124 (baseB=64), C at 128..188 (baseC=128)
.threads 16
.data 1  2  3  4
.data 5  6  2  3
.data 1  2  1  4
.data 5  6  1  3
.data 1  2  3  4
.data 1  6  7  2
.data 1  2  3  4
.data 5  6  7  3

csrr  a0, 0xCC1
csrr  a1, 0xCC2
mul   a0, a0, a1
csrr  a1, 0xCC0
add   a0, a0, a1          ; a0 = i

li    a2, 4               ; N = 4
li    a3, 0               ; baseA
li    a4, 64              ; baseB
li    a5, 128             ; baseC

div   a6, a0, a2          ; row = i / N
rem   a7, a0, a2          ; col = i % N

li    s0, 0               ; acc = 0
li    s1, 0               ; k = 0

LOOP:
  mul   t0, a6, a2
  add   t0, t0, s1        ; row * N + k
  slli  t0, t0, 2
  add   t0, a3, t0
  lw    t0, 0(t0)         ; A[row][k]

  mul   t1, s1, a2
  add   t1, t1, a7        ; k * N + col
  slli  t1, t1, 2
  add   t1, a4, t1
  lw    t1, 0(t1)         ; B[k][col]

  mul   t2, t0, t1
  add   s0, s0, t2        ; acc += A * B

  addi  s1, s1, 1         ; k++
  blt   s1, a2, LOOP

slli  t3, a0, 2
add   t3, a5, t3
sw    s0, 0(t3)           ; C[i] = acc

ebreak
