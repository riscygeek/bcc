//  Copyright (C) 2021 Benjamin Stürz
//  
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//  
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//  
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <https://www.gnu.org/licenses/>.
#include <stdint.h>
#include "target.h"
#include "config.h"

#define gen_minmax(name, bits)   \
.min_##name = INT##bits##_MIN,   \
.max_##name = INT##bits##_MAX,   \
.max_u##name = UINT##bits##_MAX

const struct target_info target_info = {
   .name          = BCC_FULL_ARCH,
   .size_byte     = 1,
   .size_char     = 1,
   .size_short    = 2,
   .size_int      = 4,
   .size_long     = BITS / 8,
   .size_float    = 4,
   .size_double   = 8,
   .size_pointer  = BITS / 8,

   gen_minmax(byte,  8),
   gen_minmax(char,  8),
   gen_minmax(short, 16),
   gen_minmax(int,   32),
   //gen_minmax(long,  BITS),

   .unsigned_char = false,

   .fend_asm      =  "s",
   .fend_obj      = "o",
   .fend_archive  = "a",
   .fend_dll      = "so",

   .ptrdiff_type  = INT_LONG,
   .size_type     = INT_LONG,
   .has_c99_array = false,

   .size_int8     = INT_BYTE,
   .size_int16    = INT_SHORT,
   .size_int32    = INT_INT,
#if BITS == 32
   .size_int64    = NUM_INTS,
#else
   .size_int64    = INT_LONG,
#endif

   .min_immed     = INT32_MIN,
   .max_immed     = INT32_MAX,
};

