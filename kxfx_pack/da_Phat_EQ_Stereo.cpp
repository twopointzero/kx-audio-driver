// kX Driver / kX Driver Interface / kX Driver Effects Library
// Copyright (c) Eugene Gavrilov and Max Mikhailov, 2001-2005.
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
// Patch name: 'Phat_EQ_Stereo'

char *Phat_EQ_Stereo_copyright="(c) Soeren Bovbjerg, 2002-2004";
char *Phat_EQ_Stereo_engine="kX";
char *Phat_EQ_Stereo_comment="Powerfull resonant filter! Warning :-)\nNo overload protection! Use input gain to compensate";
							  
char *Phat_EQ_Stereo_created="2002/07/23";
char *Phat_EQ_Stereo_guid="5fbec50d-a132-4ed3-9c87-316c7ac8724b";

char *Phat_EQ_Stereo_name="Phat EQ Stereo";
int Phat_EQ_Stereo_itramsize=0,Phat_EQ_Stereo_xtramsize=0;

#define R_B0	0x8002
#define R_B1	0x8003
#define R_B2	0x8004
#define R_A1	0x8005
#define R_A2	0x8006
#define R_VOL	0x8007

dsp_register_info Phat_EQ_Stereo_info[]={
	{ "inl",0x4000,0x7,0xffff,0x0 },
	{ "inr",0x4001,0x7,0xffff,0x0 },
	{ "outl",0x8000,0x8,0xffff,0x0 },
	{ "outr",0x8001,0x8,0xffff,0x0 },
	{ "b0",0x8002,0x1,0xffff,0x7fffffff },
	{ "b1",0x8003,0x1,0xffff,0x0 },
	{ "b2",0x8004,0x1,0xffff,0x0 },
	{ "a1",0x8005,0x1,0xffff,0x0 },
	{ "a2",0x8006,0x1,0xffff,0x0 },
	{ "vol",0x8007,0x1,0xffff,0x7fffffff },
	{ "sca",0x8008,0x1,0xffff,0x2 },
	{ "lx1",0x8009,0x1,0xffff,0x0 },
	{ "lx2",0x800a,0x1,0xffff,0x0 },
	{ "ly1",0x800b,0x1,0xffff,0x0 },
	{ "ly2",0x800c,0x1,0xffff,0x0 },
	{ "rx1",0x800d,0x1,0xffff,0x0 },
	{ "rx2",0x800e,0x1,0xffff,0x0 },
	{ "ry1",0x800f,0x1,0xffff,0x0 },
	{ "ry2",0x8010,0x1,0xffff,0x0 },
	{ "bx1",0x8011,0x1,0xffff,0x0 },
	{ "bx2",0x8012,0x1,0xffff,0x0 },
	{ "by1",0x8013,0x1,0xffff,0x0 },
	{ "by2",0x8014,0x1,0xffff,0x0 },
	{ "sx1",0x8015,0x1,0xffff,0x0 },
	{ "sx2",0x8016,0x1,0xffff,0x0 },
	{ "sy1",0x8017,0x1,0xffff,0x0 },
	{ "sy2",0x8018,0x1,0xffff,0x0 },
	{ "t1",0x8019,0x3,0xffff,0x0 },
	{ "t2",0x801a,0x3,0xffff,0x0 },
	{ "in",0x801b,0x3,0xffff,0x0 },
};

dsp_code Phat_EQ_Stereo_code[]={
	{ 0x0,0x801b,0x2040,0x4000,0x8007 },
	{ 0x0,0x2040,0x2040,0x2040,0x2040 },
	{ 0x7,0x800a,0x8009,0x800a,0x8004 },
	{ 0x7,0x8009,0x801b,0x8009,0x8003 },
	{ 0x7,0x8019,0x8019,0x801b,0x8002 },
	{ 0x7,0x800c,0x800b,0x800c,0x8006 },
	{ 0x7,0x8019,0x8019,0x800b,0x8005 },
	{ 0x0,0x801a,0x2056,0x2040,0x2040 },
	{ 0x4,0x800b,0x2040,0x801a,0x8008 },
	{ 0x0,0x2040,0x2040,0x2040,0x2040 },
	{ 0x7,0x800e,0x800d,0x800e,0x8004 },
	{ 0x7,0x800d,0x800b,0x800d,0x8003 },
	{ 0x7,0x8019,0x8019,0x800b,0x8002 },
	{ 0x7,0x8010,0x800f,0x8010,0x8006 },
	{ 0x7,0x8019,0x8019,0x800f,0x8005 },
	{ 0x0,0x801a,0x2056,0x2040,0x2040 },
	{ 0x4,0x800f,0x2040,0x801a,0x8008 },
	{ 0x0,0x8000,0x800f,0x2040,0x2040 },
	{ 0x0,0x801b,0x2040,0x4001,0x8007 },
	{ 0x0,0x2040,0x2040,0x2040,0x2040 },
	{ 0x7,0x8012,0x8011,0x8012,0x8004 },
	{ 0x7,0x8011,0x801b,0x8011,0x8003 },
	{ 0x7,0x8019,0x8019,0x801b,0x8002 },
	{ 0x7,0x8014,0x8013,0x8014,0x8006 },
	{ 0x7,0x8019,0x8019,0x8013,0x8005 },
	{ 0x0,0x801a,0x2056,0x2040,0x2040 },
	{ 0x4,0x8013,0x2040,0x801a,0x8008 },
	{ 0x0,0x2040,0x2040,0x2040,0x2040 },
	{ 0x7,0x8016,0x8015,0x8016,0x8004 },
	{ 0x7,0x8015,0x8013,0x8015,0x8003 },
	{ 0x7,0x8019,0x8019,0x8013,0x8002 },
	{ 0x7,0x8018,0x8017,0x8018,0x8006 },
	{ 0x7,0x8019,0x8019,0x8017,0x8005 },
	{ 0x0,0x801a,0x2056,0x2040,0x2040 },
	{ 0x4,0x8017,0x2040,0x801a,0x8008 },
	{ 0x0,0x8001,0x8017,0x2040,0x2040 },
};

