# vasm
[Unofficial mirror] vasm - A portable and retargetable assembler. http://sun.hasenbraten.de/vasm/

# Description

vasm is a portable and retargetable assembler to create linkable objects in various formats or absolute code.

Multiple CPU-, syntax and output-modules can be selected.

Many common directives/pseudo-opcodes are supported (depending on the syntax module) as well as CPU-specific extensions.

The assembler supports optimizations (e.g. choosing the shortest possible branch instruction or addressing mode) and relaxations (e.g. converting a branch to an absolute jump when necessary).

Most syntax modules support macros, include directives, repetitions, conditional assembly and local symbols.

# Supported CPUs

Currently the following CPUs are officially supported by vasm (loosely ordered by maturity):
- M680x0 family (including M6888x, M68851 and CPU32)
- ColdFire family (all models of V2, V3, V4, V4e)
- PowerPC family (POWER, 40x, 440, 460, 6xx, 7xx, 7xxx, 860, Book-E, e300 and e500)
- Z80 family (Z80, 8080, GBZ80, 64180, RCM2/3/4k)
- 6502 family
- Jaguar RISC (GPU and DSP instruction sets)
- ARM (architecture ARMv1 to ARMv4, including THUMB mode)
- 80x86 family (IA32 8/16/32 bit, using MIT-syntax)
- C16x/ST10
- 6800 family (6800, 6801, 6803, 68HC11)
- QNICE (elegant 16-bit FPGA CPU)
- TR3200 (virtual CPU from 0x10c)
- Raspberry-Pi VideoCore IV

# Supported syntax

These syntax flavours are supported:
- Standard MIT (GNU-as style) syntax
- Motorola/Freescale 68k syntax (Devpac compatible)
- Atari MadMac syntax (6502, 68k, Jaguar)
- Old 8-bit style syntax

# Output formats

Supported output file formats:
- ELF (M68k, PowerPC, i386, ARM and JRISC)
- a.out (M68k, i386 and JRISC)
- Amiga hunk format (M68k)
- Atari TOS executable format (M68k)
- Sharp X68000 Xfile format (M68k)
- EHF extended hunk format (PowerPC)
- Raw, binary output (all)
- Motorola Srecord format (all)
- VOBJ proprietary versatile object format (all)
- Test, debugging output (all, default)
