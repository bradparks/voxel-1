﻿// Generated by HLC 4.1.3 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hl/types/ArrayBase.h>
extern String s$Not_implemented;
vdynamic* haxe_Exception_thrown(vdynamic*);
#include <hl/types/ArrayDyn.h>
extern hl_type t$hl_types_ArrayDyn;
hl__types__ArrayDyn hl_types_ArrayDyn_alloc(hl__types__ArrayBase,bool*);
extern hl_type t$hl_types_ArrayBytes_Int;
extern hl_type t$hl_types_ArrayBytes_hl_UI16;
extern hl_type t$hl_types_ArrayBytes_hl_F32;
extern hl_type t$hl_types_ArrayBytes_Float;

int hl_types_ArrayBase_pushDyn(hl__types__ArrayBase r0,vdynamic* r1) {
	String r3;
	vdynamic *r2;
	r3 = (String)s$Not_implemented;
	r2 = haxe_Exception_thrown(((vdynamic*)r3));
	hl_throw((vdynamic*)r2);
}

vdynamic* hl_types_ArrayBase_popDyn(hl__types__ArrayBase r0) {
	String r2;
	vdynamic *r1;
	r2 = (String)s$Not_implemented;
	r1 = haxe_Exception_thrown(((vdynamic*)r2));
	hl_throw((vdynamic*)r1);
}

vdynamic* hl_types_ArrayBase_shiftDyn(hl__types__ArrayBase r0) {
	String r2;
	vdynamic *r1;
	r2 = (String)s$Not_implemented;
	r1 = haxe_Exception_thrown(((vdynamic*)r2));
	hl_throw((vdynamic*)r1);
}

void hl_types_ArrayBase_unshiftDyn(hl__types__ArrayBase r0,vdynamic* r1) {
	String r3;
	vdynamic *r2;
	r3 = (String)s$Not_implemented;
	r2 = haxe_Exception_thrown(((vdynamic*)r3));
	hl_throw((vdynamic*)r2);
}

void hl_types_ArrayBase_insertDyn(hl__types__ArrayBase r0,int r1,vdynamic* r2) {
	String r4;
	vdynamic *r3;
	r4 = (String)s$Not_implemented;
	r3 = haxe_Exception_thrown(((vdynamic*)r4));
	hl_throw((vdynamic*)r3);
}

bool hl_types_ArrayBase_containsDyn(hl__types__ArrayBase r0,vdynamic* r1) {
	String r3;
	vdynamic *r2;
	r3 = (String)s$Not_implemented;
	r2 = haxe_Exception_thrown(((vdynamic*)r3));
	hl_throw((vdynamic*)r2);
}

bool hl_types_ArrayBase_removeDyn(hl__types__ArrayBase r0,vdynamic* r1) {
	String r3;
	vdynamic *r2;
	r3 = (String)s$Not_implemented;
	r2 = haxe_Exception_thrown(((vdynamic*)r3));
	hl_throw((vdynamic*)r2);
}

void hl_types_ArrayBase_sortDyn(hl__types__ArrayBase r0,vclosure* r1) {
	String r3;
	vdynamic *r2;
	r3 = (String)s$Not_implemented;
	r2 = haxe_Exception_thrown(((vdynamic*)r3));
	hl_throw((vdynamic*)r2);
}

hl__types__ArrayBase hl_types_ArrayBase_slice(hl__types__ArrayBase r0,int r1,vdynamic* r2) {
	String r4;
	vdynamic *r3;
	r4 = (String)s$Not_implemented;
	r3 = haxe_Exception_thrown(((vdynamic*)r4));
	hl_throw((vdynamic*)r3);
}

hl__types__ArrayBase hl_types_ArrayBase_splice(hl__types__ArrayBase r0,int r1,int r2) {
	String r4;
	vdynamic *r3;
	r4 = (String)s$Not_implemented;
	r3 = haxe_Exception_thrown(((vdynamic*)r4));
	hl_throw((vdynamic*)r3);
}

String hl_types_ArrayBase_join(hl__types__ArrayBase r0,String r1) {
	String r3;
	vdynamic *r2;
	r3 = (String)s$Not_implemented;
	r2 = haxe_Exception_thrown(((vdynamic*)r3));
	hl_throw((vdynamic*)r2);
}

void hl_types_ArrayBase_reverse(hl__types__ArrayBase r0) {
	String r2;
	vdynamic *r1;
	r2 = (String)s$Not_implemented;
	r1 = haxe_Exception_thrown(((vdynamic*)r2));
	hl_throw((vdynamic*)r1);
}

void hl_types_ArrayBase_resize(hl__types__ArrayBase r0,int r1) {
	String r3;
	vdynamic *r2;
	r3 = (String)s$Not_implemented;
	r2 = haxe_Exception_thrown(((vdynamic*)r3));
	hl_throw((vdynamic*)r2);
}

vbyte* hl_types_ArrayBase___string(hl__types__ArrayBase r0) {
	String r2;
	vbyte *r1;
	r2 = ((String (*)(hl__types__ArrayBase))r0->$type->vobj_proto[16])(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

String hl_types_ArrayBase_toString(hl__types__ArrayBase r0) {
	String r2;
	vdynamic *r1;
	r2 = (String)s$Not_implemented;
	r1 = haxe_Exception_thrown(((vdynamic*)r2));
	hl_throw((vdynamic*)r1);
}

vdynamic* hl_types_ArrayBase___cast(hl__types__ArrayBase r0,hl_type* r1) {
	bool *r6;
	hl_type *r3;
	bool r5;
	hl__types__ArrayDyn r2, r4;
	vdynamic *r7;
	r2 = NULL;
	r3 = &t$hl_types_ArrayDyn;
	if( hl_same_type(r1,r3) != 0 ) {} else goto label$5ff977f_16_7;
	r5 = false;
	r6 = &r5;
	r4 = hl_types_ArrayDyn_alloc(r0,r6);
	return ((vdynamic*)r4);
	label$5ff977f_16_7:
	r7 = NULL;
	return r7;
}

bool hl_types_ArrayBase_isArrayObj(hl__types__ArrayBase r0) {
	bool r1;
	r1 = false;
	return r1;
}

hl__types__ArrayBytes_Int hl_types_ArrayBase_allocI32(vbyte* r0,int r1) {
	hl__types__ArrayBytes_Int r2;
	r2 = (hl__types__ArrayBytes_Int)hl_alloc_obj(&t$hl_types_ArrayBytes_Int);
	r2->length = r1;
	r2->bytes = r0;
	r2->size = r1;
	return r2;
}

hl__types__ArrayBytes_hl_UI16 hl_types_ArrayBase_allocUI16(vbyte* r0,int r1) {
	hl__types__ArrayBytes_hl_UI16 r2;
	r2 = (hl__types__ArrayBytes_hl_UI16)hl_alloc_obj(&t$hl_types_ArrayBytes_hl_UI16);
	r2->length = r1;
	r2->bytes = r0;
	r2->size = r1;
	return r2;
}

hl__types__ArrayBytes_hl_F32 hl_types_ArrayBase_allocF32(vbyte* r0,int r1) {
	hl__types__ArrayBytes_hl_F32 r2;
	r2 = (hl__types__ArrayBytes_hl_F32)hl_alloc_obj(&t$hl_types_ArrayBytes_hl_F32);
	r2->length = r1;
	r2->bytes = r0;
	r2->size = r1;
	return r2;
}

hl__types__ArrayBytes_Float hl_types_ArrayBase_allocF64(vbyte* r0,int r1) {
	hl__types__ArrayBytes_Float r2;
	r2 = (hl__types__ArrayBytes_Float)hl_alloc_obj(&t$hl_types_ArrayBytes_Float);
	r2->length = r1;
	r2->bytes = r0;
	r2->size = r1;
	return r2;
}

