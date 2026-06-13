// RV32IM Assembler Library
// Provides instruction encoding helpers and operand parsers.
// operation.rs is kept as an empty shim for Cargo compatibility.
pub mod operation;

use std::collections::HashMap;

// ── Instruction format encoders ─────────────────────────────────────────────

/// R-type: funct7[31:25] | rs2[24:20] | rs1[19:15] | funct3[14:12] | rd[11:7] | opcode[6:0]
pub fn r_type(funct7: u32, rs2: u32, rs1: u32, funct3: u32, rd: u32, opcode: u32) -> u32 {
    (funct7 << 25) | (rs2 << 20) | (rs1 << 15) | (funct3 << 12) | (rd << 7) | opcode
}

/// I-type: imm[11:0][31:20] | rs1[19:15] | funct3[14:12] | rd[11:7] | opcode[6:0]
pub fn i_type(imm: i32, rs1: u32, funct3: u32, rd: u32, opcode: u32) -> u32 {
    let imm12 = (imm as u32) & 0xFFF;
    (imm12 << 20) | (rs1 << 15) | (funct3 << 12) | (rd << 7) | opcode
}

/// S-type: imm[11:5][31:25] | rs2[24:20] | rs1[19:15] | funct3[14:12] | imm[4:0][11:7] | opcode[6:0]
pub fn s_type(imm: i32, rs2: u32, rs1: u32, funct3: u32, opcode: u32) -> u32 {
    let imm12 = (imm as u32) & 0xFFF;
    let hi = (imm12 >> 5) & 0x7F;
    let lo = imm12 & 0x1F;
    (hi << 25) | (rs2 << 20) | (rs1 << 15) | (funct3 << 12) | (lo << 7) | opcode
}

/// B-type: PC-relative branch offset (byte offset, bit[0] always 0)
pub fn b_type(offset: i32, rs2: u32, rs1: u32, funct3: u32, opcode: u32) -> u32 {
    let off = offset as u32;
    let bit12    = (off >> 12) & 1;
    let bits10_5 = (off >>  5) & 0x3F;
    let bits4_1  = (off >>  1) & 0xF;
    let bit11    = (off >> 11) & 1;
    (bit12 << 31) | (bits10_5 << 25) | (rs2 << 20) | (rs1 << 15)
        | (funct3 << 12) | (bits4_1 << 8) | (bit11 << 7) | opcode
}

/// U-type: imm20 placed at instruction bits[31:12]; rd gets imm20 << 12
pub fn u_type(imm20: u32, rd: u32, opcode: u32) -> u32 {
    ((imm20 & 0xFFFFF) << 12) | (rd << 7) | opcode
}

/// J-type: PC-relative JAL offset (byte offset, bit[0] always 0)
pub fn j_type(offset: i32, rd: u32, opcode: u32) -> u32 {
    let off = offset as u32;
    let bit20     = (off >> 20) & 1;
    let bits10_1  = (off >>  1) & 0x3FF;
    let bit11     = (off >> 11) & 1;
    let bits19_12 = (off >> 12) & 0xFF;
    (bit20 << 31) | (bits10_1 << 21) | (bit11 << 20) | (bits19_12 << 12) | (rd << 7) | opcode
}

// ── Register and immediate parsers ─────────────────────────────────────────

/// Parse register name (xN or ABI alias) → register number 0..31
pub fn parse_reg(s: &str) -> Result<u32, String> {
    let s = s.trim().trim_end_matches(',');
    if let Some(n_str) = s.strip_prefix('x') {
        if let Ok(n) = n_str.parse::<u32>() {
            if n < 32 { return Ok(n); }
        }
    }
    Ok(match s {
        "zero" => 0,  "ra"  => 1,  "sp"  => 2,  "gp"  => 3,  "tp"  => 4,
        "t0"   => 5,  "t1"  => 6,  "t2"  => 7,
        "s0" | "fp" => 8, "s1" => 9,
        "a0"   => 10, "a1"  => 11, "a2"  => 12, "a3"  => 13, "a4"  => 14,
        "a5"   => 15, "a6"  => 16, "a7"  => 17,
        "s2"   => 18, "s3"  => 19, "s4"  => 20, "s5"  => 21, "s6"  => 22,
        "s7"   => 23, "s8"  => 24, "s9"  => 25, "s10" => 26, "s11" => 27,
        "t3"   => 28, "t4"  => 29, "t5"  => 30, "t6"  => 31,
        _ => return Err(format!("Unknown register '{}'", s)),
    })
}

/// Parse integer literal: decimal or 0x/0X hex, with optional leading '-'
pub fn parse_imm(s: &str) -> Result<i32, String> {
    let s = s.trim().trim_end_matches(',');
    let (neg, s) = s.strip_prefix('-').map(|r| (true, r)).unwrap_or((false, s));
    let val = if let Some(h) = s.strip_prefix("0x").or_else(|| s.strip_prefix("0X")) {
        i64::from_str_radix(h, 16).map_err(|e| e.to_string())? as i32
    } else {
        s.parse::<i32>().map_err(|e| e.to_string())?
    };
    Ok(if neg { -val } else { val })
}

/// Parse CSR address: numeric (0xCC0 etc.) or named
pub fn parse_csr(s: &str) -> Result<u32, String> {
    let s = s.trim().trim_end_matches(',');
    match s.to_ascii_lowercase().as_str() {
        "threadidx" | "csr_threadidx" => return Ok(0xCC0),
        "blockidx"  | "csr_blockidx"  => return Ok(0xCC1),
        "blockdim"  | "csr_blockdim"  => return Ok(0xCC2),
        _ => {}
    }
    parse_imm(s).map(|v| v as u32)
}

/// Parse `offset(base)` format for load/store operands → (offset, base_reg_num)
pub fn parse_mem_arg(s: &str) -> Result<(i32, u32), String> {
    let s = s.trim().trim_end_matches(',');
    if let Some(paren) = s.find('(') {
        let offset_str = &s[..paren];
        let rest = s[paren + 1..].trim_end_matches(')');
        let offset = if offset_str.trim().is_empty() { 0 } else { parse_imm(offset_str)? };
        let base = parse_reg(rest)?;
        Ok((offset, base))
    } else {
        Err(format!("Expected offset(base) format, got '{}'", s))
    }
}

/// Resolve label-or-immediate; if relative=true returns (label_pc − current_pc)
pub fn resolve(s: &str, pc: u32, labels: &HashMap<String, u32>, relative: bool) -> Result<i32, String> {
    let s = s.trim().trim_end_matches(',');
    if let Ok(n) = parse_imm(s) {
        return Ok(n);
    }
    match labels.get(s) {
        Some(&lpc) => Ok(if relative { lpc as i32 - pc as i32 } else { lpc as i32 }),
        None => Err(format!("Undefined label '{}'", s)),
    }
}

// ── Instruction size for pass-1 PC tracking ─────────────────────────────────

/// Returns the number of bytes the mnemonic will emit (needed for label resolution)
pub fn instruction_byte_size(mnemonic: &str, args: &[String]) -> u32 {
    if mnemonic == "li" {
        if let Some(s) = args.get(1) {
            if let Ok(n) = parse_imm(s) {
                return if (-2048..2048).contains(&n) { 4 } else { 8 };
            }
        }
    }
    4
}

// ── Main instruction encoder ─────────────────────────────────────────────────

/// Encode one mnemonic + args at byte address `pc`.
/// Returns one or two 32-bit words (li with large immediate emits lui+addi).
pub fn encode(
    mnemonic: &str,
    args: &[String],
    pc: u32,
    labels: &HashMap<String, u32>,
) -> Result<Vec<u32>, String> {
    let m = mnemonic.to_ascii_lowercase();
    let m = m.as_str();

    // Argument accessor closures
    let reg = |i: usize| -> Result<u32, String> {
        args.get(i)
            .ok_or_else(|| format!("{}: missing arg {}", mnemonic, i))
            .and_then(|s| parse_reg(s))
    };
    let imm = |i: usize| -> Result<i32, String> {
        args.get(i)
            .ok_or_else(|| format!("{}: missing arg {}", mnemonic, i))
            .and_then(|s| parse_imm(s))
    };
    let rel = |i: usize| -> Result<i32, String> {
        args.get(i)
            .ok_or_else(|| format!("{}: missing arg {}", mnemonic, i))
            .and_then(|s| resolve(s, pc, labels, true))
    };
    let mem = |i: usize| -> Result<(i32, u32), String> {
        args.get(i)
            .ok_or_else(|| format!("{}: missing arg {}", mnemonic, i))
            .and_then(|s| parse_mem_arg(s))
    };
    let csr = |i: usize| -> Result<u32, String> {
        args.get(i)
            .ok_or_else(|| format!("{}: missing arg {}", mnemonic, i))
            .and_then(|s| parse_csr(s))
    };

    let enc: u32 = match m {
        // ── RV32I R-type ───────────────────────────────────────────────────
        "add"  => r_type(0x00, reg(2)?, reg(1)?, 0x0, reg(0)?, 0x33),
        "sub"  => r_type(0x20, reg(2)?, reg(1)?, 0x0, reg(0)?, 0x33),
        "sll"  => r_type(0x00, reg(2)?, reg(1)?, 0x1, reg(0)?, 0x33),
        "slt"  => r_type(0x00, reg(2)?, reg(1)?, 0x2, reg(0)?, 0x33),
        "sltu" => r_type(0x00, reg(2)?, reg(1)?, 0x3, reg(0)?, 0x33),
        "xor"  => r_type(0x00, reg(2)?, reg(1)?, 0x4, reg(0)?, 0x33),
        "srl"  => r_type(0x00, reg(2)?, reg(1)?, 0x5, reg(0)?, 0x33),
        "sra"  => r_type(0x20, reg(2)?, reg(1)?, 0x5, reg(0)?, 0x33),
        "or"   => r_type(0x00, reg(2)?, reg(1)?, 0x6, reg(0)?, 0x33),
        "and"  => r_type(0x00, reg(2)?, reg(1)?, 0x7, reg(0)?, 0x33),

        // ── RV32M R-type ───────────────────────────────────────────────────
        "mul"    => r_type(0x01, reg(2)?, reg(1)?, 0x0, reg(0)?, 0x33),
        "mulh"   => r_type(0x01, reg(2)?, reg(1)?, 0x1, reg(0)?, 0x33),
        "mulhsu" => r_type(0x01, reg(2)?, reg(1)?, 0x2, reg(0)?, 0x33),
        "mulhu"  => r_type(0x01, reg(2)?, reg(1)?, 0x3, reg(0)?, 0x33),
        "div"    => r_type(0x01, reg(2)?, reg(1)?, 0x4, reg(0)?, 0x33),
        "divu"   => r_type(0x01, reg(2)?, reg(1)?, 0x5, reg(0)?, 0x33),
        "rem"    => r_type(0x01, reg(2)?, reg(1)?, 0x6, reg(0)?, 0x33),
        "remu"   => r_type(0x01, reg(2)?, reg(1)?, 0x7, reg(0)?, 0x33),

        // ── I-type ALU ─────────────────────────────────────────────────────
        "addi"  => i_type(imm(2)?, reg(1)?, 0x0, reg(0)?, 0x13),
        "slti"  => i_type(imm(2)?, reg(1)?, 0x2, reg(0)?, 0x13),
        "sltiu" => i_type(imm(2)?, reg(1)?, 0x3, reg(0)?, 0x13),
        "xori"  => i_type(imm(2)?, reg(1)?, 0x4, reg(0)?, 0x13),
        "ori"   => i_type(imm(2)?, reg(1)?, 0x6, reg(0)?, 0x13),
        "andi"  => i_type(imm(2)?, reg(1)?, 0x7, reg(0)?, 0x13),
        "slli"  => {
            let sh = imm(2)? as u32 & 0x1F;
            (sh << 20) | (reg(1)? << 15) | (0x1 << 12) | (reg(0)? << 7) | 0x13
        }
        "srli" => {
            let sh = imm(2)? as u32 & 0x1F;
            (sh << 20) | (reg(1)? << 15) | (0x5 << 12) | (reg(0)? << 7) | 0x13
        }
        "srai" => {
            let sh = imm(2)? as u32 & 0x1F;
            (0x20 << 25) | (sh << 20) | (reg(1)? << 15) | (0x5 << 12) | (reg(0)? << 7) | 0x13
        }

        // ── Loads: rd, offset(rs1) ─────────────────────────────────────────
        "lb"  => { let (o, b) = mem(1)?; i_type(o, b, 0x0, reg(0)?, 0x03) }
        "lh"  => { let (o, b) = mem(1)?; i_type(o, b, 0x1, reg(0)?, 0x03) }
        "lw"  => { let (o, b) = mem(1)?; i_type(o, b, 0x2, reg(0)?, 0x03) }
        "lbu" => { let (o, b) = mem(1)?; i_type(o, b, 0x4, reg(0)?, 0x03) }
        "lhu" => { let (o, b) = mem(1)?; i_type(o, b, 0x5, reg(0)?, 0x03) }

        // ── Stores: rs2, offset(rs1) ───────────────────────────────────────
        "sb" => { let (o, b) = mem(1)?; s_type(o, reg(0)?, b, 0x0, 0x23) }
        "sh" => { let (o, b) = mem(1)?; s_type(o, reg(0)?, b, 0x1, 0x23) }
        "sw" => { let (o, b) = mem(1)?; s_type(o, reg(0)?, b, 0x2, 0x23) }

        // ── Branches: rs1, rs2, label ──────────────────────────────────────
        "beq"  => b_type(rel(2)?, reg(1)?, reg(0)?, 0x0, 0x63),
        "bne"  => b_type(rel(2)?, reg(1)?, reg(0)?, 0x1, 0x63),
        "blt"  => b_type(rel(2)?, reg(1)?, reg(0)?, 0x4, 0x63),
        "bge"  => b_type(rel(2)?, reg(1)?, reg(0)?, 0x5, 0x63),
        "bltu" => b_type(rel(2)?, reg(1)?, reg(0)?, 0x6, 0x63),
        "bgeu" => b_type(rel(2)?, reg(1)?, reg(0)?, 0x7, 0x63),
        // Pseudo branches (single-register, compare to zero)
        "beqz" => b_type(rel(1)?, 0, reg(0)?, 0x0, 0x63),  // beq rs, x0, lbl
        "bnez" => b_type(rel(1)?, 0, reg(0)?, 0x1, 0x63),  // bne rs, x0, lbl
        "bltz" => b_type(rel(1)?, 0, reg(0)?, 0x4, 0x63),  // blt rs, x0, lbl
        "bgez" => b_type(rel(1)?, 0, reg(0)?, 0x5, 0x63),  // bge rs, x0, lbl
        "bgtz" => b_type(rel(1)?, reg(0)?, 0, 0x4, 0x63),  // blt x0, rs, lbl
        "blez" => b_type(rel(1)?, reg(0)?, 0, 0x5, 0x63),  // bge x0, rs, lbl

        // ── JAL ────────────────────────────────────────────────────────────
        "jal" => {
            if args.len() == 1 {
                j_type(rel(0)?, 1, 0x6F)   // jal ra, label
            } else {
                j_type(rel(1)?, reg(0)?, 0x6F)
            }
        }

        // ── JALR: rd, rs1, imm  OR  rd, imm(rs1) ──────────────────────────
        "jalr" => {
            if args.len() == 1 {
                i_type(0, reg(0)?, 0x0, 0, 0x67)         // jalr rs (jump, no link)
            } else if args.len() >= 2 && args[1].contains('(') {
                let (o, b) = mem(1)?;
                i_type(o, b, 0x0, reg(0)?, 0x67)
            } else {
                i_type(imm(2).unwrap_or(0), reg(1)?, 0x0, reg(0)?, 0x67)
            }
        }

        // ── Upper immediates ───────────────────────────────────────────────
        "lui"   => u_type(imm(1)? as u32, reg(0)?, 0x37),
        "auipc" => u_type(imm(1)? as u32, reg(0)?, 0x17),

        // ── System ─────────────────────────────────────────────────────────
        "ebreak" => 0x00100073,
        "ecall"  => 0x00000073,
        "fence"  => 0x0FF0000F,
        "csrrw"  => i_type(csr(1)? as i32, reg(2)?, 0x1, reg(0)?, 0x73),
        "csrrs"  => i_type(csr(1)? as i32, reg(2)?, 0x2, reg(0)?, 0x73),
        "csrrc"  => i_type(csr(1)? as i32, reg(2)?, 0x3, reg(0)?, 0x73),
        "csrr"   => i_type(csr(1)? as i32, 0,       0x2, reg(0)?, 0x73), // csrrs rd, csr, x0
        "csrw"   => i_type(csr(0)? as i32, reg(1)?, 0x1, 0,       0x73), // csrrw x0, csr, rs

        // ── Pseudos ────────────────────────────────────────────────────────
        "nop"  => 0x00000013,                                        // addi x0, x0, 0
        "mv"   => i_type(0, reg(1)?, 0x0, reg(0)?, 0x13),           // addi rd, rs, 0
        "not"  => i_type(-1, reg(1)?, 0x4, reg(0)?, 0x13),          // xori rd, rs, -1
        "neg"  => r_type(0x20, reg(1)?, 0, 0x0, reg(0)?, 0x33),     // sub rd, x0, rs
        "seqz" => i_type(1, reg(1)?, 0x3, reg(0)?, 0x13),           // sltiu rd, rs, 1
        "snez" => r_type(0x00, reg(1)?, 0, 0x3, reg(0)?, 0x33),     // sltu rd, x0, rs
        "ret"  => i_type(0, 1, 0x0, 0, 0x67),                       // jalr x0, ra, 0
        "j"    => j_type(rel(0)?, 0, 0x6F),                         // jal x0, label
        "call" => j_type(rel(0)?, 1, 0x6F),                         // jal ra, label

        // li is multi-word; handled below
        "li" => {
            let rd = reg(0)?;
            let n = imm(1)?;
            return if (-2048..2048).contains(&n) {
                Ok(vec![i_type(n, 0, 0x0, rd, 0x13)])   // addi rd, x0, n
            } else {
                let hi = ((n + 0x800) >> 12) as u32;
                let lo = n - (hi as i32) * 4096;
                Ok(vec![
                    u_type(hi, rd, 0x37),           // lui rd, hi
                    i_type(lo, rd, 0x0, rd, 0x13),  // addi rd, rd, lo
                ])
            };
        }

        _ => return Err(format!("Unknown mnemonic '{}'", mnemonic)),
    };

    Ok(vec![enc])
}
