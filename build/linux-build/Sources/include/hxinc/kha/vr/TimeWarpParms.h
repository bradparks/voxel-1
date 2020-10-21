// Generated by Haxe 4.1.3
#ifndef INCLUDED_kha_vr_TimeWarpParms
#define INCLUDED_kha_vr_TimeWarpParms

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_bd2a04d5a17b873f_53_new)
HX_DECLARE_CLASS2(kha,vr,TimeWarpImage)
HX_DECLARE_CLASS2(kha,vr,TimeWarpParms)

namespace kha{
namespace vr{


class HXCPP_CLASS_ATTRIBUTES TimeWarpParms_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TimeWarpParms_obj OBJ_;
		TimeWarpParms_obj();

	public:
		enum { _hx_ClassId = 0x63749192 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.vr.TimeWarpParms")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"kha.vr.TimeWarpParms"); }

		inline static ::hx::ObjectPtr< TimeWarpParms_obj > __new() {
			::hx::ObjectPtr< TimeWarpParms_obj > __this = new TimeWarpParms_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TimeWarpParms_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TimeWarpParms_obj *__this = (TimeWarpParms_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TimeWarpParms_obj), true, "kha.vr.TimeWarpParms"));
			*(void **)__this = TimeWarpParms_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_bd2a04d5a17b873f_53_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TimeWarpParms_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TimeWarpParms",b2,4d,f4,8f); }

		 ::kha::vr::TimeWarpImage LeftImage;
		inline  ::kha::vr::TimeWarpImage _hx_set_LeftImage(::hx::StackContext *_hx_ctx, ::kha::vr::TimeWarpImage _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return LeftImage=_hx_v; }
		 ::kha::vr::TimeWarpImage RightImage;
		inline  ::kha::vr::TimeWarpImage _hx_set_RightImage(::hx::StackContext *_hx_ctx, ::kha::vr::TimeWarpImage _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return RightImage=_hx_v; }
		 ::kha::vr::TimeWarpImage LeftOverlay;
		inline  ::kha::vr::TimeWarpImage _hx_set_LeftOverlay(::hx::StackContext *_hx_ctx, ::kha::vr::TimeWarpImage _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return LeftOverlay=_hx_v; }
		 ::kha::vr::TimeWarpImage RightOverlay;
		inline  ::kha::vr::TimeWarpImage _hx_set_RightOverlay(::hx::StackContext *_hx_ctx, ::kha::vr::TimeWarpImage _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return RightOverlay=_hx_v; }
};

} // end namespace kha
} // end namespace vr

#endif /* INCLUDED_kha_vr_TimeWarpParms */ 
