/*=				       	-*- c-file-style: "bsd" -*-
 * libhsync -- dynamic caching and delta update in HTTP
 * $Id$
 * 
 * Copyright (C) 1999, 2000 by Martin Pool <mbp@linuxcare.com>
 * Copyright (C) 1999 by Andrew Tridgell <tridge@linuxcare.com>
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


void * _hs_alloc(size_t size, char const *name);
void *_hs_alloc_struct0(size_t size, char const *name);

void _hs_bzero(void *buf, size_t size);


/*
 * Allocate and zero-fill an instance of TYPE.
 */
#define _hs_alloc_struct(type)				\
        ((type *) _hs_alloc_struct0(sizeof(type), #type))

