// Generated by Haxe 4.1.3
#ifndef INCLUDED_kha_Framebuffer
#define INCLUDED_kha_Framebuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Canvas
#include <hxinc/kha/Canvas.h>
#endif
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Framebuffer)
HX_DECLARE_CLASS2(kha,graphics1,Graphics)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)

namespace kha{


class HXCPP_CLASS_ATTRIBUTES Framebuffer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Framebuffer_obj OBJ_;
		Framebuffer_obj();

	public:
		enum { _hx_ClassId = 0x725e5229 };

		void __construct(int window,::Dynamic g1, ::kha::graphics2::Graphics g2,::Dynamic g4);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.Framebuffer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"kha.Framebuffer"); }
		static ::hx::ObjectPtr< Framebuffer_obj > __new(int window,::Dynamic g1, ::kha::graphics2::Graphics g2,::Dynamic g4);
		static ::hx::ObjectPtr< Framebuffer_obj > __alloc(::hx::Ctx *_hx_ctx,int window,::Dynamic g1, ::kha::graphics2::Graphics g2,::Dynamic g4);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Framebuffer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Framebuffer",cd,ac,7a,5e); }

		int window;
		::Dynamic graphics1;
		inline ::Dynamic _hx_set_graphics1(::hx::StackContext *_hx_ctx,::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return graphics1=_hx_v; }
		 ::kha::graphics2::Graphics graphics2;
		inline  ::kha::graphics2::Graphics _hx_set_graphics2(::hx::StackContext *_hx_ctx, ::kha::graphics2::Graphics _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return graphics2=_hx_v; }
		::Dynamic graphics4;
		inline ::Dynamic _hx_set_graphics4(::hx::StackContext *_hx_ctx,::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return graphics4=_hx_v; }
		void init(::Dynamic g1, ::kha::graphics2::Graphics g2,::Dynamic g4);
		::Dynamic init_dyn();

		::Dynamic get_g1();
		::Dynamic get_g1_dyn();

		 ::kha::graphics2::Graphics get_g2();
		::Dynamic get_g2_dyn();

		::Dynamic get_g4();
		::Dynamic get_g4_dyn();

		int width;
		int get_width();
		::Dynamic get_width_dyn();

		int height;
		int get_height();
		::Dynamic get_height_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Framebuffer */ 
