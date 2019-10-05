/*
Copyright (C) 1996-1997 Id Software, Inc.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

/// @file
/// @brief hunk allocator

#pragma once

/////////////////////////////////////////////////

extern byte *hunk_base;
extern int hunk_size;

extern int hunk_low_used;
extern int hunk_high_used;

/// @return 0 filled memory
void *Hunk_Alloc(int size);

///
void *Hunk_AllocName(int size, const char *name);

///
void *Hunk_HighAllocName(int size, const char *name);

///
int	Hunk_LowMark();

///
void Hunk_FreeToLowMark(int mark);

///
int	Hunk_HighMark();

///
void Hunk_FreeToHighMark(int mark);

///
void *Hunk_TempAlloc(int size);

///
void Hunk_Check();