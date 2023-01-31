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

## Compilation Instructions
To compile vasm you can either use CMake, or choose a Makefile which fits for your host architecture.

The following Makefiles are available:
- Makefile - standard Unix/gcc Makefile
- Makefile.68k - makes AmigaOS 68020 executable with vbcc
- Makefile.Haiku - gcc Makefile which doesn't link libm
- Makefile.MiNT - makes Atari MiNT 68020 executable with vbcc
- Makefile.MOS - makes MorphOS executable with vbcc
- Makefile.OS4 - makes AmigaOS4 executable with vbcc
- Makefile.PUp - makes PowerUp executable with vbcc
- Makefile.TOS - makes Atari TOS 68000 executable with vbcc
- Makefile.WOS - makes WarpOS executable with vbcc
- Makefile.Win32 - makes Windows executable with MS-VSC++
- Makefile.Win32FromLinux - makes Windows executable on Linux
Then select a CPU- and a syntax-module to compile.

The vasm-binary will be called: vasm<CPU>_<SYNTAX>[_<HOST>]

Building using CMake
Define VASM_CPU and VASM_SYNTAX when running cmake, e.g:

mkdir build
cd build
cmake -DVASM_CPU=m68k -DVASM_SYNTAX=mot ..
make
Building using make
Define CPU and SYNTAX when running make, e.g:

make CPU=m68k SYNTAX=mot

# Available CPU modules
- 6502
- 6800
- 6809
- arm
- c16x
- jagrisc
- m68k
- pdp11
- ppc
- qnice
- test
- tr3200
- vidcore
- x86
- z80

# Available Syntax modules
- std
- madmac
- mot
- oldstyle
- test
