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
#include "strdb.h"

static struct strdb_ptr* ptrs;
char* strdb;

void strdb_init(void) {
   ptrs = NULL;
   strdb = NULL;
}
void strdb_free(void) {
   buf_free(ptrs);
   buf_free(strdb);
}

bool strdb_find(const char* s, const struct strdb_ptr** ptr) {
   s = strint(s);
   for (size_t i = 0; i < buf_len(ptrs); ++i) {
      if (s == ptrs[i].str) {
         if (ptr) *ptr = &ptrs[i];
         return true;
      }
   }
   return false;
}

bool strdb_add(const char* s, const struct strdb_ptr** ptr) {
   s = strint(s);
   if (strdb_find(s, ptr)) return false;
   const size_t len = strlen(s);
   struct strdb_ptr new_ptr;
   new_ptr.str = s;
   new_ptr.len = len;
   new_ptr.idx = buf_len(strdb);
   for (size_t i = 0; i < len; ++i)
      buf_push(strdb, s[i]);
   buf_push(strdb, '\0');
   buf_push(ptrs, new_ptr);
   if (ptr) *ptr = &ptrs[buf_len(ptrs) - 1];
   return true;
}
