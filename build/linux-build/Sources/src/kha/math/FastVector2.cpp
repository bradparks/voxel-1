// Generated by Haxe 4.1.3
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <hxinc/Std.h>
#endif
#ifndef INCLUDED_kha_math_FastVector2
#include <hxinc/kha/math/FastVector2.h>
#endif
#ifndef INCLUDED_kha_math_Vector2
#include <hxinc/kha/math/Vector2.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c7289b019f63a9f2_5_new,"kha.math.FastVector2","new",0x8298c309,"kha.math.FastVector2.new","kha/math/FastVector2.hx",5,0x343674e7)
HX_LOCAL_STACK_FRAME(_hx_pos_c7289b019f63a9f2_24_get_length,"kha.math.FastVector2","get_length",0x0ff9a926,"kha.math.FastVector2.get_length","kha/math/FastVector2.hx",24,0x343674e7)
HX_LOCAL_STACK_FRAME(_hx_pos_c7289b019f63a9f2_27_set_length,"kha.math.FastVector2","set_length",0x1377479a,"kha.math.FastVector2.set_length","kha/math/FastVector2.hx",27,0x343674e7)
HX_LOCAL_STACK_FRAME(_hx_pos_c7289b019f63a9f2_72_toString,"kha.math.FastVector2","toString",0xef4c9963,"kha.math.FastVector2.toString","kha/math/FastVector2.hx",72,0x343674e7)
HX_LOCAL_STACK_FRAME(_hx_pos_c7289b019f63a9f2_11_fromVector2,"kha.math.FastVector2","fromVector2",0x4fc2a16e,"kha.math.FastVector2.fromVector2","kha/math/FastVector2.hx",11,0x343674e7)
namespace kha{
namespace math{

void FastVector2_obj::__construct(::hx::Null< float >  __o_x,::hx::Null< float >  __o_y){
            		float x = __o_x.Default(0);
            		float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_c7289b019f63a9f2_5_new)
HXLINE(   6)		this->x = x;
HXLINE(   7)		this->y = y;
            	}

Dynamic FastVector2_obj::__CreateEmpty() { return new FastVector2_obj; }

void *FastVector2_obj::_hx_vtable = 0;

Dynamic FastVector2_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FastVector2_obj > _hx_result = new FastVector2_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FastVector2_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x62f567eb;
}

float FastVector2_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_c7289b019f63a9f2_24_get_length)
HXDLIN(  24)		return ( (float)(::Math_obj::sqrt(( (Float)(((this->x * this->x) + (this->y * this->y))) ))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FastVector2_obj,get_length,return )

float FastVector2_obj::set_length(float length){
            	HX_STACKFRAME(&_hx_pos_c7289b019f63a9f2_27_set_length)
HXLINE(  28)		float currentLength = ( (float)(::Math_obj::sqrt(( (Float)(((this->x * this->x) + (this->y * this->y))) ))) );
HXLINE(  29)		if ((currentLength == 0)) {
HXLINE(  29)			return ( (float)(0) );
            		}
HXLINE(  30)		Float mul = (( (Float)(length) ) / ( (Float)(currentLength) ));
HXLINE(  31)		 ::kha::math::FastVector2 _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  31)		_hx_tmp->x = (_hx_tmp->x * ( (float)(mul) ));
HXLINE(  32)		 ::kha::math::FastVector2 _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  32)		_hx_tmp1->y = (_hx_tmp1->y * ( (float)(mul) ));
HXLINE(  33)		return length;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FastVector2_obj,set_length,return )

::String FastVector2_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_c7289b019f63a9f2_72_toString)
HXDLIN(  72)		::String _hx_tmp = ((HX_("FastVector2(",15,9a,e5,0d) + ::Std_obj::string(this->x)) + HX_(", ",74,26,00,00));
HXDLIN(  72)		return ((_hx_tmp + ::Std_obj::string(this->y)) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FastVector2_obj,toString,return )

 ::kha::math::FastVector2 FastVector2_obj::fromVector2( ::kha::math::Vector2 v){
            	HX_GC_STACKFRAME(&_hx_pos_c7289b019f63a9f2_11_fromVector2)
HXDLIN(  11)		return  ::kha::math::FastVector2_obj::__alloc( HX_CTX ,v->x,v->y);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FastVector2_obj,fromVector2,return )


::hx::ObjectPtr< FastVector2_obj > FastVector2_obj::__new(::hx::Null< float >  __o_x,::hx::Null< float >  __o_y) {
	::hx::ObjectPtr< FastVector2_obj > __this = new FastVector2_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

::hx::ObjectPtr< FastVector2_obj > FastVector2_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< float >  __o_x,::hx::Null< float >  __o_y) {
	FastVector2_obj *__this = (FastVector2_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FastVector2_obj), false, "kha.math.FastVector2"));
	*(void **)__this = FastVector2_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

FastVector2_obj::FastVector2_obj()
{
}

::hx::Val FastVector2_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return ::hx::Val( set_length_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FastVector2_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"fromVector2") ) { outValue = fromVector2_dyn(); return true; }
	}
	return false;
}

::hx::Val FastVector2_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_length(inValue.Cast< float >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FastVector2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("length",e6,94,07,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FastVector2_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* float */ ,(int)offsetof(FastVector2_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsUnknown /* float */ ,(int)offsetof(FastVector2_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FastVector2_obj_sStaticStorageInfo = 0;
#endif

static ::String FastVector2_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("get_length",af,04,8f,8f),
	HX_("set_length",23,a3,0c,93),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class FastVector2_obj::__mClass;

static ::String FastVector2_obj_sStaticFields[] = {
	HX_("fromVector2",c5,5d,dd,72),
	::String(null())
};

void FastVector2_obj::__register()
{
	FastVector2_obj _hx_dummy;
	FastVector2_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.math.FastVector2",97,8a,4e,67);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FastVector2_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FastVector2_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FastVector2_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FastVector2_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FastVector2_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FastVector2_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace math
