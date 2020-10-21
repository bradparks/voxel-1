// Generated by Haxe 4.1.3
#ifndef INCLUDED_kha_audio2_Buffer
#define INCLUDED_kha_audio2_Buffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,arrays,Float32ArrayPrivate)
HX_DECLARE_CLASS2(kha,audio2,Buffer)

namespace kha{
namespace audio2{


class HXCPP_CLASS_ATTRIBUTES Buffer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Buffer_obj OBJ_;
		Buffer_obj();

	public:
		enum { _hx_ClassId = 0x60215bbc };

		void __construct(int size,int channels,int samplesPerSecond);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.audio2.Buffer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"kha.audio2.Buffer"); }
		static ::hx::ObjectPtr< Buffer_obj > __new(int size,int channels,int samplesPerSecond);
		static ::hx::ObjectPtr< Buffer_obj > __alloc(::hx::Ctx *_hx_ctx,int size,int channels,int samplesPerSecond);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Buffer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Buffer",20,31,29,05); }

		int channels;
		int samplesPerSecond;
		 ::kha::arrays::Float32ArrayPrivate data;
		inline  ::kha::arrays::Float32ArrayPrivate _hx_set_data(::hx::StackContext *_hx_ctx, ::kha::arrays::Float32ArrayPrivate _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return data=_hx_v; }
		int size;
		int readLocation;
		int writeLocation;
};

} // end namespace kha
} // end namespace audio2

#endif /* INCLUDED_kha_audio2_Buffer */ 
