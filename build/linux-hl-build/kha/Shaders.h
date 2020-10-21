﻿// Generated by HLC 4.1.3 (HL v4)
#ifndef INC_kha__Shaders
#define INC_kha__Shaders
typedef struct _kha__$Shaders *kha__$Shaders;
typedef struct _kha__Shaders *kha__Shaders;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/compute/Shader.h>
#include <kha/graphics4/FragmentShader.h>
#include <kha/graphics4/VertexShader.h>


struct _kha__$Shaders {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	String clear_compData0;
	kha__compute__Shader clear_comp;
	String painter_colored_fragData0;
	kha__graphics4__FragmentShader painter_colored_frag;
	String painter_colored_vertData0;
	kha__graphics4__VertexShader painter_colored_vert;
	String painter_image_fragData0;
	kha__graphics4__FragmentShader painter_image_frag;
	String painter_image_vertData0;
	kha__graphics4__VertexShader painter_image_vert;
	String painter_text_fragData0;
	kha__graphics4__FragmentShader painter_text_frag;
	String painter_text_vertData0;
	kha__graphics4__VertexShader painter_text_vert;
	String painter_video_fragData0;
	kha__graphics4__FragmentShader painter_video_frag;
	String painter_video_vertData0;
	kha__graphics4__VertexShader painter_video_vert;
	vclosure* init;
};
struct _kha__Shaders {
	hl_type *$type;
};
#endif

