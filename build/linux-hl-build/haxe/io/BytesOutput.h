﻿// Generated by HLC 4.1.3 (HL v4)
#ifndef INC_haxe__io__BytesOutput
#define INC_haxe__io__BytesOutput
typedef struct _haxe__io__$BytesOutput *haxe__io__$BytesOutput;
typedef struct _haxe__io__BytesOutput *haxe__io__BytesOutput;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/io/Output.h>
#include <haxe/io/BytesBuffer.h>


struct _haxe__io__$BytesOutput {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _haxe__io__BytesOutput {
	hl_type *$type;
	bool bigEndian;
	haxe__io__BytesBuffer b;
};
#endif

