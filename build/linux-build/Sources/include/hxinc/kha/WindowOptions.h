// Generated by Haxe 4.1.3
#ifndef INCLUDED_kha_WindowOptions
#define INCLUDED_kha_WindowOptions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_953552e0cd74b8c7_18_new)
HX_DECLARE_CLASS1(kha,WindowOptions)

namespace kha{


class HXCPP_CLASS_ATTRIBUTES WindowOptions_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef WindowOptions_obj OBJ_;
		WindowOptions_obj();

	public:
		enum { _hx_ClassId = 0x7323298a };

		void __construct(::String title, ::Dynamic __o_x, ::Dynamic __o_y, ::Dynamic __o_width, ::Dynamic __o_height, ::Dynamic __o_display, ::Dynamic __o_visible, ::Dynamic windowFeatures, ::Dynamic __o_mode);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.WindowOptions")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"kha.WindowOptions"); }

		inline static ::hx::ObjectPtr< WindowOptions_obj > __new(::String title, ::Dynamic __o_x, ::Dynamic __o_y, ::Dynamic __o_width, ::Dynamic __o_height, ::Dynamic __o_display, ::Dynamic __o_visible, ::Dynamic windowFeatures, ::Dynamic __o_mode) {
			::hx::ObjectPtr< WindowOptions_obj > __this = new WindowOptions_obj();
			__this->__construct(title,__o_x,__o_y,__o_width,__o_height,__o_display,__o_visible,windowFeatures,__o_mode);
			return __this;
		}

		inline static ::hx::ObjectPtr< WindowOptions_obj > __alloc(::hx::Ctx *_hx_ctx,::String title, ::Dynamic __o_x, ::Dynamic __o_y, ::Dynamic __o_width, ::Dynamic __o_height, ::Dynamic __o_display, ::Dynamic __o_visible, ::Dynamic windowFeatures, ::Dynamic __o_mode) {
			WindowOptions_obj *__this = (WindowOptions_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WindowOptions_obj), true, "kha.WindowOptions"));
			*(void **)__this = WindowOptions_obj::_hx_vtable;
{
            		 ::Dynamic x = __o_x;
            		if (::hx::IsNull(__o_x)) x = -1;
            		 ::Dynamic y = __o_y;
            		if (::hx::IsNull(__o_y)) y = -1;
            		 ::Dynamic width = __o_width;
            		if (::hx::IsNull(__o_width)) width = 800;
            		 ::Dynamic height = __o_height;
            		if (::hx::IsNull(__o_height)) height = 600;
            		 ::Dynamic display = __o_display;
            		if (::hx::IsNull(__o_display)) display = -1;
            		 ::Dynamic visible = __o_visible;
            		if (::hx::IsNull(__o_visible)) visible = true;
            		 ::Dynamic mode = __o_mode;
            		if (::hx::IsNull(__o_mode)) mode = 0;
            	HX_GC_STACKFRAME(&_hx_pos_953552e0cd74b8c7_18_new)
HXLINE(  27)		( ( ::kha::WindowOptions)(__this) )->mode = 0;
HXLINE(  26)		( ( ::kha::WindowOptions)(__this) )->windowFeatures = ((1 | 4) | 2);
HXLINE(  25)		( ( ::kha::WindowOptions)(__this) )->visible = true;
HXLINE(  24)		( ( ::kha::WindowOptions)(__this) )->display = -1;
HXLINE(  23)		( ( ::kha::WindowOptions)(__this) )->height = 600;
HXLINE(  22)		( ( ::kha::WindowOptions)(__this) )->width = 800;
HXLINE(  21)		( ( ::kha::WindowOptions)(__this) )->y = -1;
HXLINE(  20)		( ( ::kha::WindowOptions)(__this) )->x = -1;
HXLINE(  19)		( ( ::kha::WindowOptions)(__this) )->_hx_set_title(HX_CTX, null());
HXLINE(  31)		( ( ::kha::WindowOptions)(__this) )->_hx_set_title(HX_CTX, title);
HXLINE(  32)		( ( ::kha::WindowOptions)(__this) )->x = ( (int)(x) );
HXLINE(  33)		( ( ::kha::WindowOptions)(__this) )->y = ( (int)(y) );
HXLINE(  34)		( ( ::kha::WindowOptions)(__this) )->width = ( (int)(width) );
HXLINE(  35)		( ( ::kha::WindowOptions)(__this) )->height = ( (int)(height) );
HXLINE(  36)		( ( ::kha::WindowOptions)(__this) )->display = ( (int)(display) );
HXLINE(  37)		( ( ::kha::WindowOptions)(__this) )->visible = ( (bool)(visible) );
HXLINE(  38)		int _hx_tmp;
HXDLIN(  38)		if (::hx::IsNull( windowFeatures )) {
HXLINE(  38)			_hx_tmp = ((1 | 4) | 2);
            		}
            		else {
HXLINE(  38)			_hx_tmp = ( (int)(windowFeatures) );
            		}
HXDLIN(  38)		( ( ::kha::WindowOptions)(__this) )->windowFeatures = _hx_tmp;
HXLINE(  39)		( ( ::kha::WindowOptions)(__this) )->mode = ( (int)(mode) );
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WindowOptions_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WindowOptions",2e,75,06,e3); }

		::String title;
		inline ::String _hx_set_title(::hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return title=_hx_v; }
		int x;
		int y;
		int width;
		int height;
		int display;
		bool visible;
		int windowFeatures;
		int mode;
};

} // end namespace kha

#endif /* INCLUDED_kha_WindowOptions */ 
