﻿// Generated by HLC 4.1.3 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/korehl/Sound.h>
extern hl_type t$kha_arrays_Float32ArrayPrivate;
void kha_arrays_Float32ArrayPrivate_new(kha__arrays__Float32ArrayPrivate);
#include <hl/natives.h>
haxe__io__Bytes sys_io_File_getBytes(String);
#include <hl/types/ArrayDyn.h>
#include <haxe/Log.h>
void kha_Sound_new(kha__Sound);
extern String s$_wav;
bool StringTools_endsWith(String,String);
extern String s$_ogg;
extern haxe__$Log g$_haxe_Log;
extern String s$Unknown_sound_format_;
String String___add__(String,String);
extern hl_type t$vrt_329ffa8;
extern String s$kha_korehl_Sound_hx;
extern hl_type t$String;
extern hl_type t$_i32;
extern String s$kha_korehl_Sound;
extern String s$new;
extern hl_type t$vrt_eaa6a3b;

void kha_korehl_Sound_initWav(kha__korehl__Sound r0,String r1) {
	kha__arrays__Float32ArrayPrivate r4, r5;
	double r13;
	double *r14;
	int *r10;
	vbyte *r8, *r9, *r11, *r15;
	int r2, r6, r7, r12;
	r2 = 0;
	r4 = (kha__arrays__Float32ArrayPrivate)hl_alloc_obj(&t$kha_arrays_Float32ArrayPrivate);
	kha_arrays_Float32ArrayPrivate_new(r4);
	r4->length = r2;
	r7 = 0;
	if( r7 >= r2 ) goto label$0b8cc7c_1_8;
	r8 = hl_kore_float32array_alloc(r2);
	r4->self = r8;
	label$0b8cc7c_1_8:
	r0->uncompressedData = r4;
	r6 = 1;
	r7 = 1;
	r8 = hl_kore_uint32array_alloc(r7);
	r7 = 0;
	if( r1 == NULL ) hl_null_access();
	r9 = r1->bytes;
	r10 = &r7;
	r12 = 0;
	r11 = hl_utf16_to_utf8(r9,r12,r10);
	r13 = r0->length;
	r14 = &r13;
	r15 = hl_kore_sound_init_wav(r11,r8,r14);
	r5 = r0->uncompressedData;
	r12 = 0;
	r12 = hl_kore_uint32array_get(r8,r12);
	if( r5 == NULL ) hl_null_access();
	r5->self = r15;
	r5->length = r12;
	hl_kore_uint32array_free(r8);
	return;
}

void kha_korehl_Sound_initOgg(kha__korehl__Sound r0,String r1) {
	haxe__io__Bytes r2;
	r2 = sys_io_File_getBytes(r1);
	r0->compressedData = r2;
	return;
}

void kha_korehl_Sound_new(kha__korehl__Sound r0,String r1) {
	String r4, r5;
	vvirtual *r8, *r10;
	bool r3;
	haxe__$Log r7;
	vclosure *r6;
	int r9;
	kha_Sound_new(((kha__Sound)r0));
	r5 = (String)s$_wav;
	r3 = StringTools_endsWith(r1,r5);
	if( !r3 ) goto label$0b8cc7c_3_6;
	kha_korehl_Sound_initWav(r0,r1);
	goto label$0b8cc7c_3_27;
	label$0b8cc7c_3_6:
	r5 = (String)s$_ogg;
	r3 = StringTools_endsWith(r1,r5);
	if( !r3 ) goto label$0b8cc7c_3_11;
	kha_korehl_Sound_initOgg(r0,r1);
	goto label$0b8cc7c_3_27;
	label$0b8cc7c_3_11:
	r7 = (haxe__$Log)g$_haxe_Log;
	r6 = r7->trace;
	if( r6 == NULL ) hl_null_access();
	r4 = (String)s$Unknown_sound_format_;
	r4 = String___add__(r4,r1);
	r8 = hl_alloc_virtual(&t$vrt_329ffa8);
	r5 = (String)s$kha_korehl_Sound_hx;
	if( hl_vfields(r8)[1] ) *(String*)(hl_vfields(r8)[1]) = (String)r5; else hl_dyn_setp(r8->value,37969014/*fileName*/,&t$String,r5);
	r9 = 32;
	if( hl_vfields(r8)[2] ) *(int*)(hl_vfields(r8)[2]) = (int)r9; else hl_dyn_seti(r8->value,371360620/*lineNumber*/,&t$_i32,r9);
	r5 = (String)s$kha_korehl_Sound;
	if( hl_vfields(r8)[0] ) *(String*)(hl_vfields(r8)[0]) = (String)r5; else hl_dyn_setp(r8->value,-63073762/*className*/,&t$String,r5);
	r5 = (String)s$new;
	if( hl_vfields(r8)[3] ) *(String*)(hl_vfields(r8)[3]) = (String)r5; else hl_dyn_setp(r8->value,302979532/*methodName*/,&t$String,r5);
	r10 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r8);
	r6->hasValue ? ((void (*)(vdynamic*,vdynamic*,vvirtual*))r6->fun)((vdynamic*)r6->value,((vdynamic*)r4),r10) : ((void (*)(vdynamic*,vvirtual*))r6->fun)(((vdynamic*)r4),r10);
	label$0b8cc7c_3_27:
	return;
}

