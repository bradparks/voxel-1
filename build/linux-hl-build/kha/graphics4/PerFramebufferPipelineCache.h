﻿// Generated by HLC 4.1.3 (HL v4)
#ifndef INC_kha__graphics4__PerFramebufferPipelineCache
#define INC_kha__graphics4__PerFramebufferPipelineCache
typedef struct _kha__graphics4__$PerFramebufferPipelineCache *kha__graphics4__$PerFramebufferPipelineCache;
typedef struct _kha__graphics4__PerFramebufferPipelineCache *kha__graphics4__PerFramebufferPipelineCache;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <hl/types/ArrayBytes_Int.h>
#include <kha/graphics4/InternalPipeline.h>


struct _kha__graphics4__$PerFramebufferPipelineCache {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _kha__graphics4__PerFramebufferPipelineCache {
	hl_type *$type;
	hl__types__ArrayObj pipelines;
	vvirtual* f$1;
};
#endif

