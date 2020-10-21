﻿// Generated by HLC 4.1.3 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/Display.h>
#include <hl/natives.h>
extern kha__$Display g$_kha_Display;
extern hl_type t$kha_Display;
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
extern String s$Display;
extern hl_type t$kha_DisplayMode;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);

void kha_Display_new(kha__Display r0,int r1,bool r2) {
	r0->num = r1;
	r0->isPrimary = r2;
	return;
}

void kha_Display_init() {
	hl__types__ArrayObj r5;
	bool r8;
	kha__Display r7;
	kha__$Display r6;
	int r0, r2, r3, r4;
	r0 = 0;
	r2 = hl_kore_display_count();
	label$69b4e0c_2_2:
	if( r0 >= r2 ) goto label$69b4e0c_2_14;
	r3 = r0;
	++r0;
	r6 = (kha__$Display)g$_kha_Display;
	r5 = r6->displays;
	if( r5 == NULL ) hl_null_access();
	r7 = (kha__Display)hl_alloc_obj(&t$kha_Display);
	r8 = hl_kore_display_is_primary(r3);
	kha_Display_new(r7,r3,r8);
	r4 = hl_types_ArrayObj_push(r5,((vdynamic*)r7));
	goto label$69b4e0c_2_2;
	label$69b4e0c_2_14:
	return;
}

kha__Display kha_Display_get_primary() {
	hl__types__ArrayObj r2;
	bool r8;
	kha__Display r5;
	kha__$Display r3;
	vdynamic *r6;
	varray *r7;
	int r1, r4;
	kha_Display_init();
	r1 = 0;
	r3 = (kha__$Display)g$_kha_Display;
	r2 = r3->displays;
	label$69b4e0c_3_4:
	if( r2 == NULL ) hl_null_access();
	r4 = r2->length;
	if( r1 >= r4 ) goto label$69b4e0c_3_21;
	r4 = r2->length;
	if( ((unsigned)r1) < ((unsigned)r4) ) goto label$69b4e0c_3_12;
	r5 = NULL;
	goto label$69b4e0c_3_15;
	label$69b4e0c_3_12:
	r7 = r2->array;
	r6 = ((vdynamic**)(r7 + 1))[r1];
	r5 = (kha__Display)r6;
	label$69b4e0c_3_15:
	++r1;
	if( r5 == NULL ) hl_null_access();
	r8 = r5->isPrimary;
	if( !r8 ) goto label$69b4e0c_3_20;
	return r5;
	label$69b4e0c_3_20:
	goto label$69b4e0c_3_4;
	label$69b4e0c_3_21:
	r5 = NULL;
	return r5;
}

hl__types__ArrayObj kha_Display_get_all() {
	hl__types__ArrayObj r1;
	kha__$Display r2;
	kha_Display_init();
	r2 = (kha__$Display)g$_kha_Display;
	r1 = r2->displays;
	return r1;
}

bool kha_Display_get_available(kha__Display r0) {
	bool r1;
	r1 = true;
	return r1;
}

String kha_Display_get_name(kha__Display r0) {
	String r1;
	r1 = (String)s$Display;
	return r1;
}

int kha_Display_get_x(kha__Display r0) {
	int r1;
	r1 = r0->num;
	r1 = hl_kore_display_x(r1);
	return r1;
}

int kha_Display_get_y(kha__Display r0) {
	int r1;
	r1 = r0->num;
	r1 = hl_kore_display_y(r1);
	return r1;
}

int kha_Display_get_width(kha__Display r0) {
	int r1;
	r1 = r0->num;
	r1 = hl_kore_display_width(r1);
	return r1;
}

int kha_Display_get_height(kha__Display r0) {
	int r1;
	r1 = r0->num;
	r1 = hl_kore_display_height(r1);
	return r1;
}

int kha_Display_get_frequency(kha__Display r0) {
	int r1;
	r1 = 60;
	return r1;
}

int kha_Display_get_pixelsPerInch(kha__Display r0) {
	int r1;
	r1 = hl_kore_display_ppi();
	return r1;
}

hl__types__ArrayObj kha_Display_get_modes(kha__Display r0) {
	hl__types__ArrayObj r1;
	hl_type *r3;
	int r4;
	varray *r2;
	r3 = &t$kha_DisplayMode;
	r4 = 0;
	r2 = hl_alloc_array(r3,r4);
	r1 = hl_types_ArrayObj_alloc(r2);
	return r1;
}

