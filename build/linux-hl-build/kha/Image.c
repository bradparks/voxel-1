﻿// Generated by HLC 4.1.3 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/Image.h>
#include <kha/korehl/Video.h>
extern hl_type t$kha_Image;
void kha_Image_new(kha__Image,bool);
extern hl_type t$kha_korehl_Video;
extern hl_type t$kha_Video;
void kha_Image_initVideo(kha__Image,kha__korehl__Video);
kha__Image kha_Image_create2(int,int,int,bool,bool,int,int);
kha__Image kha_Image_create3(int,int,int,int,bool,int);
#include <haxe/io/BytesDataImpl.h>
extern hl_type t$haxe_io_BytesDataImpl;
void haxe_io_BytesDataImpl_new(haxe__io__BytesDataImpl,vbyte*,int);
int kha_Image_getTextureFormat(int);
void kha_Image_initFromBytes(kha__Image,haxe__io__BytesDataImpl,int,int,int);
#include <hl/natives.h>
void kha_Image_initFromBytes3D(kha__Image,haxe__io__BytesDataImpl,int,int,int,int);
extern String s$hdr;
int String___compare(String,vdynamic*);
extern String s$HDR;
void kha_Image_initFromEncodedBytes(kha__Image,haxe__io__BytesDataImpl,String);
void kha_Image_initRenderTarget(kha__Image,int,int,int,int,int,int);
void kha_Image_init(kha__Image,int,int,int);
void kha_Image_init3D(kha__Image,int,int,int,int);
extern String s$_hdr;
bool StringTools_endsWith(String,String);
void kha_Image_initFromFile(kha__Image,String);
#include <kha/graphics2/Graphics1.h>
extern hl_type t$kha_graphics2_Graphics1;
extern hl_type t$vrt_10f8cdf;
void kha_graphics2_Graphics1_new(kha__graphics2__Graphics1,vvirtual*);
extern hl_type t$vrt_9a9e1ca;
#include <kha/korehl/graphics4/Graphics2.h>
extern hl_type t$kha_korehl_graphics4_Graphics2;
void kha_korehl_graphics4_Graphics2_new(kha__korehl__graphics4__Graphics2,vvirtual*);
#include <kha/korehl/graphics4/Graphics.h>
extern hl_type t$kha_korehl_graphics4_Graphics;
void kha_korehl_graphics4_Graphics_new(kha__korehl__graphics4__Graphics,vvirtual*);
extern hl_type t$vrt_19c2680;
int kha_Image_formatByteSize(int);
int kha_Image_atInternal(kha__Image,int,int);
int kha__Color_Color_Impl___new(int);
haxe__io__Bytes haxe_io_Bytes_alloc(int);

kha__Image kha_Image_createFromVideo(kha__Video r0) {
	kha__korehl__Video r5;
	kha__Image r1;
	bool r2;
	int r4;
	r1 = (kha__Image)hl_alloc_obj(&t$kha_Image);
	r2 = false;
	kha_Image_new(r1,r2);
	r4 = 0;
	r1->format = r4;
	r5 = (kha__korehl__Video)hl_dyn_castp(&r0,&t$kha_Video,&t$kha_korehl_Video);
	kha_Image_initVideo(r1,r5);
	return r1;
}

kha__Image kha_Image_create(int r0,int r1,vdynamic* r2,vdynamic* r3) {
	kha__Image r4;
	bool r6, r7;
	int r5, r8, r9;
	if( r2 ) goto label$2991a06_2_3;
	r5 = 0;
	goto label$2991a06_2_4;
	label$2991a06_2_3:
	r5 = r2 ? r2->v.i : 0;
	label$2991a06_2_4:
	r6 = false;
	r7 = false;
	r8 = 0;
	r9 = 0;
	r4 = kha_Image_create2(r0,r1,r5,r6,r7,r8,r9);
	return r4;
}

kha__Image kha_Image_create3D(int r0,int r1,int r2,vdynamic* r3,vdynamic* r4) {
	kha__Image r5;
	bool r7;
	int r6, r8;
	if( r3 ) goto label$2991a06_3_3;
	r6 = 0;
	goto label$2991a06_3_4;
	label$2991a06_3_3:
	r6 = r3 ? r3->v.i : 0;
	label$2991a06_3_4:
	r7 = false;
	r8 = 0;
	r5 = kha_Image_create3(r0,r1,r2,r6,r7,r8);
	return r5;
}

kha__Image kha_Image_createRenderTarget(int r0,int r1,vdynamic* r2,int* r3,int* r4,int* r5) {
	kha__Image r9;
	bool r11, r12;
	int r6, r7, r8, r10;
	if( r3 ) goto label$2991a06_4_3;
	r6 = 0;
	goto label$2991a06_4_4;
	label$2991a06_4_3:
	r6 = *r3;
	label$2991a06_4_4:
	if( r4 ) goto label$2991a06_4_7;
	r7 = 1;
	goto label$2991a06_4_8;
	label$2991a06_4_7:
	r7 = *r4;
	label$2991a06_4_8:
	if( r5 ) goto label$2991a06_4_11;
	r8 = 0;
	goto label$2991a06_4_12;
	label$2991a06_4_11:
	r8 = *r5;
	label$2991a06_4_12:
	if( r2 ) goto label$2991a06_4_15;
	r10 = 0;
	goto label$2991a06_4_16;
	label$2991a06_4_15:
	r10 = r2 ? r2->v.i : 0;
	label$2991a06_4_16:
	r11 = false;
	r12 = true;
	r9 = kha_Image_create2(r0,r1,r10,r11,r12,r6,r8);
	return r9;
}

kha__Image kha_Image_fromBytes(haxe__io__Bytes r0,int r1,int r2,vdynamic* r3,vdynamic* r4) {
	kha__Image r7;
	bool r5;
	haxe__io__BytesDataImpl r9;
	vbyte *r10;
	int r8, r11;
	r5 = true;
	r7 = (kha__Image)hl_alloc_obj(&t$kha_Image);
	kha_Image_new(r7,r5);
	r8 = r3 ? r3->v.i : 0;
	r7->format = r8;
	r9 = (haxe__io__BytesDataImpl)hl_alloc_obj(&t$haxe_io_BytesDataImpl);
	if( r0 == NULL ) hl_null_access();
	r10 = r0->b;
	r8 = r0->length;
	haxe_io_BytesDataImpl_new(r9,r10,r8);
	r11 = r3 ? r3->v.i : 0;
	r11 = kha_Image_getTextureFormat(r11);
	kha_Image_initFromBytes(r7,r9,r1,r2,r11);
	return r7;
}

void kha_Image_initFromBytes(kha__Image r0,haxe__io__BytesDataImpl r1,int r2,int r3,int r4) {
	bool r6;
	vbyte *r5;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->bytes;
	r6 = r0->readable;
	r5 = hl_kore_texture_from_bytes(r5,r2,r3,r4,r6);
	r0->_texture = r5;
	return;
}

kha__Image kha_Image_fromBytes3D(haxe__io__Bytes r0,int r1,int r2,int r3,vdynamic* r4,vdynamic* r5) {
	kha__Image r8;
	bool r6;
	haxe__io__BytesDataImpl r10;
	vbyte *r11;
	int r9, r12;
	r6 = true;
	r8 = (kha__Image)hl_alloc_obj(&t$kha_Image);
	kha_Image_new(r8,r6);
	r9 = r4 ? r4->v.i : 0;
	r8->format = r9;
	r10 = (haxe__io__BytesDataImpl)hl_alloc_obj(&t$haxe_io_BytesDataImpl);
	if( r0 == NULL ) hl_null_access();
	r11 = r0->b;
	r9 = r0->length;
	haxe_io_BytesDataImpl_new(r10,r11,r9);
	r12 = r4 ? r4->v.i : 0;
	r12 = kha_Image_getTextureFormat(r12);
	kha_Image_initFromBytes3D(r8,r10,r1,r2,r3,r12);
	return r8;
}

void kha_Image_initFromBytes3D(kha__Image r0,haxe__io__BytesDataImpl r1,int r2,int r3,int r4,int r5) {
	bool r7;
	vbyte *r6;
	if( r1 == NULL ) hl_null_access();
	r6 = r1->bytes;
	r7 = r0->readable;
	r6 = hl_kore_texture_from_bytes3d(r6,r2,r3,r4,r5,r7);
	r0->_texture = r6;
	return;
}

void kha_Image_fromEncodedBytes(haxe__io__Bytes r0,String r1,vclosure* r2,vclosure* r3,bool* r4) {
	String r9;
	kha__Image r6;
	bool r5, r7;
	haxe__io__BytesDataImpl r11;
	vbyte *r12;
	int r10;
	if( r4 ) goto label$2991a06_9_3;
	r5 = false;
	goto label$2991a06_9_4;
	label$2991a06_9_3:
	r5 = *r4;
	label$2991a06_9_4:
	r6 = (kha__Image)hl_alloc_obj(&t$kha_Image);
	kha_Image_new(r6,r5);
	r9 = (String)s$hdr;
	if( r1 == r9 || (r1 && r9 && String___compare(r1,(vdynamic*)r9) == 0) ) goto label$2991a06_9_12;
	r9 = (String)s$HDR;
	if( r1 == r9 || (r1 && r9 && String___compare(r1,(vdynamic*)r9) == 0) ) goto label$2991a06_9_12;
	r7 = false;
	goto label$2991a06_9_13;
	label$2991a06_9_12:
	r7 = true;
	label$2991a06_9_13:
	if( !r7 ) goto label$2991a06_9_16;
	r10 = 2;
	goto label$2991a06_9_17;
	label$2991a06_9_16:
	r10 = 0;
	label$2991a06_9_17:
	r6->format = r10;
	r11 = (haxe__io__BytesDataImpl)hl_alloc_obj(&t$haxe_io_BytesDataImpl);
	if( r0 == NULL ) hl_null_access();
	r12 = r0->b;
	r10 = r0->length;
	haxe_io_BytesDataImpl_new(r11,r12,r10);
	kha_Image_initFromEncodedBytes(r6,r11,r1);
	if( r2 == NULL ) hl_null_access();
	r2->hasValue ? ((void (*)(vdynamic*,kha__Image))r2->fun)((vdynamic*)r2->value,r6) : ((void (*)(kha__Image))r2->fun)(r6);
	return;
}

void kha_Image_initFromEncodedBytes(kha__Image r0,haxe__io__BytesDataImpl r1,String r2) {
	bool r12;
	int *r8;
	int r5, r6, r11;
	vbyte *r3, *r7, *r9, *r10;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->bytes;
	r5 = r1->length;
	r6 = 0;
	if( r2 == NULL ) hl_null_access();
	r7 = r2->bytes;
	r8 = &r6;
	r11 = 0;
	r10 = hl_utf16_to_utf8(r7,r11,r8);
	r12 = r0->readable;
	r9 = hl_kore_texture_from_encoded_bytes(r3,r5,r10,r12);
	r0->_texture = r9;
	return;
}

int kha_Image_getRenderTargetFormat(int r0) {
	int r1;
	switch(r0) {
		default:
		case 1:
			r1 = 0;
			return r1;
		case 0:
			r1 = 0;
			return r1;
		case 2:
			r1 = 3;
			return r1;
		case 3:
			r1 = 4;
			return r1;
		case 4:
			r1 = 1;
			return r1;
	}
}

int kha_Image_getDepthBufferBits(int r0) {
	int r1;
	switch(r0) {
		default:
			goto label$2991a06_12_14;
		case 0:
			r1 = -1;
			return r1;
		case 1:
			r1 = 24;
			return r1;
		case 2:
			r1 = 24;
			return r1;
		case 3:
			r1 = 24;
			return r1;
		case 4:
			r1 = 32;
			return r1;
		case 5:
			r1 = 16;
			return r1;
	}
	label$2991a06_12_14:
	r1 = 0;
	return r1;
}

int kha_Image_getStencilBufferBits(int r0) {
	int r1;
	switch(r0) {
		default:
			goto label$2991a06_13_14;
		case 0:
			r1 = -1;
			return r1;
		case 1:
			r1 = -1;
			return r1;
		case 2:
			r1 = 8;
			return r1;
		case 3:
			r1 = 8;
			return r1;
		case 4:
			r1 = 8;
			return r1;
		case 5:
			r1 = 0;
			return r1;
	}
	label$2991a06_13_14:
	r1 = 0;
	return r1;
}

int kha_Image_getTextureFormat(int r0) {
	int r1;
	switch(r0) {
		default:
		case 1:
		case 3:
			r1 = 1;
			return r1;
		case 0:
			r1 = 0;
			return r1;
		case 2:
			r1 = 3;
			return r1;
		case 4:
			r1 = 4;
			return r1;
		case 5:
			r1 = 5;
			return r1;
		case 6:
			r1 = 7;
			return r1;
	}
}

kha__Image kha_Image_create2(int r0,int r1,int r2,bool r3,bool r4,int r5,int r6) {
	kha__Image r7;
	int r9, r10, r11;
	r7 = (kha__Image)hl_alloc_obj(&t$kha_Image);
	kha_Image_new(r7,r3);
	r7->format = r2;
	if( !r4 ) goto label$2991a06_15_9;
	r9 = kha_Image_getDepthBufferBits(r5);
	r10 = kha_Image_getRenderTargetFormat(r2);
	r11 = kha_Image_getStencilBufferBits(r5);
	kha_Image_initRenderTarget(r7,r0,r1,r9,r10,r11,r6);
	goto label$2991a06_15_15;
	label$2991a06_15_9:
	r10 = 0;
	if( r2 != r10 ) goto label$2991a06_15_13;
	r9 = 0;
	goto label$2991a06_15_14;
	label$2991a06_15_13:
	r9 = 1;
	label$2991a06_15_14:
	kha_Image_init(r7,r0,r1,r9);
	label$2991a06_15_15:
	return r7;
}

kha__Image kha_Image_create3(int r0,int r1,int r2,int r3,bool r4,int r5) {
	kha__Image r6;
	int r8;
	r6 = (kha__Image)hl_alloc_obj(&t$kha_Image);
	kha_Image_new(r6,r4);
	r6->format = r3;
	r8 = kha_Image_getTextureFormat(r3);
	kha_Image_init3D(r6,r0,r1,r2,r8);
	return r6;
}

void kha_Image_initRenderTarget(kha__Image r0,int r1,int r2,int r3,int r4,int r5,int r6) {
	vbyte *r7;
	r7 = hl_kore_render_target_create(r1,r2,r3,r4,r5,r6);
	r0->_renderTarget = r7;
	r7 = NULL;
	r0->_texture = r7;
	return;
}

void kha_Image_init(kha__Image r0,int r1,int r2,int r3) {
	bool r5;
	vbyte *r4;
	r5 = r0->readable;
	r4 = hl_kore_texture_create(r1,r2,r3,r5);
	r0->_texture = r4;
	r4 = NULL;
	r0->_renderTarget = r4;
	return;
}

void kha_Image_init3D(kha__Image r0,int r1,int r2,int r3,int r4) {
	bool r6;
	vbyte *r5;
	r6 = r0->readable;
	r5 = hl_kore_texture_create3d(r1,r2,r3,r4,r6);
	r0->_texture = r5;
	r5 = NULL;
	r0->_renderTarget = r5;
	return;
}

void kha_Image_initVideo(kha__Image r0,kha__korehl__Video r1) {
	vbyte *r2;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->_video;
	r2 = hl_kore_video_get_current_image(r2);
	r0->_texture = r2;
	r2 = NULL;
	r0->_renderTarget = r2;
	return;
}

kha__Image kha_Image_fromFile(String r0,bool r1) {
	String r5;
	kha__Image r2;
	bool r3;
	int r6;
	r2 = (kha__Image)hl_alloc_obj(&t$kha_Image);
	kha_Image_new(r2,r1);
	r5 = (String)s$_hdr;
	r3 = StringTools_endsWith(r0,r5);
	if( !r3 ) goto label$2991a06_21_7;
	r6 = 2;
	goto label$2991a06_21_8;
	label$2991a06_21_7:
	r6 = 0;
	label$2991a06_21_8:
	r2->format = r6;
	kha_Image_initFromFile(r2,r0);
	return r2;
}

void kha_Image_initFromFile(kha__Image r0,String r1) {
	bool r8;
	int *r5;
	vbyte *r4, *r6;
	int r2, r7;
	r2 = 0;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->bytes;
	r5 = &r2;
	r7 = 0;
	r6 = hl_utf16_to_utf8(r4,r7,r5);
	r8 = r0->readable;
	r6 = hl_kore_texture_create_from_file(r6,r8);
	r0->_texture = r6;
	r6 = NULL;
	r0->_renderTarget = r6;
	return;
}

vvirtual* kha_Image_get_g1(kha__Image r0) {
	vvirtual *r2, *r4;
	kha__graphics2__Graphics1 r3;
	r2 = r0->graphics1;
	if( r2 ) goto label$2991a06_23_16;
	r3 = (kha__graphics2__Graphics1)hl_alloc_obj(&t$kha_graphics2_Graphics1);
	r4 = r0->f$21;
	if( r4 ) goto label$2991a06_23_7;
	r4 = hl_to_virtual(&t$vrt_10f8cdf,(vdynamic*)r0);
	r0->f$21 = r4;
	label$2991a06_23_7:
	kha_graphics2_Graphics1_new(r3,r4);
	if( r3 ) goto label$2991a06_23_11;
	r2 = NULL;
	goto label$2991a06_23_15;
	label$2991a06_23_11:
	r2 = r3->f$3;
	if( r2 ) goto label$2991a06_23_15;
	r2 = hl_to_virtual(&t$vrt_9a9e1ca,(vdynamic*)r3);
	r3->f$3 = r2;
	label$2991a06_23_15:
	r0->graphics1 = r2;
	label$2991a06_23_16:
	r2 = r0->graphics1;
	return r2;
}

kha__graphics2__Graphics kha_Image_get_g2(kha__Image r0) {
	kha__korehl__graphics4__Graphics2 r3;
	vvirtual *r4;
	kha__graphics2__Graphics r2;
	r2 = r0->graphics2;
	if( r2 ) goto label$2991a06_24_9;
	r3 = (kha__korehl__graphics4__Graphics2)hl_alloc_obj(&t$kha_korehl_graphics4_Graphics2);
	r4 = r0->f$21;
	if( r4 ) goto label$2991a06_24_7;
	r4 = hl_to_virtual(&t$vrt_10f8cdf,(vdynamic*)r0);
	r0->f$21 = r4;
	label$2991a06_24_7:
	kha_korehl_graphics4_Graphics2_new(r3,r4);
	r0->graphics2 = ((kha__graphics2__Graphics)r3);
	label$2991a06_24_9:
	r2 = r0->graphics2;
	return r2;
}

vvirtual* kha_Image_get_g4(kha__Image r0) {
	vvirtual *r2, *r4;
	kha__korehl__graphics4__Graphics r3;
	r2 = r0->graphics4;
	if( r2 ) goto label$2991a06_25_16;
	r3 = (kha__korehl__graphics4__Graphics)hl_alloc_obj(&t$kha_korehl_graphics4_Graphics);
	r4 = r0->f$21;
	if( r4 ) goto label$2991a06_25_7;
	r4 = hl_to_virtual(&t$vrt_10f8cdf,(vdynamic*)r0);
	r0->f$21 = r4;
	label$2991a06_25_7:
	kha_korehl_graphics4_Graphics_new(r3,r4);
	if( r3 ) goto label$2991a06_25_11;
	r2 = NULL;
	goto label$2991a06_25_15;
	label$2991a06_25_11:
	r2 = r3->f$1;
	if( r2 ) goto label$2991a06_25_15;
	r2 = hl_to_virtual(&t$vrt_19c2680,(vdynamic*)r3);
	r3->f$1 = r2;
	label$2991a06_25_15:
	r0->graphics4 = r2;
	label$2991a06_25_16:
	r2 = r0->graphics4;
	return r2;
}

int kha_Image_get_maxSize() {
	int r0;
	r0 = 4096;
	return r0;
}

bool kha_Image_get_nonPow2Supported() {
	bool r0;
	r0 = hl_kore_non_pow2_textures_supported();
	return r0;
}

bool kha_Image_renderTargetsInvertedY() {
	bool r0;
	r0 = hl_kore_graphics_render_targets_inverted_y();
	return r0;
}

int kha_Image_get_width(kha__Image r0) {
	int r2;
	vbyte *r1;
	r1 = r0->_texture;
	if( !r1 ) goto label$2991a06_29_5;
	r1 = r0->_texture;
	r2 = hl_kore_texture_get_width(r1);
	return r2;
	label$2991a06_29_5:
	r1 = r0->_renderTarget;
	r2 = hl_kore_render_target_get_width(r1);
	return r2;
}

int kha_Image_get_height(kha__Image r0) {
	int r2;
	vbyte *r1;
	r1 = r0->_texture;
	if( !r1 ) goto label$2991a06_30_5;
	r1 = r0->_texture;
	r2 = hl_kore_texture_get_height(r1);
	return r2;
	label$2991a06_30_5:
	r1 = r0->_renderTarget;
	r2 = hl_kore_render_target_get_height(r1);
	return r2;
}

int kha_Image_get_depth(kha__Image r0) {
	int r1;
	r1 = 1;
	return r1;
}

int kha_Image_get_realWidth(kha__Image r0) {
	int r2;
	vbyte *r1;
	r1 = r0->_texture;
	if( !r1 ) goto label$2991a06_32_5;
	r1 = r0->_texture;
	r2 = hl_kore_texture_get_real_width(r1);
	return r2;
	label$2991a06_32_5:
	r1 = r0->_renderTarget;
	r2 = hl_kore_render_target_get_real_width(r1);
	return r2;
}

int kha_Image_get_realHeight(kha__Image r0) {
	int r2;
	vbyte *r1;
	r1 = r0->_texture;
	if( !r1 ) goto label$2991a06_33_5;
	r1 = r0->_texture;
	r2 = hl_kore_texture_get_real_height(r1);
	return r2;
	label$2991a06_33_5:
	r1 = r0->_renderTarget;
	r2 = hl_kore_render_target_get_real_height(r1);
	return r2;
}

int kha_Image_get_stride(kha__Image r0) {
	int r1, r2;
	r1 = r0->format;
	r1 = kha_Image_formatByteSize(r1);
	r2 = kha_Image_get_width(r0);
	r1 = r1 * r2;
	return r1;
}

bool kha_Image_isOpaque(kha__Image r0,int r1,int r2) {
	bool r3;
	int r4, r5;
	r4 = kha_Image_atInternal(r0,r1,r2);
	r5 = 255;
	r4 = r4 & r5;
	r5 = 0;
	if( r4 != r5 ) goto label$2991a06_35_7;
	r3 = false;
	goto label$2991a06_35_8;
	label$2991a06_35_7:
	r3 = true;
	label$2991a06_35_8:
	return r3;
}

int kha_Image_atInternal(kha__Image r0,int r1,int r2) {
	vbyte *r4;
	int r3;
	r4 = r0->_texture;
	r3 = hl_kore_texture_at(r4,r1,r2);
	return r3;
}

int kha_Image_at(kha__Image r0,int r1,int r2) {
	int r3;
	r3 = kha_Image_atInternal(r0,r1,r2);
	r3 = kha__Color_Color_Impl___new(r3);
	return r3;
}

void kha_Image_unload(kha__Image r0) {
	vbyte *r2;
	r2 = r0->_texture;
	if( !r2 ) goto label$2991a06_38_5;
	r2 = r0->_texture;
	hl_kore_texture_unload(r2);
	goto label$2991a06_38_7;
	label$2991a06_38_5:
	r2 = r0->_renderTarget;
	hl_kore_render_target_unload(r2);
	label$2991a06_38_7:
	return;
}

haxe__io__Bytes kha_Image_lock(kha__Image r0,int* r1) {
	haxe__io__Bytes r3;
	int r2, r4, r5;
	if( r1 ) goto label$2991a06_39_3;
	r2 = 0;
	goto label$2991a06_39_4;
	label$2991a06_39_3:
	r2 = *r1;
	label$2991a06_39_4:
	r4 = r0->format;
	r4 = kha_Image_formatByteSize(r4);
	r5 = kha_Image_get_width(r0);
	r4 = r4 * r5;
	r5 = kha_Image_get_height(r0);
	r4 = r4 * r5;
	r3 = haxe_io_Bytes_alloc(r4);
	r0->bytes = r3;
	r3 = r0->bytes;
	return r3;
}

void kha_Image_unlock(kha__Image r0) {
	haxe__io__Bytes r3, r6;
	haxe__io__BytesDataImpl r4;
	int r7;
	vbyte *r1, *r5, *r8;
	r1 = r0->_texture;
	r3 = r0->bytes;
	r4 = (haxe__io__BytesDataImpl)hl_alloc_obj(&t$haxe_io_BytesDataImpl);
	if( r3 == NULL ) hl_null_access();
	r5 = r3->b;
	r7 = r3->length;
	haxe_io_BytesDataImpl_new(r4,r5,r7);
	r8 = r4->bytes;
	hl_kore_texture_unlock(r1,r8);
	r6 = NULL;
	r0->bytes = r6;
	return;
}

haxe__io__Bytes kha_Image_getPixels(kha__Image r0) {
	haxe__io__Bytes r3, r8;
	haxe__io__BytesDataImpl r6;
	int r4, r5;
	vbyte *r2, *r7, *r9;
	r2 = r0->_renderTarget;
	if( r2 ) goto label$2991a06_41_4;
	r3 = NULL;
	return r3;
	label$2991a06_41_4:
	r3 = r0->pixels;
	if( r3 ) goto label$2991a06_41_14;
	r4 = r0->format;
	r4 = kha_Image_formatByteSize(r4);
	r5 = kha_Image_get_width(r0);
	r4 = r4 * r5;
	r5 = kha_Image_get_height(r0);
	r4 = r4 * r5;
	r3 = haxe_io_Bytes_alloc(r4);
	r0->pixels = r3;
	label$2991a06_41_14:
	r2 = r0->_renderTarget;
	r3 = r0->pixels;
	r6 = (haxe__io__BytesDataImpl)hl_alloc_obj(&t$haxe_io_BytesDataImpl);
	if( r3 == NULL ) hl_null_access();
	r7 = r3->b;
	r4 = r3->length;
	haxe_io_BytesDataImpl_new(r6,r7,r4);
	r9 = r6->bytes;
	hl_kore_render_target_get_pixels(r2,r9);
	r8 = r0->pixels;
	return r8;
}

int kha_Image_formatByteSize(int r0) {
	int r1;
	switch(r0) {
		default:
			r1 = 4;
			return r1;
		case 0:
			r1 = 4;
			return r1;
		case 1:
			r1 = 1;
			return r1;
		case 2:
			r1 = 16;
			return r1;
		case 3:
			r1 = 2;
			return r1;
		case 4:
			r1 = 8;
			return r1;
		case 5:
			r1 = 4;
			return r1;
		case 6:
			r1 = 2;
			return r1;
	}
}

void kha_Image_generateMipmaps(kha__Image r0,int r1) {
	vbyte *r3;
	r3 = r0->_texture;
	if( !r3 ) goto label$2991a06_43_5;
	r3 = r0->_texture;
	hl_kore_generate_mipmaps_texture(r3,r1);
	goto label$2991a06_43_7;
	label$2991a06_43_5:
	r3 = r0->_renderTarget;
	hl_kore_generate_mipmaps_target(r3,r1);
	label$2991a06_43_7:
	return;
}

void kha_Image_setMipmaps(kha__Image r0,hl__types__ArrayObj r1) {
	kha__Image r8;
	vdynamic *r9;
	vbyte *r11, *r12;
	varray *r10;
	int r2, r4, r5, r6, r7;
	r2 = 0;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->length;
	label$2991a06_44_3:
	if( r2 >= r4 ) goto label$2991a06_44_22;
	r5 = r2;
	++r2;
	if( r1 == NULL ) hl_null_access();
	r7 = r1->length;
	if( ((unsigned)r5) < ((unsigned)r7) ) goto label$2991a06_44_12;
	r8 = NULL;
	goto label$2991a06_44_15;
	label$2991a06_44_12:
	r10 = r1->array;
	r9 = ((vdynamic**)(r10 + 1))[r5];
	r8 = (kha__Image)r9;
	label$2991a06_44_15:
	r7 = 1;
	r6 = r5 + r7;
	r11 = r0->_texture;
	if( r8 == NULL ) hl_null_access();
	r12 = r8->_texture;
	hl_kore_set_mipmap_texture(r11,r12,r6);
	goto label$2991a06_44_3;
	label$2991a06_44_22:
	return;
}

void kha_Image_setDepthStencilFrom(kha__Image r0,kha__Image r1) {
	vbyte *r3, *r4;
	int r2;
	r3 = r0->_renderTarget;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->_renderTarget;
	r2 = hl_kore_render_target_set_depth_stencil_from(r3,r4);
	return;
}

void kha_Image_clear(kha__Image r0,int r1,int r2,int r3,int r4,int r5,int r6,int r7) {
	vbyte *r9;
	r9 = r0->_texture;
	hl_kore_texture_clear(r9,r1,r2,r3,r4,r5,r6,r7);
	return;
}

void kha_Image_new(kha__Image r0,bool r1) {
	haxe__io__Bytes r2;
	r2 = NULL;
	r0->pixels = r2;
	r2 = NULL;
	r0->bytes = r2;
	r0->readable = r1;
	return;
}

