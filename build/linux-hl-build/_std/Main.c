﻿// Generated by HLC 4.1.3 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <_std/Main.h>
#include <hl/types/ArrayObj.h>
extern hl_type t$fun_7b48b4f;
extern hl_type t$fun_715d8bf;
int kha_Scheduler_addTimeTask(vclosure*,double,double*,double*);
void kha_System_notifyOnFrames(vclosure*);
#include <kha/Window.h>
void kha_Assets_loadEverything(vclosure*,vclosure*,vclosure*,vclosure*);
#include <kha/SystemOptions.h>
#include <kha/WindowOptions.h>
#include <kha/FramebufferOptions.h>
extern hl_type t$fun_a4b6a97;
extern hl_type t$kha_SystemOptions;
extern String s$Kha;
extern hl_type t$_i32;
void kha_SystemOptions_new(kha__SystemOptions,String,vdynamic*,vdynamic*,kha__WindowOptions,kha__FramebufferOptions);
void kha_System_start(kha__SystemOptions,vclosure*);

void Main_update() {
	return;
}

void Main_render(kha__Framebuffer r0) {
	return;
}

void Main_main__$3() {
	Main_update();
	return;
}

void Main_main__$4(hl__types__ArrayObj r0) {
	kha__Framebuffer r4;
	vdynamic *r5;
	varray *r6;
	int r2, r3;
	if( r0 == NULL ) hl_null_access();
	r2 = 0;
	r3 = r0->length;
	if( ((unsigned)r2) < ((unsigned)r3) ) goto label$36888b6_4_6;
	r4 = NULL;
	goto label$36888b6_4_9;
	label$36888b6_4_6:
	r6 = r0->array;
	r5 = ((vdynamic**)(r6 + 1))[r2];
	r4 = (kha__Framebuffer)r5;
	label$36888b6_4_9:
	Main_render(r4);
	return;
}

void Main_main__$2() {
	double r2, r3;
	vclosure *r1, *r7;
	double *r4, *r5;
	int r0;
	static vclosure cl$0 = { &t$fun_7b48b4f, Main_main__$3, 0 };
	static vclosure cl$1 = { &t$fun_715d8bf, Main_main__$4, 0 };
	r1 = &cl$0;
	r2 = 0.;
	r3 = 0.01666666666666666644;
	r4 = &r3;
	r5 = NULL;
	r0 = kha_Scheduler_addTimeTask(r1,r2,r4,r5);
	r7 = &cl$1;
	kha_System_notifyOnFrames(r7);
	return;
}

void Main_main__$1(kha__Window r0) {
	vclosure *r2, *r3, *r4, *r5;
	static vclosure cl$0 = { &t$fun_7b48b4f, Main_main__$2, 0 };
	r2 = &cl$0;
	r3 = NULL;
	r4 = NULL;
	r5 = NULL;
	kha_Assets_loadEverything(r2,r3,r4,r5);
	return;
}

void Main_main() {
	String r2;
	kha__FramebufferOptions r7;
	kha__SystemOptions r1;
	vclosure *r8;
	vdynamic *r4, *r5;
	kha__WindowOptions r6;
	int r3;
	static vclosure cl$0 = { &t$fun_a4b6a97, Main_main__$1, 0 };
	r1 = (kha__SystemOptions)hl_alloc_obj(&t$kha_SystemOptions);
	r2 = (String)s$Kha;
	r3 = 800;
	r4 = hl_alloc_dynamic(&t$_i32);
	r4->v.i = r3;
	r3 = 600;
	r5 = hl_alloc_dynamic(&t$_i32);
	r5->v.i = r3;
	r6 = NULL;
	r7 = NULL;
	kha_SystemOptions_new(r1,r2,r4,r5,r6,r7);
	r8 = &cl$0;
	kha_System_start(r1,r8);
	return;
}

