﻿// Generated by HLC 4.1.3 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/SystemImpl.h>
#include <hl/types/ArrayDyn.h>
extern hl_type t$String;
extern String s$853ae90;
String String___add__(String,String);
extern hl_type t$_i32;
#include <hl/natives.h>
String String___alloc__(vbyte*,int);
extern String s$e265492;
String Std_string(vdynamic*);
#include <haxe/Log.h>
#include <kha/FramebufferOptions.h>
#include <kha/WindowOptions.h>
#include <kha/korehl/graphics4/Graphics.h>
#include <kha/Video.h>
#include <kha/graphics4/VertexBuffer.h>
#include <kha/math/FastVector4.h>
#include <kha/math/FastVector3.h>
#include <kha/math/FastVector2.h>
#include <kha/Image.h>
#include <kha/graphics4/PipelineState.h>
#include <kha/math/FastMatrix3.h>
#include <kha/math/FastMatrix4.h>
#include <kha/arrays/Int32ArrayPrivate.h>
#include <kha/graphics4/IndexBuffer.h>
#include <kha/arrays/Float32ArrayPrivate.h>
#include <kha/graphics4/CubeMap.h>
#include <kha/graphics2/Graphics.h>
#include <kha/graphics2/Graphics1.h>
#include <kha/korehl/graphics4/Graphics2.h>
#include <kha/audio2/Audio.h>
#include <kha/input/MouseImpl.h>
extern hl_type t$fun_439b121;
void kha_audio2_Audio__callCallback(int);
extern hl_type t$fun_8249ca6;
float kha_audio2_Audio__readSample(void);
extern hl_type t$fun_6ededf8;
void kha_SystemImpl_keyDown(int);
void kha_SystemImpl_keyUp(int);
void kha_SystemImpl_keyPress(int);
void kha_SystemImpl_mouseDown(int,int,int,int);
extern hl_type t$fun_b6373da;
void kha_SystemImpl_mouseUp(int,int,int,int);
void kha_SystemImpl_mouseMove(int,int,int,int,int);
extern hl_type t$fun_8ffe477;
void kha_SystemImpl_mouseWheel(int,int);
extern hl_type t$fun_efca04c;
void kha_SystemImpl_penDown(int,int,int,double);
extern hl_type t$fun_c33199c;
void kha_SystemImpl_penUp(int,int,int,double);
void kha_SystemImpl_penMove(int,int,int,double);
void kha_SystemImpl_gamepad1Axis(int,double);
extern hl_type t$fun_06455fc;
void kha_SystemImpl_gamepad1Button(int,double);
void kha_SystemImpl_gamepad2Axis(int,double);
void kha_SystemImpl_gamepad2Button(int,double);
void kha_SystemImpl_gamepad3Axis(int,double);
void kha_SystemImpl_gamepad3Button(int,double);
void kha_SystemImpl_gamepad4Axis(int,double);
void kha_SystemImpl_gamepad4Button(int,double);
void kha_SystemImpl_touchStart(int,int,int);
extern hl_type t$fun_1e336b5;
void kha_SystemImpl_touchEnd(int,int,int);
void kha_SystemImpl_touchMove(int,int,int);
void kha_input_Sensor__accelerometerChanged(double,double,double);
extern hl_type t$fun_7764b95;
void kha_input_Sensor__gyroscopeChanged(double,double,double);
void kha_SystemImpl_foreground(void);
extern hl_type t$fun_7b48b4f;
void kha_SystemImpl_resume(void);
void kha_SystemImpl_pause(void);
void kha_SystemImpl_background(void);
void kha_SystemImpl_shutdown(void);
void kha_SystemImpl_dropFiles(String);
extern hl_type t$fun_6047e2e;
vbyte* kha_SystemImpl_copy(void);
extern hl_type t$fun_8de7c93;
vbyte* kha_SystemImpl_cut(void);
void kha_SystemImpl_paste(vbyte*);
extern hl_type t$fun_10aec05;
extern haxe__$Log g$_haxe_Log;
extern hl_type t$kha_Window;
void kha_Window_new(kha__Window,int);
void kha_Scheduler_init(void);
void kha_Shaders_init(void);
extern hl_type t$kha_korehl_graphics4_Graphics;
void kha_korehl_graphics4_Graphics_new(kha__korehl__graphics4__Graphics,vvirtual*);
extern hl_type t$kha_Framebuffer;
extern hl_type t$vrt_19c2680;
void kha_Framebuffer_new(kha__Framebuffer,int,vvirtual*,kha__graphics2__Graphics,vvirtual*);
extern kha__$SystemImpl g$_kha_SystemImpl;
extern hl_type t$kha_graphics2_Graphics1;
extern hl_type t$vrt_10f8cdf;
void kha_graphics2_Graphics1_new(kha__graphics2__Graphics1,vvirtual*);
extern hl_type t$vrt_9a9e1ca;
extern hl_type t$kha_korehl_graphics4_Graphics2;
void kha_korehl_graphics4_Graphics2_new(kha__korehl__graphics4__Graphics2,vvirtual*);
void kha_Framebuffer_init(kha__Framebuffer,vvirtual*,kha__graphics2__Graphics,vvirtual*);
void kha_audio2_Audio__init(void);
void kha_audio2_Audio1__init(void);
extern kha__audio2__$Audio g$_kha_audio2_Audio;
extern hl_type t$kha_input_Keyboard;
void kha_input_Keyboard_new(kha__input__Keyboard);
extern hl_type t$kha_input_MouseImpl;
void kha_input_MouseImpl_new(kha__input__MouseImpl);
extern hl_type t$kha_input_Pen;
void kha_input_Pen_new(kha__input__Pen);
extern hl_type t$kha_input_Gamepad;
void kha_input_Gamepad_new(kha__input__Gamepad,int*,String);
extern hl_type t$kha_input_Surface;
void kha_input_Surface_new(kha__input__Surface);
extern hl_type t$hl_types_ArrayObj;
void hl_types_ArrayObj_new(hl__types__ArrayObj);
void kha_Scheduler_start(bool*);
kha__Window kha_Window_get(int);
void kha_Scheduler_executeFrame(void);
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
void kha_System_render(hl__types__ArrayObj);
String String_fromUTF8(vbyte*);
bool kha_SystemImpl_isMouseLocked(int*);
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
bool hl_types_ArrayObj_remove(hl__types__ArrayObj,vdynamic*);
void kha_input_Keyboard_sendDownEvent(kha__input__Keyboard,int);
void kha_input_Keyboard_sendUpEvent(kha__input__Keyboard,int);
String String_fromCharCode(int);
void kha_input_Keyboard_sendPressEvent(kha__input__Keyboard,String);
void kha_input_Mouse_sendDownEvent(kha__input__Mouse,int,int,int,int);
void kha_input_Mouse_sendUpEvent(kha__input__Mouse,int,int,int,int);
void kha_input_Mouse_sendMoveEvent(kha__input__Mouse,int,int,int,int,int);
void kha_input_Mouse_sendWheelEvent(kha__input__Mouse,int,int);
void kha_input_Mouse_sendLeaveEvent(kha__input__Mouse,int);
void kha_input_Pen_sendDownEvent(kha__input__Pen,int,int,int,double);
void kha_input_Pen_sendUpEvent(kha__input__Pen,int,int,int,double);
void kha_input_Pen_sendMoveEvent(kha__input__Pen,int,int,int,double);
void kha_input_Gamepad_sendAxisEvent(kha__input__Gamepad,int,double);
void kha_input_Gamepad_sendButtonEvent(kha__input__Gamepad,int,double);
void kha_input_Surface_sendTouchStartEvent(kha__input__Surface,int,int,int);
void kha_input_Surface_sendTouchEndEvent(kha__input__Surface,int,int,int);
void kha_input_Surface_sendMoveEvent(kha__input__Surface,int,int,int);
void kha_System_foreground(void);
void kha_System_resume(void);
void kha_System_pause(void);
void kha_System_background(void);
void kha_System_shutdown(void);
void kha_System_dropFiles(String);
#include <kha/System.h>
extern kha__$System g$_kha_System;
extern String s$;

void kha_SystemImpl_init__$1(vdynamic* r0,vvirtual* r1) {
	String r2, r3;
	int *r5;
	vbyte *r6, *r8;
	int r4, r9;
	if( !r1 ) goto label$fc555d2_1_15;
	if( r1 == NULL ) hl_null_access();
	r2 = hl_vfields(r1)[0] ? (*(String*)(hl_vfields(r1)[0])) : (String)hl_dyn_getp(r1->value,-63073762/*className*/,&t$String);
	r3 = (String)s$853ae90;
	r2 = String___add__(r2,r3);
	r4 = hl_vfields(r1)[3] ? (*(int*)(hl_vfields(r1)[3])) : (int)hl_dyn_geti(r1->value,371360620/*lineNumber*/,&t$_i32);
	r5 = &r4;
	r6 = hl_itos(r4,r5);
	r3 = String___alloc__(r6,r4);
	r2 = String___add__(r2,r3);
	r3 = (String)s$e265492;
	r2 = String___add__(r2,r3);
	r3 = Std_string(r0);
	r2 = String___add__(r2,r3);
	goto label$fc555d2_1_16;
	label$fc555d2_1_15:
	r2 = Std_string(r0);
	label$fc555d2_1_16:
	r4 = 0;
	if( r2 == NULL ) hl_null_access();
	r6 = r2->bytes;
	r5 = &r4;
	r9 = 0;
	r8 = hl_utf16_to_utf8(r6,r9,r5);
	hl_kore_log(r8);
	return;
}

void kha_SystemImpl_init(kha__SystemOptions r0,vclosure* r1) {
	bool *r66;
	kha__audio2__$Audio r30;
	kha__korehl__graphics4__Graphics2 r29;
	String r7;
	kha__Framebuffer r22, r28;
	hl__types__ArrayObj r39;
	vvirtual *r21, *r23, *r25;
	kha__input__Surface r38;
	bool r15;
	kha__input__Gamepad r37;
	kha__korehl__graphics4__Graphics r20;
	kha__Window r19;
	kha__graphics2__Graphics r24;
	haxe__$Log r3;
	kha__input__MouseImpl r35;
	kha__FramebufferOptions r14;
	kha__graphics2__Graphics1 r27;
	kha__$SystemImpl r26;
	kha__input__Pen r36;
	vclosure *r2, *r31, *r32, *r40, *r41, *r42, *r43, *r44, *r45, *r46, *r47, *r48, *r50, *r51, *r52, *r53, *r54, *r55, *r56, *r57, *r58, *r59, *r60, *r61, *r62, *r63, *r64, *r65;
	int *r8, *r11, *r33;
	kha__input__Keyboard r34;
	kha__WindowOptions r17;
	vbyte *r6, *r9;
	int r4, r10, r12, r13, r16, r18, r49;
	static vclosure cl$0 = { &t$fun_439b121, kha_SystemImpl_init__$1, 0 };
	static vclosure cl$1 = { &t$fun_8249ca6, kha_audio2_Audio__callCallback, 0 };
	static vclosure cl$2 = { &t$fun_6ededf8, kha_audio2_Audio__readSample, 0 };
	static vclosure cl$3 = { &t$fun_8249ca6, kha_SystemImpl_keyDown, 0 };
	static vclosure cl$4 = { &t$fun_8249ca6, kha_SystemImpl_keyUp, 0 };
	static vclosure cl$5 = { &t$fun_8249ca6, kha_SystemImpl_keyPress, 0 };
	static vclosure cl$6 = { &t$fun_b6373da, kha_SystemImpl_mouseDown, 0 };
	static vclosure cl$7 = { &t$fun_b6373da, kha_SystemImpl_mouseUp, 0 };
	static vclosure cl$8 = { &t$fun_8ffe477, kha_SystemImpl_mouseMove, 0 };
	static vclosure cl$9 = { &t$fun_efca04c, kha_SystemImpl_mouseWheel, 0 };
	static vclosure cl$10 = { &t$fun_c33199c, kha_SystemImpl_penDown, 0 };
	static vclosure cl$11 = { &t$fun_c33199c, kha_SystemImpl_penUp, 0 };
	static vclosure cl$12 = { &t$fun_c33199c, kha_SystemImpl_penMove, 0 };
	static vclosure cl$13 = { &t$fun_06455fc, kha_SystemImpl_gamepad1Axis, 0 };
	static vclosure cl$14 = { &t$fun_06455fc, kha_SystemImpl_gamepad1Button, 0 };
	static vclosure cl$15 = { &t$fun_06455fc, kha_SystemImpl_gamepad2Axis, 0 };
	static vclosure cl$16 = { &t$fun_06455fc, kha_SystemImpl_gamepad2Button, 0 };
	static vclosure cl$17 = { &t$fun_06455fc, kha_SystemImpl_gamepad3Axis, 0 };
	static vclosure cl$18 = { &t$fun_06455fc, kha_SystemImpl_gamepad3Button, 0 };
	static vclosure cl$19 = { &t$fun_06455fc, kha_SystemImpl_gamepad4Axis, 0 };
	static vclosure cl$20 = { &t$fun_06455fc, kha_SystemImpl_gamepad4Button, 0 };
	static vclosure cl$21 = { &t$fun_1e336b5, kha_SystemImpl_touchStart, 0 };
	static vclosure cl$22 = { &t$fun_1e336b5, kha_SystemImpl_touchEnd, 0 };
	static vclosure cl$23 = { &t$fun_1e336b5, kha_SystemImpl_touchMove, 0 };
	static vclosure cl$24 = { &t$fun_7764b95, kha_input_Sensor__accelerometerChanged, 0 };
	static vclosure cl$25 = { &t$fun_7764b95, kha_input_Sensor__gyroscopeChanged, 0 };
	static vclosure cl$26 = { &t$fun_7b48b4f, kha_SystemImpl_foreground, 0 };
	static vclosure cl$27 = { &t$fun_7b48b4f, kha_SystemImpl_resume, 0 };
	static vclosure cl$28 = { &t$fun_7b48b4f, kha_SystemImpl_pause, 0 };
	static vclosure cl$29 = { &t$fun_7b48b4f, kha_SystemImpl_background, 0 };
	static vclosure cl$30 = { &t$fun_7b48b4f, kha_SystemImpl_shutdown, 0 };
	static vclosure cl$31 = { &t$fun_6047e2e, kha_SystemImpl_dropFiles, 0 };
	static vclosure cl$32 = { &t$fun_8de7c93, kha_SystemImpl_copy, 0 };
	static vclosure cl$33 = { &t$fun_8de7c93, kha_SystemImpl_cut, 0 };
	static vclosure cl$34 = { &t$fun_10aec05, kha_SystemImpl_paste, 0 };
	r2 = &cl$0;
	r3 = (haxe__$Log)g$_haxe_Log;
	r3->trace = r2;
	r4 = 0;
	if( r0 == NULL ) hl_null_access();
	r7 = r0->title;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->bytes;
	r8 = &r4;
	r10 = 0;
	r9 = hl_utf16_to_utf8(r6,r10,r8);
	r10 = r0->width;
	r12 = r0->height;
	r14 = r0->framebuffer;
	if( r14 == NULL ) hl_null_access();
	r13 = r14->samplesPerPixel;
	r14 = r0->framebuffer;
	if( r14 == NULL ) hl_null_access();
	r15 = r14->verticalSync;
	r17 = r0->window;
	if( r17 == NULL ) hl_null_access();
	r16 = r17->mode;
	r17 = r0->window;
	if( r17 == NULL ) hl_null_access();
	r18 = r17->windowFeatures;
	hl_init_kore(r9,r10,r12,r13,r15,r16,r18);
	r19 = (kha__Window)hl_alloc_obj(&t$kha_Window);
	r10 = 0;
	kha_Window_new(r19,r10);
	kha_Scheduler_init();
	kha_Shaders_init();
	r20 = (kha__korehl__graphics4__Graphics)hl_alloc_obj(&t$kha_korehl_graphics4_Graphics);
	r21 = NULL;
	kha_korehl_graphics4_Graphics_new(r20,r21);
	r22 = (kha__Framebuffer)hl_alloc_obj(&t$kha_Framebuffer);
	r10 = 0;
	r23 = NULL;
	r24 = NULL;
	if( r20 ) goto label$fc555d2_2_41;
	r25 = NULL;
	goto label$fc555d2_2_45;
	label$fc555d2_2_41:
	r25 = r20->f$1;
	if( r25 ) goto label$fc555d2_2_45;
	r25 = hl_to_virtual(&t$vrt_19c2680,(vdynamic*)r20);
	r20->f$1 = r25;
	label$fc555d2_2_45:
	kha_Framebuffer_new(r22,r10,r23,r24,r25);
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r26->framebuffer = r22;
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r22 = r26->framebuffer;
	if( r22 == NULL ) hl_null_access();
	r27 = (kha__graphics2__Graphics1)hl_alloc_obj(&t$kha_graphics2_Graphics1);
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r28 = r26->framebuffer;
	if( r28 ) goto label$fc555d2_2_57;
	r21 = NULL;
	goto label$fc555d2_2_61;
	label$fc555d2_2_57:
	r21 = r28->f$6;
	if( r21 ) goto label$fc555d2_2_61;
	r21 = hl_to_virtual(&t$vrt_10f8cdf,(vdynamic*)r28);
	r28->f$6 = r21;
	label$fc555d2_2_61:
	kha_graphics2_Graphics1_new(r27,r21);
	if( r27 ) goto label$fc555d2_2_65;
	r23 = NULL;
	goto label$fc555d2_2_69;
	label$fc555d2_2_65:
	r23 = r27->f$3;
	if( r23 ) goto label$fc555d2_2_69;
	r23 = hl_to_virtual(&t$vrt_9a9e1ca,(vdynamic*)r27);
	r27->f$3 = r23;
	label$fc555d2_2_69:
	r29 = (kha__korehl__graphics4__Graphics2)hl_alloc_obj(&t$kha_korehl_graphics4_Graphics2);
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r28 = r26->framebuffer;
	if( r28 ) goto label$fc555d2_2_75;
	r21 = NULL;
	goto label$fc555d2_2_79;
	label$fc555d2_2_75:
	r21 = r28->f$6;
	if( r21 ) goto label$fc555d2_2_79;
	r21 = hl_to_virtual(&t$vrt_10f8cdf,(vdynamic*)r28);
	r28->f$6 = r21;
	label$fc555d2_2_79:
	kha_korehl_graphics4_Graphics2_new(r29,r21);
	if( r20 ) goto label$fc555d2_2_83;
	r25 = NULL;
	goto label$fc555d2_2_87;
	label$fc555d2_2_83:
	r25 = r20->f$1;
	if( r25 ) goto label$fc555d2_2_87;
	r25 = hl_to_virtual(&t$vrt_19c2680,(vdynamic*)r20);
	r20->f$1 = r25;
	label$fc555d2_2_87:
	kha_Framebuffer_init(r22,r23,((kha__graphics2__Graphics)r29),r25);
	kha_audio2_Audio__init();
	kha_audio2_Audio1__init();
	r30 = (kha__audio2__$Audio)g$_kha_audio2_Audio;
	r10 = r30->samplesPerSecond;
	r11 = &r10;
	r31 = &cl$1;
	r32 = &cl$2;
	hl_kore_init_audio(r31,r32,r11);
	r34 = (kha__input__Keyboard)hl_alloc_obj(&t$kha_input_Keyboard);
	kha_input_Keyboard_new(r34);
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r26->keyboard = r34;
	r35 = (kha__input__MouseImpl)hl_alloc_obj(&t$kha_input_MouseImpl);
	kha_input_MouseImpl_new(r35);
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r26->mouse = ((kha__input__Mouse)r35);
	r36 = (kha__input__Pen)hl_alloc_obj(&t$kha_input_Pen);
	kha_input_Pen_new(r36);
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r26->pen = r36;
	r37 = (kha__input__Gamepad)hl_alloc_obj(&t$kha_input_Gamepad);
	r12 = 0;
	r33 = &r12;
	r7 = NULL;
	kha_input_Gamepad_new(r37,r33,r7);
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r26->gamepad1 = r37;
	r37 = (kha__input__Gamepad)hl_alloc_obj(&t$kha_input_Gamepad);
	r13 = 1;
	r33 = &r13;
	r7 = NULL;
	kha_input_Gamepad_new(r37,r33,r7);
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r26->gamepad2 = r37;
	r37 = (kha__input__Gamepad)hl_alloc_obj(&t$kha_input_Gamepad);
	r16 = 2;
	r33 = &r16;
	r7 = NULL;
	kha_input_Gamepad_new(r37,r33,r7);
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r26->gamepad3 = r37;
	r37 = (kha__input__Gamepad)hl_alloc_obj(&t$kha_input_Gamepad);
	r18 = 3;
	r33 = &r18;
	r7 = NULL;
	kha_input_Gamepad_new(r37,r33,r7);
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r26->gamepad4 = r37;
	r38 = (kha__input__Surface)hl_alloc_obj(&t$kha_input_Surface);
	kha_input_Surface_new(r38);
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r26->surface = r38;
	r39 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r39);
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r26->mouseLockListeners = r39;
	r31 = &cl$3;
	r40 = &cl$4;
	r41 = &cl$5;
	hl_kore_register_keyboard(r31,r40,r41);
	r42 = &cl$6;
	r43 = &cl$7;
	r44 = &cl$8;
	r45 = &cl$9;
	hl_kore_register_mouse(r42,r43,r44,r45);
	r46 = &cl$10;
	r47 = &cl$11;
	r48 = &cl$12;
	hl_kore_register_pen(r46,r47,r48);
	r49 = 0;
	r50 = &cl$13;
	r51 = &cl$14;
	hl_kore_register_gamepad(r49,r50,r51);
	r49 = 1;
	r50 = &cl$15;
	r51 = &cl$16;
	hl_kore_register_gamepad(r49,r50,r51);
	r49 = 2;
	r50 = &cl$17;
	r51 = &cl$18;
	hl_kore_register_gamepad(r49,r50,r51);
	r49 = 3;
	r50 = &cl$19;
	r51 = &cl$20;
	hl_kore_register_gamepad(r49,r50,r51);
	r52 = &cl$21;
	r53 = &cl$22;
	r54 = &cl$23;
	hl_kore_register_surface(r52,r53,r54);
	r55 = &cl$24;
	r56 = &cl$25;
	hl_kore_register_sensor(r55,r56);
	r57 = &cl$26;
	r58 = &cl$27;
	r59 = &cl$28;
	r60 = &cl$29;
	r61 = &cl$30;
	hl_kore_register_callbacks(r57,r58,r59,r60,r61);
	r62 = &cl$31;
	hl_kore_register_dropfiles(r62);
	r63 = &cl$32;
	r64 = &cl$33;
	r65 = &cl$34;
	hl_kore_register_copycutpaste(r63,r64,r65);
	r66 = NULL;
	kha_Scheduler_start(r66);
	if( r1 == NULL ) hl_null_access();
	r49 = 0;
	r19 = kha_Window_get(r49);
	r1->hasValue ? ((void (*)(vdynamic*,kha__Window))r1->fun)((vdynamic*)r1->value,r19) : ((void (*)(kha__Window))r1->fun)(r19);
	hl_run_kore();
	return;
}

void kha_SystemImpl_initEx(String r0,hl__types__ArrayObj r1,vclosure* r2,vclosure* r3) {
	return;
}

void kha_SystemImpl_frame() {
	kha__Framebuffer r5;
	hl__types__ArrayObj r1;
	hl_type *r3;
	kha__$SystemImpl r6;
	int r4;
	varray *r2;
	kha_Scheduler_executeFrame();
	r3 = &t$kha_Framebuffer;
	r4 = 1;
	r2 = hl_alloc_array(r3,r4);
	r6 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r5 = r6->framebuffer;
	r4 = 0;
	((kha__Framebuffer*)(r2 + 1))[r4] = r5;
	r1 = hl_types_ArrayObj_alloc(r2);
	kha_System_render(r1);
	return;
}

double kha_SystemImpl_getTime() {
	double r0;
	r0 = hl_kore_get_time();
	return r0;
}

int kha_SystemImpl_windowWidth(int r0) {
	int r1;
	r1 = hl_kore_get_window_width(r0);
	return r1;
}

int kha_SystemImpl_windowHeight(int r0) {
	int r1;
	r1 = hl_kore_get_window_height(r0);
	return r1;
}

int kha_SystemImpl_getScreenRotation() {
	int r0;
	r0 = 0;
	return r0;
}

String kha_SystemImpl_getSystemId() {
	String r1;
	vbyte *r0;
	r0 = hl_kore_get_system_id();
	r1 = String_fromUTF8(r0);
	return r1;
}

void kha_SystemImpl_vibrate(int r0) {
	hl_kore_vibrate(r0);
	return;
}

String kha_SystemImpl_getLanguage() {
	String r1;
	vbyte *r0;
	r0 = hl_kore_get_language();
	r1 = String_fromUTF8(r0);
	return r1;
}

bool kha_SystemImpl_requestShutdown() {
	bool r1;
	hl_kore_request_shutdown();
	r1 = true;
	return r1;
}

kha__input__Mouse kha_SystemImpl_getMouse(int r0) {
	kha__input__Mouse r2;
	kha__$SystemImpl r3;
	int r1;
	r1 = 0;
	if( r0 == r1 ) goto label$fc555d2_13_4;
	r2 = NULL;
	return r2;
	label$fc555d2_13_4:
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r2 = r3->mouse;
	return r2;
}

kha__input__Pen kha_SystemImpl_getPen(int r0) {
	kha__$SystemImpl r3;
	kha__input__Pen r2;
	int r1;
	r1 = 0;
	if( r0 == r1 ) goto label$fc555d2_14_4;
	r2 = NULL;
	return r2;
	label$fc555d2_14_4:
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r2 = r3->pen;
	return r2;
}

kha__input__Keyboard kha_SystemImpl_getKeyboard(int r0) {
	kha__$SystemImpl r3;
	kha__input__Keyboard r2;
	int r1;
	r1 = 0;
	if( r0 == r1 ) goto label$fc555d2_15_4;
	r2 = NULL;
	return r2;
	label$fc555d2_15_4:
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r2 = r3->keyboard;
	return r2;
}

void kha_SystemImpl_lockMouse(int* r0) {
	hl__types__ArrayObj r5;
	bool r3;
	kha__$SystemImpl r6;
	vclosure *r8;
	vdynamic *r9;
	varray *r10;
	int r1, r4, r7;
	if( r0 ) goto label$fc555d2_16_3;
	r1 = 0;
	goto label$fc555d2_16_4;
	label$fc555d2_16_3:
	r1 = *r0;
	label$fc555d2_16_4:
	r0 = NULL;
	r3 = kha_SystemImpl_isMouseLocked(r0);
	if( r3 ) goto label$fc555d2_16_26;
	hl_kore_mouse_lock(r1);
	r4 = 0;
	r6 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r5 = r6->mouseLockListeners;
	label$fc555d2_16_11:
	if( r5 == NULL ) hl_null_access();
	r7 = r5->length;
	if( r4 >= r7 ) goto label$fc555d2_16_26;
	r7 = r5->length;
	if( ((unsigned)r4) < ((unsigned)r7) ) goto label$fc555d2_16_19;
	r8 = NULL;
	goto label$fc555d2_16_22;
	label$fc555d2_16_19:
	r10 = r5->array;
	r9 = ((vdynamic**)(r10 + 1))[r4];
	r8 = (vclosure*)r9;
	label$fc555d2_16_22:
	++r4;
	if( r8 == NULL ) hl_null_access();
	r8->hasValue ? ((void (*)(vdynamic*))r8->fun)((vdynamic*)r8->value) : ((void (*)(void))r8->fun)();
	goto label$fc555d2_16_11;
	label$fc555d2_16_26:
	return;
}

void kha_SystemImpl_unlockMouse(int* r0) {
	hl__types__ArrayObj r5;
	bool r3;
	kha__$SystemImpl r6;
	vclosure *r8;
	vdynamic *r9;
	varray *r10;
	int r1, r4, r7;
	if( r0 ) goto label$fc555d2_17_3;
	r1 = 0;
	goto label$fc555d2_17_4;
	label$fc555d2_17_3:
	r1 = *r0;
	label$fc555d2_17_4:
	r0 = NULL;
	r3 = kha_SystemImpl_isMouseLocked(r0);
	if( !r3 ) goto label$fc555d2_17_26;
	hl_kore_mouse_unlock(r1);
	r4 = 0;
	r6 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r5 = r6->mouseLockListeners;
	label$fc555d2_17_11:
	if( r5 == NULL ) hl_null_access();
	r7 = r5->length;
	if( r4 >= r7 ) goto label$fc555d2_17_26;
	r7 = r5->length;
	if( ((unsigned)r4) < ((unsigned)r7) ) goto label$fc555d2_17_19;
	r8 = NULL;
	goto label$fc555d2_17_22;
	label$fc555d2_17_19:
	r10 = r5->array;
	r9 = ((vdynamic**)(r10 + 1))[r4];
	r8 = (vclosure*)r9;
	label$fc555d2_17_22:
	++r4;
	if( r8 == NULL ) hl_null_access();
	r8->hasValue ? ((void (*)(vdynamic*))r8->fun)((vdynamic*)r8->value) : ((void (*)(void))r8->fun)();
	goto label$fc555d2_17_11;
	label$fc555d2_17_26:
	return;
}

bool kha_SystemImpl_canLockMouse(int* r0) {
	bool r2;
	int r1;
	if( r0 ) goto label$fc555d2_18_3;
	r1 = 0;
	goto label$fc555d2_18_4;
	label$fc555d2_18_3:
	r1 = *r0;
	label$fc555d2_18_4:
	r2 = hl_kore_can_lock_mouse(r1);
	return r2;
}

bool kha_SystemImpl_isMouseLocked(int* r0) {
	bool r2;
	int r1;
	if( r0 ) goto label$fc555d2_19_3;
	r1 = 0;
	goto label$fc555d2_19_4;
	label$fc555d2_19_3:
	r1 = *r0;
	label$fc555d2_19_4:
	r2 = hl_kore_is_mouse_locked(r1);
	return r2;
}

void kha_SystemImpl_notifyOfMouseLockChange(vclosure* r0,vclosure* r1) {
	hl__types__ArrayObj r7;
	bool r3;
	kha__$SystemImpl r8;
	int *r5;
	int r4, r6;
	r4 = 0;
	r5 = &r4;
	r3 = kha_SystemImpl_canLockMouse(r5);
	if( !r3 ) goto label$fc555d2_20_9;
	if( !r0 ) goto label$fc555d2_20_9;
	r8 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r7 = r8->mouseLockListeners;
	if( r7 == NULL ) hl_null_access();
	r6 = hl_types_ArrayObj_push(r7,((vdynamic*)r0));
	label$fc555d2_20_9:
	return;
}

void kha_SystemImpl_removeFromMouseLockChange(vclosure* r0,vclosure* r1) {
	hl__types__ArrayObj r6;
	bool r3;
	kha__$SystemImpl r7;
	int *r5;
	int r4;
	r4 = 0;
	r5 = &r4;
	r3 = kha_SystemImpl_canLockMouse(r5);
	if( !r3 ) goto label$fc555d2_21_9;
	if( !r0 ) goto label$fc555d2_21_9;
	r7 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r6 = r7->mouseLockListeners;
	if( r6 == NULL ) hl_null_access();
	r3 = hl_types_ArrayObj_remove(r6,((vdynamic*)r0));
	label$fc555d2_21_9:
	return;
}

void kha_SystemImpl_hideSystemCursor() {
	bool r1;
	r1 = false;
	hl_kore_show_mouse(r1);
	return;
}

void kha_SystemImpl_showSystemCursor() {
	bool r1;
	r1 = true;
	hl_kore_show_mouse(r1);
	return;
}

void kha_SystemImpl_keyDown(int r0) {
	kha__$SystemImpl r3;
	kha__input__Keyboard r2;
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r2 = r3->keyboard;
	if( r2 == NULL ) hl_null_access();
	kha_input_Keyboard_sendDownEvent(r2,r0);
	return;
}

void kha_SystemImpl_keyUp(int r0) {
	kha__$SystemImpl r3;
	kha__input__Keyboard r2;
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r2 = r3->keyboard;
	if( r2 == NULL ) hl_null_access();
	kha_input_Keyboard_sendUpEvent(r2,r0);
	return;
}

void kha_SystemImpl_keyPress(int r0) {
	String r4;
	kha__$SystemImpl r3;
	kha__input__Keyboard r2;
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r2 = r3->keyboard;
	if( r2 == NULL ) hl_null_access();
	r4 = String_fromCharCode(r0);
	kha_input_Keyboard_sendPressEvent(r2,r4);
	return;
}

void kha_SystemImpl_mouseDown(int r0,int r1,int r2,int r3) {
	kha__input__Mouse r5;
	kha__$SystemImpl r6;
	r6 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r5 = r6->mouse;
	if( r5 == NULL ) hl_null_access();
	kha_input_Mouse_sendDownEvent(r5,r0,r1,r2,r3);
	return;
}

void kha_SystemImpl_mouseUp(int r0,int r1,int r2,int r3) {
	kha__input__Mouse r5;
	kha__$SystemImpl r6;
	r6 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r5 = r6->mouse;
	if( r5 == NULL ) hl_null_access();
	kha_input_Mouse_sendUpEvent(r5,r0,r1,r2,r3);
	return;
}

void kha_SystemImpl_mouseMove(int r0,int r1,int r2,int r3,int r4) {
	kha__input__Mouse r6;
	kha__$SystemImpl r7;
	r7 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r6 = r7->mouse;
	if( r6 == NULL ) hl_null_access();
	kha_input_Mouse_sendMoveEvent(r6,r0,r1,r2,r3,r4);
	return;
}

void kha_SystemImpl_mouseWheel(int r0,int r1) {
	kha__input__Mouse r3;
	kha__$SystemImpl r4;
	r4 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r3 = r4->mouse;
	if( r3 == NULL ) hl_null_access();
	kha_input_Mouse_sendWheelEvent(r3,r0,r1);
	return;
}

void kha_SystemImpl_mouseLeave(int r0) {
	kha__input__Mouse r2;
	kha__$SystemImpl r3;
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r2 = r3->mouse;
	if( r2 == NULL ) hl_null_access();
	kha_input_Mouse_sendLeaveEvent(r2,r0);
	return;
}

void kha_SystemImpl_penDown(int r0,int r1,int r2,double r3) {
	kha__$SystemImpl r6;
	kha__input__Pen r5;
	r6 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r5 = r6->pen;
	if( r5 == NULL ) hl_null_access();
	kha_input_Pen_sendDownEvent(r5,r0,r1,r2,r3);
	return;
}

void kha_SystemImpl_penUp(int r0,int r1,int r2,double r3) {
	kha__$SystemImpl r6;
	kha__input__Pen r5;
	r6 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r5 = r6->pen;
	if( r5 == NULL ) hl_null_access();
	kha_input_Pen_sendUpEvent(r5,r0,r1,r2,r3);
	return;
}

void kha_SystemImpl_penMove(int r0,int r1,int r2,double r3) {
	kha__$SystemImpl r6;
	kha__input__Pen r5;
	r6 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r5 = r6->pen;
	if( r5 == NULL ) hl_null_access();
	kha_input_Pen_sendMoveEvent(r5,r0,r1,r2,r3);
	return;
}

void kha_SystemImpl_gamepad1Axis(int r0,double r1) {
	kha__input__Gamepad r3;
	kha__$SystemImpl r4;
	r4 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r3 = r4->gamepad1;
	if( r3 == NULL ) hl_null_access();
	kha_input_Gamepad_sendAxisEvent(r3,r0,r1);
	return;
}

void kha_SystemImpl_gamepad1Button(int r0,double r1) {
	kha__input__Gamepad r3;
	kha__$SystemImpl r4;
	r4 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r3 = r4->gamepad1;
	if( r3 == NULL ) hl_null_access();
	kha_input_Gamepad_sendButtonEvent(r3,r0,r1);
	return;
}

void kha_SystemImpl_gamepad2Axis(int r0,double r1) {
	kha__input__Gamepad r3;
	kha__$SystemImpl r4;
	r4 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r3 = r4->gamepad2;
	if( r3 == NULL ) hl_null_access();
	kha_input_Gamepad_sendAxisEvent(r3,r0,r1);
	return;
}

void kha_SystemImpl_gamepad2Button(int r0,double r1) {
	kha__input__Gamepad r3;
	kha__$SystemImpl r4;
	r4 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r3 = r4->gamepad2;
	if( r3 == NULL ) hl_null_access();
	kha_input_Gamepad_sendButtonEvent(r3,r0,r1);
	return;
}

void kha_SystemImpl_gamepad3Axis(int r0,double r1) {
	kha__input__Gamepad r3;
	kha__$SystemImpl r4;
	r4 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r3 = r4->gamepad3;
	if( r3 == NULL ) hl_null_access();
	kha_input_Gamepad_sendAxisEvent(r3,r0,r1);
	return;
}

void kha_SystemImpl_gamepad3Button(int r0,double r1) {
	kha__input__Gamepad r3;
	kha__$SystemImpl r4;
	r4 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r3 = r4->gamepad3;
	if( r3 == NULL ) hl_null_access();
	kha_input_Gamepad_sendButtonEvent(r3,r0,r1);
	return;
}

void kha_SystemImpl_gamepad4Axis(int r0,double r1) {
	kha__input__Gamepad r3;
	kha__$SystemImpl r4;
	r4 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r3 = r4->gamepad4;
	if( r3 == NULL ) hl_null_access();
	kha_input_Gamepad_sendAxisEvent(r3,r0,r1);
	return;
}

void kha_SystemImpl_gamepad4Button(int r0,double r1) {
	kha__input__Gamepad r3;
	kha__$SystemImpl r4;
	r4 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r3 = r4->gamepad4;
	if( r3 == NULL ) hl_null_access();
	kha_input_Gamepad_sendButtonEvent(r3,r0,r1);
	return;
}

void kha_SystemImpl_touchStart(int r0,int r1,int r2) {
	kha__input__Surface r4;
	kha__$SystemImpl r5;
	r5 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r4 = r5->surface;
	if( r4 == NULL ) hl_null_access();
	kha_input_Surface_sendTouchStartEvent(r4,r0,r1,r2);
	return;
}

void kha_SystemImpl_touchEnd(int r0,int r1,int r2) {
	kha__input__Surface r4;
	kha__$SystemImpl r5;
	r5 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r4 = r5->surface;
	if( r4 == NULL ) hl_null_access();
	kha_input_Surface_sendTouchEndEvent(r4,r0,r1,r2);
	return;
}

void kha_SystemImpl_touchMove(int r0,int r1,int r2) {
	kha__input__Surface r4;
	kha__$SystemImpl r5;
	r5 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r4 = r5->surface;
	if( r4 == NULL ) hl_null_access();
	kha_input_Surface_sendMoveEvent(r4,r0,r1,r2);
	return;
}

void kha_SystemImpl_foreground() {
	kha_System_foreground();
	return;
}

void kha_SystemImpl_resume() {
	kha_System_resume();
	return;
}

void kha_SystemImpl_pause() {
	kha_System_pause();
	return;
}

void kha_SystemImpl_background() {
	kha_System_background();
	return;
}

void kha_SystemImpl_shutdown() {
	kha_System_shutdown();
	return;
}

void kha_SystemImpl_dropFiles(String r0) {
	kha_System_dropFiles(r0);
	return;
}

vbyte* kha_SystemImpl_copy() {
	String r2;
	kha__$System r1;
	vclosure *r0;
	int *r5;
	int r4, r7;
	vbyte *r3, *r6;
	r1 = (kha__$System)g$_kha_System;
	r0 = r1->copyListener;
	if( !r0 ) goto label$fc555d2_52_17;
	r1 = (kha__$System)g$_kha_System;
	r0 = r1->copyListener;
	if( r0 == NULL ) hl_null_access();
	r2 = r0->hasValue ? ((String (*)(vdynamic*))r0->fun)((vdynamic*)r0->value) : ((String (*)(void))r0->fun)();
	if( r2 ) goto label$fc555d2_52_10;
	r3 = NULL;
	return r3;
	label$fc555d2_52_10:
	r4 = 0;
	if( r2 == NULL ) hl_null_access();
	r3 = r2->bytes;
	r5 = &r4;
	r7 = 0;
	r6 = hl_utf16_to_utf8(r3,r7,r5);
	return r6;
	label$fc555d2_52_17:
	r3 = NULL;
	return r3;
}

vbyte* kha_SystemImpl_cut() {
	String r2;
	kha__$System r1;
	vclosure *r0;
	int *r5;
	int r4, r7;
	vbyte *r3, *r6;
	r1 = (kha__$System)g$_kha_System;
	r0 = r1->cutListener;
	if( !r0 ) goto label$fc555d2_53_17;
	r1 = (kha__$System)g$_kha_System;
	r0 = r1->cutListener;
	if( r0 == NULL ) hl_null_access();
	r2 = r0->hasValue ? ((String (*)(vdynamic*))r0->fun)((vdynamic*)r0->value) : ((String (*)(void))r0->fun)();
	if( r2 ) goto label$fc555d2_53_10;
	r3 = NULL;
	return r3;
	label$fc555d2_53_10:
	r4 = 0;
	if( r2 == NULL ) hl_null_access();
	r3 = r2->bytes;
	r5 = &r4;
	r7 = 0;
	r6 = hl_utf16_to_utf8(r3,r7,r5);
	return r6;
	label$fc555d2_53_17:
	r3 = NULL;
	return r3;
}

void kha_SystemImpl_paste(vbyte* r0) {
	String r1;
	kha__$System r4;
	vclosure *r3;
	r1 = String_fromUTF8(r0);
	r4 = (kha__$System)g$_kha_System;
	r3 = r4->pasteListener;
	if( !r3 ) goto label$fc555d2_54_8;
	r4 = (kha__$System)g$_kha_System;
	r3 = r4->pasteListener;
	if( r3 == NULL ) hl_null_access();
	r3->hasValue ? ((void (*)(vdynamic*,String))r3->fun)((vdynamic*)r3->value,r1) : ((void (*)(String))r3->fun)(r1);
	label$fc555d2_54_8:
	return;
}

bool kha_SystemImpl_canSwitchFullscreen() {
	bool r0;
	r0 = true;
	return r0;
}

bool kha_SystemImpl_isFullscreen() {
	bool r0;
	r0 = hl_kore_system_is_fullscreen();
	return r0;
}

void kha_SystemImpl_requestFullscreen() {
	hl__types__ArrayObj r4;
	bool r1;
	kha__$SystemImpl r3;
	vclosure *r6;
	vdynamic *r7;
	varray *r8;
	int r2, r5;
	r1 = kha_SystemImpl_isFullscreen();
	if( r1 ) goto label$fc555d2_57_29;
	r2 = 0;
	r2 = hl_kore_get_window_width(r2);
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r3->previousWidth = r2;
	r2 = 0;
	r2 = hl_kore_get_window_height(r2);
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r3->previousHeight = r2;
	hl_kore_system_request_fullscreen();
	r2 = 0;
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r4 = r3->fullscreenListeners;
	label$fc555d2_57_14:
	if( r4 == NULL ) hl_null_access();
	r5 = r4->length;
	if( r2 >= r5 ) goto label$fc555d2_57_29;
	r5 = r4->length;
	if( ((unsigned)r2) < ((unsigned)r5) ) goto label$fc555d2_57_22;
	r6 = NULL;
	goto label$fc555d2_57_25;
	label$fc555d2_57_22:
	r8 = r4->array;
	r7 = ((vdynamic**)(r8 + 1))[r2];
	r6 = (vclosure*)r7;
	label$fc555d2_57_25:
	++r2;
	if( r6 == NULL ) hl_null_access();
	r6->hasValue ? ((void (*)(vdynamic*))r6->fun)((vdynamic*)r6->value) : ((void (*)(void))r6->fun)();
	goto label$fc555d2_57_14;
	label$fc555d2_57_29:
	return;
}

void kha_SystemImpl_exitFullscreen() {
	hl__types__ArrayObj r5;
	bool r1;
	kha__$SystemImpl r3;
	vclosure *r7;
	vdynamic *r8;
	varray *r9;
	int r2, r4, r6;
	r1 = kha_SystemImpl_isFullscreen();
	if( !r1 ) goto label$fc555d2_58_41;
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r2 = r3->previousWidth;
	r4 = 0;
	if( r2 == r4 ) goto label$fc555d2_58_10;
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r2 = r3->previousHeight;
	r4 = 0;
	if( r2 != r4 ) goto label$fc555d2_58_18;
	label$fc555d2_58_10:
	r2 = 0;
	r2 = hl_kore_get_window_width(r2);
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r3->previousWidth = r2;
	r2 = 0;
	r2 = hl_kore_get_window_height(r2);
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r3->previousHeight = r2;
	label$fc555d2_58_18:
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r2 = r3->previousWidth;
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r4 = r3->previousHeight;
	hl_kore_system_exit_fullscreen(r2,r4);
	r2 = 0;
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r5 = r3->fullscreenListeners;
	label$fc555d2_58_26:
	if( r5 == NULL ) hl_null_access();
	r6 = r5->length;
	if( r2 >= r6 ) goto label$fc555d2_58_41;
	r6 = r5->length;
	if( ((unsigned)r2) < ((unsigned)r6) ) goto label$fc555d2_58_34;
	r7 = NULL;
	goto label$fc555d2_58_37;
	label$fc555d2_58_34:
	r9 = r5->array;
	r8 = ((vdynamic**)(r9 + 1))[r2];
	r7 = (vclosure*)r8;
	label$fc555d2_58_37:
	++r2;
	if( r7 == NULL ) hl_null_access();
	r7->hasValue ? ((void (*)(vdynamic*))r7->fun)((vdynamic*)r7->value) : ((void (*)(void))r7->fun)();
	goto label$fc555d2_58_26;
	label$fc555d2_58_41:
	return;
}

void kha_SystemImpl_notifyOfFullscreenChange(vclosure* r0,vclosure* r1) {
	hl__types__ArrayObj r5;
	bool r3;
	kha__$SystemImpl r6;
	int r4;
	r3 = kha_SystemImpl_canSwitchFullscreen();
	if( !r3 ) goto label$fc555d2_59_7;
	if( !r0 ) goto label$fc555d2_59_7;
	r6 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r5 = r6->fullscreenListeners;
	if( r5 == NULL ) hl_null_access();
	r4 = hl_types_ArrayObj_push(r5,((vdynamic*)r0));
	label$fc555d2_59_7:
	return;
}

void kha_SystemImpl_removeFromFullscreenChange(vclosure* r0,vclosure* r1) {
	hl__types__ArrayObj r4;
	bool r3;
	kha__$SystemImpl r5;
	r3 = kha_SystemImpl_canSwitchFullscreen();
	if( !r3 ) goto label$fc555d2_60_7;
	if( !r0 ) goto label$fc555d2_60_7;
	r5 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r4 = r5->fullscreenListeners;
	if( r4 == NULL ) hl_null_access();
	r3 = hl_types_ArrayObj_remove(r4,((vdynamic*)r0));
	label$fc555d2_60_7:
	return;
}

void kha_SystemImpl_changeResolution(int r0,int r1) {
	hl_kore_system_change_resolution(r0,r1);
	return;
}

void kha_SystemImpl_setKeepScreenOn(bool r0) {
	hl_kore_system_set_keepscreenon(r0);
	return;
}

void kha_SystemImpl_loadUrl(String r0) {
	int *r4;
	vbyte *r3, *r5;
	int r1, r6;
	r1 = 0;
	if( r0 == NULL ) hl_null_access();
	r3 = r0->bytes;
	r4 = &r1;
	r6 = 0;
	r5 = hl_utf16_to_utf8(r3,r6,r4);
	hl_kore_system_load_url(r5);
	return;
}

String kha_SystemImpl_getGamepadId(int r0) {
	String r1;
	r1 = (String)s$;
	return r1;
}

String kha_SystemImpl_getGamepadVendor(int r0) {
	String r1;
	r1 = (String)s$;
	return r1;
}

double kha_SystemImpl_safeZone() {
	double r0;
	r0 = 1.;
	return r0;
}

void kha_SystemImpl_login() {
	return;
}

bool kha_SystemImpl_automaticSafeZone() {
	bool r0;
	r0 = true;
	return r0;
}

void kha_SystemImpl_setSafeZone(double r0) {
	return;
}

void kha_SystemImpl_unlockAchievement(int r0) {
	return;
}

bool kha_SystemImpl_waitingForLogin() {
	bool r0;
	r0 = false;
	return r0;
}

void kha_SystemImpl_disallowUserChange() {
	return;
}

void kha_SystemImpl_allowUserChange() {
	return;
}

