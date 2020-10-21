// Generated by Haxe 4.1.3
#include <hxcpp.h>

#ifndef INCLUDED_kha_math_FastMatrix3
#include <hxinc/kha/math/FastMatrix3.h>
#endif
#ifndef INCLUDED_kha_math_Matrix3
#include <hxinc/kha/math/Matrix3.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_213cce7b618b8029_13_new,"kha.math.FastMatrix3","new",0x894a294c,"kha.math.FastMatrix3.new","kha/math/FastMatrix3.hx",13,0xadedc804)
HX_LOCAL_STACK_FRAME(_hx_pos_213cce7b618b8029_20_fromMatrix3,"kha.math.FastMatrix3","fromMatrix3",0x0d42cb74,"kha.math.FastMatrix3.fromMatrix3","kha/math/FastMatrix3.hx",20,0xadedc804)
HX_LOCAL_STACK_FRAME(_hx_pos_213cce7b618b8029_4_boot,"kha.math.FastMatrix3","boot",0x8fb2f9c6,"kha.math.FastMatrix3.boot","kha/math/FastMatrix3.hx",4,0xadedc804)
HX_LOCAL_STACK_FRAME(_hx_pos_213cce7b618b8029_5_boot,"kha.math.FastMatrix3","boot",0x8fb2f9c6,"kha.math.FastMatrix3.boot","kha/math/FastMatrix3.hx",5,0xadedc804)
namespace kha{
namespace math{

void FastMatrix3_obj::__construct(float _00,float _10,float _20,float _01,float _11,float _21,float _02,float _12,float _22){
            	HX_STACKFRAME(&_hx_pos_213cce7b618b8029_13_new)
HXLINE(  14)		this->_00 = _00;
HXDLIN(  14)		this->_10 = _10;
HXDLIN(  14)		this->_20 = _20;
HXLINE(  15)		this->_01 = _01;
HXDLIN(  15)		this->_11 = _11;
HXDLIN(  15)		this->_21 = _21;
HXLINE(  16)		this->_02 = _02;
HXDLIN(  16)		this->_12 = _12;
HXDLIN(  16)		this->_22 = _22;
            	}

Dynamic FastMatrix3_obj::__CreateEmpty() { return new FastMatrix3_obj; }

void *FastMatrix3_obj::_hx_vtable = 0;

Dynamic FastMatrix3_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FastMatrix3_obj > _hx_result = new FastMatrix3_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _hx_result;
}

bool FastMatrix3_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1bbfb0ae;
}

int FastMatrix3_obj::width;

int FastMatrix3_obj::height;

 ::kha::math::FastMatrix3 FastMatrix3_obj::fromMatrix3( ::kha::math::Matrix3 m){
            	HX_GC_STACKFRAME(&_hx_pos_213cce7b618b8029_20_fromMatrix3)
HXDLIN(  20)		return  ::kha::math::FastMatrix3_obj::__alloc( HX_CTX ,( (float)(m->_00) ),( (float)(m->_10) ),( (float)(m->_20) ),( (float)(m->_01) ),( (float)(m->_11) ),( (float)(m->_21) ),( (float)(m->_02) ),( (float)(m->_12) ),( (float)(m->_22) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FastMatrix3_obj,fromMatrix3,return )


FastMatrix3_obj::FastMatrix3_obj()
{
}

::hx::Val FastMatrix3_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_00") ) { return ::hx::Val( _00 ); }
		if (HX_FIELD_EQ(inName,"_10") ) { return ::hx::Val( _10 ); }
		if (HX_FIELD_EQ(inName,"_20") ) { return ::hx::Val( _20 ); }
		if (HX_FIELD_EQ(inName,"_01") ) { return ::hx::Val( _01 ); }
		if (HX_FIELD_EQ(inName,"_11") ) { return ::hx::Val( _11 ); }
		if (HX_FIELD_EQ(inName,"_21") ) { return ::hx::Val( _21 ); }
		if (HX_FIELD_EQ(inName,"_02") ) { return ::hx::Val( _02 ); }
		if (HX_FIELD_EQ(inName,"_12") ) { return ::hx::Val( _12 ); }
		if (HX_FIELD_EQ(inName,"_22") ) { return ::hx::Val( _22 ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FastMatrix3_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"fromMatrix3") ) { outValue = fromMatrix3_dyn(); return true; }
	}
	return false;
}

::hx::Val FastMatrix3_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_00") ) { _00=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_10") ) { _10=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_20") ) { _20=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_01") ) { _01=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_11") ) { _11=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_21") ) { _21=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_02") ) { _02=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_12") ) { _12=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_22") ) { _22=inValue.Cast< float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FastMatrix3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_00",1f,40,48,00));
	outFields->push(HX_("_10",fe,40,48,00));
	outFields->push(HX_("_20",dd,41,48,00));
	outFields->push(HX_("_01",20,40,48,00));
	outFields->push(HX_("_11",ff,40,48,00));
	outFields->push(HX_("_21",de,41,48,00));
	outFields->push(HX_("_02",21,40,48,00));
	outFields->push(HX_("_12",00,41,48,00));
	outFields->push(HX_("_22",df,41,48,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FastMatrix3_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix3_obj,_00),HX_("_00",1f,40,48,00)},
	{::hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix3_obj,_10),HX_("_10",fe,40,48,00)},
	{::hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix3_obj,_20),HX_("_20",dd,41,48,00)},
	{::hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix3_obj,_01),HX_("_01",20,40,48,00)},
	{::hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix3_obj,_11),HX_("_11",ff,40,48,00)},
	{::hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix3_obj,_21),HX_("_21",de,41,48,00)},
	{::hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix3_obj,_02),HX_("_02",21,40,48,00)},
	{::hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix3_obj,_12),HX_("_12",00,41,48,00)},
	{::hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix3_obj,_22),HX_("_22",df,41,48,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FastMatrix3_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FastMatrix3_obj::width,HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(void *) &FastMatrix3_obj::height,HX_("height",e7,07,4c,02)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FastMatrix3_obj_sMemberFields[] = {
	HX_("_00",1f,40,48,00),
	HX_("_10",fe,40,48,00),
	HX_("_20",dd,41,48,00),
	HX_("_01",20,40,48,00),
	HX_("_11",ff,40,48,00),
	HX_("_21",de,41,48,00),
	HX_("_02",21,40,48,00),
	HX_("_12",00,41,48,00),
	HX_("_22",df,41,48,00),
	::String(null()) };

static void FastMatrix3_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FastMatrix3_obj::width,"width");
	HX_MARK_MEMBER_NAME(FastMatrix3_obj::height,"height");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FastMatrix3_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FastMatrix3_obj::width,"width");
	HX_VISIT_MEMBER_NAME(FastMatrix3_obj::height,"height");
};

#endif

::hx::Class FastMatrix3_obj::__mClass;

static ::String FastMatrix3_obj_sStaticFields[] = {
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("fromMatrix3",88,a6,a7,2b),
	::String(null())
};

void FastMatrix3_obj::__register()
{
	FastMatrix3_obj _hx_dummy;
	FastMatrix3_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.math.FastMatrix3",5a,d3,18,20);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FastMatrix3_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FastMatrix3_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FastMatrix3_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FastMatrix3_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FastMatrix3_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FastMatrix3_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FastMatrix3_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FastMatrix3_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FastMatrix3_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_213cce7b618b8029_4_boot)
HXDLIN(   4)		width = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_213cce7b618b8029_5_boot)
HXDLIN(   5)		height = 3;
            	}
}

} // end namespace kha
} // end namespace math
