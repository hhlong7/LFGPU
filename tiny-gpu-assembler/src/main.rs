// RV32IM two-pass assembler for the LFGPU project.
//
// Syntax:
//   Comments:    ; or # to end of line
//   Labels:      LABEL:  (on its own line or before a mnemonic)
//   Directives:  .threads N   .data v1 v2 ...   .word v
//   Registers:   x0-x31 or ABI names (zero/ra/sp/a0-a7/t0-t6/s0-s11/fp)
//   Thread CSRs: csrr rd, 0xCC0  (threadIdx)
//                csrr rd, 0xCC1  (blockIdx)
//                csrr rd, 0xCC2  (blockDim)
//   Termination: ebreak
//
// Output: JSON with program_memory (32-bit hex) and initial_data (u32 array).

use std::collections::HashMap;
use std::env;
use std::fs;
use std::path::Path;

use lib::{encode, instruction_byte_size};
use serde::Serialize;

// ── Source line representation ───────────────────────────────────────────────

#[derive(Debug, Clone)]
struct RawLine {
    line_num:     usize,
    label:        Option<String>,
    mnemonic:     Option<String>,
    args:         Vec<String>,
    is_directive: bool,
}

fn strip_comment(line: &str) -> &str {
    let semi = line.find(';').unwrap_or(line.len());
    let hash = line.find('#').unwrap_or(line.len());
    &line[..semi.min(hash)]
}

fn tokenize(raw: &str) -> Vec<String> {
    // Strip comment, split on whitespace, then on commas, filter empties
    strip_comment(raw)
        .trim()
        .split_whitespace()
        .flat_map(|t| t.split(','))
        .map(|s| s.trim().to_string())
        .filter(|s| !s.is_empty())
        .collect()
}

fn parse_line(line_num: usize, raw: &str) -> Option<RawLine> {
    let tokens = tokenize(raw);
    if tokens.is_empty() {
        return None;
    }

    let mut label: Option<String> = None;
    let mut start = 0;

    // Check for label (first token ends with ':')
    if tokens[0].ends_with(':') {
        label = Some(tokens[0][..tokens[0].len() - 1].to_string());
        start = 1;
    }

    let rest = &tokens[start..];

    if rest.is_empty() {
        return Some(RawLine { line_num, label, mnemonic: None, args: vec![], is_directive: false });
    }

    let is_directive = rest[0].starts_with('.');
    let mnemonic = rest[0].to_lowercase();
    let args = rest[1..].to_vec();

    Some(RawLine { line_num, label, mnemonic: Some(mnemonic), args, is_directive })
}

// ── Assembler ────────────────────────────────────────────────────────────────

fn main() {
    let argv: Vec<String> = env::args().collect();
    if argv.len() < 4 || argv[2] != "-o" {
        eprintln!("Usage: {} <input.asm> -o <output.json>", argv[0]);
        std::process::exit(1);
    }
    let input_path  = &argv[1];
    let output_path = &argv[3];

    let contents = fs::read_to_string(input_path).unwrap_or_else(|e| {
        eprintln!("Cannot read '{}': {}", input_path, e);
        std::process::exit(1);
    });

    // Parse all source lines
    let raw_lines: Vec<RawLine> = contents
        .lines()
        .enumerate()
        .filter_map(|(n, l)| parse_line(n, l))
        .collect();

    // ── Collect directives (.threads, .data, .word) ──────────────────────
    let mut threads: u32 = 1;
    let mut initial_data: Vec<u32> = Vec::new();

    for rl in &raw_lines {
        if !rl.is_directive { continue; }
        match rl.mnemonic.as_deref().unwrap_or("") {
            ".threads" => {
                threads = rl.args.get(0)
                    .and_then(|s| s.parse().ok())
                    .unwrap_or(1);
            }
            ".data" | ".word" => {
                for s in &rl.args {
                    match lib::parse_imm(s) {
                        Ok(v)  => initial_data.push(v as u32),
                        Err(e) => {
                            eprintln!("Line {}: bad directive value '{}': {}", rl.line_num + 1, s, e);
                            std::process::exit(1);
                        }
                    }
                }
            }
            _ => {}
        }
    }

    // ── Pass 1: build label→PC map ───────────────────────────────────────
    let mut labels: HashMap<String, u32> = HashMap::new();
    let mut pc: u32 = 0;

    for rl in &raw_lines {
        if let Some(ref lbl) = rl.label {
            labels.insert(lbl.clone(), pc);
        }
        if rl.is_directive { continue; }
        if let Some(ref m) = rl.mnemonic {
            pc += instruction_byte_size(m, &rl.args);
        }
    }

    // ── Pass 2: encode instructions ──────────────────────────────────────
    let mut program_words: Vec<u32> = Vec::new();
    pc = 0;

    for rl in &raw_lines {
        if rl.is_directive { continue; }
        if let Some(ref m) = rl.mnemonic {
            match encode(m, &rl.args, pc, &labels) {
                Ok(words) => {
                    pc += (words.len() as u32) * 4;
                    program_words.extend(words);
                }
                Err(e) => {
                    eprintln!("Line {}: encode '{}': {}", rl.line_num + 1, m, e);
                    std::process::exit(1);
                }
            }
        }
    }

    // ── Build JSON ───────────────────────────────────────────────────────
    let program_memory: Vec<String> = program_words
        .iter()
        .map(|w| format!("0x{:08x}", w))
        .collect();

    #[derive(Serialize)]
    struct Hardware {
        program_addr_bits: u32,
        program_data_bits: u32,
        program_channels:  u32,
        data_addr_bits:    u32,
        data_data_bits:    u32,
        data_channels:     u32,
    }

    #[derive(Serialize)]
    struct Output {
        testname:       String,
        memory_delay:   u32,
        threads:        u32,
        hardware:       Hardware,
        program_memory: Vec<String>,
        initial_data:   Vec<u32>,
    }

    let testname = Path::new(input_path)
        .file_stem()
        .unwrap()
        .to_str()
        .unwrap()
        .to_string();

    let output = Output {
        testname,
        memory_delay: 1,
        threads,
        hardware: Hardware {
            program_addr_bits: 32,
            program_data_bits: 32,
            program_channels:  1,
            data_addr_bits:    32,
            data_data_bits:    32,
            data_channels:     4,
        },
        program_memory,
        initial_data,
    };

    fs::write(output_path, serde_json::to_string_pretty(&output).unwrap())
        .unwrap_or_else(|e| {
            eprintln!("Write error: {}", e);
            std::process::exit(1);
        });
}
