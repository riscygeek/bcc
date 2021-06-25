#include "target.h"

const struct target_info target_info = {
   .name = "riscv32",
   .size_byte     = 1,
   .size_char     = 1,
   .size_short    = 2,
   .size_int      = 4,
   .size_long     = 4,
   .size_float    = 4,
   .size_double   = 8,
   .size_pointer  = 4,

   .min_byte   = INT8_MIN,
   .max_byte   = INT8_MAX,
   .max_ubyte  = UINT8_MAX,
   
   .min_char   = INT8_MIN,
   .max_char   = INT8_MAX,
   .max_uchar  = UINT8_MAX,
   
   .min_short  = INT16_MIN,
   .max_short  = INT16_MAX,
   .max_ushort = UINT16_MAX,
   
   .min_int    = INT32_MIN,
   .max_int    = INT32_MAX,
   .max_uint   = UINT32_MAX,
   
   .min_long   = INT64_MIN,
   .max_long   = INT64_MAX,
   .max_ulong  = UINT64_MAX,

   .unsigned_char = false,

   .fend_asm = "s",
   .fend_obj = "o",

   .ptrdiff_type = INT_INT,
   .has_c99_array = false,

   .size_int8 = INT_BYTE,
   .size_int16 = INT_SHORT,
   .size_int32 = INT_INT,
   .size_int64 = INT_LONG,

   .max_immed = 2047,
   .min_immed = -2048,
};
