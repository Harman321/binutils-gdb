/* Macro definitions for GDB on an Intel i[345]86.
   Copyright 1995, 1996, 1998, 1999, 2000, 2001
   Free Software Foundation, Inc.

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

#ifndef TM_I386_H
#define TM_I386_H 1

#define GDB_MULTI_ARCH GDB_MULTI_ARCH_PARTIAL

#include "regcache.h"

/* Forward declarations for prototypes.  */
struct frame_info;
struct frame_saved_regs;
struct value;
struct type;

/* Print out the i387 floating point state.  */
extern void i387_float_info (void);
#define FLOAT_INFO { i387_float_info (); }


/* FIXME: kettenis/2000-06-12: These do not belong here.  */
extern void print_387_control_word (unsigned int);
extern void print_387_status_word (unsigned int);

/* Offset from SP to first arg on stack at first instruction of a function */

#define SP_ARG0 (1 * 4)

#endif /* ifndef TM_I386_H */
