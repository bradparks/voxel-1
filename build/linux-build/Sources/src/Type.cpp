// Generated by Haxe 4.1.3
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <hxinc/Type.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_adc53fa9927c4482_72_resolveClass,"Type","resolveClass",0x23b06bc0,"Type.resolveClass","/home/mixer/tools/Kha/Tools/haxe/std/cpp/_std/Type.hx",72,0x9d193700)
HX_LOCAL_STACK_FRAME(_hx_pos_adc53fa9927c4482_80_resolveEnum,"Type","resolveEnum",0x26394079,"Type.resolveEnum","/home/mixer/tools/Kha/Tools/haxe/std/cpp/_std/Type.hx",80,0x9d193700)
HX_LOCAL_STACK_FRAME(_hx_pos_adc53fa9927c4482_96_createEmptyInstance,"Type","createEmptyInstance",0xcb752312,"Type.createEmptyInstance","/home/mixer/tools/Kha/Tools/haxe/std/cpp/_std/Type.hx",96,0x9d193700)
HX_LOCAL_STACK_FRAME(_hx_pos_adc53fa9927c4482_100_createEnum,"Type","createEnum",0xd8d56d31,"Type.createEnum","/home/mixer/tools/Kha/Tools/haxe/std/cpp/_std/Type.hx",100,0x9d193700)
HX_LOCAL_STACK_FRAME(_hx_pos_adc53fa9927c4482_111_getInstanceFields,"Type","getInstanceFields",0xe970f890,"Type.getInstanceFields","/home/mixer/tools/Kha/Tools/haxe/std/cpp/_std/Type.hx",111,0x9d193700)
HX_LOCAL_STACK_FRAME(_hx_pos_adc53fa9927c4482_120_getEnumConstructs,"Type","getEnumConstructs",0x7f46cf7f,"Type.getEnumConstructs","/home/mixer/tools/Kha/Tools/haxe/std/cpp/_std/Type.hx",120,0x9d193700)

void Type_obj::__construct() { }

Dynamic Type_obj::__CreateEmpty() { return new Type_obj; }

void *Type_obj::_hx_vtable = 0;

Dynamic Type_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Type_obj > _hx_result = new Type_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Type_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c3514fe;
}

::hx::Class Type_obj::resolveClass(::String name){
            	HX_STACKFRAME(&_hx_pos_adc53fa9927c4482_72_resolveClass)
HXLINE(  73)		::hx::Class result =  ::hx::Class_obj::Resolve(name);
HXLINE(  74)		bool _hx_tmp;
HXDLIN(  74)		if (::hx::IsNotNull( result )) {
HXLINE(  74)			_hx_tmp = ( (bool)(result->__IsEnum()) );
            		}
            		else {
HXLINE(  74)			_hx_tmp = false;
            		}
HXDLIN(  74)		if (_hx_tmp) {
HXLINE(  75)			return null();
            		}
HXLINE(  76)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,resolveClass,return )

::hx::Class Type_obj::resolveEnum(::String name){
            	HX_STACKFRAME(&_hx_pos_adc53fa9927c4482_80_resolveEnum)
HXLINE(  81)		::hx::Class result =  ::hx::Class_obj::Resolve(name);
HXLINE(  82)		bool _hx_tmp;
HXDLIN(  82)		if (::hx::IsNotNull( result )) {
HXLINE(  82)			_hx_tmp = !(( (bool)(result->__IsEnum()) ));
            		}
            		else {
HXLINE(  82)			_hx_tmp = false;
            		}
HXDLIN(  82)		if (_hx_tmp) {
HXLINE(  83)			return null();
            		}
HXLINE(  84)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,resolveEnum,return )

 ::Dynamic Type_obj::createEmptyInstance(::hx::Class cl){
            	HX_STACKFRAME(&_hx_pos_adc53fa9927c4482_96_createEmptyInstance)
HXDLIN(  96)		return cl->ConstructEmpty();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,createEmptyInstance,return )

 ::Dynamic Type_obj::createEnum(::hx::Class e,::String constr,::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_adc53fa9927c4482_100_createEnum)
HXDLIN( 100)		return e->ConstructEnum(constr,params);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Type_obj,createEnum,return )

::Array< ::String > Type_obj::getInstanceFields(::hx::Class c){
            	HX_STACKFRAME(&_hx_pos_adc53fa9927c4482_111_getInstanceFields)
HXDLIN( 111)		return ( (::Array< ::String >)(c->GetInstanceFields()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getInstanceFields,return )

::Array< ::String > Type_obj::getEnumConstructs(::hx::Class e){
            	HX_STACKFRAME(&_hx_pos_adc53fa9927c4482_120_getEnumConstructs)
HXDLIN( 120)		return ( (::Array< ::String >)(e->GetClassFields()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getEnumConstructs,return )


Type_obj::Type_obj()
{
}

bool Type_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"createEnum") ) { outValue = createEnum_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { outValue = resolveEnum_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resolveClass") ) { outValue = resolveClass_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getInstanceFields") ) { outValue = getInstanceFields_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getEnumConstructs") ) { outValue = getEnumConstructs_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"createEmptyInstance") ) { outValue = createEmptyInstance_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Type_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Type_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Type_obj::__mClass;

static ::String Type_obj_sStaticFields[] = {
	HX_("resolveClass",ac,bd,dd,80),
	HX_("resolveEnum",0d,90,51,de),
	HX_("createEmptyInstance",a6,26,85,ce),
	HX_("createEnum",1d,2c,a4,55),
	HX_("getInstanceFields",24,2f,97,ed),
	HX_("getEnumConstructs",13,06,6d,83),
	::String(null())
};

void Type_obj::__register()
{
	Type_obj _hx_dummy;
	Type_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Type",da,1e,e2,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Type_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Type_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Type_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Type_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Type_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

