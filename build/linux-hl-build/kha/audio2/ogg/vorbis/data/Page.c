﻿// Generated by HLC 4.1.3 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/audio2/ogg/vorbis/data/Page.h>
extern hl_type t$kha_audio2_ogg_vorbis_data_Page;
#include <kha/audio2/ogg/vorbis/VorbisDecodeState.h>
#include <haxe/io/Input.h>
#include <kha/audio2/ogg/vorbis/data/ReaderError.h>
#include <kha/audio2/ogg/vorbis/data/ReaderErrorType.h>
#include <hl/types/ArrayDyn.h>
extern hl_type t$kha_audio2_ogg_vorbis_data_ReaderError;
extern venum* g$da6fdcc;
extern hl_type t$vrt_329ffa8;
extern String s$2f4cf08;
extern hl_type t$String;
extern hl_type t$_i32;
extern String s$0fb2b67;
extern String s$capturePattern;
extern hl_type t$vrt_eaa6a3b;
void kha_audio2_ogg_vorbis_data_ReaderError_new(kha__audio2__ogg__vorbis__data__ReaderError,venum*,String,vvirtual*);
vdynamic* haxe_Exception_thrown(vdynamic*);
void kha_audio2_ogg_vorbis_data_Page_startWithoutCapturePattern(kha__audio2__ogg__vorbis__data__Page,kha__audio2__ogg__vorbis__VorbisDecodeState);
extern venum* g$d3599e1;
extern String s$;
#include <hl/natives.h>
String String___alloc__(vbyte*,int);
String String___add__(String,String);
extern String s$5da1eae;
extern String s$kha_audio2_ogg_vorbis_data_Page;
extern String s$startWithoutCapturePattern;
int haxe_io_Input_readInt32(haxe__io__Input);
void kha_audio2_ogg_vorbis_VorbisDecodeState_setup(kha__audio2__ogg__vorbis__VorbisDecodeState,int,int);

void kha_audio2_ogg_vorbis_data_Page_new(kha__audio2__ogg__vorbis__data__Page r0) {
	return;
}

kha__audio2__ogg__vorbis__data__Page kha_audio2_ogg_vorbis_data_Page_clone(kha__audio2__ogg__vorbis__data__Page r0) {
	kha__audio2__ogg__vorbis__data__Page r1;
	int r3;
	r1 = (kha__audio2__ogg__vorbis__data__Page)hl_alloc_obj(&t$kha_audio2_ogg_vorbis_data_Page);
	kha_audio2_ogg_vorbis_data_Page_new(r1);
	r3 = r0->flag;
	r1->flag = r3;
	return r1;
}

void kha_audio2_ogg_vorbis_data_Page_start(kha__audio2__ogg__vorbis__data__Page r0,kha__audio2__ogg__vorbis__VorbisDecodeState r1) {
	String r12, r14;
	vvirtual *r13, *r15;
	venum *r11;
	bool r6, r7, r8;
	kha__audio2__ogg__vorbis__data__ReaderError r10;
	vdynamic *r9;
	haxe__io__Input r5;
	int r3, r4;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->inputPosition;
	r4 = 1;
	r3 = r3 + r4;
	r1->inputPosition = r3;
	r5 = r1->input;
	if( r5 == NULL ) hl_null_access();
	r3 = ((int (*)(haxe__io__Input))r5->$type->vobj_proto[0])(r5);
	r4 = 79;
	if( r3 != r4 ) goto label$9d7240c_3_23;
	r3 = r1->inputPosition;
	r4 = 1;
	r3 = r3 + r4;
	r1->inputPosition = r3;
	r5 = r1->input;
	if( r5 == NULL ) hl_null_access();
	r3 = ((int (*)(haxe__io__Input))r5->$type->vobj_proto[0])(r5);
	r4 = 103;
	if( r3 != r4 ) goto label$9d7240c_3_21;
	r6 = false;
	goto label$9d7240c_3_22;
	label$9d7240c_3_21:
	r6 = true;
	label$9d7240c_3_22:
	goto label$9d7240c_3_24;
	label$9d7240c_3_23:
	r6 = true;
	label$9d7240c_3_24:
	if( r6 ) goto label$9d7240c_3_38;
	r3 = r1->inputPosition;
	r4 = 1;
	r3 = r3 + r4;
	r1->inputPosition = r3;
	r5 = r1->input;
	if( r5 == NULL ) hl_null_access();
	r3 = ((int (*)(haxe__io__Input))r5->$type->vobj_proto[0])(r5);
	r4 = 103;
	if( r3 != r4 ) goto label$9d7240c_3_36;
	r7 = false;
	goto label$9d7240c_3_37;
	label$9d7240c_3_36:
	r7 = true;
	label$9d7240c_3_37:
	goto label$9d7240c_3_39;
	label$9d7240c_3_38:
	r7 = true;
	label$9d7240c_3_39:
	if( r7 ) goto label$9d7240c_3_53;
	r3 = r1->inputPosition;
	r4 = 1;
	r3 = r3 + r4;
	r1->inputPosition = r3;
	r5 = r1->input;
	if( r5 == NULL ) hl_null_access();
	r3 = ((int (*)(haxe__io__Input))r5->$type->vobj_proto[0])(r5);
	r4 = 83;
	if( r3 != r4 ) goto label$9d7240c_3_51;
	r8 = false;
	goto label$9d7240c_3_52;
	label$9d7240c_3_51:
	r8 = true;
	label$9d7240c_3_52:
	goto label$9d7240c_3_54;
	label$9d7240c_3_53:
	r8 = true;
	label$9d7240c_3_54:
	if( !r8 ) goto label$9d7240c_3_71;
	r10 = (kha__audio2__ogg__vorbis__data__ReaderError)hl_alloc_obj(&t$kha_audio2_ogg_vorbis_data_ReaderError);
	r11 = (venum*)g$da6fdcc;
	r12 = NULL;
	r13 = hl_alloc_virtual(&t$vrt_329ffa8);
	r14 = (String)s$2f4cf08;
	if( hl_vfields(r13)[1] ) *(String*)(hl_vfields(r13)[1]) = (String)r14; else hl_dyn_setp(r13->value,37969014/*fileName*/,&t$String,r14);
	r3 = 324;
	if( hl_vfields(r13)[2] ) *(int*)(hl_vfields(r13)[2]) = (int)r3; else hl_dyn_seti(r13->value,371360620/*lineNumber*/,&t$_i32,r3);
	r14 = (String)s$0fb2b67;
	if( hl_vfields(r13)[0] ) *(String*)(hl_vfields(r13)[0]) = (String)r14; else hl_dyn_setp(r13->value,-63073762/*className*/,&t$String,r14);
	r14 = (String)s$capturePattern;
	if( hl_vfields(r13)[3] ) *(String*)(hl_vfields(r13)[3]) = (String)r14; else hl_dyn_setp(r13->value,302979532/*methodName*/,&t$String,r14);
	r15 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r13);
	kha_audio2_ogg_vorbis_data_ReaderError_new(r10,r11,r12,r15);
	r9 = haxe_Exception_thrown(((vdynamic*)r10));
	hl_throw((vdynamic*)r9);
	label$9d7240c_3_71:
	kha_audio2_ogg_vorbis_data_Page_startWithoutCapturePattern(r0,r1);
	return;
}

void kha_audio2_ogg_vorbis_data_Page_startWithoutCapturePattern(kha__audio2__ogg__vorbis__data__Page r0,kha__audio2__ogg__vorbis__VorbisDecodeState r1) {
	String r10, r13;
	vvirtual *r14, *r15;
	venum *r9;
	kha__audio2__ogg__vorbis__data__ReaderError r8;
	int *r11;
	vdynamic *r7;
	haxe__io__Input r4;
	vbyte *r12;
	int r2, r3, r6, r16, r17;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->inputPosition;
	r3 = 1;
	r2 = r2 + r3;
	r1->inputPosition = r2;
	r4 = r1->input;
	if( r4 == NULL ) hl_null_access();
	r2 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	r6 = 0;
	if( r2 == r6 ) goto label$9d7240c_4_31;
	r8 = (kha__audio2__ogg__vorbis__data__ReaderError)hl_alloc_obj(&t$kha_audio2_ogg_vorbis_data_ReaderError);
	r9 = (venum*)g$d3599e1;
	r10 = (String)s$;
	r3 = r2;
	r11 = &r3;
	r12 = hl_itos(r3,r11);
	r13 = String___alloc__(r12,r3);
	r10 = String___add__(r10,r13);
	r14 = hl_alloc_virtual(&t$vrt_329ffa8);
	r13 = (String)s$5da1eae;
	if( hl_vfields(r14)[1] ) *(String*)(hl_vfields(r14)[1]) = (String)r13; else hl_dyn_setp(r14->value,37969014/*fileName*/,&t$String,r13);
	r3 = 34;
	if( hl_vfields(r14)[2] ) *(int*)(hl_vfields(r14)[2]) = (int)r3; else hl_dyn_seti(r14->value,371360620/*lineNumber*/,&t$_i32,r3);
	r13 = (String)s$kha_audio2_ogg_vorbis_data_Page;
	if( hl_vfields(r14)[0] ) *(String*)(hl_vfields(r14)[0]) = (String)r13; else hl_dyn_setp(r14->value,-63073762/*className*/,&t$String,r13);
	r13 = (String)s$startWithoutCapturePattern;
	if( hl_vfields(r14)[3] ) *(String*)(hl_vfields(r14)[3]) = (String)r13; else hl_dyn_setp(r14->value,302979532/*methodName*/,&t$String,r13);
	r15 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r14);
	kha_audio2_ogg_vorbis_data_ReaderError_new(r8,r9,r10,r15);
	r7 = haxe_Exception_thrown(((vdynamic*)r8));
	hl_throw((vdynamic*)r7);
	label$9d7240c_4_31:
	r3 = r1->inputPosition;
	r6 = 1;
	r3 = r3 + r6;
	r1->inputPosition = r3;
	r4 = r1->input;
	if( r4 == NULL ) hl_null_access();
	r3 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	r0->flag = r3;
	r3 = r1->inputPosition;
	r6 = 4;
	r3 = r3 + r6;
	r1->inputPosition = r3;
	r4 = r1->input;
	if( r4 == NULL ) hl_null_access();
	r3 = haxe_io_Input_readInt32(r4);
	r6 = r1->inputPosition;
	r16 = 4;
	r6 = r6 + r16;
	r1->inputPosition = r6;
	r4 = r1->input;
	if( r4 == NULL ) hl_null_access();
	r6 = haxe_io_Input_readInt32(r4);
	r16 = r1->inputPosition;
	r17 = 4;
	r16 = r16 + r17;
	r1->inputPosition = r16;
	r4 = r1->input;
	if( r4 == NULL ) hl_null_access();
	r16 = haxe_io_Input_readInt32(r4);
	r16 = r1->inputPosition;
	r17 = 4;
	r16 = r16 + r17;
	r1->inputPosition = r16;
	r4 = r1->input;
	if( r4 == NULL ) hl_null_access();
	r16 = haxe_io_Input_readInt32(r4);
	r16 = r1->inputPosition;
	r17 = 4;
	r16 = r16 + r17;
	r1->inputPosition = r16;
	r4 = r1->input;
	if( r4 == NULL ) hl_null_access();
	r16 = haxe_io_Input_readInt32(r4);
	kha_audio2_ogg_vorbis_VorbisDecodeState_setup(r1,r3,r6);
	return;
}

