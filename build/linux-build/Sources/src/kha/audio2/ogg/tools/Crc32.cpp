// Generated by Haxe 4.1.3
#include <hxcpp.h>

#ifndef INCLUDED_kha_audio2_ogg_tools_Crc32
#include <hxinc/kha/audio2/ogg/tools/Crc32.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_677bbbd4cb030f64_13_init,"kha.audio2.ogg.tools.Crc32","init",0xfae22f45,"kha.audio2.ogg.tools.Crc32.init","kha/audio2/ogg/tools/Crc32.hx",13,0x1d18eae7)
HX_LOCAL_STACK_FRAME(_hx_pos_677bbbd4cb030f64_30_update,"kha.audio2.ogg.tools.Crc32","update",0x0af9b17e,"kha.audio2.ogg.tools.Crc32.update","kha/audio2/ogg/tools/Crc32.hx",30,0x1d18eae7)
HX_LOCAL_STACK_FRAME(_hx_pos_677bbbd4cb030f64_10_boot,"kha.audio2.ogg.tools.Crc32","boot",0xf6427867,"kha.audio2.ogg.tools.Crc32.boot","kha/audio2/ogg/tools/Crc32.hx",10,0x1d18eae7)
namespace kha{
namespace audio2{
namespace ogg{
namespace tools{

void Crc32_obj::__construct() { }

Dynamic Crc32_obj::__CreateEmpty() { return new Crc32_obj; }

void *Crc32_obj::_hx_vtable = 0;

Dynamic Crc32_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Crc32_obj > _hx_result = new Crc32_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Crc32_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x56f62f6f;
}

int Crc32_obj::POLY;

::Array< int > Crc32_obj::table;

void Crc32_obj::init(){
            	HX_STACKFRAME(&_hx_pos_677bbbd4cb030f64_13_init)
HXLINE(  14)		if (::hx::IsNotNull( ::kha::audio2::ogg::tools::Crc32_obj::table )) {
HXLINE(  15)			return;
            		}
HXLINE(  18)		::Array< int > this1 = ::Array_obj< int >::__new(256);
HXDLIN(  18)		::kha::audio2::ogg::tools::Crc32_obj::table = this1;
HXLINE(  19)		{
HXLINE(  19)			int _g = 0;
HXDLIN(  19)			while((_g < 256)){
HXLINE(  19)				_g = (_g + 1);
HXDLIN(  19)				int i = (_g - 1);
HXLINE(  20)				int s = (i << 24);
HXLINE(  21)				{
HXLINE(  22)					int s1;
HXDLIN(  22)					int b = (1 << 31);
HXDLIN(  22)					bool aNeg = (s < 0);
HXDLIN(  22)					bool bNeg = (b < 0);
HXDLIN(  22)					bool s2;
HXDLIN(  22)					if ((aNeg != bNeg)) {
HXLINE(  22)						s2 = aNeg;
            					}
            					else {
HXLINE(  22)						s2 = (s >= b);
            					}
HXDLIN(  22)					if (s2) {
HXLINE(  22)						s1 = 79764919;
            					}
            					else {
HXLINE(  22)						s1 = 0;
            					}
HXDLIN(  22)					s = ((s << 1) ^ s1);
HXDLIN(  22)					int s3;
HXDLIN(  22)					int b1 = (1 << 31);
HXDLIN(  22)					bool aNeg1 = (s < 0);
HXDLIN(  22)					bool bNeg1 = (b1 < 0);
HXDLIN(  22)					bool s4;
HXDLIN(  22)					if ((aNeg1 != bNeg1)) {
HXLINE(  22)						s4 = aNeg1;
            					}
            					else {
HXLINE(  22)						s4 = (s >= b1);
            					}
HXDLIN(  22)					if (s4) {
HXLINE(  22)						s3 = 79764919;
            					}
            					else {
HXLINE(  22)						s3 = 0;
            					}
HXDLIN(  22)					s = ((s << 1) ^ s3);
HXDLIN(  22)					int s5;
HXDLIN(  22)					int b2 = (1 << 31);
HXDLIN(  22)					bool aNeg2 = (s < 0);
HXDLIN(  22)					bool bNeg2 = (b2 < 0);
HXDLIN(  22)					bool s6;
HXDLIN(  22)					if ((aNeg2 != bNeg2)) {
HXLINE(  22)						s6 = aNeg2;
            					}
            					else {
HXLINE(  22)						s6 = (s >= b2);
            					}
HXDLIN(  22)					if (s6) {
HXLINE(  22)						s5 = 79764919;
            					}
            					else {
HXLINE(  22)						s5 = 0;
            					}
HXDLIN(  22)					s = ((s << 1) ^ s5);
HXDLIN(  22)					int s7;
HXDLIN(  22)					int b3 = (1 << 31);
HXDLIN(  22)					bool aNeg3 = (s < 0);
HXDLIN(  22)					bool bNeg3 = (b3 < 0);
HXDLIN(  22)					bool s8;
HXDLIN(  22)					if ((aNeg3 != bNeg3)) {
HXLINE(  22)						s8 = aNeg3;
            					}
            					else {
HXLINE(  22)						s8 = (s >= b3);
            					}
HXDLIN(  22)					if (s8) {
HXLINE(  22)						s7 = 79764919;
            					}
            					else {
HXLINE(  22)						s7 = 0;
            					}
HXDLIN(  22)					s = ((s << 1) ^ s7);
HXDLIN(  22)					int s9;
HXDLIN(  22)					int b4 = (1 << 31);
HXDLIN(  22)					bool aNeg4 = (s < 0);
HXDLIN(  22)					bool bNeg4 = (b4 < 0);
HXDLIN(  22)					bool s10;
HXDLIN(  22)					if ((aNeg4 != bNeg4)) {
HXLINE(  22)						s10 = aNeg4;
            					}
            					else {
HXLINE(  22)						s10 = (s >= b4);
            					}
HXDLIN(  22)					if (s10) {
HXLINE(  22)						s9 = 79764919;
            					}
            					else {
HXLINE(  22)						s9 = 0;
            					}
HXDLIN(  22)					s = ((s << 1) ^ s9);
HXDLIN(  22)					int s11;
HXDLIN(  22)					int b5 = (1 << 31);
HXDLIN(  22)					bool aNeg5 = (s < 0);
HXDLIN(  22)					bool bNeg5 = (b5 < 0);
HXDLIN(  22)					bool s12;
HXDLIN(  22)					if ((aNeg5 != bNeg5)) {
HXLINE(  22)						s12 = aNeg5;
            					}
            					else {
HXLINE(  22)						s12 = (s >= b5);
            					}
HXDLIN(  22)					if (s12) {
HXLINE(  22)						s11 = 79764919;
            					}
            					else {
HXLINE(  22)						s11 = 0;
            					}
HXDLIN(  22)					s = ((s << 1) ^ s11);
HXDLIN(  22)					int s13;
HXDLIN(  22)					int b6 = (1 << 31);
HXDLIN(  22)					bool aNeg6 = (s < 0);
HXDLIN(  22)					bool bNeg6 = (b6 < 0);
HXDLIN(  22)					bool s14;
HXDLIN(  22)					if ((aNeg6 != bNeg6)) {
HXLINE(  22)						s14 = aNeg6;
            					}
            					else {
HXLINE(  22)						s14 = (s >= b6);
            					}
HXDLIN(  22)					if (s14) {
HXLINE(  22)						s13 = 79764919;
            					}
            					else {
HXLINE(  22)						s13 = 0;
            					}
HXDLIN(  22)					s = ((s << 1) ^ s13);
HXDLIN(  22)					int s15;
HXDLIN(  22)					int b7 = (1 << 31);
HXDLIN(  22)					bool aNeg7 = (s < 0);
HXDLIN(  22)					bool bNeg7 = (b7 < 0);
HXDLIN(  22)					bool s16;
HXDLIN(  22)					if ((aNeg7 != bNeg7)) {
HXLINE(  22)						s16 = aNeg7;
            					}
            					else {
HXLINE(  22)						s16 = (s >= b7);
            					}
HXDLIN(  22)					if (s16) {
HXLINE(  22)						s15 = 79764919;
            					}
            					else {
HXLINE(  22)						s15 = 0;
            					}
HXDLIN(  22)					s = ((s << 1) ^ s15);
            				}
HXLINE(  24)				::kha::audio2::ogg::tools::Crc32_obj::table->__unsafe_set(i,s);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Crc32_obj,init,(void))

int Crc32_obj::update(int crc,int byte){
            	HX_STACKFRAME(&_hx_pos_677bbbd4cb030f64_30_update)
HXDLIN(  30)		return ((crc << 8) ^ ( (int)(_hx_array_unsafe_get(::kha::audio2::ogg::tools::Crc32_obj::table,(byte ^ ::hx::UShr(crc,24)))) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Crc32_obj,update,return )


Crc32_obj::Crc32_obj()
{
}

bool Crc32_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"table") ) { outValue = ( table ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true; }
	}
	return false;
}

bool Crc32_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"table") ) { table=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Crc32_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Crc32_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Crc32_obj::POLY,HX_("POLY",4c,46,1d,35)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &Crc32_obj::table,HX_("table",0e,b8,e3,0a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Crc32_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Crc32_obj::POLY,"POLY");
	HX_MARK_MEMBER_NAME(Crc32_obj::table,"table");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Crc32_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Crc32_obj::POLY,"POLY");
	HX_VISIT_MEMBER_NAME(Crc32_obj::table,"table");
};

#endif

::hx::Class Crc32_obj::__mClass;

static ::String Crc32_obj_sStaticFields[] = {
	HX_("POLY",4c,46,1d,35),
	HX_("table",0e,b8,e3,0a),
	HX_("init",10,3b,bb,45),
	HX_("update",09,86,05,87),
	::String(null())
};

void Crc32_obj::__register()
{
	Crc32_obj _hx_dummy;
	Crc32_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.audio2.ogg.tools.Crc32",59,d8,1b,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Crc32_obj::__GetStatic;
	__mClass->mSetStaticField = &Crc32_obj::__SetStatic;
	__mClass->mMarkFunc = Crc32_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Crc32_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Crc32_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Crc32_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Crc32_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Crc32_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Crc32_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_677bbbd4cb030f64_10_boot)
HXDLIN(  10)		POLY = 79764919;
            	}
}

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace tools
