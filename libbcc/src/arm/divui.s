#  Copyright (C) 2021 Benjamin Stürz
#  
#  This program is free software: you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation, either version 3 of the License, or
#  (at your option) any later version.
#  
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#  
#  You should have received a copy of the GNU General Public License
#  along with this program.  If not, see <https://www.gnu.org/licenses/>.

# Code generated by gcc-trunk

.global __divui2
__divui2:
mov   r3, r0
cmp   r3, r1
mov   r0, #0
movcc pc, lr
.L3:
sub   r3, r3, r1
cmp   r1, r3
add   r0, r0, #1
bls   .L3
mov   pc, lr
