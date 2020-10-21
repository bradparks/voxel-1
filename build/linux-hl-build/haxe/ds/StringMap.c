﻿// Generated by HLC 4.1.3 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/ds/StringMap.h>
#include <hl/natives.h>

void haxe_ds_StringMap_new(haxe__ds__StringMap r0) {
	hl_bytes_map *r1;
	r1 = hl_hballoc();
	r0->h = r1;
	return;
}

void haxe_ds_StringMap_set(haxe__ds__StringMap r0,String r1,vdynamic* r2) {
	hl_bytes_map *r4;
	vbyte *r5;
	r4 = r0->h;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->bytes;
	hl_hbset(r4,r5,r2);
	return;
}

vdynamic* haxe_ds_StringMap_get(haxe__ds__StringMap r0,String r1) {
	hl_bytes_map *r3;
	vdynamic *r2;
	vbyte *r4;
	if( r1 ) goto label$1ac35ac_3_3;
	r2 = NULL;
	return r2;
	label$1ac35ac_3_3:
	r3 = r0->h;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->bytes;
	r2 = hl_hbget(r3,r4);
	return r2;
}

bool haxe_ds_StringMap_exists(haxe__ds__StringMap r0,String r1) {
	bool r2;
	hl_bytes_map *r3;
	vbyte *r4;
	if( r1 ) goto label$1ac35ac_4_3;
	r2 = false;
	return r2;
	label$1ac35ac_4_3:
	r3 = r0->h;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->bytes;
	r2 = hl_hbexists(r3,r4);
	return r2;
}

