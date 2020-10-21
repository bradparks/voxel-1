// Generated by Haxe 4.1.3
#include <hxcpp.h>

#ifndef INCLUDED_kha_BlobCallback
#include <hxinc/kha/BlobCallback.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha_internal_BytesBlob
#include <hxinc/kha/internal/BytesBlob.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_674f255fbd6fe433_17_new,"kha.BlobCallback","new",0xc7fcc5de,"kha.BlobCallback.new","kha/LoaderImpl.hx",17,0xe7c84980)
namespace kha{

void BlobCallback_obj::__construct( ::Dynamic success, ::Dynamic error){
            	HX_GC_STACKFRAME(&_hx_pos_674f255fbd6fe433_17_new)
HXLINE(  18)		this->_hx_set_success(HX_CTX, success);
HXLINE(  19)		this->_hx_set_error(HX_CTX, error);
            	}

Dynamic BlobCallback_obj::__CreateEmpty() { return new BlobCallback_obj; }

void *BlobCallback_obj::_hx_vtable = 0;

Dynamic BlobCallback_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BlobCallback_obj > _hx_result = new BlobCallback_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BlobCallback_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1de90f86;
}


::hx::ObjectPtr< BlobCallback_obj > BlobCallback_obj::__new( ::Dynamic success, ::Dynamic error) {
	::hx::ObjectPtr< BlobCallback_obj > __this = new BlobCallback_obj();
	__this->__construct(success,error);
	return __this;
}

::hx::ObjectPtr< BlobCallback_obj > BlobCallback_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic success, ::Dynamic error) {
	BlobCallback_obj *__this = (BlobCallback_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BlobCallback_obj), true, "kha.BlobCallback"));
	*(void **)__this = BlobCallback_obj::_hx_vtable;
	__this->__construct(success,error);
	return __this;
}

BlobCallback_obj::BlobCallback_obj()
{
}

void BlobCallback_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BlobCallback);
	HX_MARK_MEMBER_NAME(success,"success");
	HX_MARK_MEMBER_NAME(error,"error");
	HX_MARK_END_CLASS();
}

void BlobCallback_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(success,"success");
	HX_VISIT_MEMBER_NAME(error,"error");
}

::hx::Val BlobCallback_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"success") ) { return ::hx::Val( success ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BlobCallback_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { _hx_set_error(HX_CTX_GET,inValue.Cast<  ::Dynamic >()); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"success") ) { _hx_set_success(HX_CTX_GET,inValue.Cast<  ::Dynamic >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BlobCallback_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(BlobCallback_obj,success),HX_("success",c3,25,4e,b8)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(BlobCallback_obj,error),HX_("error",c8,cb,29,73)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BlobCallback_obj_sStaticStorageInfo = 0;
#endif

static ::String BlobCallback_obj_sMemberFields[] = {
	HX_("success",c3,25,4e,b8),
	HX_("error",c8,cb,29,73),
	::String(null()) };

::hx::Class BlobCallback_obj::__mClass;

void BlobCallback_obj::__register()
{
	BlobCallback_obj _hx_dummy;
	BlobCallback_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.BlobCallback",ec,3e,39,de);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BlobCallback_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BlobCallback_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BlobCallback_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BlobCallback_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
