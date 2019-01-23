  "abs",      { REG          }, { 22, ANY },
  "add",      { REG,   REG   }, {  0, ANY },
  "addc",     { REG,   REG   }, {  1, ANY },
  "addq",     { IMM1,  REG   }, {  2, ANY },
  "addqmod",  { IMM1,  REG   }, { 63, DSP },
  "addqt",    { IMM1,  REG   }, {  3, ANY },
  "and",      { REG,   REG   }, {  9, ANY },
  "bclr",     { IMM0,  REG   }, { 15, ANY },
  "bset",     { IMM0,  REG   }, { 14, ANY },
  "btst",     { IMM0,  REG   }, { 13, ANY },
  "cmp",      { REG,   REG   }, { 30, ANY },
  "cmpq",     { SIMM,  REG   }, { 31, ANY },
  "div",      { REG,   REG   }, { 21, ANY },
  "imacn",    { REG,   REG   }, { 20, ANY },
  "imult",    { REG,   REG   }, { 17, ANY },
  "imultn",   { REG,   REG   }, { 18, ANY },
  "jr",       { CC,    REL   }, { 53, ANY|OPSWAP },
  "jr",       { REL          }, { 53, ANY|OPSWAP },
  "jump",     { CC,    IREG  }, { 52, ANY|OPSWAP },
  "jump",     { IREG         }, { 52, ANY|OPSWAP },
  "load",     { IREG,  REG   }, { 41, ANY },
  "load",     { IR14D, REG   }, { 43, ANY },
  "load",     { IR15D, REG   }, { 44, ANY },
  "load",     { IR14R, REG   }, { 58, ANY },
  "load",     { IR15R, REG   }, { 59, ANY },
  "loadb",    { IREG,  REG   }, { 39, ANY },
  "loadp",    { IREG,  REG   }, { 42, GPU },
  "loadw",    { IREG,  REG   }, { 40, ANY },
  "mirror",   { REG,   IREG  }, { 48, DSP|OPSWAP },
  "mmult",    { REG,   REG   }, { 54, ANY },
  "move",     { REG,   REG   }, { 34, ANY },
  "move",     { PC,    REG   }, { 51, ANY },
  "movefa",   { REG,   REG   }, { 37, ANY },
  "movei",    { IMMLW, REG   }, { 38, ANY },
  "moveq",    { IMM0,  REG   }, { 35, ANY },
  "moveta",   { REG,   REG   }, { 36, ANY },
  "mtoi",     { REG,   REG   }, { 55, ANY },
  "mult",     { REG,   REG   }, { 16, ANY },
  "neg",      { REG          }, {  8, ANY },
  "nop",      { NO_OP        }, { 57, ANY },
  "normi",    { REG,   REG   }, { 56, ANY },
  "not",      { REG          }, { 12, ANY },
  "or",       { REG,   REG   }, { 10, ANY },
  "pack",     { REG          }, { 63, GPU },
  "resmac",   { REG          }, { 19, ANY },
  "ror",      { REG,   REG   }, { 28, ANY },
  "rorq",     { IMM1,  REG   }, { 29, ANY },
  "sat8",     { REG          }, { 32, GPU },
  "sat16",    { REG          }, { 33, GPU },
  "sat16s",   { REG          }, { 33, DSP },
  "sat24",    { REG          }, { 62, GPU },
  "sat32s",   { REG          }, { 42, DSP },
  "sh",       { REG,   REG   }, { 23, ANY },
  "sha",      { REG,   REG   }, { 26, ANY },
  "sharq",    { IMM1,  REG   }, { 27, ANY },
  "shlq",     { IMM1,  REG   }, { 24, ANY },
  "shrq",     { IMM1,  REG   }, { 25, ANY },
  "store",    { REG,   IREG  }, { 47, ANY|OPSWAP },
  "store",    { REG,   IR14D }, { 49, ANY|OPSWAP },
  "store",    { REG,   IR15D }, { 50, ANY|OPSWAP },
  "store",    { REG,   IR14R }, { 60, ANY|OPSWAP },
  "store",    { REG,   IR15R }, { 61, ANY|OPSWAP },
  "storeb",   { REG,   IREG  }, { 45, ANY|OPSWAP },
  "storep",   { REG,   IREG  }, { 48, GPU|OPSWAP },
  "storew",   { REG,   IREG  }, { 46, ANY|OPSWAP },
  "sub",      { REG,   REG   }, {  4, ANY },
  "subc",     { REG,   REG   }, {  5, ANY },
  "subq",     { IMM1,  REG   }, {  6, ANY },
  "subqmod",  { IMM1,  REG   }, { 32, DSP },
  "subqt",    { IMM1,  REG   }, {  7, ANY },
  "unpack",   { REG          }, { 63, GPU },
  "xor",      { REG,   REG   }, { 11, ANY },
