// Generated by Haxe 4.1.3
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics2_truetype_VectorOfIntPointer
#include <hxinc/kha/graphics2/truetype/VectorOfIntPointer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c08c2b87f8f9d699_17_new,"kha.graphics2.truetype.VectorOfIntPointer","new",0xac10a86f,"kha.graphics2.truetype.VectorOfIntPointer.new","kha/graphics2/truetype/StbTruetype.hx",17,0x5d9e0de9)
namespace kha{
namespace graphics2{
namespace truetype{

void VectorOfIntPointer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c08c2b87f8f9d699_17_new)
            	}

Dynamic VectorOfIntPointer_obj::__CreateEmpty() { return new VectorOfIntPointer_obj; }

void *VectorOfIntPointer_obj::_hx_vtable = 0;

Dynamic VectorOfIntPointer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VectorOfIntPointer_obj > _hx_result = new VectorOfIntPointer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VectorOfIntPointer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7e7aaab7;
}


VectorOfIntPointer_obj::VectorOfIntPointer_obj()
{
}

void VectorOfIntPointer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VectorOfIntPointer);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void VectorOfIntPointer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
}

::hx::Val VectorOfIntPointer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VectorOfIntPointer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { _hx_set_value(HX_CTX_GET,inValue.Cast< ::Array< int > >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VectorOfIntPointer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VectorOfIntPointer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(VectorOfIntPointer_obj,value),HX_("value",71,7f,b8,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VectorOfIntPointer_obj_sStaticStorageInfo = 0;
#endif

static ::String VectorOfIntPointer_obj_sMemberFields[] = {
	HX_("value",71,7f,b8,31),
	::String(null()) };

::hx::Class VectorOfIntPointer_obj::__mClass;

void VectorOfIntPointer_obj::__register()
{
	VectorOfIntPointer_obj _hx_dummy;
	VectorOfIntPointer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.graphics2.truetype.VectorOfIntPointer",fd,44,82,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VectorOfIntPointer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VectorOfIntPointer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VectorOfIntPointer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VectorOfIntPointer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype
