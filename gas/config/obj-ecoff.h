/* ECOFF object file format header file.
   Copyright (C) 1993 Free Software Foundation, Inc.
   Contributed by Cygnus Support.
   Written by Ian Lance Taylor <ian@cygnus.com>.

   This file is part of GAS.

   GAS is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   GAS is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GAS; see the file COPYING.  If not, write to
   the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.  */

#define OBJ_ECOFF 1

/* Use the generic ECOFF debugging code.  */
#define ECOFF_DEBUGGING 1

#define OUTPUT_FLAVOR bfd_target_ecoff_flavour

#include "targ-cpu.h"

#include "ecoff.h"

/* For each gas symbol we keep track of which file it came from, of
   whether we have generated an ECOFF symbol for it, and whether the
   symbols is undefined (this last is needed to distinguish a .extern
   symbols from a .comm symbol).  */

#define TARGET_SYMBOL_FIELDS \
  struct efdr *ecoff_file; \
  struct localsym *ecoff_symbol; \
  valueT ecoff_extern_size;

/* Modify the ECOFF symbol.  */
#define obj_frob_symbol(symp, punt) ecoff_frob_symbol (symp)

/* This is used to write the symbolic data in the format that BFD
   expects it.  */
extern void ecoff_frob_file PARAMS ((void));
#define obj_frob_file() ecoff_frob_file ()

/* We use the ECOFF functions as our hooks.  */
#define obj_read_begin_hook ecoff_read_begin_hook
#define obj_symbol_new_hook ecoff_symbol_new_hook

/* At the moment we don't want to do any stabs processing in read.c.  */
#define OBJ_PROCESS_STAB(seg, what, string, type, other, desc) \
  ecoff_stab ((what), (string), (type), (other), (desc))

#define OBJ_GENERATE_ASM_LINENO(filename, lineno) \
  ecoff_generate_asm_lineno ((filename), (lineno))

#define EMIT_SECTION_SYMBOLS		0
#define obj_sec_sym_ok_for_reloc(SEC)	1
