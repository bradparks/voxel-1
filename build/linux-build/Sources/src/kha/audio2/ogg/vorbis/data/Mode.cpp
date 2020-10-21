// Generated by Haxe 4.1.3
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <hxinc/haxe/Exception.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisDecodeState
#include <hxinc/kha/audio2/ogg/vorbis/VorbisDecodeState.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Mode
#include <hxinc/kha/audio2/ogg/vorbis/data/Mode.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ReaderError
#include <hxinc/kha/audio2/ogg/vorbis/data/ReaderError.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ReaderErrorType
#include <hxinc/kha/audio2/ogg/vorbis/data/ReaderErrorType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f02a149af3865821_12_new,"kha.audio2.ogg.vorbis.data.Mode","new",0x0813d4a5,"kha.audio2.ogg.vorbis.data.Mode.new","kha/audio2/ogg/vorbis/data/Mode.hx",12,0x8e3dac8a)
HX_LOCAL_STACK_FRAME(_hx_pos_f02a149af3865821_15_read,"kha.audio2.ogg.vorbis.data.Mode","read",0x0beb0371,"kha.audio2.ogg.vorbis.data.Mode.read","kha/audio2/ogg/vorbis/data/Mode.hx",15,0x8e3dac8a)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{

void Mode_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f02a149af3865821_12_new)
            	}

Dynamic Mode_obj::__CreateEmpty() { return new Mode_obj; }

void *Mode_obj::_hx_vtable = 0;

Dynamic Mode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Mode_obj > _hx_result = new Mode_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Mode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x414fec57;
}

 ::kha::audio2::ogg::vorbis::data::Mode Mode_obj::read( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState){
            	HX_GC_STACKFRAME(&_hx_pos_f02a149af3865821_15_read)
HXLINE(  16)		 ::kha::audio2::ogg::vorbis::data::Mode m =  ::kha::audio2::ogg::vorbis::data::Mode_obj::__alloc( HX_CTX );
HXLINE(  17)		m->blockflag = (decodeState->readBits(1) != 0);
HXLINE(  18)		m->windowtype = decodeState->readBits(16);
HXLINE(  19)		m->transformtype = decodeState->readBits(16);
HXLINE(  20)		m->mapping = decodeState->readBits(8);
HXLINE(  21)		if ((m->windowtype != 0)) {
HXLINE(  22)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__alloc( HX_CTX ,::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP_dyn(),null(),::hx::SourceInfo(HX_("kha/audio2/ogg/vorbis/data/Mode.hx",8a,ac,3d,8e),22,HX_("kha.audio2.ogg.vorbis.data.Mode",33,9e,c1,c7),HX_("read",56,4b,a7,4b)))));
            		}
HXLINE(  24)		if ((m->transformtype != 0)) {
HXLINE(  25)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__alloc( HX_CTX ,::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP_dyn(),null(),::hx::SourceInfo(HX_("kha/audio2/ogg/vorbis/data/Mode.hx",8a,ac,3d,8e),25,HX_("kha.audio2.ogg.vorbis.data.Mode",33,9e,c1,c7),HX_("read",56,4b,a7,4b)))));
            		}
HXLINE(  27)		return m;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mode_obj,read,return )


Mode_obj::Mode_obj()
{
}

::hx::Val Mode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"mapping") ) { return ::hx::Val( mapping ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blockflag") ) { return ::hx::Val( blockflag ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"windowtype") ) { return ::hx::Val( windowtype ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transformtype") ) { return ::hx::Val( transformtype ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Mode_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { outValue = read_dyn(); return true; }
	}
	return false;
}

::hx::Val Mode_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"mapping") ) { mapping=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blockflag") ) { blockflag=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"windowtype") ) { windowtype=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transformtype") ) { transformtype=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("blockflag",79,ab,73,5e));
	outFields->push(HX_("mapping",0e,7b,7a,44));
	outFields->push(HX_("windowtype",aa,3e,06,ed));
	outFields->push(HX_("transformtype",26,46,7d,8f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Mode_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Mode_obj,blockflag),HX_("blockflag",79,ab,73,5e)},
	{::hx::fsInt,(int)offsetof(Mode_obj,mapping),HX_("mapping",0e,7b,7a,44)},
	{::hx::fsInt,(int)offsetof(Mode_obj,windowtype),HX_("windowtype",aa,3e,06,ed)},
	{::hx::fsInt,(int)offsetof(Mode_obj,transformtype),HX_("transformtype",26,46,7d,8f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Mode_obj_sStaticStorageInfo = 0;
#endif

static ::String Mode_obj_sMemberFields[] = {
	HX_("blockflag",79,ab,73,5e),
	HX_("mapping",0e,7b,7a,44),
	HX_("windowtype",aa,3e,06,ed),
	HX_("transformtype",26,46,7d,8f),
	::String(null()) };

::hx::Class Mode_obj::__mClass;

static ::String Mode_obj_sStaticFields[] = {
	HX_("read",56,4b,a7,4b),
	::String(null())
};

void Mode_obj::__register()
{
	Mode_obj _hx_dummy;
	Mode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.audio2.ogg.vorbis.data.Mode",33,9e,c1,c7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mode_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Mode_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Mode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Mode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data
