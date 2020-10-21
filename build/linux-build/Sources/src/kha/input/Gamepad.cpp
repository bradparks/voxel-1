// Generated by Haxe 4.1.3
#include <hxcpp.h>

#ifndef INCLUDED_kha_SystemImpl
#include <hxinc/kha/SystemImpl.h>
#endif
#ifndef INCLUDED_kha_input_Gamepad
#include <hxinc/kha/input/Gamepad.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2ba37e3659cf55a5_39_new,"kha.input.Gamepad","new",0x1b762cc5,"kha.input.Gamepad.new","kha/input/Gamepad.hx",39,0xfbe88f8d)
HX_LOCAL_STACK_FRAME(_hx_pos_2ba37e3659cf55a5_23_notify,"kha.input.Gamepad","notify",0x4a3a8b84,"kha.input.Gamepad.notify","kha/input/Gamepad.hx",23,0xfbe88f8d)
HX_LOCAL_STACK_FRAME(_hx_pos_2ba37e3659cf55a5_28_remove,"kha.input.Gamepad","remove",0x1d0a4cff,"kha.input.Gamepad.remove","kha/input/Gamepad.hx",28,0xfbe88f8d)
HX_LOCAL_STACK_FRAME(_hx_pos_2ba37e3659cf55a5_52_get_id,"kha.input.Gamepad","get_id",0xbbb1a3df,"kha.input.Gamepad.get_id","kha/input/Gamepad.hx",52,0xfbe88f8d)
HX_LOCAL_STACK_FRAME(_hx_pos_2ba37e3659cf55a5_56_get_vendor,"kha.input.Gamepad","get_vendor",0xae267f8c,"kha.input.Gamepad.get_vendor","kha/input/Gamepad.hx",56,0xfbe88f8d)
HX_LOCAL_STACK_FRAME(_hx_pos_2ba37e3659cf55a5_61_sendAxisEvent,"kha.input.Gamepad","sendAxisEvent",0x13d0c9f6,"kha.input.Gamepad.sendAxisEvent","kha/input/Gamepad.hx",61,0xfbe88f8d)
HX_LOCAL_STACK_FRAME(_hx_pos_2ba37e3659cf55a5_68_sendButtonEvent,"kha.input.Gamepad","sendButtonEvent",0x02b76845,"kha.input.Gamepad.sendButtonEvent","kha/input/Gamepad.hx",68,0xfbe88f8d)
HX_LOCAL_STACK_FRAME(_hx_pos_2ba37e3659cf55a5_8_get,"kha.input.Gamepad","get",0x1b70dcfb,"kha.input.Gamepad.get","kha/input/Gamepad.hx",8,0xfbe88f8d)
HX_LOCAL_STACK_FRAME(_hx_pos_2ba37e3659cf55a5_13_notifyOnConnect,"kha.input.Gamepad","notifyOnConnect",0xc2ffb867,"kha.input.Gamepad.notifyOnConnect","kha/input/Gamepad.hx",13,0xfbe88f8d)
HX_LOCAL_STACK_FRAME(_hx_pos_2ba37e3659cf55a5_18_removeConnect,"kha.input.Gamepad","removeConnect",0xce2844ab,"kha.input.Gamepad.removeConnect","kha/input/Gamepad.hx",18,0xfbe88f8d)
HX_LOCAL_STACK_FRAME(_hx_pos_2ba37e3659cf55a5_74_sendConnectEvent,"kha.input.Gamepad","sendConnectEvent",0xc0da39b3,"kha.input.Gamepad.sendConnectEvent","kha/input/Gamepad.hx",74,0xfbe88f8d)
HX_LOCAL_STACK_FRAME(_hx_pos_2ba37e3659cf55a5_82_sendDisconnectEvent,"kha.input.Gamepad","sendDisconnectEvent",0x4552681b,"kha.input.Gamepad.sendDisconnectEvent","kha/input/Gamepad.hx",82,0xfbe88f8d)
HX_LOCAL_STACK_FRAME(_hx_pos_2ba37e3659cf55a5_5_boot,"kha.input.Gamepad","boot",0xe40a002d,"kha.input.Gamepad.boot","kha/input/Gamepad.hx",5,0xfbe88f8d)
HX_LOCAL_STACK_FRAME(_hx_pos_2ba37e3659cf55a5_33_boot,"kha.input.Gamepad","boot",0xe40a002d,"kha.input.Gamepad.boot","kha/input/Gamepad.hx",33,0xfbe88f8d)
HX_LOCAL_STACK_FRAME(_hx_pos_2ba37e3659cf55a5_36_boot,"kha.input.Gamepad","boot",0xe40a002d,"kha.input.Gamepad.boot","kha/input/Gamepad.hx",36,0xfbe88f8d)
HX_LOCAL_STACK_FRAME(_hx_pos_2ba37e3659cf55a5_37_boot,"kha.input.Gamepad","boot",0xe40a002d,"kha.input.Gamepad.boot","kha/input/Gamepad.hx",37,0xfbe88f8d)
namespace kha{
namespace input{

void Gamepad_obj::__construct(::hx::Null< int >  __o_index,::String __o_id){
            		int index = __o_index.Default(0);
            		::String id = __o_id;
            		if (::hx::IsNull(__o_id)) id = HX_("unknown",8a,23,7b,e1);
            	HX_GC_STACKFRAME(&_hx_pos_2ba37e3659cf55a5_39_new)
HXLINE(  40)		this->index = index;
HXLINE(  41)		this->_hx_set_axisListeners(HX_CTX, ::Array_obj< ::Dynamic>::__new());
HXLINE(  42)		this->_hx_set_buttonListeners(HX_CTX, ::Array_obj< ::Dynamic>::__new());
HXLINE(  43)		::kha::input::Gamepad_obj::instances->setCtx( HX_CTX, index,::hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic Gamepad_obj::__CreateEmpty() { return new Gamepad_obj; }

void *Gamepad_obj::_hx_vtable = 0;

Dynamic Gamepad_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Gamepad_obj > _hx_result = new Gamepad_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Gamepad_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3cea349b;
}

void Gamepad_obj::notify( ::Dynamic axisListener, ::Dynamic buttonListener){
            	HX_STACKFRAME(&_hx_pos_2ba37e3659cf55a5_23_notify)
HXLINE(  24)		if (::hx::IsNotNull( axisListener )) {
HXLINE(  24)			this->axisListeners->push(axisListener);
            		}
HXLINE(  25)		if (::hx::IsNotNull( buttonListener )) {
HXLINE(  25)			this->buttonListeners->push(buttonListener);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Gamepad_obj,notify,(void))

void Gamepad_obj::remove( ::Dynamic axisListener, ::Dynamic buttonListener){
            	HX_STACKFRAME(&_hx_pos_2ba37e3659cf55a5_28_remove)
HXLINE(  29)		if (::hx::IsNotNull( axisListener )) {
HXLINE(  29)			this->axisListeners->remove(axisListener);
            		}
HXLINE(  30)		if (::hx::IsNotNull( buttonListener )) {
HXLINE(  30)			this->buttonListeners->remove(buttonListener);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Gamepad_obj,remove,(void))

::String Gamepad_obj::get_id(){
            	HX_STACKFRAME(&_hx_pos_2ba37e3659cf55a5_52_get_id)
HXDLIN(  52)		return ::kha::SystemImpl_obj::getGamepadId(this->index);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,get_id,return )

::String Gamepad_obj::get_vendor(){
            	HX_STACKFRAME(&_hx_pos_2ba37e3659cf55a5_56_get_vendor)
HXDLIN(  56)		return ::kha::SystemImpl_obj::getGamepadVendor(this->index);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,get_vendor,return )

void Gamepad_obj::sendAxisEvent(int axis,Float value){
            	HX_STACKFRAME(&_hx_pos_2ba37e3659cf55a5_61_sendAxisEvent)
HXDLIN(  61)		int _g = 0;
HXDLIN(  61)		::Array< ::Dynamic> _g1 = this->axisListeners;
HXDLIN(  61)		while((_g < _g1->length)){
HXDLIN(  61)			 ::Dynamic listener = _g1->__get(_g);
HXDLIN(  61)			_g = (_g + 1);
HXLINE(  62)			listener(axis,value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Gamepad_obj,sendAxisEvent,(void))

void Gamepad_obj::sendButtonEvent(int button,Float value){
            	HX_STACKFRAME(&_hx_pos_2ba37e3659cf55a5_68_sendButtonEvent)
HXDLIN(  68)		int _g = 0;
HXDLIN(  68)		::Array< ::Dynamic> _g1 = this->buttonListeners;
HXDLIN(  68)		while((_g < _g1->length)){
HXDLIN(  68)			 ::Dynamic listener = _g1->__get(_g);
HXDLIN(  68)			_g = (_g + 1);
HXLINE(  69)			listener(button,value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Gamepad_obj,sendButtonEvent,(void))

 ::kha::input::Gamepad Gamepad_obj::get(::hx::Null< int >  __o_index){
            		int index = __o_index.Default(0);
            	HX_STACKFRAME(&_hx_pos_2ba37e3659cf55a5_8_get)
HXLINE(   9)		if ((index >= ::kha::input::Gamepad_obj::instances->length)) {
HXLINE(   9)			return null();
            		}
HXLINE(  10)		return ::kha::input::Gamepad_obj::instances->__get(index).StaticCast<  ::kha::input::Gamepad >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,get,return )

void Gamepad_obj::notifyOnConnect( ::Dynamic connectListener, ::Dynamic disconnectListener){
            	HX_STACKFRAME(&_hx_pos_2ba37e3659cf55a5_13_notifyOnConnect)
HXLINE(  14)		if (::hx::IsNotNull( connectListener )) {
HXLINE(  14)			::kha::input::Gamepad_obj::connectListeners->push(connectListener);
            		}
HXLINE(  15)		if (::hx::IsNotNull( disconnectListener )) {
HXLINE(  15)			::kha::input::Gamepad_obj::disconnectListeners->push(disconnectListener);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Gamepad_obj,notifyOnConnect,(void))

void Gamepad_obj::removeConnect( ::Dynamic connectListener, ::Dynamic disconnectListener){
            	HX_STACKFRAME(&_hx_pos_2ba37e3659cf55a5_18_removeConnect)
HXLINE(  19)		if (::hx::IsNotNull( connectListener )) {
HXLINE(  19)			::kha::input::Gamepad_obj::connectListeners->remove(connectListener);
            		}
HXLINE(  20)		if (::hx::IsNotNull( disconnectListener )) {
HXLINE(  20)			::kha::input::Gamepad_obj::disconnectListeners->remove(disconnectListener);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Gamepad_obj,removeConnect,(void))

::Array< ::Dynamic> Gamepad_obj::instances;

::Array< ::Dynamic> Gamepad_obj::connectListeners;

::Array< ::Dynamic> Gamepad_obj::disconnectListeners;

void Gamepad_obj::sendConnectEvent(int index){
            	HX_STACKFRAME(&_hx_pos_2ba37e3659cf55a5_74_sendConnectEvent)
HXLINE(  75)		::kha::input::Gamepad_obj::instances->__get(index).StaticCast<  ::kha::input::Gamepad >()->connected = true;
HXLINE(  76)		{
HXLINE(  76)			int _g = 0;
HXDLIN(  76)			::Array< ::Dynamic> _g1 = ::kha::input::Gamepad_obj::connectListeners;
HXDLIN(  76)			while((_g < _g1->length)){
HXLINE(  76)				 ::Dynamic listener = _g1->__get(_g);
HXDLIN(  76)				_g = (_g + 1);
HXLINE(  77)				listener(index);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,sendConnectEvent,(void))

void Gamepad_obj::sendDisconnectEvent(int index){
            	HX_STACKFRAME(&_hx_pos_2ba37e3659cf55a5_82_sendDisconnectEvent)
HXLINE(  83)		::kha::input::Gamepad_obj::instances->__get(index).StaticCast<  ::kha::input::Gamepad >()->connected = false;
HXLINE(  84)		{
HXLINE(  84)			int _g = 0;
HXDLIN(  84)			::Array< ::Dynamic> _g1 = ::kha::input::Gamepad_obj::disconnectListeners;
HXDLIN(  84)			while((_g < _g1->length)){
HXLINE(  84)				 ::Dynamic listener = _g1->__get(_g);
HXDLIN(  84)				_g = (_g + 1);
HXLINE(  85)				listener(index);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,sendDisconnectEvent,(void))


::hx::ObjectPtr< Gamepad_obj > Gamepad_obj::__new(::hx::Null< int >  __o_index,::String __o_id) {
	::hx::ObjectPtr< Gamepad_obj > __this = new Gamepad_obj();
	__this->__construct(__o_index,__o_id);
	return __this;
}

::hx::ObjectPtr< Gamepad_obj > Gamepad_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_index,::String __o_id) {
	Gamepad_obj *__this = (Gamepad_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Gamepad_obj), true, "kha.input.Gamepad"));
	*(void **)__this = Gamepad_obj::_hx_vtable;
	__this->__construct(__o_index,__o_id);
	return __this;
}

Gamepad_obj::Gamepad_obj()
{
}

void Gamepad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Gamepad);
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(axisListeners,"axisListeners");
	HX_MARK_MEMBER_NAME(buttonListeners,"buttonListeners");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(vendor,"vendor");
	HX_MARK_MEMBER_NAME(connected,"connected");
	HX_MARK_END_CLASS();
}

void Gamepad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(axisListeners,"axisListeners");
	HX_VISIT_MEMBER_NAME(buttonListeners,"buttonListeners");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(vendor,"vendor");
	HX_VISIT_MEMBER_NAME(connected,"connected");
}

::hx::Val Gamepad_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_id() : id ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"notify") ) { return ::hx::Val( notify_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"vendor") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_vendor() : vendor ); }
		if (HX_FIELD_EQ(inName,"get_id") ) { return ::hx::Val( get_id_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return ::hx::Val( connected ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_vendor") ) { return ::hx::Val( get_vendor_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"axisListeners") ) { return ::hx::Val( axisListeners ); }
		if (HX_FIELD_EQ(inName,"sendAxisEvent") ) { return ::hx::Val( sendAxisEvent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"buttonListeners") ) { return ::hx::Val( buttonListeners ); }
		if (HX_FIELD_EQ(inName,"sendButtonEvent") ) { return ::hx::Val( sendButtonEvent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Gamepad_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { outValue = ( instances ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeConnect") ) { outValue = removeConnect_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"notifyOnConnect") ) { outValue = notifyOnConnect_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"connectListeners") ) { outValue = ( connectListeners ); return true; }
		if (HX_FIELD_EQ(inName,"sendConnectEvent") ) { outValue = sendConnectEvent_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"disconnectListeners") ) { outValue = ( disconnectListeners ); return true; }
		if (HX_FIELD_EQ(inName,"sendDisconnectEvent") ) { outValue = sendDisconnectEvent_dyn(); return true; }
	}
	return false;
}

::hx::Val Gamepad_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { _hx_set_id(HX_CTX_GET,inValue.Cast< ::String >()); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vendor") ) { _hx_set_vendor(HX_CTX_GET,inValue.Cast< ::String >()); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"axisListeners") ) { _hx_set_axisListeners(HX_CTX_GET,inValue.Cast< ::Array< ::Dynamic> >()); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"buttonListeners") ) { _hx_set_buttonListeners(HX_CTX_GET,inValue.Cast< ::Array< ::Dynamic> >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Gamepad_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { instances=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"connectListeners") ) { connectListeners=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"disconnectListeners") ) { disconnectListeners=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

void Gamepad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("axisListeners",9e,0c,ba,11));
	outFields->push(HX_("buttonListeners",2d,15,52,7d));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("vendor",88,e5,96,9e));
	outFields->push(HX_("connected",c9,e2,f6,a2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Gamepad_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Gamepad_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Gamepad_obj,axisListeners),HX_("axisListeners",9e,0c,ba,11)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Gamepad_obj,buttonListeners),HX_("buttonListeners",2d,15,52,7d)},
	{::hx::fsString,(int)offsetof(Gamepad_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsString,(int)offsetof(Gamepad_obj,vendor),HX_("vendor",88,e5,96,9e)},
	{::hx::fsBool,(int)offsetof(Gamepad_obj,connected),HX_("connected",c9,e2,f6,a2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Gamepad_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Gamepad_obj::instances,HX_("instances",3e,83,1a,4b)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Gamepad_obj::connectListeners,HX_("connectListeners",35,3c,93,bd)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Gamepad_obj::disconnectListeners,HX_("disconnectListeners",83,75,33,15)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Gamepad_obj_sMemberFields[] = {
	HX_("index",12,9b,14,be),
	HX_("notify",c9,da,b8,31),
	HX_("remove",44,9c,88,04),
	HX_("axisListeners",9e,0c,ba,11),
	HX_("buttonListeners",2d,15,52,7d),
	HX_("id",db,5b,00,00),
	HX_("vendor",88,e5,96,9e),
	HX_("connected",c9,e2,f6,a2),
	HX_("get_id",24,f3,2f,a3),
	HX_("get_vendor",51,55,1e,8f),
	HX_("sendAxisEvent",51,1d,e3,33),
	HX_("sendButtonEvent",60,88,89,0a),
	::String(null()) };

static void Gamepad_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gamepad_obj::instances,"instances");
	HX_MARK_MEMBER_NAME(Gamepad_obj::connectListeners,"connectListeners");
	HX_MARK_MEMBER_NAME(Gamepad_obj::disconnectListeners,"disconnectListeners");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Gamepad_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gamepad_obj::instances,"instances");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::connectListeners,"connectListeners");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::disconnectListeners,"disconnectListeners");
};

#endif

::hx::Class Gamepad_obj::__mClass;

static ::String Gamepad_obj_sStaticFields[] = {
	HX_("get",96,80,4e,00),
	HX_("notifyOnConnect",82,d8,d1,ca),
	HX_("removeConnect",06,98,3a,ee),
	HX_("instances",3e,83,1a,4b),
	HX_("connectListeners",35,3c,93,bd),
	HX_("disconnectListeners",83,75,33,15),
	HX_("sendConnectEvent",38,31,e4,90),
	HX_("sendDisconnectEvent",b6,31,86,fc),
	::String(null())
};

void Gamepad_obj::__register()
{
	Gamepad_obj _hx_dummy;
	Gamepad_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.input.Gamepad",53,66,cd,68);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Gamepad_obj::__GetStatic;
	__mClass->mSetStaticField = &Gamepad_obj::__SetStatic;
	__mClass->mMarkFunc = Gamepad_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Gamepad_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Gamepad_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Gamepad_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Gamepad_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Gamepad_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Gamepad_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Gamepad_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2ba37e3659cf55a5_5_boot)
HXDLIN(   5)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("sendButtonEvent",60,88,89,0a), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("input",0a,c4,1d,be),null())))
            				->setFixed(1,HX_("sendAxisEvent",51,1d,e3,33), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("input",0a,c4,1d,be),null())))))
            			->setFixed(1,HX_("statics",05,3c,65,36), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("sendConnectEvent",38,31,e4,90), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("input",0a,c4,1d,be),null())))
            				->setFixed(1,HX_("sendDisconnectEvent",b6,31,86,fc), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("input",0a,c4,1d,be),null()))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ba37e3659cf55a5_33_boot)
HXDLIN(  33)		instances = ::Array_obj< ::Dynamic>::__new();
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ba37e3659cf55a5_36_boot)
HXDLIN(  36)		connectListeners = ::Array_obj< ::Dynamic>::__new();
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ba37e3659cf55a5_37_boot)
HXDLIN(  37)		disconnectListeners = ::Array_obj< ::Dynamic>::__new();
            	}
}

} // end namespace kha
} // end namespace input
