// kX Driver / kX Driver Interface / kX Driver Effects Library
// Copyright (c) Eugene Gavrilov and LeMury, 2003-2004.
// All rights reserved

/*
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */

// 10kX microcode
// Patch name: 'k1lt'

const char *k1lt_copyright="Copyright (c) LeMury, 2003-2004. All rights reserved.";
const char *k1lt_engine="kX";
const char *k1lt_comment="10k1 'Epilog Lite' v1.3 Output Selector(No ASIO); $nobypass";
const char *k1lt_created="11/04/2003";
const char *k1lt_guid="fc2acf07-5b4b-4c80-a157-1e6fd59909b6";

const char *k1lt_name="k1lt";
int k1lt_itramsize=0,k1lt_xtramsize=0;

#define _CODE				//offset
#define _TMPL	0x8000		//temp gpr for phase inv
#define _TMPR	0x8001		// ,,	,,	,,	,,	  ,,

dsp_register_info k1lt_info[]={
	{ "Out1",0x4000,0x7,0xffff,0x0 },
	{ "Out2",0x4001,0x7,0xffff,0x0 },
	{ "Out3",0x4002,0x7,0xffff,0x0 },
	{ "Out4",0x4003,0x7,0xffff,0x0 },
	{ "Out5",0x4004,0x7,0xffff,0x0 },
	{ "Out6",0x4005,0x7,0xffff,0x0 },
	{ "Out7",0x4006,0x7,0xffff,0x0 },
	{ "Out8",0x4007,0x7,0xffff,0x0 },
	{ "Out9",0x4008,0x7,0xffff,0x0 },
	{ "Out10",0x4009,0x7,0xffff,0x0 },
	{ "Out11",0x400a,0x7,0xffff,0x0 },
	{ "Out12",0x400b,0x7,0xffff,0x0 },
	{ "Out13",0x400c,0x7,0xffff,0x0 },
	{ "Out14",0x400d,0x7,0xffff,0x0 },
	{ "tmpl",0x8000,0x3,0xffff,0x0 },
	{ "tmpr",0x8001,0x3,0xffff,0x0 },
};

dsp_code k1lt_code[]={
	{ 0x4,0x2040,0x2040,0x4000,0x2044 },//0
	{ 0x4,0x2040,0x2040,0x4001,0x2044 },
	{ 0x4,0x2040,0x2040,0x4002,0x2044 },
	{ 0x4,0x2040,0x2040,0x4003,0x2044 },
	{ 0x4,0x2040,0x2040,0x4004,0x2044 },
	{ 0x4,0x2040,0x2040,0x4005,0x2044 },
	{ 0x4,0x2040,0x2040,0x4006,0x2044 },
	{ 0x4,0x2040,0x2040,0x4007,0x2044 },
	{ 0x1,0x8000,0x2040,0x4008,0x204f },
	{ 0x1,0x8001,0x2040,0x4009,0x204f },
	{ 0x4,0x2040,0x2040,0x400a,0x2044 },
	{ 0x4,0x2040,0x2040,0x400b,0x2044 },
	{ 0x4,0x2040,0x2040,0x400c,0x2044 },
	{ 0x4,0x2040,0x2040,0x400d,0x2044 },
	{ 0x4,0x2308,0x2040,0x8000,0x2044 },
	{ 0x4,0x2309,0x2040,0x8001,0x2044 },//15 
};
