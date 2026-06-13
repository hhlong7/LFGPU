; Array copy test: each thread copies data[i] to output[numThreads-1-i]
; (reverses array order across threads).
; Input:  byte 0..12  (4 words)
; Output: byte 16..28 (4 words)
.threads 4
.data 1 2 3 4

csrr  a0, 0xCC1
csrr  a1, 0xCC2
mul   a0, a0, a1
csrr  a1, 0xCC0
add   a0, a0, a1          ; a0 = i

csrr  t5, 0xCC2           ; blockDim (= numThreads for single-block case)

; load addr = i * 4
slli  t0, a0, 2
lw    t1, 0(t0)           ; t1 = data[i]

; reverse index = (numThreads - 1 - i)
addi  t5, t5, -1
sub   t5, t5, a0          ; t5 = numThreads - 1 - i
slli  t5, t5, 2           ; * 4
li    t6, 16              ; output base
add   t5, t6, t5          ; store addr
sw    t1, 0(t5)           ; output[numThreads-1-i] = data[i]

ebreak
