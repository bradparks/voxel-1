// Generated by Haxe 4.1.3
#include <hxcpp.h>

#ifndef INCLUDED_kha_input_BlockInterventions
#include <hxinc/kha/input/BlockInterventions.h>
#endif
namespace kha{
namespace input{

::kha::input::BlockInterventions BlockInterventions_obj::Custom( ::Dynamic func)
{
	return ::hx::CreateEnum< BlockInterventions_obj >(HX_("Custom",d1,fb,26,74),3,1)->_hx_init(0,func);
}

::kha::input::BlockInterventions BlockInterventions_obj::Default;

::kha::input::BlockInterventions BlockInterventions_obj::Full;

::kha::input::BlockInterventions BlockInterventions_obj::None;

bool BlockInterventions_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Custom",d1,fb,26,74)) { outValue = BlockInterventions_obj::Custom_dyn(); return true; }
	if (inName==HX_("Default",a1,00,15,69)) { outValue = BlockInterventions_obj::Default; return true; }
	if (inName==HX_("Full",af,15,9e,2e)) { outValue = BlockInterventions_obj::Full; return true; }
	if (inName==HX_("None",d8,3e,e3,33)) { outValue = BlockInterventions_obj::None; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(BlockInterventions_obj)

int BlockInterventions_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Custom",d1,fb,26,74)) return 3;
	if (inName==HX_("Default",a1,00,15,69)) return 0;
	if (inName==HX_("Full",af,15,9e,2e)) return 1;
	if (inName==HX_("None",d8,3e,e3,33)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(BlockInterventions_obj,Custom,return)

int BlockInterventions_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Custom",d1,fb,26,74)) return 1;
	if (inName==HX_("Default",a1,00,15,69)) return 0;
	if (inName==HX_("Full",af,15,9e,2e)) return 0;
	if (inName==HX_("None",d8,3e,e3,33)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val BlockInterventions_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Custom",d1,fb,26,74)) return Custom_dyn();
	if (inName==HX_("Default",a1,00,15,69)) return Default;
	if (inName==HX_("Full",af,15,9e,2e)) return Full;
	if (inName==HX_("None",d8,3e,e3,33)) return None;
	return super::__Field(inName,inCallProp);
}

static ::String BlockInterventions_obj_sStaticFields[] = {
	HX_("Default",a1,00,15,69),
	HX_("Full",af,15,9e,2e),
	HX_("None",d8,3e,e3,33),
	HX_("Custom",d1,fb,26,74),
	::String(null())
};

::hx::Class BlockInterventions_obj::__mClass;

Dynamic __Create_BlockInterventions_obj() { return new BlockInterventions_obj; }

void BlockInterventions_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("kha.input.BlockInterventions",7d,4e,68,dc), ::hx::TCanCast< BlockInterventions_obj >,BlockInterventions_obj_sStaticFields,0,
	&__Create_BlockInterventions_obj, &__Create,
	&super::__SGetClass(), &CreateBlockInterventions_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &BlockInterventions_obj::__GetStatic;
}

void BlockInterventions_obj::__boot()
{
Default = ::hx::CreateConstEnum< BlockInterventions_obj >(HX_("Default",a1,00,15,69),0);
Full = ::hx::CreateConstEnum< BlockInterventions_obj >(HX_("Full",af,15,9e,2e),1);
None = ::hx::CreateConstEnum< BlockInterventions_obj >(HX_("None",d8,3e,e3,33),2);
}


} // end namespace kha
} // end namespace input
