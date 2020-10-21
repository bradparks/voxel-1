// Generated by Haxe 4.1.3
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <hxinc/haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_SystemImpl
#include <hxinc/kha/SystemImpl.h>
#endif
#ifndef INCLUDED_kha_input_BlockInterventions
#include <hxinc/kha/input/BlockInterventions.h>
#endif
#ifndef INCLUDED_kha_input_Keyboard
#include <hxinc/kha/input/Keyboard.h>
#endif
#ifndef INCLUDED_kha_netsync_Controller
#include <hxinc/kha/netsync/Controller.h>
#endif
#ifndef INCLUDED_kha_netsync_Session
#include <hxinc/kha/netsync/Session.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4c695fbe9d02de60_78_new,"kha.input.Keyboard","new",0xce3ad227,"kha.input.Keyboard.new","kha/input/Keyboard.hx",78,0xb57e4ba7)
HX_LOCAL_STACK_FRAME(_hx_pos_4c695fbe9d02de60_44_notify,"kha.input.Keyboard","notify",0xfaf1ef62,"kha.input.Keyboard.notify","kha/input/Keyboard.hx",44,0xb57e4ba7)
HX_LOCAL_STACK_FRAME(_hx_pos_4c695fbe9d02de60_53_remove,"kha.input.Keyboard","remove",0xcdc1b0dd,"kha.input.Keyboard.remove","kha/input/Keyboard.hx",53,0xb57e4ba7)
HX_LOCAL_STACK_FRAME(_hx_pos_4c695fbe9d02de60_62_show,"kha.input.Keyboard","show",0xa88d6156,"kha.input.Keyboard.show","kha/input/Keyboard.hx",62,0xb57e4ba7)
HX_LOCAL_STACK_FRAME(_hx_pos_4c695fbe9d02de60_69_hide,"kha.input.Keyboard","hide",0xa148c11b,"kha.input.Keyboard.hide","kha/input/Keyboard.hx",69,0xb57e4ba7)
HX_LOCAL_STACK_FRAME(_hx_pos_fee907a19ed0ea89_97_sendDownEvent,"kha.input.Keyboard","sendDownEvent",0xd04ca677,"kha.input.Keyboard.sendDownEvent","kha/netsync/ControllerBuilder.hx",97,0xeaffa5e1)
HX_LOCAL_STACK_FRAME(_hx_pos_fee907a19ed0ea89_97_sendUpEvent,"kha.input.Keyboard","sendUpEvent",0xd43edc1e,"kha.input.Keyboard.sendUpEvent","kha/netsync/ControllerBuilder.hx",97,0xeaffa5e1)
HX_LOCAL_STACK_FRAME(_hx_pos_fee907a19ed0ea89_97_sendPressEvent,"kha.input.Keyboard","sendPressEvent",0xf2741a98,"kha.input.Keyboard.sendPressEvent","kha/netsync/ControllerBuilder.hx",97,0xeaffa5e1)
HX_LOCAL_STACK_FRAME(_hx_pos_fee907a19ed0ea89_188__receive,"kha.input.Keyboard","_receive",0xbd2ae83d,"kha.input.Keyboard._receive","kha/netsync/ControllerBuilder.hx",188,0xeaffa5e1)
HX_LOCAL_STACK_FRAME(_hx_pos_4c695fbe9d02de60_23_get,"kha.input.Keyboard","get",0xce35825d,"kha.input.Keyboard.get","kha/input/Keyboard.hx",23,0xb57e4ba7)
HX_LOCAL_STACK_FRAME(_hx_pos_4c695fbe9d02de60_35_disableSystemInterventions,"kha.input.Keyboard","disableSystemInterventions",0x02f4b21e,"kha.input.Keyboard.disableSystemInterventions","kha/input/Keyboard.hx",35,0xb57e4ba7)
HX_LOCAL_STACK_FRAME(_hx_pos_4c695fbe9d02de60_15_boot,"kha.input.Keyboard","boot",0x9d56108b,"kha.input.Keyboard.boot","kha/input/Keyboard.hx",15,0xb57e4ba7)
HX_LOCAL_STACK_FRAME(_hx_pos_4c695fbe9d02de60_16_boot,"kha.input.Keyboard","boot",0x9d56108b,"kha.input.Keyboard.boot","kha/input/Keyboard.hx",16,0xb57e4ba7)
namespace kha{
namespace input{

void Keyboard_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_4c695fbe9d02de60_78_new)
HXLINE(  79)		super::__construct();
HXLINE(  80)		this->_hx_set_downListeners(HX_CTX, ::Array_obj< ::Dynamic>::__new(0));
HXLINE(  81)		this->_hx_set_upListeners(HX_CTX, ::Array_obj< ::Dynamic>::__new(0));
HXLINE(  82)		this->_hx_set_pressListeners(HX_CTX, ::Array_obj< ::Dynamic>::__new(0));
HXLINE(  83)		::kha::input::Keyboard_obj::instance = ::hx::ObjectPtr<OBJ_>(this);
            	}

Dynamic Keyboard_obj::__CreateEmpty() { return new Keyboard_obj; }

void *Keyboard_obj::_hx_vtable = 0;

Dynamic Keyboard_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Keyboard_obj > _hx_result = new Keyboard_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Keyboard_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0fbefc61) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0fbefc61;
	} else {
		return inClassId==(int)0x1d817f74;
	}
}

void Keyboard_obj::notify( ::Dynamic downListener, ::Dynamic upListener, ::Dynamic pressListener){
            	HX_STACKFRAME(&_hx_pos_4c695fbe9d02de60_44_notify)
HXLINE(  45)		if (::hx::IsNotNull( downListener )) {
HXLINE(  45)			this->downListeners->push(downListener);
            		}
HXLINE(  46)		if (::hx::IsNotNull( upListener )) {
HXLINE(  46)			this->upListeners->push(upListener);
            		}
HXLINE(  47)		if (::hx::IsNotNull( pressListener )) {
HXLINE(  47)			this->pressListeners->push(pressListener);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Keyboard_obj,notify,(void))

void Keyboard_obj::remove( ::Dynamic downListener, ::Dynamic upListener, ::Dynamic pressListener){
            	HX_STACKFRAME(&_hx_pos_4c695fbe9d02de60_53_remove)
HXLINE(  54)		if (::hx::IsNotNull( downListener )) {
HXLINE(  54)			this->downListeners->remove(downListener);
            		}
HXLINE(  55)		if (::hx::IsNotNull( upListener )) {
HXLINE(  55)			this->upListeners->remove(upListener);
            		}
HXLINE(  56)		if (::hx::IsNotNull( pressListener )) {
HXLINE(  56)			this->pressListeners->remove(pressListener);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Keyboard_obj,remove,(void))

void Keyboard_obj::show(){
            	HX_STACKFRAME(&_hx_pos_4c695fbe9d02de60_62_show)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Keyboard_obj,show,(void))

void Keyboard_obj::hide(){
            	HX_STACKFRAME(&_hx_pos_4c695fbe9d02de60_69_hide)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Keyboard_obj,hide,(void))

void Keyboard_obj::sendDownEvent(int code){
            	HX_STACKFRAME(&_hx_pos_fee907a19ed0ea89_97_sendDownEvent)
HXLINE(  98)		if (::hx::IsNotNull( ::kha::netsync::Session_obj::the() )) {
HXLINE(  49)			 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(5);
HXLINE(  50)			{
HXLINE(  50)				bytes->b[0] = ( (unsigned char)(0) );
HXDLIN(  50)				bytes->b[1] = ( (unsigned char)(0) );
HXDLIN(  50)				bytes->b[2] = ( (unsigned char)(0) );
HXDLIN(  50)				bytes->b[3] = ( (unsigned char)(0) );
            			}
HXLINE(  89)			bytes->b[4] = ( (unsigned char)(code) );
HXLINE( 100)			 ::kha::netsync::Session _hx_tmp = ::kha::netsync::Session_obj::the();
HXDLIN( 100)			_hx_tmp->sendControllerUpdate(this->_id(),bytes);
            		}
HXLINE(  91)		{
HXLINE(  91)			int _g = 0;
HXDLIN(  91)			::Array< ::Dynamic> _g1 = this->downListeners;
HXDLIN(  91)			while((_g < _g1->length)){
HXLINE(  91)				 ::Dynamic listener = _g1->__get(_g);
HXDLIN(  91)				_g = (_g + 1);
HXLINE(  92)				listener(code);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Keyboard_obj,sendDownEvent,(void))

void Keyboard_obj::sendUpEvent(int code){
            	HX_STACKFRAME(&_hx_pos_fee907a19ed0ea89_97_sendUpEvent)
HXLINE(  98)		if (::hx::IsNotNull( ::kha::netsync::Session_obj::the() )) {
HXLINE(  49)			 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(5);
HXLINE(  50)			{
HXLINE(  50)				bytes->b[0] = ( (unsigned char)(1) );
HXDLIN(  50)				bytes->b[1] = ( (unsigned char)(0) );
HXDLIN(  50)				bytes->b[2] = ( (unsigned char)(0) );
HXDLIN(  50)				bytes->b[3] = ( (unsigned char)(0) );
            			}
HXLINE(  89)			bytes->b[4] = ( (unsigned char)(code) );
HXLINE( 100)			 ::kha::netsync::Session _hx_tmp = ::kha::netsync::Session_obj::the();
HXDLIN( 100)			_hx_tmp->sendControllerUpdate(this->_id(),bytes);
            		}
HXLINE( 101)		{
HXLINE( 101)			int _g = 0;
HXDLIN( 101)			::Array< ::Dynamic> _g1 = this->upListeners;
HXDLIN( 101)			while((_g < _g1->length)){
HXLINE( 101)				 ::Dynamic listener = _g1->__get(_g);
HXDLIN( 101)				_g = (_g + 1);
HXLINE( 102)				listener(code);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Keyboard_obj,sendUpEvent,(void))

void Keyboard_obj::sendPressEvent(::String _hx_char){
            	HX_STACKFRAME(&_hx_pos_fee907a19ed0ea89_97_sendPressEvent)
HXLINE(  98)		if (::hx::IsNotNull( ::kha::netsync::Session_obj::the() )) {
HXLINE(  49)			 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(5);
HXLINE(  50)			{
HXLINE(  50)				bytes->b[0] = ( (unsigned char)(2) );
HXDLIN(  50)				bytes->b[1] = ( (unsigned char)(0) );
HXDLIN(  50)				bytes->b[2] = ( (unsigned char)(0) );
HXDLIN(  50)				bytes->b[3] = ( (unsigned char)(0) );
            			}
HXLINE(  68)			{
HXLINE(  68)				int v = ( (int)(_hx_char.charCodeAt(0)) );
HXDLIN(  68)				bytes->b[4] = ( (unsigned char)(v) );
            			}
HXLINE( 100)			 ::kha::netsync::Session _hx_tmp = ::kha::netsync::Session_obj::the();
HXDLIN( 100)			_hx_tmp->sendControllerUpdate(this->_id(),bytes);
            		}
HXLINE( 108)		{
HXLINE( 108)			int _g = 0;
HXDLIN( 108)			::Array< ::Dynamic> _g1 = this->pressListeners;
HXDLIN( 108)			while((_g < _g1->length)){
HXLINE( 108)				 ::Dynamic listener = _g1->__get(_g);
HXDLIN( 108)				_g = (_g + 1);
HXLINE( 109)				listener(_hx_char);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Keyboard_obj,sendPressEvent,(void))

void Keyboard_obj::_receive( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_fee907a19ed0ea89_188__receive)
HXLINE( 117)		int funcindex = (((( (int)(bytes->b->__get(0)) ) | (( (int)(bytes->b->__get(1)) ) << 8)) | (( (int)(bytes->b->__get(2)) ) << 16)) | (( (int)(bytes->b->__get(3)) ) << 24));
HXLINE( 190)		if ((funcindex == 0)) {
HXLINE( 177)			int input0 = ( (int)(bytes->b->__get(4)) );
HXLINE( 192)			this->sendDownEvent(input0);
HXLINE( 193)			return;
            		}
HXLINE( 190)		if ((funcindex == 1)) {
HXLINE( 177)			int input0 = ( (int)(bytes->b->__get(4)) );
HXLINE( 192)			this->sendUpEvent(input0);
HXLINE( 193)			return;
            		}
HXLINE( 190)		if ((funcindex == 2)) {
HXLINE( 153)			::String input0 = ::String::fromCharCode(( (int)(bytes->b->__get(4)) ));
HXLINE( 192)			this->sendPressEvent(input0);
HXLINE( 193)			return;
            		}
            	}


 ::kha::input::BlockInterventions Keyboard_obj::keyBehavior;

 ::kha::input::Keyboard Keyboard_obj::get(::hx::Null< int >  __o_num){
            		int num = __o_num.Default(0);
            	HX_STACKFRAME(&_hx_pos_4c695fbe9d02de60_23_get)
HXDLIN(  23)		return ::kha::SystemImpl_obj::getKeyboard(num);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Keyboard_obj,get,return )

void Keyboard_obj::disableSystemInterventions( ::kha::input::BlockInterventions behavior){
            	HX_STACKFRAME(&_hx_pos_4c695fbe9d02de60_35_disableSystemInterventions)
HXDLIN(  35)		::kha::input::Keyboard_obj::keyBehavior = behavior;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Keyboard_obj,disableSystemInterventions,(void))

 ::kha::input::Keyboard Keyboard_obj::instance;


::hx::ObjectPtr< Keyboard_obj > Keyboard_obj::__new() {
	::hx::ObjectPtr< Keyboard_obj > __this = new Keyboard_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Keyboard_obj > Keyboard_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Keyboard_obj *__this = (Keyboard_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Keyboard_obj), true, "kha.input.Keyboard"));
	*(void **)__this = Keyboard_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Keyboard_obj::Keyboard_obj()
{
}

void Keyboard_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Keyboard);
	HX_MARK_MEMBER_NAME(downListeners,"downListeners");
	HX_MARK_MEMBER_NAME(upListeners,"upListeners");
	HX_MARK_MEMBER_NAME(pressListeners,"pressListeners");
	 ::kha::netsync::Controller_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Keyboard_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(downListeners,"downListeners");
	HX_VISIT_MEMBER_NAME(upListeners,"upListeners");
	HX_VISIT_MEMBER_NAME(pressListeners,"pressListeners");
	 ::kha::netsync::Controller_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Keyboard_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
		if (HX_FIELD_EQ(inName,"hide") ) { return ::hx::Val( hide_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"notify") ) { return ::hx::Val( notify_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_receive") ) { return ::hx::Val( _receive_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"upListeners") ) { return ::hx::Val( upListeners ); }
		if (HX_FIELD_EQ(inName,"sendUpEvent") ) { return ::hx::Val( sendUpEvent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"downListeners") ) { return ::hx::Val( downListeners ); }
		if (HX_FIELD_EQ(inName,"sendDownEvent") ) { return ::hx::Val( sendDownEvent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pressListeners") ) { return ::hx::Val( pressListeners ); }
		if (HX_FIELD_EQ(inName,"sendPressEvent") ) { return ::hx::Val( sendPressEvent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Keyboard_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyBehavior") ) { outValue = ( keyBehavior ); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"disableSystemInterventions") ) { outValue = disableSystemInterventions_dyn(); return true; }
	}
	return false;
}

::hx::Val Keyboard_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"upListeners") ) { _hx_set_upListeners(HX_CTX_GET,inValue.Cast< ::Array< ::Dynamic> >()); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"downListeners") ) { _hx_set_downListeners(HX_CTX_GET,inValue.Cast< ::Array< ::Dynamic> >()); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pressListeners") ) { _hx_set_pressListeners(HX_CTX_GET,inValue.Cast< ::Array< ::Dynamic> >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Keyboard_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::kha::input::Keyboard >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyBehavior") ) { keyBehavior=ioValue.Cast<  ::kha::input::BlockInterventions >(); return true; }
	}
	return false;
}

void Keyboard_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("downListeners",bd,30,f6,dd));
	outFields->push(HX_("upListeners",a4,bb,9c,9b));
	outFields->push(HX_("pressListeners",7c,e9,d1,06));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Keyboard_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Keyboard_obj,downListeners),HX_("downListeners",bd,30,f6,dd)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Keyboard_obj,upListeners),HX_("upListeners",a4,bb,9c,9b)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Keyboard_obj,pressListeners),HX_("pressListeners",7c,e9,d1,06)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Keyboard_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::kha::input::BlockInterventions */ ,(void *) &Keyboard_obj::keyBehavior,HX_("keyBehavior",51,0d,b7,52)},
	{::hx::fsObject /*  ::kha::input::Keyboard */ ,(void *) &Keyboard_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Keyboard_obj_sMemberFields[] = {
	HX_("notify",c9,da,b8,31),
	HX_("remove",44,9c,88,04),
	HX_("show",fd,d4,52,4c),
	HX_("hide",c2,34,0e,45),
	HX_("downListeners",bd,30,f6,dd),
	HX_("upListeners",a4,bb,9c,9b),
	HX_("pressListeners",7c,e9,d1,06),
	HX_("sendDownEvent",f0,05,55,f0),
	HX_("sendUpEvent",57,3b,46,5c),
	HX_("sendPressEvent",ff,44,bf,d9),
	HX_("_receive",64,bb,10,64),
	::String(null()) };

static void Keyboard_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Keyboard_obj::keyBehavior,"keyBehavior");
	HX_MARK_MEMBER_NAME(Keyboard_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Keyboard_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Keyboard_obj::keyBehavior,"keyBehavior");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::instance,"instance");
};

#endif

::hx::Class Keyboard_obj::__mClass;

static ::String Keyboard_obj_sStaticFields[] = {
	HX_("keyBehavior",51,0d,b7,52),
	HX_("get",96,80,4e,00),
	HX_("disableSystemInterventions",05,5b,c9,d3),
	HX_("instance",95,1f,e1,59),
	::String(null())
};

void Keyboard_obj::__register()
{
	Keyboard_obj _hx_dummy;
	Keyboard_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.input.Keyboard",b5,32,77,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Keyboard_obj::__GetStatic;
	__mClass->mSetStaticField = &Keyboard_obj::__SetStatic;
	__mClass->mMarkFunc = Keyboard_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Keyboard_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Keyboard_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Keyboard_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Keyboard_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Keyboard_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Keyboard_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Keyboard_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4c695fbe9d02de60_15_boot)
HXDLIN(  15)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("sendPressEvent",ff,44,bf,d9), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("input",0a,c4,1d,be),null())))
            				->setFixed(1,HX_("sendDownEvent",f0,05,55,f0), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("input",0a,c4,1d,be),null())))
            				->setFixed(2,HX_("sendUpEvent",57,3b,46,5c), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("input",0a,c4,1d,be),null()))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_4c695fbe9d02de60_16_boot)
HXDLIN(  16)		keyBehavior = ::kha::input::BlockInterventions_obj::Default_dyn();
            	}
}

} // end namespace kha
} // end namespace input
