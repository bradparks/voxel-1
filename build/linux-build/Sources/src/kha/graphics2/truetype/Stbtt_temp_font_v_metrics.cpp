// Generated by Haxe 4.1.3
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_temp_font_v_metrics
#include <hxinc/kha/graphics2/truetype/Stbtt_temp_font_v_metrics.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a9d3d6f58574fcec_36_new,"kha.graphics2.truetype.Stbtt_temp_font_v_metrics","new",0xdca19cf4,"kha.graphics2.truetype.Stbtt_temp_font_v_metrics.new","kha/graphics2/truetype/StbTruetype.hx",36,0x5d9e0de9)
namespace kha{
namespace graphics2{
namespace truetype{

void Stbtt_temp_font_v_metrics_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a9d3d6f58574fcec_36_new)
            	}

Dynamic Stbtt_temp_font_v_metrics_obj::__CreateEmpty() { return new Stbtt_temp_font_v_metrics_obj; }

void *Stbtt_temp_font_v_metrics_obj::_hx_vtable = 0;

Dynamic Stbtt_temp_font_v_metrics_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Stbtt_temp_font_v_metrics_obj > _hx_result = new Stbtt_temp_font_v_metrics_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Stbtt_temp_font_v_metrics_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x48b08fa8;
}


Stbtt_temp_font_v_metrics_obj::Stbtt_temp_font_v_metrics_obj()
{
}

::hx::Val Stbtt_temp_font_v_metrics_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ascent") ) { return ::hx::Val( ascent ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { return ::hx::Val( descent ); }
		if (HX_FIELD_EQ(inName,"lineGap") ) { return ::hx::Val( lineGap ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Stbtt_temp_font_v_metrics_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ascent") ) { ascent=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { descent=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineGap") ) { lineGap=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stbtt_temp_font_v_metrics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ascent",5a,d9,6f,41));
	outFields->push(HX_("descent",3a,ae,3f,19));
	outFields->push(HX_("lineGap",82,8d,93,1f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Stbtt_temp_font_v_metrics_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Stbtt_temp_font_v_metrics_obj,ascent),HX_("ascent",5a,d9,6f,41)},
	{::hx::fsInt,(int)offsetof(Stbtt_temp_font_v_metrics_obj,descent),HX_("descent",3a,ae,3f,19)},
	{::hx::fsInt,(int)offsetof(Stbtt_temp_font_v_metrics_obj,lineGap),HX_("lineGap",82,8d,93,1f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Stbtt_temp_font_v_metrics_obj_sStaticStorageInfo = 0;
#endif

static ::String Stbtt_temp_font_v_metrics_obj_sMemberFields[] = {
	HX_("ascent",5a,d9,6f,41),
	HX_("descent",3a,ae,3f,19),
	HX_("lineGap",82,8d,93,1f),
	::String(null()) };

::hx::Class Stbtt_temp_font_v_metrics_obj::__mClass;

void Stbtt_temp_font_v_metrics_obj::__register()
{
	Stbtt_temp_font_v_metrics_obj _hx_dummy;
	Stbtt_temp_font_v_metrics_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.graphics2.truetype.Stbtt_temp_font_v_metrics",02,53,73,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Stbtt_temp_font_v_metrics_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Stbtt_temp_font_v_metrics_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stbtt_temp_font_v_metrics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stbtt_temp_font_v_metrics_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype
