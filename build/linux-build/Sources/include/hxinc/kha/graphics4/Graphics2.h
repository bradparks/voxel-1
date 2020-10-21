// Generated by Haxe 4.1.3
#ifndef INCLUDED_kha_graphics4_Graphics2
#define INCLUDED_kha_graphics4_Graphics2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_graphics2_Graphics
#include <hxinc/kha/graphics2/Graphics.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Kravur)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Video)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,ColoredShaderPainter)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,Graphics2)
HX_DECLARE_CLASS2(kha,graphics4,ImageShaderPainter)
HX_DECLARE_CLASS2(kha,graphics4,PipelineState)
HX_DECLARE_CLASS2(kha,graphics4,PipelineStateBase)
HX_DECLARE_CLASS2(kha,graphics4,TextShaderPainter)
HX_DECLARE_CLASS2(kha,graphics4,VertexStructure)
HX_DECLARE_CLASS2(kha,math,FastMatrix4)

namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES Graphics2_obj : public  ::kha::graphics2::Graphics_obj
{
	public:
		typedef  ::kha::graphics2::Graphics_obj super;
		typedef Graphics2_obj OBJ_;
		Graphics2_obj();

	public:
		enum { _hx_ClassId = 0x146c9ee2 };

		void __construct(::Dynamic canvas);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.Graphics2")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"kha.graphics4.Graphics2"); }
		static ::hx::ObjectPtr< Graphics2_obj > __new(::Dynamic canvas);
		static ::hx::ObjectPtr< Graphics2_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic canvas);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Graphics2_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Graphics2",e7,98,64,aa); }

		static void __boot();
		static  ::kha::graphics4::PipelineState videoPipeline;
		static  ::kha::graphics4::Graphics2 current;
		static int upperPowerOfTwo(int v);
		static ::Dynamic upperPowerOfTwo_dyn();

		static  ::kha::graphics4::VertexStructure createImageVertexStructure();
		static ::Dynamic createImageVertexStructure_dyn();

		static  ::kha::graphics4::PipelineState createImagePipeline( ::kha::graphics4::VertexStructure structure);
		static ::Dynamic createImagePipeline_dyn();

		static  ::kha::graphics4::VertexStructure createColoredVertexStructure();
		static ::Dynamic createColoredVertexStructure_dyn();

		static  ::kha::graphics4::PipelineState createColoredPipeline( ::kha::graphics4::VertexStructure structure);
		static ::Dynamic createColoredPipeline_dyn();

		static  ::kha::graphics4::VertexStructure createTextVertexStructure();
		static ::Dynamic createTextVertexStructure_dyn();

		static  ::kha::graphics4::PipelineState createTextPipeline( ::kha::graphics4::VertexStructure structure);
		static ::Dynamic createTextPipeline_dyn();

		int myColor;
		 ::kha::Kravur myFont;
		inline  ::kha::Kravur _hx_set_myFont(::hx::StackContext *_hx_ctx, ::kha::Kravur _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return myFont=_hx_v; }
		 ::kha::math::FastMatrix4 projectionMatrix;
		inline  ::kha::math::FastMatrix4 _hx_set_projectionMatrix(::hx::StackContext *_hx_ctx, ::kha::math::FastMatrix4 _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return projectionMatrix=_hx_v; }
		 ::kha::graphics4::ImageShaderPainter imagePainter;
		inline  ::kha::graphics4::ImageShaderPainter _hx_set_imagePainter(::hx::StackContext *_hx_ctx, ::kha::graphics4::ImageShaderPainter _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return imagePainter=_hx_v; }
		 ::kha::graphics4::ColoredShaderPainter coloredPainter;
		inline  ::kha::graphics4::ColoredShaderPainter _hx_set_coloredPainter(::hx::StackContext *_hx_ctx, ::kha::graphics4::ColoredShaderPainter _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return coloredPainter=_hx_v; }
		 ::kha::graphics4::TextShaderPainter textPainter;
		inline  ::kha::graphics4::TextShaderPainter _hx_set_textPainter(::hx::StackContext *_hx_ctx, ::kha::graphics4::TextShaderPainter _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return textPainter=_hx_v; }
		::Dynamic canvas;
		inline ::Dynamic _hx_set_canvas(::hx::StackContext *_hx_ctx,::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return canvas=_hx_v; }
		::Dynamic g;
		inline ::Dynamic _hx_set_g(::hx::StackContext *_hx_ctx,::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return g=_hx_v; }
		void setProjection();
		::Dynamic setProjection_dyn();

		void drawImage( ::kha::Image img,float x,float y);

		void drawScaledSubImage( ::kha::Image img,float sx,float sy,float sw,float sh,float dx,float dy,float dw,float dh);

		int get_color();

		int set_color(int color);

		void drawRect(Float x,Float y,Float width,Float height,::hx::Null< Float >  strength);

		void fillRect(Float x,Float y,Float width,Float height);

		void drawString(::String text,Float x,Float y);

		void drawCharacters(::Array< int > text,int start,int length,Float x,Float y);

		 ::kha::Kravur get_font();

		 ::kha::Kravur set_font( ::kha::Kravur font);

		int set_fontSize(int value);

		void drawLine(Float x1,Float y1,Float x2,Float y2,::hx::Null< Float >  strength);

		void fillTriangle(Float x1,Float y1,Float x2,Float y2,Float x3,Float y3);

		int myImageScaleQuality;
		int get_imageScaleQuality();

		int set_imageScaleQuality(int value);

		int myMipmapScaleQuality;
		int get_mipmapScaleQuality();

		int set_mipmapScaleQuality(int value);

		 ::haxe::ds::ObjectMap pipelineCache;
		inline  ::haxe::ds::ObjectMap _hx_set_pipelineCache(::hx::StackContext *_hx_ctx, ::haxe::ds::ObjectMap _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return pipelineCache=_hx_v; }
		 ::kha::graphics4::PipelineState lastPipeline;
		inline  ::kha::graphics4::PipelineState _hx_set_lastPipeline(::hx::StackContext *_hx_ctx, ::kha::graphics4::PipelineState _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return lastPipeline=_hx_v; }
		void setPipeline( ::kha::graphics4::PipelineState pipeline);

		bool scissorEnabled;
		int scissorX;
		int scissorY;
		int scissorW;
		int scissorH;
		void scissor(int x,int y,int width,int height);

		void disableScissor();

		void begin(::hx::Null< bool >  clear, ::Dynamic clearColor);

		void clear( ::Dynamic color);

		void flush();

		void end();

		virtual void drawVideoInternal( ::kha::Video video,Float x,Float y,Float width,Float height);
		::Dynamic drawVideoInternal_dyn();

		void drawVideo( ::kha::Video video,Float x,Float y,Float width,Float height);

};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_Graphics2 */ 
