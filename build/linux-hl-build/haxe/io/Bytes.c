﻿// Generated by HLC 4.1.3 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/io/Bytes.h>
#include <haxe/io/Error.h>
extern venum* g$haxe_io_Error_OutsideBounds;
vdynamic* haxe_Exception_thrown(vdynamic*);
#include <hl/natives.h>
extern hl_type t$haxe_io_Bytes;
vbyte* hl__Bytes_Bytes_Impl__sub(vbyte*,int,int);
#include <haxe/io/Encoding.h>
extern venum* g$haxe_io_Encoding_RawNative;
extern hl_type t$String;
String String_fromUTF8(vbyte*);
String haxe_io_Bytes_toString(haxe__io__Bytes);

void haxe_io_Bytes_new(haxe__io__Bytes r0,vbyte* r1,int r2) {
	r0->b = r1;
	r0->length = r2;
	return;
}

int haxe_io_Bytes_get(haxe__io__Bytes r0,int r1) {
	vbyte *r4;
	int r2, r3;
	r3 = r0->length;
	if( ((unsigned)r1) < ((unsigned)r3) ) goto label$f9d86ae_2_4;
	r2 = 0;
	return r2;
	label$f9d86ae_2_4:
	r4 = r0->b;
	r2 = *(unsigned char*)(r4 + r1);
	return r2;
}

void haxe_io_Bytes_set(haxe__io__Bytes r0,int r1,int r2) {
	venum *r6;
	vdynamic *r5;
	vbyte *r7;
	int r4;
	r4 = r0->length;
	if( ((unsigned)r1) < ((unsigned)r4) ) goto label$f9d86ae_3_5;
	r6 = (venum*)g$haxe_io_Error_OutsideBounds;
	r5 = haxe_Exception_thrown(((vdynamic*)r6));
	hl_throw((vdynamic*)r5);
	label$f9d86ae_3_5:
	r7 = r0->b;
	*(unsigned char*)(r7 + r1) = (unsigned char)r2;
	return;
}

void haxe_io_Bytes_blit(haxe__io__Bytes r0,int r1,haxe__io__Bytes r2,int r3,int r4) {
	venum *r9;
	vdynamic *r8;
	vbyte *r10, *r11;
	int r6, r7;
	r7 = 0;
	if( r1 < r7 ) goto label$f9d86ae_4_15;
	r7 = 0;
	if( r4 < r7 ) goto label$f9d86ae_4_15;
	r6 = r1 + r4;
	r7 = r0->length;
	if( ((unsigned)r7) < ((unsigned)r6) ) goto label$f9d86ae_4_15;
	r7 = 0;
	if( r3 < r7 ) goto label$f9d86ae_4_15;
	r7 = 0;
	if( r4 < r7 ) goto label$f9d86ae_4_15;
	r6 = r3 + r4;
	if( r2 == NULL ) hl_null_access();
	r7 = r2->length;
	if( ((unsigned)r7) >= ((unsigned)r6) ) goto label$f9d86ae_4_18;
	label$f9d86ae_4_15:
	r9 = (venum*)g$haxe_io_Error_OutsideBounds;
	r8 = haxe_Exception_thrown(((vdynamic*)r9));
	hl_throw((vdynamic*)r8);
	label$f9d86ae_4_18:
	r10 = r0->b;
	r11 = r2->b;
	hl_bytes_blit(r10,r1,r11,r3,r4);
	return;
}

haxe__io__Bytes haxe_io_Bytes_sub(haxe__io__Bytes r0,int r1,int r2) {
	venum *r7;
	haxe__io__Bytes r8;
	vdynamic *r6;
	vbyte *r9;
	int r4, r5;
	r5 = 0;
	if( r1 < r5 ) goto label$f9d86ae_5_7;
	r5 = 0;
	if( r2 < r5 ) goto label$f9d86ae_5_7;
	r4 = r1 + r2;
	r5 = r0->length;
	if( ((unsigned)r5) >= ((unsigned)r4) ) goto label$f9d86ae_5_10;
	label$f9d86ae_5_7:
	r7 = (venum*)g$haxe_io_Error_OutsideBounds;
	r6 = haxe_Exception_thrown(((vdynamic*)r7));
	hl_throw((vdynamic*)r6);
	label$f9d86ae_5_10:
	r8 = (haxe__io__Bytes)hl_alloc_obj(&t$haxe_io_Bytes);
	r9 = r0->b;
	r9 = hl__Bytes_Bytes_Impl__sub(r9,r1,r2);
	haxe_io_Bytes_new(r8,r9,r2);
	return r8;
}

double haxe_io_Bytes_getDouble(haxe__io__Bytes r0,int r1) {
	double r4;
	vbyte *r5;
	int r2, r3;
	r3 = 7;
	r2 = r1 + r3;
	r3 = r0->length;
	if( ((unsigned)r2) < ((unsigned)r3) ) goto label$f9d86ae_6_6;
	r4 = 0.;
	return r4;
	label$f9d86ae_6_6:
	r5 = r0->b;
	r4 = *(double*)(r5 + r1);
	return r4;
}

double haxe_io_Bytes_getFloat(haxe__io__Bytes r0,int r1) {
	float r6;
	double r4;
	vbyte *r5;
	int r2, r3;
	r3 = 3;
	r2 = r1 + r3;
	r3 = r0->length;
	if( ((unsigned)r2) < ((unsigned)r3) ) goto label$f9d86ae_7_6;
	r4 = 0.;
	return r4;
	label$f9d86ae_7_6:
	r5 = r0->b;
	r6 = *(float*)(r5 + r1);
	r4 = (double)r6;
	return r4;
}

void haxe_io_Bytes_setDouble(haxe__io__Bytes r0,int r1,double r2) {
	venum *r7;
	vdynamic *r6;
	vbyte *r8;
	int r4, r5;
	r5 = 7;
	r4 = r1 + r5;
	r5 = r0->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$f9d86ae_8_7;
	r7 = (venum*)g$haxe_io_Error_OutsideBounds;
	r6 = haxe_Exception_thrown(((vdynamic*)r7));
	hl_throw((vdynamic*)r6);
	label$f9d86ae_8_7:
	r8 = r0->b;
	*(double*)(r8 + r1) = r2;
	return;
}

void haxe_io_Bytes_setFloat(haxe__io__Bytes r0,int r1,double r2) {
	venum *r7;
	float r9;
	vdynamic *r6;
	vbyte *r8;
	int r4, r5;
	r5 = 3;
	r4 = r1 + r5;
	r5 = r0->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$f9d86ae_9_7;
	r7 = (venum*)g$haxe_io_Error_OutsideBounds;
	r6 = haxe_Exception_thrown(((vdynamic*)r7));
	hl_throw((vdynamic*)r6);
	label$f9d86ae_9_7:
	r8 = r0->b;
	r9 = (float)r2;
	*(float*)(r8 + r1) = r9;
	return;
}

int haxe_io_Bytes_getInt32(haxe__io__Bytes r0,int r1) {
	vbyte *r4;
	int r2, r3;
	r3 = 3;
	r2 = r1 + r3;
	r3 = r0->length;
	if( ((unsigned)r2) < ((unsigned)r3) ) goto label$f9d86ae_10_6;
	r2 = 0;
	return r2;
	label$f9d86ae_10_6:
	r4 = r0->b;
	r2 = *(int*)(r4 + r1);
	return r2;
}

void haxe_io_Bytes_setInt32(haxe__io__Bytes r0,int r1,int r2) {
	venum *r7;
	vdynamic *r6;
	vbyte *r8;
	int r4, r5;
	r5 = 3;
	r4 = r1 + r5;
	r5 = r0->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$f9d86ae_11_7;
	r7 = (venum*)g$haxe_io_Error_OutsideBounds;
	r6 = haxe_Exception_thrown(((vdynamic*)r7));
	hl_throw((vdynamic*)r6);
	label$f9d86ae_11_7:
	r8 = r0->b;
	*(int*)(r8 + r1) = r2;
	return;
}

String haxe_io_Bytes_getString(haxe__io__Bytes r0,int r1,int r2,venum* r3) {
	String r12;
	venum *r8, *r11;
	vdynamic *r7;
	vbyte *r9, *r10;
	int r5, r6;
	r6 = 0;
	if( r1 < r6 ) goto label$f9d86ae_12_7;
	r6 = 0;
	if( r2 < r6 ) goto label$f9d86ae_12_7;
	r5 = r1 + r2;
	r6 = r0->length;
	if( ((unsigned)r6) >= ((unsigned)r5) ) goto label$f9d86ae_12_10;
	label$f9d86ae_12_7:
	r8 = (venum*)g$haxe_io_Error_OutsideBounds;
	r7 = haxe_Exception_thrown(((vdynamic*)r8));
	hl_throw((vdynamic*)r7);
	label$f9d86ae_12_10:
	r6 = 2;
	r5 = r2 + r6;
	r9 = hl_alloc_bytes(r5);
	r5 = 0;
	r10 = r0->b;
	hl_bytes_blit(r9,r5,r10,r1,r2);
	r6 = 0;
	*(unsigned char*)(r9 + r2) = (unsigned char)r6;
	r6 = 1;
	r5 = r2 + r6;
	r6 = 0;
	*(unsigned char*)(r9 + r5) = (unsigned char)r6;
	r11 = (venum*)g$haxe_io_Encoding_RawNative;
	if( r3 != r11 ) goto label$f9d86ae_12_30;
	r12 = (String)hl_alloc_obj(&t$String);
	r12->bytes = r9;
	r5 = 0;
	r5 = hl_ucs2length(r9,r5);
	r12->length = r5;
	return r12;
	label$f9d86ae_12_30:
	r12 = String_fromUTF8(r9);
	return r12;
}

vbyte* haxe_io_Bytes___string(haxe__io__Bytes r0) {
	String r2;
	vbyte *r1;
	r2 = haxe_io_Bytes_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

String haxe_io_Bytes_toString(haxe__io__Bytes r0) {
	String r1;
	venum *r4;
	int r2, r3;
	r2 = 0;
	r3 = r0->length;
	r4 = NULL;
	r1 = haxe_io_Bytes_getString(r0,r2,r3,r4);
	return r1;
}

haxe__io__Bytes haxe_io_Bytes_alloc(int r0) {
	haxe__io__Bytes r5;
	int r2, r4;
	vbyte *r1;
	r1 = hl_alloc_bytes(r0);
	r2 = 0;
	r4 = 0;
	hl_bytes_fill(r1,r2,r0,r4);
	r5 = (haxe__io__Bytes)hl_alloc_obj(&t$haxe_io_Bytes);
	haxe_io_Bytes_new(r5,r1,r0);
	return r5;
}

