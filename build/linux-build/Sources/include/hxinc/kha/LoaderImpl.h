// Generated by Haxe 4.1.3
#ifndef INCLUDED_kha_LoaderImpl
#define INCLUDED_kha_LoaderImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Kravur)
HX_DECLARE_CLASS1(kha,LoaderImpl)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Sound)
HX_DECLARE_CLASS1(kha,Video)
HX_DECLARE_CLASS2(kha,arrays,Float32ArrayPrivate)
HX_DECLARE_CLASS2(kha,internal,BytesBlob)

namespace kha{


class HXCPP_CLASS_ATTRIBUTES LoaderImpl_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LoaderImpl_obj OBJ_;
		LoaderImpl_obj();

	public:
		enum { _hx_ClassId = 0x5b0436d7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.LoaderImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"kha.LoaderImpl"); }

		inline static ::hx::ObjectPtr< LoaderImpl_obj > __new() {
			::hx::ObjectPtr< LoaderImpl_obj > __this = new LoaderImpl_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< LoaderImpl_obj > __alloc(::hx::Ctx *_hx_ctx) {
			LoaderImpl_obj *__this = (LoaderImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LoaderImpl_obj), false, "kha.LoaderImpl"));
			*(void **)__this = LoaderImpl_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LoaderImpl_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LoaderImpl",b3,fc,94,ad); }

		static void __boot();
		static  ::haxe::ds::IntMap blobCallbacks;
		static  ::haxe::ds::IntMap imageCallbacks;
		static  ::haxe::ds::IntMap soundCallbacks;
		static void loadSoundFromDescription( ::Dynamic desc, ::Dynamic done, ::Dynamic failed);
		static ::Dynamic loadSoundFromDescription_dyn();

		static ::cpp::UInt64 loadSound(::String filename);
		static ::Dynamic loadSound_dyn();

		static ::Array< ::String > getSoundFormats();
		static ::Dynamic getSoundFormats_dyn();

		static void loadImageFromDescription( ::Dynamic desc, ::Dynamic done, ::Dynamic failed);
		static ::Dynamic loadImageFromDescription_dyn();

		static ::cpp::UInt64 loadImage(::String filename,bool readable);
		static ::Dynamic loadImage_dyn();

		static ::Array< ::String > getImageFormats();
		static ::Dynamic getImageFormats_dyn();

		static void loadBlobFromDescription( ::Dynamic desc, ::Dynamic done, ::Dynamic failed);
		static ::Dynamic loadBlobFromDescription_dyn();

		static ::cpp::UInt64 loadBlob(::String filename);
		static ::Dynamic loadBlob_dyn();

		static void loadFontFromDescription( ::Dynamic desc, ::Dynamic done, ::Dynamic failed);
		static ::Dynamic loadFontFromDescription_dyn();

		static void loadVideoFromDescription( ::Dynamic desc, ::Dynamic done, ::Dynamic failed);
		static ::Dynamic loadVideoFromDescription_dyn();

		static ::String videoFormat();
		static ::Dynamic videoFormat_dyn();

		static ::Array< ::String > getVideoFormats();
		static ::Dynamic getVideoFormats_dyn();

		static void showKeyboard();
		static ::Dynamic showKeyboard_dyn();

		static void hideKeyboard();
		static ::Dynamic hideKeyboard_dyn();

		static void loadURL(::String url);
		static ::Dynamic loadURL_dyn();

		static void blobLoaded(::cpp::UInt64 index,::Array< unsigned char > bytes);
		static ::Dynamic blobLoaded_dyn();

		static void blobErrored(::cpp::UInt64 index,::String filename);
		static ::Dynamic blobErrored_dyn();

		static void soundLoadedCompressed(::cpp::UInt64 index,::Array< unsigned char > bytes);
		static ::Dynamic soundLoadedCompressed_dyn();

		static void soundLoadedUncompressed(::cpp::UInt64 index, ::kha::arrays::Float32ArrayPrivate samples,int channels,int sampleRate,Float length);
		static ::Dynamic soundLoadedUncompressed_dyn();

		static void soundErrored(::cpp::UInt64 index,::String filename);
		static ::Dynamic soundErrored_dyn();

		static  ::kha::arrays::Float32ArrayPrivate createFloat32Array();
		static ::Dynamic createFloat32Array_dyn();

		static  ::kha::Image createEmptyImage(bool readable,bool floatFormat);
		static ::Dynamic createEmptyImage_dyn();

		static void imageLoaded(::cpp::UInt64 index, ::kha::Image image);
		static ::Dynamic imageLoaded_dyn();

		static void imageErrored(::cpp::UInt64 index,::String filename);
		static ::Dynamic imageErrored_dyn();

		static void tick();
		static ::Dynamic tick_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_LoaderImpl */ 
