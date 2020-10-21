﻿// Generated by HLC 4.1.3 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/math/FastVector3.h>
extern hl_type t$kha_math_FastVector3;
#include <hl/natives.h>
String kha_math_FastVector3_toString(kha__math__FastVector3);
extern String s$FastVector3_;
extern hl_type t$_f32;
String Std_string(vdynamic*);
String String___add__(String,String);
extern String s$fc763cb;
extern String s$9371d7a;

void kha_math_FastVector3_new(kha__math__FastVector3 r0,float* r1,float* r2,float* r3) {
	float r4, r5, r6;
	if( r1 ) goto label$ed00ec5_1_3;
	r4 = 0.;
	goto label$ed00ec5_1_4;
	label$ed00ec5_1_3:
	r4 = *r1;
	label$ed00ec5_1_4:
	if( r2 ) goto label$ed00ec5_1_7;
	r5 = 0.;
	goto label$ed00ec5_1_8;
	label$ed00ec5_1_7:
	r5 = *r2;
	label$ed00ec5_1_8:
	if( r3 ) goto label$ed00ec5_1_11;
	r6 = 0.;
	goto label$ed00ec5_1_12;
	label$ed00ec5_1_11:
	r6 = *r3;
	label$ed00ec5_1_12:
	r0->x = r4;
	r0->y = r5;
	r0->z = r6;
	return;
}

kha__math__FastVector3 kha_math_FastVector3_fromVector3(kha__math__Vector3 r0) {
	float r3, r5, r7;
	double r2;
	kha__math__FastVector3 r1;
	float *r4, *r6, *r8;
	r1 = (kha__math__FastVector3)hl_alloc_obj(&t$kha_math_FastVector3);
	if( r0 == NULL ) hl_null_access();
	r2 = r0->x;
	r3 = (float)r2;
	r4 = &r3;
	r2 = r0->y;
	r5 = (float)r2;
	r6 = &r5;
	r2 = r0->z;
	r7 = (float)r2;
	r8 = &r7;
	kha_math_FastVector3_new(r1,r4,r6,r8);
	return r1;
}

float kha_math_FastVector3_get_length(kha__math__FastVector3 r0) {
	float r2, r3, r4;
	double r1;
	r2 = r0->x;
	r3 = r0->x;
	r2 = r2 * r3;
	r3 = r0->y;
	r4 = r0->y;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->z;
	r4 = r0->z;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r1 = (double)r2;
	r1 = hl_math_sqrt(r1);
	r2 = (float)r1;
	return r2;
}

float kha_math_FastVector3_set_length(kha__math__FastVector3 r0,float r1) {
	float r3, r4, r5;
	double r2, r7;
	int r6;
	r3 = r0->x;
	r4 = r0->x;
	r3 = r3 * r4;
	r4 = r0->y;
	r5 = r0->y;
	r4 = r4 * r5;
	r3 = r3 + r4;
	r4 = r0->z;
	r5 = r0->z;
	r4 = r4 * r5;
	r3 = r3 + r4;
	r2 = (double)r3;
	r2 = hl_math_sqrt(r2);
	r3 = (float)r2;
	r6 = 0;
	r5 = (float)r6;
	if( r3 != r5 ) goto label$ed00ec5_4_20;
	r6 = 0;
	r4 = (float)r6;
	return r4;
	label$ed00ec5_4_20:
	r2 = (double)r1;
	r7 = (double)r3;
	r2 = r2 / r7;
	r4 = r0->x;
	r5 = (float)r2;
	r4 = r4 * r5;
	r0->x = r4;
	r4 = r0->y;
	r5 = (float)r2;
	r4 = r4 * r5;
	r0->y = r4;
	r4 = r0->z;
	r5 = (float)r2;
	r4 = r4 * r5;
	r0->z = r4;
	return r1;
}

vbyte* kha_math_FastVector3___string(kha__math__FastVector3 r0) {
	String r2;
	vbyte *r1;
	r2 = kha_math_FastVector3_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

String kha_math_FastVector3_toString(kha__math__FastVector3 r0) {
	String r1, r2;
	float r3;
	vdynamic *r4;
	r1 = (String)s$FastVector3_;
	r3 = r0->x;
	r4 = hl_alloc_dynamic(&t$_f32);
	r4->v.f = r3;
	r2 = Std_string(r4);
	r1 = String___add__(r1,r2);
	r2 = (String)s$fc763cb;
	r1 = String___add__(r1,r2);
	r3 = r0->y;
	r4 = hl_alloc_dynamic(&t$_f32);
	r4->v.f = r3;
	r2 = Std_string(r4);
	r1 = String___add__(r1,r2);
	r2 = (String)s$fc763cb;
	r1 = String___add__(r1,r2);
	r3 = r0->z;
	r4 = hl_alloc_dynamic(&t$_f32);
	r4->v.f = r3;
	r2 = Std_string(r4);
	r1 = String___add__(r1,r2);
	r2 = (String)s$9371d7a;
	r1 = String___add__(r1,r2);
	return r1;
}

