// Generated by Haxe 4.1.3
#include <hxcpp.h>

#ifndef INCLUDED_kha_arrays_Float32ArrayPrivate
#include <hxinc/kha/arrays/Float32ArrayPrivate.h>
#endif
#ifndef INCLUDED_kha_arrays_Int16ArrayPrivate
#include <hxinc/kha/arrays/Int16ArrayPrivate.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexBuffer
#include <hxinc/kha/graphics4/VertexBuffer.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexElement
#include <hxinc/kha/graphics4/VertexElement.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexStructure
#include <hxinc/kha/graphics4/VertexStructure.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7b4014266ee77a83_15_new,"kha.graphics4.VertexBuffer","new",0x19bc5fa5,"kha.graphics4.VertexBuffer.new","kha/graphics4/VertexBuffer.hx",15,0x9edcaa69)
HX_LOCAL_STACK_FRAME(_hx_pos_7b4014266ee77a83_25_delete,"kha.graphics4.VertexBuffer","delete",0xd58f4a06,"kha.graphics4.VertexBuffer.delete","kha/graphics4/VertexBuffer.hx",25,0x9edcaa69)
HX_LOCAL_STACK_FRAME(_hx_pos_7b4014266ee77a83_59_init,"kha.graphics4.VertexBuffer","init",0x67d0082b,"kha.graphics4.VertexBuffer.init","kha/graphics4/VertexBuffer.hx",59,0x9edcaa69)
HX_LOCAL_STACK_FRAME(_hx_pos_7b4014266ee77a83_69_lockPrivate,"kha.graphics4.VertexBuffer","lockPrivate",0x0671b89d,"kha.graphics4.VertexBuffer.lockPrivate","kha/graphics4/VertexBuffer.hx",69,0x9edcaa69)
HX_LOCAL_STACK_FRAME(_hx_pos_7b4014266ee77a83_74_lock,"kha.graphics4.VertexBuffer","lock",0x69cc6906,"kha.graphics4.VertexBuffer.lock","kha/graphics4/VertexBuffer.hx",74,0x9edcaa69)
HX_LOCAL_STACK_FRAME(_hx_pos_7b4014266ee77a83_87_lockInt16Private,"kha.graphics4.VertexBuffer","lockInt16Private",0x8a4903f5,"kha.graphics4.VertexBuffer.lockInt16Private","kha/graphics4/VertexBuffer.hx",87,0x9edcaa69)
HX_LOCAL_STACK_FRAME(_hx_pos_7b4014266ee77a83_90_lockInt16,"kha.graphics4.VertexBuffer","lockInt16",0xc30922ae,"kha.graphics4.VertexBuffer.lockInt16","kha/graphics4/VertexBuffer.hx",90,0x9edcaa69)
HX_LOCAL_STACK_FRAME(_hx_pos_7b4014266ee77a83_98_unlockPrivate,"kha.graphics4.VertexBuffer","unlockPrivate",0x96cf8a24,"kha.graphics4.VertexBuffer.unlockPrivate","kha/graphics4/VertexBuffer.hx",98,0x9edcaa69)
HX_LOCAL_STACK_FRAME(_hx_pos_7b4014266ee77a83_103_unlock,"kha.graphics4.VertexBuffer","unlock",0xd0432c9f,"kha.graphics4.VertexBuffer.unlock","kha/graphics4/VertexBuffer.hx",103,0x9edcaa69)
HX_LOCAL_STACK_FRAME(_hx_pos_7b4014266ee77a83_108_stride,"kha.graphics4.VertexBuffer","stride",0x7be6a9f4,"kha.graphics4.VertexBuffer.stride","kha/graphics4/VertexBuffer.hx",108,0x9edcaa69)
HX_LOCAL_STACK_FRAME(_hx_pos_7b4014266ee77a83_113_count,"kha.graphics4.VertexBuffer","count",0xfa81ef54,"kha.graphics4.VertexBuffer.count","kha/graphics4/VertexBuffer.hx",113,0x9edcaa69)
HX_LOCAL_STACK_FRAME(_hx_pos_7b4014266ee77a83_119__unused1,"kha.graphics4.VertexBuffer","_unused1",0x4d4caa77,"kha.graphics4.VertexBuffer._unused1","kha/graphics4/VertexBuffer.hx",119,0x9edcaa69)
HX_LOCAL_STACK_FRAME(_hx_pos_7b4014266ee77a83_125__unused2,"kha.graphics4.VertexBuffer","_unused2",0x4d4caa78,"kha.graphics4.VertexBuffer._unused2","kha/graphics4/VertexBuffer.hx",125,0x9edcaa69)
namespace kha{
namespace graphics4{

void VertexBuffer_obj::__construct(int vertexCount, ::kha::graphics4::VertexStructure structure,int usage,::hx::Null< int >  __o_instanceDataStepRate,::hx::Null< bool >  __o_canRead){
            		int instanceDataStepRate = __o_instanceDataStepRate.Default(0);
            		bool canRead = __o_canRead.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_7b4014266ee77a83_15_new)
HXLINE(  72)		this->lastLockCount = 0;
HXLINE(  20)		this->init(vertexCount,structure,usage,instanceDataStepRate);
HXLINE(  21)		 ::kha::arrays::Float32ArrayPrivate this1 =  ::kha::arrays::Float32ArrayPrivate_obj::__alloc( HX_CTX ,0);
HXDLIN(  21)		this->_hx_set_data(HX_CTX, this1);
            	}

Dynamic VertexBuffer_obj::__CreateEmpty() { return new VertexBuffer_obj; }

void *VertexBuffer_obj::_hx_vtable = 0;

Dynamic VertexBuffer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VertexBuffer_obj > _hx_result = new VertexBuffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool VertexBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x05ba8351;
}

void VertexBuffer_obj::_hx_delete(){
            	HX_STACKFRAME(&_hx_pos_7b4014266ee77a83_25_delete)
HXDLIN(  25)		delete buffer; buffer = nullptr;;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer_obj,_hx_delete,(void))

void VertexBuffer_obj::init(int vertexCount, ::kha::graphics4::VertexStructure structure,int usage,int instanceDataStepRate){
            	HX_STACKFRAME(&_hx_pos_7b4014266ee77a83_59_init)
            	
		Kore::Graphics4::VertexStructure structure2;
		for (int i = 0; i < structure->size(); ++i) {
			Kore::Graphics4::VertexData data;
			switch (structure->get(i)->data) {
			case 0:
				data = Kore::Graphics4::Float1VertexData;
				break;
			case 1:
				data = Kore::Graphics4::Float2VertexData;
				break;
			case 2:
				data = Kore::Graphics4::Float3VertexData;
				break;
			case 3:
				data = Kore::Graphics4::Float4VertexData;
				break;
			case 4:
				data = Kore::Graphics4::Float4x4VertexData;
				break;
			case 5:
				data = Kore::Graphics4::Short2NormVertexData;
				break;
			case 6:
				data = Kore::Graphics4::Short4NormVertexData;
				break;
			}
			structure2.add(structure->get(i)->name, data);
		}
		buffer = new Kore::Graphics4::VertexBuffer(vertexCount, structure2, (Kore::Graphics4::Usage)usage, instanceDataStepRate);
	

            	}


HX_DEFINE_DYNAMIC_FUNC4(VertexBuffer_obj,init,(void))

 ::kha::arrays::Float32ArrayPrivate VertexBuffer_obj::lockPrivate(int start,int count){
            	HX_STACKFRAME(&_hx_pos_7b4014266ee77a83_69_lockPrivate)
            	
		data->self.data = buffer->lock(start, count);
		data->self.myLength = count * buffer->stride() / 4;
		return data;
	

HXDLIN(  69)		return this->data;
            	}


HX_DEFINE_DYNAMIC_FUNC2(VertexBuffer_obj,lockPrivate,return )

 ::kha::arrays::Float32ArrayPrivate VertexBuffer_obj::lock( ::Dynamic start, ::Dynamic count){
            	HX_STACKFRAME(&_hx_pos_7b4014266ee77a83_74_lock)
HXLINE(  75)		if (::hx::IsNull( start )) {
HXLINE(  75)			start = 0;
            		}
HXLINE(  76)		if (::hx::IsNull( count )) {
HXLINE(  76)			count = this->count();
            		}
HXLINE(  77)		this->lastLockCount = ( (int)(count) );
HXLINE(  78)		return this->lockPrivate(( (int)(start) ),( (int)(count) ));
            	}


HX_DEFINE_DYNAMIC_FUNC2(VertexBuffer_obj,lock,return )

 ::kha::arrays::Int16ArrayPrivate VertexBuffer_obj::lockInt16Private(int start,int count){
            	HX_STACKFRAME(&_hx_pos_7b4014266ee77a83_87_lockInt16Private)
            	
		dataInt16->self.data = (short*)buffer->lock(start, count);
		dataInt16->self.myLength = count * buffer->stride() / 2;
		return dataInt16;
	

HXDLIN(  87)		return this->dataInt16;
            	}


HX_DEFINE_DYNAMIC_FUNC2(VertexBuffer_obj,lockInt16Private,return )

 ::kha::arrays::Int16ArrayPrivate VertexBuffer_obj::lockInt16( ::Dynamic start, ::Dynamic count){
            	HX_GC_STACKFRAME(&_hx_pos_7b4014266ee77a83_90_lockInt16)
HXLINE(  91)		if (::hx::IsNull( start )) {
HXLINE(  91)			start = 0;
            		}
HXLINE(  92)		if (::hx::IsNull( count )) {
HXLINE(  92)			count = this->count();
            		}
HXLINE(  93)		if (::hx::IsNull( this->dataInt16 )) {
HXLINE(  93)			 ::kha::arrays::Int16ArrayPrivate this1 =  ::kha::arrays::Int16ArrayPrivate_obj::__alloc( HX_CTX ,0);
HXDLIN(  93)			this->_hx_set_dataInt16(HX_CTX, this1);
            		}
HXLINE(  94)		return this->lockInt16Private(( (int)(start) ),( (int)(count) ));
            	}


HX_DEFINE_DYNAMIC_FUNC2(VertexBuffer_obj,lockInt16,return )

void VertexBuffer_obj::unlockPrivate(int count){
            	HX_STACKFRAME(&_hx_pos_7b4014266ee77a83_98_unlockPrivate)
            	buffer->unlock(count); data->self.data = nullptr; if (!hx::IsNull(dataInt16)) dataInt16->self.data = nullptr;

            	}


HX_DEFINE_DYNAMIC_FUNC1(VertexBuffer_obj,unlockPrivate,(void))

void VertexBuffer_obj::unlock( ::Dynamic count){
            	HX_STACKFRAME(&_hx_pos_7b4014266ee77a83_103_unlock)
HXDLIN( 103)		int _hx_tmp;
HXDLIN( 103)		if (::hx::IsNull( count )) {
HXDLIN( 103)			_hx_tmp = this->lastLockCount;
            		}
            		else {
HXDLIN( 103)			_hx_tmp = ( (int)(count) );
            		}
HXDLIN( 103)		this->unlockPrivate(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(VertexBuffer_obj,unlock,(void))

int VertexBuffer_obj::stride(){
            	HX_STACKFRAME(&_hx_pos_7b4014266ee77a83_108_stride)
            	return buffer->stride();

HXDLIN( 108)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer_obj,stride,return )

int VertexBuffer_obj::count(){
            	HX_STACKFRAME(&_hx_pos_7b4014266ee77a83_113_count)
            	return buffer->count();

HXDLIN( 113)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer_obj,count,return )

 ::kha::graphics4::VertexElement VertexBuffer_obj::_unused1(){
            	HX_STACKFRAME(&_hx_pos_7b4014266ee77a83_119__unused1)
HXDLIN( 119)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer_obj,_unused1,return )

int VertexBuffer_obj::_unused2(){
            	HX_STACKFRAME(&_hx_pos_7b4014266ee77a83_125__unused2)
HXDLIN( 125)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer_obj,_unused2,return )


::hx::ObjectPtr< VertexBuffer_obj > VertexBuffer_obj::__new(int vertexCount, ::kha::graphics4::VertexStructure structure,int usage,::hx::Null< int >  __o_instanceDataStepRate,::hx::Null< bool >  __o_canRead) {
	::hx::ObjectPtr< VertexBuffer_obj > __this = new VertexBuffer_obj();
	__this->__construct(vertexCount,structure,usage,__o_instanceDataStepRate,__o_canRead);
	return __this;
}

::hx::ObjectPtr< VertexBuffer_obj > VertexBuffer_obj::__alloc(::hx::Ctx *_hx_ctx,int vertexCount, ::kha::graphics4::VertexStructure structure,int usage,::hx::Null< int >  __o_instanceDataStepRate,::hx::Null< bool >  __o_canRead) {
	VertexBuffer_obj *__this = (VertexBuffer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VertexBuffer_obj), true, "kha.graphics4.VertexBuffer"));
	*(void **)__this = VertexBuffer_obj::_hx_vtable;
	__this->__construct(vertexCount,structure,usage,__o_instanceDataStepRate,__o_canRead);
	return __this;
}

VertexBuffer_obj::VertexBuffer_obj()
{
}

void VertexBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexBuffer);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(dataInt16,"dataInt16");
	HX_MARK_MEMBER_NAME(lastLockCount,"lastLockCount");
	HX_MARK_END_CLASS();
}

void VertexBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(dataInt16,"dataInt16");
	HX_VISIT_MEMBER_NAME(lastLockCount,"lastLockCount");
}

::hx::Val VertexBuffer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"lock") ) { return ::hx::Val( lock_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return ::hx::Val( count_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"delete") ) { return ::hx::Val( _hx_delete_dyn() ); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return ::hx::Val( unlock_dyn() ); }
		if (HX_FIELD_EQ(inName,"stride") ) { return ::hx::Val( stride_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dataInt16") ) { return ::hx::Val( dataInt16 ); }
		if (HX_FIELD_EQ(inName,"lockInt16") ) { return ::hx::Val( lockInt16_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lockPrivate") ) { return ::hx::Val( lockPrivate_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lastLockCount") ) { return ::hx::Val( lastLockCount ); }
		if (HX_FIELD_EQ(inName,"unlockPrivate") ) { return ::hx::Val( unlockPrivate_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lockInt16Private") ) { return ::hx::Val( lockInt16Private_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool VertexBuffer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_unused1") ) { outValue = _unused1_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"_unused2") ) { outValue = _unused2_dyn(); return true; }
	}
	return false;
}

::hx::Val VertexBuffer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { _hx_set_data(HX_CTX_GET,inValue.Cast<  ::kha::arrays::Float32ArrayPrivate >()); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dataInt16") ) { _hx_set_dataInt16(HX_CTX_GET,inValue.Cast<  ::kha::arrays::Int16ArrayPrivate >()); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lastLockCount") ) { lastLockCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("dataInt16",0a,13,10,04));
	outFields->push(HX_("lastLockCount",ae,df,7d,83));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VertexBuffer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::kha::arrays::Float32ArrayPrivate */ ,(int)offsetof(VertexBuffer_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsObject /*  ::kha::arrays::Int16ArrayPrivate */ ,(int)offsetof(VertexBuffer_obj,dataInt16),HX_("dataInt16",0a,13,10,04)},
	{::hx::fsInt,(int)offsetof(VertexBuffer_obj,lastLockCount),HX_("lastLockCount",ae,df,7d,83)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VertexBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String VertexBuffer_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	HX_("dataInt16",0a,13,10,04),
	HX_("delete",2b,c0,d8,6a),
	HX_("init",10,3b,bb,45),
	HX_("lockPrivate",58,dc,50,90),
	HX_("lastLockCount",ae,df,7d,83),
	HX_("lock",eb,9b,b7,47),
	HX_("lockInt16Private",5a,7a,67,1a),
	HX_("lockInt16",a9,51,02,f9),
	HX_("unlockPrivate",9f,52,8b,b1),
	HX_("unlock",c4,a2,8c,65),
	HX_("stride",19,20,30,11),
	HX_("count",cf,44,63,4a),
	::String(null()) };

::hx::Class VertexBuffer_obj::__mClass;

static ::String VertexBuffer_obj_sStaticFields[] = {
	HX_("_unused1",dc,b3,7b,e0),
	HX_("_unused2",dd,b3,7b,e0),
	::String(null())
};

void VertexBuffer_obj::__register()
{
	VertexBuffer_obj _hx_dummy;
	VertexBuffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.graphics4.VertexBuffer",33,a9,88,81);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VertexBuffer_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(VertexBuffer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VertexBuffer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VertexBuffer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VertexBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VertexBuffer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics4
