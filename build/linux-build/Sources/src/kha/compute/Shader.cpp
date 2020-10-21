// Generated by Haxe 4.1.3
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <hxinc/haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha_compute_ConstantLocation
#include <hxinc/kha/compute/ConstantLocation.h>
#endif
#ifndef INCLUDED_kha_compute_Shader
#include <hxinc/kha/compute/Shader.h>
#endif
#ifndef INCLUDED_kha_compute_TextureUnit
#include <hxinc/kha/compute/TextureUnit.h>
#endif
#ifndef INCLUDED_kha_internal_BytesBlob
#include <hxinc/kha/internal/BytesBlob.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d66caa0f25d52fb9_14_new,"kha.compute.Shader","new",0x16e56c58,"kha.compute.Shader.new","kha/compute/Shader.hx",14,0xe526ccd6)
HX_LOCAL_STACK_FRAME(_hx_pos_d66caa0f25d52fb9_18_init,"kha.compute.Shader","init",0xee921818,"kha.compute.Shader.init","kha/compute/Shader.hx",18,0xe526ccd6)
HX_LOCAL_STACK_FRAME(_hx_pos_d66caa0f25d52fb9_22_delete,"kha.compute.Shader","delete",0x1ce6ef33,"kha.compute.Shader.delete","kha/compute/Shader.hx",22,0xe526ccd6)
HX_LOCAL_STACK_FRAME(_hx_pos_d66caa0f25d52fb9_25_getConstantLocation,"kha.compute.Shader","getConstantLocation",0x6f1d6467,"kha.compute.Shader.getConstantLocation","kha/compute/Shader.hx",25,0xe526ccd6)
HX_LOCAL_STACK_FRAME(_hx_pos_d66caa0f25d52fb9_34_initConstantLocation,"kha.compute.Shader","initConstantLocation",0x1f2493f1,"kha.compute.Shader.initConstantLocation","kha/compute/Shader.hx",34,0xe526ccd6)
HX_LOCAL_STACK_FRAME(_hx_pos_d66caa0f25d52fb9_38_getTextureUnit,"kha.compute.Shader","getTextureUnit",0xe5a79311,"kha.compute.Shader.getTextureUnit","kha/compute/Shader.hx",38,0xe526ccd6)
HX_LOCAL_STACK_FRAME(_hx_pos_d66caa0f25d52fb9_47_initTextureUnit,"kha.compute.Shader","initTextureUnit",0x5b428fc7,"kha.compute.Shader.initTextureUnit","kha/compute/Shader.hx",47,0xe526ccd6)
HX_LOCAL_STACK_FRAME(_hx_pos_d66caa0f25d52fb9_53__forceInclude,"kha.compute.Shader","_forceInclude",0xb2122c54,"kha.compute.Shader._forceInclude","kha/compute/Shader.hx",53,0xe526ccd6)
namespace kha{
namespace compute{

void Shader_obj::__construct(::Array< ::Dynamic> sources,::Array< ::String > files){
            	HX_STACKFRAME(&_hx_pos_d66caa0f25d52fb9_14_new)
HXDLIN(  14)		this->init(sources->__get(0).StaticCast<  ::kha::internal::BytesBlob >(),files->__get(0));
            	}

Dynamic Shader_obj::__CreateEmpty() { return new Shader_obj; }

void *Shader_obj::_hx_vtable = 0;

Dynamic Shader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Shader_obj > _hx_result = new Shader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Shader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0449d204;
}

void Shader_obj::init( ::kha::internal::BytesBlob source,::String file){
            	HX_STACKFRAME(&_hx_pos_d66caa0f25d52fb9_18_init)
HXDLIN(  18)		shader = new Kore::ComputeShader(source->bytes->b->Pointer(), source->get_length());;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,init,(void))

void Shader_obj::_hx_delete(){
            	HX_STACKFRAME(&_hx_pos_d66caa0f25d52fb9_22_delete)
HXDLIN(  22)		delete shader; shader = nullptr;;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx_delete,(void))

 ::kha::compute::ConstantLocation Shader_obj::getConstantLocation(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_d66caa0f25d52fb9_25_getConstantLocation)
HXLINE(  26)		 ::kha::compute::ConstantLocation location =  ::kha::compute::ConstantLocation_obj::__alloc( HX_CTX );
HXLINE(  27)		this->initConstantLocation(location,name);
HXLINE(  28)		return location;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,getConstantLocation,return )

void Shader_obj::initConstantLocation( ::kha::compute::ConstantLocation location,::String name){
            	HX_STACKFRAME(&_hx_pos_d66caa0f25d52fb9_34_initConstantLocation)
            	
		location->location = shader->getConstantLocation(name.c_str());
	

            	}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,initConstantLocation,(void))

 ::kha::compute::TextureUnit Shader_obj::getTextureUnit(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_d66caa0f25d52fb9_38_getTextureUnit)
HXLINE(  39)		 ::kha::compute::TextureUnit unit =  ::kha::compute::TextureUnit_obj::__alloc( HX_CTX );
HXLINE(  40)		this->initTextureUnit(unit,name);
HXLINE(  41)		return unit;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,getTextureUnit,return )

void Shader_obj::initTextureUnit( ::kha::compute::TextureUnit unit,::String name){
            	HX_STACKFRAME(&_hx_pos_d66caa0f25d52fb9_47_initTextureUnit)
            	
		unit->unit = shader->getTextureUnit(name.c_str());
	

            	}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,initTextureUnit,(void))

void Shader_obj::_forceInclude(){
            	HX_STACKFRAME(&_hx_pos_d66caa0f25d52fb9_53__forceInclude)
HXDLIN(  53)		::haxe::io::Bytes_obj::alloc(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_forceInclude,(void))


::hx::ObjectPtr< Shader_obj > Shader_obj::__new(::Array< ::Dynamic> sources,::Array< ::String > files) {
	::hx::ObjectPtr< Shader_obj > __this = new Shader_obj();
	__this->__construct(sources,files);
	return __this;
}

::hx::ObjectPtr< Shader_obj > Shader_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> sources,::Array< ::String > files) {
	Shader_obj *__this = (Shader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Shader_obj), false, "kha.compute.Shader"));
	*(void **)__this = Shader_obj::_hx_vtable;
	__this->__construct(sources,files);
	return __this;
}

Shader_obj::Shader_obj()
{
}

::hx::Val Shader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"delete") ) { return ::hx::Val( _hx_delete_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_forceInclude") ) { return ::hx::Val( _forceInclude_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getTextureUnit") ) { return ::hx::Val( getTextureUnit_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"initTextureUnit") ) { return ::hx::Val( initTextureUnit_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getConstantLocation") ) { return ::hx::Val( getConstantLocation_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"initConstantLocation") ) { return ::hx::Val( initConstantLocation_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Shader_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Shader_obj_sStaticStorageInfo = 0;
#endif

static ::String Shader_obj_sMemberFields[] = {
	HX_("init",10,3b,bb,45),
	HX_("delete",2b,c0,d8,6a),
	HX_("getConstantLocation",6f,58,32,ea),
	HX_("initConstantLocation",e9,26,65,56),
	HX_("getTextureUnit",09,1c,c7,8b),
	HX_("initTextureUnit",cf,df,ba,10),
	HX_("_forceInclude",5c,ea,d8,d9),
	::String(null()) };

::hx::Class Shader_obj::__mClass;

void Shader_obj::__register()
{
	Shader_obj _hx_dummy;
	Shader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.compute.Shader",66,a0,7a,db);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Shader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Shader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Shader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Shader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace compute
