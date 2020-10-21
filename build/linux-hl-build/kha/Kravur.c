﻿// Generated by HLC 4.1.3 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/Kravur.h>
extern hl_type t$kha_Kravur;
kha__internal__BytesBlob kha_internal_BytesBlob_fromBytes(haxe__io__Bytes);
void kha_Kravur_new(kha__Kravur,kha__internal__BytesBlob,int*);
#include <kha/graphics2/Graphics.h>
#include <kha/KravurImage.h>
#include <hl/types/ArrayObj.h>
#include <kha/graphics2/truetype/Stbtt_bakedchar.h>
#include <kha/graphics2/truetype/Stbtt_fontinfo.h>
#include <kha/graphics2/truetype/Stbtt_temp_font_v_metrics.h>
extern kha__graphics2__$Graphics g$_kha_graphics2_Graphics;
#include <hl/natives.h>
hl__types__ArrayBytes_Int hl_types_ArrayBase_allocI32(vbyte*,int);
extern kha__$KravurImage g$_kha_KravurImage;
int hl_types_ArrayBytes_Int_push(hl__types__ArrayBytes_Int,int);
bool haxe_ds_IntMap_exists(haxe__ds__IntMap,int);
extern hl_type t$kha_graphics2_truetype_Stbtt_bakedchar;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern hl_type t$_dyn;
void hl_types_ArrayObj___expand(hl__types__ArrayObj,int);
void kha_graphics2_truetype_Stbtt_bakedchar_new(kha__graphics2__truetype__Stbtt_bakedchar);
int kha_graphics2_truetype_StbTruetype_stbtt_GetFontOffsetForIndex(kha__internal__BytesBlob,int);
kha__internal__BytesBlob kha_internal_BytesBlob_alloc(int);
int kha_graphics2_truetype_StbTruetype_stbtt_BakeFontBitmap(kha__internal__BytesBlob,int,double,kha__internal__BytesBlob,int,int,hl__types__ArrayBytes_Int,hl__types__ArrayObj);
extern hl_type t$kha_graphics2_truetype_Stbtt_fontinfo;
void kha_graphics2_truetype_Stbtt_fontinfo_new(kha__graphics2__truetype__Stbtt_fontinfo);
bool kha_graphics2_truetype_StbTruetype_stbtt_InitFont(kha__graphics2__truetype__Stbtt_fontinfo,kha__internal__BytesBlob,int);
kha__graphics2__truetype__Stbtt_temp_font_v_metrics kha_graphics2_truetype_StbTruetype_stbtt_GetFontVMetrics(kha__graphics2__truetype__Stbtt_fontinfo);
double kha_graphics2_truetype_StbTruetype_stbtt_ScaleForPixelHeight(kha__graphics2__truetype__Stbtt_fontinfo,double);
extern hl_type t$kha_KravurImage;
void kha_KravurImage_new(kha__KravurImage,int,int,int,int,int,int,hl__types__ArrayObj,kha__internal__BytesBlob);
void haxe_ds_IntMap_set(haxe__ds__IntMap,int,vdynamic*);
vdynamic* haxe_ds_IntMap_get(haxe__ds__IntMap,int);
double kha_KravurImage_getHeight(kha__KravurImage);
double kha_KravurImage_stringWidth(kha__KravurImage,String);
double kha_KravurImage_charactersWidth(kha__KravurImage,hl__types__ArrayBytes_Int,int,int);
double kha_KravurImage_getBaselinePosition(kha__KravurImage);
extern hl_type t$haxe_ds_IntMap;
void haxe_ds_IntMap_new(haxe__ds__IntMap);

kha__Kravur kha_Kravur_fromBytes(haxe__io__Bytes r0,int* r1) {
	kha__Kravur r3;
	kha__internal__BytesBlob r4;
	int r2, r5;
	if( r1 ) goto label$6c4203c_1_3;
	r2 = 0;
	goto label$6c4203c_1_4;
	label$6c4203c_1_3:
	r2 = *r1;
	label$6c4203c_1_4:
	r3 = (kha__Kravur)hl_alloc_obj(&t$kha_Kravur);
	r4 = kha_internal_BytesBlob_fromBytes(r0);
	r5 = r2;
	r1 = &r5;
	kha_Kravur_new(r3,r4,r1);
	return r3;
}

kha__KravurImage kha_Kravur__get(kha__Kravur r0,int r1) {
	kha__$KravurImage r12;
	hl__types__ArrayObj r18, r21;
	kha__graphics2__truetype__Stbtt_temp_font_v_metrics r31;
	hl_type *r20;
	bool r16;
	kha__graphics2__truetype__Stbtt_fontinfo r30;
	haxe__ds__IntMap r17;
	hl__types__ArrayBytes_Int r2, r5, r6;
	kha__graphics2__$Graphics r3;
	kha__KravurImage r33;
	kha__internal__BytesBlob r27, r28;
	kha__graphics2__truetype__Stbtt_bakedchar r23;
	double r29, r32;
	vdynamic *r22;
	varray *r19;
	int r8, r9, r10, r13, r14, r15, r24, r25, r26, r34;
	vbyte *r7, *r11;
	r3 = (kha__graphics2__$Graphics)g$_kha_graphics2_Graphics;
	r2 = r3->fontGlyphs;
	r6 = r0->oldGlyphs;
	if( r2 == r6 ) goto label$6c4203c_2_112;
	r0->oldGlyphs = r2;
	r8 = 4;
	r7 = hl_alloc_bytes(r8);
	r8 = 0;
	if( r2 == NULL ) hl_null_access();
	r9 = 0;
	r10 = r2->length;
	if( ((unsigned)r9) < ((unsigned)r10) ) goto label$6c4203c_2_14;
	r9 = 0;
	goto label$6c4203c_2_18;
	label$6c4203c_2_14:
	r11 = r2->bytes;
	r10 = 2;
	r10 = r9 << r10;
	r9 = *(int*)(r11 + r10);
	label$6c4203c_2_18:
	r10 = 2;
	r10 = r8 << r10;
	*(int*)(r7 + r10) = r9;
	++r8;
	r8 = 1;
	r5 = hl_types_ArrayBase_allocI32(r7,r8);
	r12 = (kha__$KravurImage)g$_kha_KravurImage;
	r12->charBlocks = r5;
	r12 = (kha__$KravurImage)g$_kha_KravurImage;
	r5 = r12->charBlocks;
	if( r5 == NULL ) hl_null_access();
	r8 = 0;
	r9 = r5->length;
	if( ((unsigned)r8) < ((unsigned)r9) ) goto label$6c4203c_2_34;
	r8 = 0;
	goto label$6c4203c_2_38;
	label$6c4203c_2_34:
	r7 = r5->bytes;
	r9 = 2;
	r9 = r8 << r9;
	r8 = *(int*)(r7 + r9);
	label$6c4203c_2_38:
	r9 = 1;
	r8 = r8 + r9;
	r9 = 1;
	r10 = r2->length;
	label$6c4203c_2_42:
	if( r9 >= r10 ) goto label$6c4203c_2_96;
	r13 = r9;
	++r9;
	if( r2 == NULL ) hl_null_access();
	r15 = r2->length;
	if( ((unsigned)r13) < ((unsigned)r15) ) goto label$6c4203c_2_51;
	r14 = 0;
	goto label$6c4203c_2_55;
	label$6c4203c_2_51:
	r7 = r2->bytes;
	r15 = 2;
	r15 = r13 << r15;
	r14 = *(int*)(r7 + r15);
	label$6c4203c_2_55:
	if( r14 == r8 ) goto label$6c4203c_2_94;
	r12 = (kha__$KravurImage)g$_kha_KravurImage;
	r5 = r12->charBlocks;
	if( r5 == NULL ) hl_null_access();
	r15 = 1;
	r14 = r13 - r15;
	r15 = r2->length;
	if( ((unsigned)r14) < ((unsigned)r15) ) goto label$6c4203c_2_65;
	r14 = 0;
	goto label$6c4203c_2_69;
	label$6c4203c_2_65:
	r7 = r2->bytes;
	r15 = 2;
	r15 = r14 << r15;
	r14 = *(int*)(r7 + r15);
	label$6c4203c_2_69:
	r14 = hl_types_ArrayBytes_Int_push(r5,r14);
	r12 = (kha__$KravurImage)g$_kha_KravurImage;
	r5 = r12->charBlocks;
	if( r5 == NULL ) hl_null_access();
	r15 = r2->length;
	if( ((unsigned)r13) < ((unsigned)r15) ) goto label$6c4203c_2_77;
	r14 = 0;
	goto label$6c4203c_2_81;
	label$6c4203c_2_77:
	r7 = r2->bytes;
	r15 = 2;
	r15 = r13 << r15;
	r14 = *(int*)(r7 + r15);
	label$6c4203c_2_81:
	r14 = hl_types_ArrayBytes_Int_push(r5,r14);
	r15 = r2->length;
	if( ((unsigned)r13) < ((unsigned)r15) ) goto label$6c4203c_2_86;
	r14 = 0;
	goto label$6c4203c_2_90;
	label$6c4203c_2_86:
	r7 = r2->bytes;
	r15 = 2;
	r15 = r13 << r15;
	r14 = *(int*)(r7 + r15);
	label$6c4203c_2_90:
	r15 = 1;
	r14 = r14 + r15;
	r8 = r14;
	goto label$6c4203c_2_95;
	label$6c4203c_2_94:
	++r8;
	label$6c4203c_2_95:
	goto label$6c4203c_2_42;
	label$6c4203c_2_96:
	r12 = (kha__$KravurImage)g$_kha_KravurImage;
	r5 = r12->charBlocks;
	if( r5 == NULL ) hl_null_access();
	if( r2 == NULL ) hl_null_access();
	r9 = r2->length;
	r10 = 1;
	r9 = r9 - r10;
	r10 = r2->length;
	if( ((unsigned)r9) < ((unsigned)r10) ) goto label$6c4203c_2_107;
	r9 = 0;
	goto label$6c4203c_2_111;
	label$6c4203c_2_107:
	r7 = r2->bytes;
	r10 = 2;
	r10 = r9 << r10;
	r9 = *(int*)(r7 + r10);
	label$6c4203c_2_111:
	r9 = hl_types_ArrayBytes_Int_push(r5,r9);
	label$6c4203c_2_112:
	r8 = r0->fontIndex;
	r9 = 10000000;
	r8 = r8 * r9;
	r10 = 10000;
	r9 = r1 * r10;
	r8 = r8 + r9;
	if( r2 == NULL ) hl_null_access();
	r9 = r2->length;
	r8 = r8 + r9;
	r17 = r0->images;
	if( r17 == NULL ) hl_null_access();
	r16 = haxe_ds_IntMap_exists(r17,r8);
	if( r16 ) goto label$6c4203c_2_218;
	r9 = 64;
	r10 = 32;
	r13 = r2->length;
	r20 = &t$kha_graphics2_truetype_Stbtt_bakedchar;
	r14 = 0;
	r19 = hl_alloc_array(r20,r14);
	r18 = hl_types_ArrayObj_alloc(r19);
	r15 = 0;
	if( r15 >= r13 ) goto label$6c4203c_2_144;
	if( r18 == NULL ) hl_null_access();
	r15 = 1;
	r14 = r13 - r15;
	r22 = NULL;
	r23 = (kha__graphics2__truetype__Stbtt_bakedchar)hl_dyn_castp(&r22,&t$_dyn,&t$kha_graphics2_truetype_Stbtt_bakedchar);
	r15 = r18->length;
	if( ((unsigned)r14) < ((unsigned)r15) ) goto label$6c4203c_2_142;
	hl_types_ArrayObj___expand(r18,r14);
	label$6c4203c_2_142:
	r19 = r18->array;
	((kha__graphics2__truetype__Stbtt_bakedchar*)(r19 + 1))[r14] = r23;
	label$6c4203c_2_144:
	r21 = r18;
	r14 = 0;
	if( r18 == NULL ) hl_null_access();
	r15 = r18->length;
	label$6c4203c_2_148:
	if( r14 >= r15 ) goto label$6c4203c_2_161;
	r24 = r14;
	++r14;
	if( r21 == NULL ) hl_null_access();
	r23 = (kha__graphics2__truetype__Stbtt_bakedchar)hl_alloc_obj(&t$kha_graphics2_truetype_Stbtt_bakedchar);
	kha_graphics2_truetype_Stbtt_bakedchar_new(r23);
	r26 = r21->length;
	if( ((unsigned)r24) < ((unsigned)r26) ) goto label$6c4203c_2_158;
	hl_types_ArrayObj___expand(r21,r24);
	label$6c4203c_2_158:
	r19 = r21->array;
	((kha__graphics2__truetype__Stbtt_bakedchar*)(r19 + 1))[r24] = r23;
	goto label$6c4203c_2_148;
	label$6c4203c_2_161:
	r27 = NULL;
	r28 = r0->blob;
	r14 = r0->fontIndex;
	r14 = kha_graphics2_truetype_StbTruetype_stbtt_GetFontOffsetForIndex(r28,r14);
	r24 = -1;
	if( r14 != r24 ) goto label$6c4203c_2_171;
	r28 = r0->blob;
	r15 = 0;
	r15 = kha_graphics2_truetype_StbTruetype_stbtt_GetFontOffsetForIndex(r28,r15);
	r14 = r15;
	label$6c4203c_2_171:
	r15 = -1;
	label$6c4203c_2_172:
	r25 = 0;
	if( r25 < r15 ) goto label$6c4203c_2_191;
	if( r10 >= r9 ) goto label$6c4203c_2_180;
	r25 = 2;
	r24 = r10 * r25;
	r10 = r24;
	goto label$6c4203c_2_183;
	label$6c4203c_2_180:
	r25 = 2;
	r24 = r9 * r25;
	r9 = r24;
	label$6c4203c_2_183:
	r24 = r9 * r10;
	r28 = kha_internal_BytesBlob_alloc(r24);
	r27 = r28;
	r28 = r0->blob;
	r29 = (double)r1;
	r24 = kha_graphics2_truetype_StbTruetype_stbtt_BakeFontBitmap(r28,r14,r29,r27,r9,r10,r2,r21);
	r15 = r24;
	goto label$6c4203c_2_172;
	label$6c4203c_2_191:
	r30 = (kha__graphics2__truetype__Stbtt_fontinfo)hl_alloc_obj(&t$kha_graphics2_truetype_Stbtt_fontinfo);
	kha_graphics2_truetype_Stbtt_fontinfo_new(r30);
	r28 = r0->blob;
	r16 = kha_graphics2_truetype_StbTruetype_stbtt_InitFont(r30,r28,r14);
	r31 = kha_graphics2_truetype_StbTruetype_stbtt_GetFontVMetrics(r30);
	r29 = (double)r1;
	r29 = kha_graphics2_truetype_StbTruetype_stbtt_ScaleForPixelHeight(r30,r29);
	if( r31 == NULL ) hl_null_access();
	r24 = r31->ascent;
	r32 = (double)r24;
	r32 = r32 * r29;
	r24 = hl_math_round(r32);
	r25 = r31->descent;
	r32 = (double)r25;
	r32 = r32 * r29;
	r25 = hl_math_round(r32);
	r26 = r31->lineGap;
	r32 = (double)r26;
	r32 = r32 * r29;
	r26 = hl_math_round(r32);
	r33 = (kha__KravurImage)hl_alloc_obj(&t$kha_KravurImage);
	r34 = (int)r1;
	kha_KravurImage_new(r33,r34,r24,r25,r26,r9,r10,r21,r27);
	r17 = r0->images;
	if( r17 == NULL ) hl_null_access();
	haxe_ds_IntMap_set(r17,r8,((vdynamic*)r33));
	return r33;
	label$6c4203c_2_218:
	r17 = r0->images;
	if( r17 == NULL ) hl_null_access();
	r22 = haxe_ds_IntMap_get(r17,r8);
	r33 = (kha__KravurImage)r22;
	return r33;
}

double kha_Kravur_height(kha__Kravur r0,int r1) {
	kha__KravurImage r3;
	double r2;
	r3 = kha_Kravur__get(r0,r1);
	if( r3 == NULL ) hl_null_access();
	r2 = kha_KravurImage_getHeight(r3);
	return r2;
}

double kha_Kravur_width(kha__Kravur r0,int r1,String r2) {
	kha__KravurImage r4;
	double r3;
	r4 = kha_Kravur__get(r0,r1);
	if( r4 == NULL ) hl_null_access();
	r3 = kha_KravurImage_stringWidth(r4,r2);
	return r3;
}

double kha_Kravur_widthOfCharacters(kha__Kravur r0,int r1,hl__types__ArrayBytes_Int r2,int r3,int r4) {
	kha__KravurImage r6;
	double r5;
	r6 = kha_Kravur__get(r0,r1);
	if( r6 == NULL ) hl_null_access();
	r5 = kha_KravurImage_charactersWidth(r6,r2,r3,r4);
	return r5;
}

double kha_Kravur_baseline(kha__Kravur r0,int r1) {
	kha__KravurImage r3;
	double r2;
	r3 = kha_Kravur__get(r0,r1);
	if( r3 == NULL ) hl_null_access();
	r2 = kha_KravurImage_getBaselinePosition(r3);
	return r2;
}

void kha_Kravur_setFontIndex(kha__Kravur r0,int r1) {
	r0->fontIndex = r1;
	return;
}

void kha_Kravur_unload(kha__Kravur r0) {
	haxe__ds__IntMap r2;
	kha__internal__BytesBlob r1;
	r1 = NULL;
	r0->blob = r1;
	r2 = NULL;
	r0->images = r2;
	return;
}

void kha_Kravur_new(kha__Kravur r0,kha__internal__BytesBlob r1,int* r2) {
	haxe__ds__IntMap r4;
	int r3;
	if( r2 ) goto label$6c4203c_9_3;
	r3 = 0;
	goto label$6c4203c_9_4;
	label$6c4203c_9_3:
	r3 = *r2;
	label$6c4203c_9_4:
	r4 = (haxe__ds__IntMap)hl_alloc_obj(&t$haxe_ds_IntMap);
	haxe_ds_IntMap_new(r4);
	r0->images = r4;
	r0->blob = r1;
	r0->fontIndex = r3;
	return;
}

