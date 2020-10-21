﻿// Generated by HLC 4.1.3 (HL v4)
#ifndef INC_kha__audio2__ogg__vorbis__Reader
#define INC_kha__audio2__ogg__vorbis__Reader
typedef struct _kha__audio2__ogg__vorbis__$Reader *kha__audio2__ogg__vorbis__$Reader;
typedef struct _kha__audio2__ogg__vorbis__Reader *kha__audio2__ogg__vorbis__Reader;
#include <sys/io/FileSeek.h>
#include <kha/audio2/ogg/vorbis/Reader.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/io/Bytes.h>
#include <haxe/io/BytesInput.h>
#include <haxe/io/Output.h>
#include <kha/audio2/ogg/vorbis/data/Header.h>
#include <kha/audio2/ogg/vorbis/VorbisDecoder.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	venum* p0;
	vclosure* p1;
} Enumt$ctx_8d10a28;
struct _kha__audio2__ogg__vorbis__$Reader {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* openFromBytes;
	vclosure* seekBytes;
	vclosure* openFromFile;
	vclosure* readAll;
};
struct _kha__audio2__ogg__vorbis__Reader {
	hl_type *$type;
	kha__audio2__ogg__vorbis__VorbisDecoder decoder;
	vdynamic* loopStart;
	vdynamic* loopLength;
	vclosure* seekFunc;
	int inputLength;
};
#endif

