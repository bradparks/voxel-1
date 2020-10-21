﻿// Generated by HLC 4.1.3 (HL v4)
#ifndef INC_kha__Assets
#define INC_kha__Assets
typedef struct _kha__$Assets *kha__$Assets;
typedef struct _kha__Assets *kha__Assets;
#include <_std/String.h>
#include <hl/types/ArrayDyn.h>
#include <kha/Assets.h>
#include <kha/Video.h>
#include <kha/Kravur.h>
#include <kha/Sound.h>
#include <kha/internal/BytesBlob.h>
#include <kha/Image.h>
#include <hl/types/ArrayBytes_Int.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <kha/_Assets/ImageList.h>
#include <kha/_Assets/SoundList.h>
#include <kha/_Assets/BlobList.h>
#include <kha/_Assets/FontList.h>
#include <kha/_Assets/VideoList.h>
#include <hl/types/ArrayObj.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	vvirtual* p0;
	vclosure* p1;
} Enumt$ctx_307f22a;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	vclosure* p1;
} Enumt$ctx_83a567e;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	vclosure* p1;
} Enumt$ctx_71199ae;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	vclosure* p1;
} Enumt$ctx_4d3163e;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	vclosure* p1;
} Enumt$ctx_1e7209b;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	vclosure* p1;
} Enumt$ctx_050148b;
typedef struct {
	HL__ENUM_CONSTRUCT__
	vclosure* p0;
	vclosure* p1;
} Enumt$ctx_ac0c2db;
typedef struct {
	HL__ENUM_CONSTRUCT__
	vclosure* p0;
	int p1;
	hl__types__ArrayBytes_Int p2;
} Enumt$ctx_5d031dd;
typedef struct {
	HL__ENUM_CONSTRUCT__
	vclosure* p0;
	vdynamic* p1;
	vclosure* p2;
} Enumt$ctx_16b28f5;
struct _kha__$Assets {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	kha___Assets__ImageList images;
	kha___Assets__SoundList sounds;
	kha___Assets__BlobList blobs;
	kha___Assets__FontList fonts;
	kha___Assets__VideoList videos;
	double progress;
	vclosure* loadEverything;
	vclosure* loadImage;
	vclosure* loadImageFromPath;
	hl__types__ArrayObj imageFormats;
	vclosure* get_imageFormats;
	vclosure* loadBlob;
	vclosure* loadBlobFromPath;
	vclosure* loadSound;
	vclosure* loadSoundFromPath;
	hl__types__ArrayObj soundFormats;
	vclosure* get_soundFormats;
	vclosure* loadFont;
	vclosure* loadFontFromPath;
	hl__types__ArrayObj fontFormats;
	vclosure* get_fontFormats;
	vclosure* loadVideo;
	vclosure* loadVideoFromPath;
	hl__types__ArrayObj videoFormats;
	vclosure* get_videoFormats;
	vclosure* reporter;
};
struct _kha__Assets {
	hl_type *$type;
};
#endif

