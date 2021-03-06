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

#include <string.h>
#include "config/base.h"
#include "target.h"
#include "config.h"

char* get_ld_abi(void) {
   return strdup(GNU_LD_EMULATION);
}

char* get_interpreter(void) {
#if !HAS_LIBC || !defined(GNU_LD_INTERPRETER)
   panic("trying to get interpreter for a target that does not have an interpreter");
#endif
   return strdup(GNU_LD_INTERPRETER);
}

