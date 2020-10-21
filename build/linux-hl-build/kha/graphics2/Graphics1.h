﻿// Generated by HLC 4.1.3 (HL v4)
#ifndef INC_kha__graphics2__Graphics1
#define INC_kha__graphics2__Graphics1
typedef struct _kha__graphics2__$Graphics1 *kha__graphics2__$Graphics1;
typedef struct _kha__graphics2__Graphics1 *kha__graphics2__Graphics1;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/Video.h>
#include <hl/types/ArrayObj.h>
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
#include <haxe/io/Bytes.h>


struct _kha__graphics2__$Graphics1 {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _kha__graphics2__Graphics1 {
	hl_type *$type;
	vvirtual* canvas;
	kha__Image texture;
	haxe__io__Bytes pixels;
	vvirtual* f$3;
};
#endif

