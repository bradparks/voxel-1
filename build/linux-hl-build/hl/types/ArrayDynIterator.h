﻿// Generated by HLC 4.1.3 (HL v4)
#ifndef INC_hl__types__ArrayDynIterator
#define INC_hl__types__ArrayDynIterator
typedef struct _hl__types__$ArrayDynIterator *hl__types__$ArrayDynIterator;
typedef struct _hl__types__ArrayDynIterator *hl__types__ArrayDynIterator;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/iterators/ArrayIterator.h>
#include <hl/types/ArrayDyn.h>
#include <hl/types/ArrayBase.h>


struct _hl__types__$ArrayDynIterator {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hl__types__ArrayDynIterator {
	hl_type *$type;
	hl__types__ArrayDyn array;
	int current;
	hl__types__ArrayBase a;
};
#endif

