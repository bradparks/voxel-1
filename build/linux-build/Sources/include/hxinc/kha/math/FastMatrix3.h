// Generated by Haxe 4.1.3
#ifndef INCLUDED_kha_math_FastMatrix3
#define INCLUDED_kha_math_FastMatrix3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_213cce7b618b8029_13_new)
HX_DECLARE_CLASS2(kha,math,FastMatrix3)
HX_DECLARE_CLASS2(kha,math,Matrix3)

namespace kha{
namespace math{


class HXCPP_CLASS_ATTRIBUTES FastMatrix3_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FastMatrix3_obj OBJ_;
		FastMatrix3_obj();

	public:
		enum { _hx_ClassId = 0x1bbfb0ae };

		void __construct(float _00,float _10,float _20,float _01,float _11,float _21,float _02,float _12,float _22);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.math.FastMatrix3")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"kha.math.FastMatrix3"); }

		inline static ::hx::ObjectPtr< FastMatrix3_obj > __new(float _00,float _10,float _20,float _01,float _11,float _21,float _02,float _12,float _22) {
			::hx::ObjectPtr< FastMatrix3_obj > __this = new FastMatrix3_obj();
			__this->__construct(_00,_10,_20,_01,_11,_21,_02,_12,_22);
			return __this;
		}

		inline static ::hx::ObjectPtr< FastMatrix3_obj > __alloc(::hx::Ctx *_hx_ctx,float _00,float _10,float _20,float _01,float _11,float _21,float _02,float _12,float _22) {
			FastMatrix3_obj *__this = (FastMatrix3_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FastMatrix3_obj), false, "kha.math.FastMatrix3"));
			*(void **)__this = FastMatrix3_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_213cce7b618b8029_13_new)
HXLINE(  14)		( ( ::kha::math::FastMatrix3)(__this) )->_00 = _00;
HXDLIN(  14)		( ( ::kha::math::FastMatrix3)(__this) )->_10 = _10;
HXDLIN(  14)		( ( ::kha::math::FastMatrix3)(__this) )->_20 = _20;
HXLINE(  15)		( ( ::kha::math::FastMatrix3)(__this) )->_01 = _01;
HXDLIN(  15)		( ( ::kha::math::FastMatrix3)(__this) )->_11 = _11;
HXDLIN(  15)		( ( ::kha::math::FastMatrix3)(__this) )->_21 = _21;
HXLINE(  16)		( ( ::kha::math::FastMatrix3)(__this) )->_02 = _02;
HXDLIN(  16)		( ( ::kha::math::FastMatrix3)(__this) )->_12 = _12;
HXDLIN(  16)		( ( ::kha::math::FastMatrix3)(__this) )->_22 = _22;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FastMatrix3_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FastMatrix3",76,0b,0f,27); }

		static void __boot();
		static int width;
		static int height;
		static  ::kha::math::FastMatrix3 fromMatrix3( ::kha::math::Matrix3 m);
		static ::Dynamic fromMatrix3_dyn();

		float _00;
		float _10;
		float _20;
		float _01;
		float _11;
		float _21;
		float _02;
		float _12;
		float _22;
};

} // end namespace kha
} // end namespace math

#endif /* INCLUDED_kha_math_FastMatrix3 */ 
