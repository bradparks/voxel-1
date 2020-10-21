// Generated by Haxe 4.1.3
#ifndef INCLUDED_kha__WindowOptions_WindowFeatures_Impl_
#define INCLUDED_kha__WindowOptions_WindowFeatures_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,_WindowOptions,WindowFeatures_Impl_)

namespace kha{
namespace _WindowOptions{


class HXCPP_CLASS_ATTRIBUTES WindowFeatures_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef WindowFeatures_Impl__obj OBJ_;
		WindowFeatures_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7b70fa3c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha._WindowOptions.WindowFeatures_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"kha._WindowOptions.WindowFeatures_Impl_"); }

		inline static ::hx::ObjectPtr< WindowFeatures_Impl__obj > __new() {
			::hx::ObjectPtr< WindowFeatures_Impl__obj > __this = new WindowFeatures_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< WindowFeatures_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			WindowFeatures_Impl__obj *__this = (WindowFeatures_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WindowFeatures_Impl__obj), false, "kha._WindowOptions.WindowFeatures_Impl_"));
			*(void **)__this = WindowFeatures_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WindowFeatures_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WindowFeatures_Impl_",8d,9d,5e,f7); }

		static void __boot();
		static int None;
		static int FeatureResizable;
		static int FeatureMinimizable;
		static int FeatureMaximizable;
		static int FeatureBorderless;
		static int FeatureOnTop;
		static int _new(int value);
		static ::Dynamic _new_dyn();

};

} // end namespace kha
} // end namespace _WindowOptions

#endif /* INCLUDED_kha__WindowOptions_WindowFeatures_Impl_ */ 
