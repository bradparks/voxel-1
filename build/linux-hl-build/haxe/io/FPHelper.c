﻿// Generated by HLC 4.1.3 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/io/FPHelper.h>
extern haxe__io__$FPHelper g$_haxe_io_FPHelper;

int haxe_io_FPHelper_floatToI32(float r0) {
	haxe__io__$FPHelper r2;
	int r3;
	vbyte *r1;
	r2 = (haxe__io__$FPHelper)g$_haxe_io_FPHelper;
	r1 = r2->helper;
	r3 = 0;
	*(float*)(r1 + r3) = r0;
	r2 = (haxe__io__$FPHelper)g$_haxe_io_FPHelper;
	r1 = r2->helper;
	r3 = 0;
	r3 = *(int*)(r1 + r3);
	return r3;
}

