﻿// Generated by HLC 4.1.3 (HL v4)
#ifndef INC_kha__math__Matrix4
#define INC_kha__math__Matrix4
typedef struct _kha__math__$Matrix4 *kha__math__$Matrix4;
typedef struct _kha__math__Matrix4 *kha__math__Matrix4;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/math/FastMatrix4.h>
#include <kha/math/Vector3.h>


struct _kha__math__$Matrix4 {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	int width;
	int height;
	vclosure* fromFastMatrix4;
	vclosure* orthogonalProjection;
	vclosure* perspectiveProjection;
	vclosure* lookAt;
};
struct _kha__math__Matrix4 {
	hl_type *$type;
	double _00;
	double _10;
	double _20;
	double _30;
	double _01;
	double _11;
	double _21;
	double _31;
	double _02;
	double _12;
	double _22;
	double _32;
	double _03;
	double _13;
	double _23;
	double _33;
};
#endif

