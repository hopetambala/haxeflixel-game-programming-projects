#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__v2_AssetLibrary
#include <openfl/_v2/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl__v2_AssetType
#include <openfl/_v2/AssetType.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_media_Sound
#include <openfl/_v2/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__v2_net_URLRequest
#include <openfl/_v2/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl__v2_text_Font
#include <openfl/_v2/text/Font.h>
#endif
#ifndef INCLUDED_openfl__v2_text_FontStyle
#include <openfl/_v2/text/FontStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_text_FontType
#include <openfl/_v2/text/FontType.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_ByteArray
#include <openfl/_v2/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataInput
#include <openfl/_v2/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataOutput
#include <openfl/_v2/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IMemoryRange
#include <openfl/_v2/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

Void DefaultAssetLibrary_obj::__construct()
{
HX_STACK_FRAME("DefaultAssetLibrary","new",0xbc37e41e,"DefaultAssetLibrary.new","DefaultAssetLibrary.hx",32,0x0fc48912)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(37)
	this->type = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(36)
	this->path = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(35)
	this->className = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(43)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(45)
	super::__construct();
	HX_STACK_LINE(177)
	bool useManifest = false;		HX_STACK_VAR(useManifest,"useManifest");
	HX_STACK_LINE(178)
	useManifest = true;
	HX_STACK_LINE(179)
	useManifest = true;
	HX_STACK_LINE(180)
	useManifest = true;
	HX_STACK_LINE(181)
	useManifest = true;
	HX_STACK_LINE(182)
	useManifest = true;
	HX_STACK_LINE(183)
	useManifest = true;
	HX_STACK_LINE(184)
	useManifest = true;
	HX_STACK_LINE(185)
	useManifest = true;
	HX_STACK_LINE(186)
	useManifest = true;
	HX_STACK_LINE(187)
	useManifest = true;
	HX_STACK_LINE(188)
	useManifest = true;
	HX_STACK_LINE(189)
	useManifest = true;
	HX_STACK_LINE(190)
	useManifest = true;
	HX_STACK_LINE(191)
	useManifest = true;
	HX_STACK_LINE(192)
	useManifest = true;
	HX_STACK_LINE(193)
	useManifest = true;
	HX_STACK_LINE(194)
	useManifest = true;
	HX_STACK_LINE(195)
	useManifest = true;
	HX_STACK_LINE(196)
	useManifest = true;
	HX_STACK_LINE(199)
	if ((useManifest)){
		HX_STACK_LINE(201)
		this->loadManifest();
		HX_STACK_LINE(203)
		int _g1 = ::Sys_obj::args()->indexOf(HX_CSTRING("-livereload"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(203)
		if (((_g1 > (int)-1))){
			HX_STACK_LINE(205)
			Array< ::String > path = Array_obj< ::String >::__new().Add(::sys::FileSystem_obj::fullPath(HX_CSTRING("manifest")));		HX_STACK_VAR(path,"path");
			HX_STACK_LINE(206)
			Float _g11 = ::sys::FileSystem_obj::stat(path->__get((int)0))->__Field(HX_CSTRING("mtime"),true)->__Field(HX_CSTRING("getTime"),true)();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(206)
			this->lastModified = _g11;
			HX_STACK_LINE(208)
			::haxe::Timer _g2 = ::haxe::Timer_obj::__new((int)2000);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(208)
			this->timer = _g2;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_g,Array< ::String >,path)
			Void run(){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","DefaultAssetLibrary.hx",209,0x0fc48912)
				{
					HX_STACK_LINE(211)
					Float modified = ::sys::FileSystem_obj::stat(path->__get((int)0))->__Field(HX_CSTRING("mtime"),true)->__Field(HX_CSTRING("getTime"),true)();		HX_STACK_VAR(modified,"modified");
					HX_STACK_LINE(213)
					if (((modified > _g->__get((int)0).StaticCast< ::DefaultAssetLibrary >()->lastModified))){
						HX_STACK_LINE(215)
						_g->__get((int)0).StaticCast< ::DefaultAssetLibrary >()->lastModified = modified;
						HX_STACK_LINE(216)
						_g->__get((int)0).StaticCast< ::DefaultAssetLibrary >()->loadManifest();
						HX_STACK_LINE(218)
						if (((_g->__get((int)0).StaticCast< ::DefaultAssetLibrary >()->eventCallback != null()))){
							HX_STACK_LINE(220)
							_g->__get((int)0).StaticCast< ::DefaultAssetLibrary >()->eventCallback(_g->__get((int)0).StaticCast< ::DefaultAssetLibrary >(),HX_CSTRING("change"));
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(209)
			this->timer->run =  Dynamic(new _Function_3_1(_g,path));
		}
	}
}
;
	return null();
}

//DefaultAssetLibrary_obj::~DefaultAssetLibrary_obj() { }

Dynamic DefaultAssetLibrary_obj::__CreateEmpty() { return  new DefaultAssetLibrary_obj; }
hx::ObjectPtr< DefaultAssetLibrary_obj > DefaultAssetLibrary_obj::__new()
{  hx::ObjectPtr< DefaultAssetLibrary_obj > result = new DefaultAssetLibrary_obj();
	result->__construct();
	return result;}

Dynamic DefaultAssetLibrary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultAssetLibrary_obj > result = new DefaultAssetLibrary_obj();
	result->__construct();
	return result;}

bool DefaultAssetLibrary_obj::exists( ::String id,::openfl::_v2::AssetType type){
	HX_STACK_FRAME("DefaultAssetLibrary","exists",0x972074de,"DefaultAssetLibrary.exists","DefaultAssetLibrary.hx",242,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(244)
	::openfl::_v2::AssetType assetType = this->type->get(id);		HX_STACK_VAR(assetType,"assetType");
	HX_STACK_LINE(260)
	if (((assetType != null()))){
		HX_STACK_LINE(262)
		if (((bool((assetType == type)) || bool((bool(((bool((type == ::openfl::_v2::AssetType_obj::SOUND)) || bool((type == ::openfl::_v2::AssetType_obj::MUSIC))))) && bool(((bool((assetType == ::openfl::_v2::AssetType_obj::MUSIC)) || bool((assetType == ::openfl::_v2::AssetType_obj::SOUND)))))))))){
			HX_STACK_LINE(264)
			return true;
		}
		HX_STACK_LINE(282)
		if (((bool((bool((type == ::openfl::_v2::AssetType_obj::BINARY)) || bool((type == null())))) || bool((bool((assetType == ::openfl::_v2::AssetType_obj::BINARY)) && bool((type == ::openfl::_v2::AssetType_obj::TEXT))))))){
			HX_STACK_LINE(284)
			return true;
		}
	}
	HX_STACK_LINE(292)
	return false;
}


::openfl::_v2::display::BitmapData DefaultAssetLibrary_obj::getBitmapData( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getBitmapData",0xb8207f2d,"DefaultAssetLibrary.getBitmapData","DefaultAssetLibrary.hx",317,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(317)
	if ((this->className->exists(id))){
		HX_STACK_LINE(317)
		Dynamic _g = this->className->get(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(317)
		return hx::TCast< openfl::_v2::display::BitmapData >::cast(::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new())));
	}
	else{
		HX_STACK_LINE(318)
		::String _g1 = this->path->get(id);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(318)
		return ::openfl::_v2::display::BitmapData_obj::load(_g1,null());
	}
	HX_STACK_LINE(317)
	return null();
}


::openfl::_v2::utils::ByteArray DefaultAssetLibrary_obj::getBytes( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getBytes",0x86b4b377,"DefaultAssetLibrary.getBytes","DefaultAssetLibrary.hx",363,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(363)
	if ((this->className->exists(id))){
		HX_STACK_LINE(363)
		Dynamic _g = this->className->get(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(363)
		return hx::TCast< openfl::_v2::utils::ByteArray >::cast(::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new())));
	}
	else{
		HX_STACK_LINE(364)
		::String _g1 = this->path->get(id);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(364)
		return ::openfl::_v2::utils::ByteArray_obj::readFile(_g1);
	}
	HX_STACK_LINE(363)
	return null();
}


::openfl::_v2::text::Font DefaultAssetLibrary_obj::getFont( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getFont",0x974ed843,"DefaultAssetLibrary.getFont","DefaultAssetLibrary.hx",383,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(383)
	if ((this->className->exists(id))){
		HX_STACK_LINE(384)
		Dynamic fontClass = this->className->get(id);		HX_STACK_VAR(fontClass,"fontClass");
		HX_STACK_LINE(385)
		::openfl::_v2::text::Font_obj::registerFont(fontClass);
		HX_STACK_LINE(386)
		return hx::TCast< openfl::_v2::text::Font >::cast(::Type_obj::createInstance(fontClass,Dynamic( Array_obj<Dynamic>::__new())));
	}
	else{
		HX_STACK_LINE(387)
		::String _g = this->path->get(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(387)
		return ::openfl::_v2::text::Font_obj::__new(_g,null(),null());
	}
	HX_STACK_LINE(383)
	return null();
}


::openfl::_v2::media::Sound DefaultAssetLibrary_obj::getMusic( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getMusic",0xd9777bb1,"DefaultAssetLibrary.getMusic","DefaultAssetLibrary.hx",417,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(417)
	if ((this->className->exists(id))){
		HX_STACK_LINE(417)
		Dynamic _g = this->className->get(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(417)
		return hx::TCast< openfl::_v2::media::Sound >::cast(::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new())));
	}
	else{
		HX_STACK_LINE(418)
		::String _g1 = this->path->get(id);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(418)
		::openfl::_v2::net::URLRequest _g2 = ::openfl::_v2::net::URLRequest_obj::__new(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(418)
		return ::openfl::_v2::media::Sound_obj::__new(_g2,null(),true);
	}
	HX_STACK_LINE(417)
	return null();
}


::String DefaultAssetLibrary_obj::getPath( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getPath",0x9de06019,"DefaultAssetLibrary.getPath","DefaultAssetLibrary.hx",433,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(433)
	return this->path->get(id);
}


::openfl::_v2::media::Sound DefaultAssetLibrary_obj::getSound( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getSound",0x49e937db,"DefaultAssetLibrary.getSound","DefaultAssetLibrary.hx",456,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(456)
	if ((this->className->exists(id))){
		HX_STACK_LINE(456)
		Dynamic _g = this->className->get(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(456)
		return hx::TCast< openfl::_v2::media::Sound >::cast(::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new())));
	}
	else{
		HX_STACK_LINE(457)
		::String _g1 = this->path->get(id);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(457)
		::openfl::_v2::net::URLRequest _g2 = ::openfl::_v2::net::URLRequest_obj::__new(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(457)
		::openfl::_v2::AssetType _g3 = this->type->get(id);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(457)
		bool _g4 = (_g3 == ::openfl::_v2::AssetType_obj::MUSIC);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(457)
		return ::openfl::_v2::media::Sound_obj::__new(_g2,null(),_g4);
	}
	HX_STACK_LINE(456)
	return null();
}


::String DefaultAssetLibrary_obj::getText( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getText",0xa0884721,"DefaultAssetLibrary.getText","DefaultAssetLibrary.hx",464,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(497)
	::openfl::_v2::utils::ByteArray bytes = this->getBytes(id);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(499)
	if (((bytes == null()))){
		HX_STACK_LINE(501)
		return null();
	}
	else{
		HX_STACK_LINE(505)
		return bytes->readUTFBytes(bytes->length);
	}
	HX_STACK_LINE(499)
	return null();
}


bool DefaultAssetLibrary_obj::isLocal( ::String id,::openfl::_v2::AssetType type){
	HX_STACK_FRAME("DefaultAssetLibrary","isLocal",0x968237df,"DefaultAssetLibrary.isLocal","DefaultAssetLibrary.hx",526,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(526)
	return true;
}


Array< ::String > DefaultAssetLibrary_obj::list( ::openfl::_v2::AssetType type){
	HX_STACK_FRAME("DefaultAssetLibrary","list",0xf3604ee0,"DefaultAssetLibrary.list","DefaultAssetLibrary.hx",531,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(533)
	Array< ::String > items = Array_obj< ::String >::__new();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(535)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->type->keys());  __it->hasNext(); ){
		::String id = __it->next();
		if (((  ((!(((type == null()))))) ? bool(this->exists(id,type)) : bool(true) ))){
			HX_STACK_LINE(539)
			items->push(id);
		}
;
	}
	HX_STACK_LINE(545)
	return items;
}


Void DefaultAssetLibrary_obj::loadBitmapData( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadBitmapData",0x9243e881,"DefaultAssetLibrary.loadBitmapData","DefaultAssetLibrary.hx",550,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(576)
		::openfl::_v2::display::BitmapData _g = this->getBitmapData(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(576)
		handler(_g).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadBytes( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadBytes",0x8c71caa3,"DefaultAssetLibrary.loadBytes","DefaultAssetLibrary.hx",583,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(613)
		::openfl::_v2::utils::ByteArray _g = this->getBytes(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(613)
		handler(_g).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadFont( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadFont",0x1da5ca97,"DefaultAssetLibrary.loadFont","DefaultAssetLibrary.hx",620,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(642)
		::openfl::_v2::text::Font _g = this->getFont(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(642)
		handler(_g).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadManifest( ){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadManifest",0x6f596c77,"DefaultAssetLibrary.loadManifest","DefaultAssetLibrary.hx",652,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_LINE(652)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(661)
			::openfl::_v2::utils::ByteArray bytes = ::openfl::_v2::utils::ByteArray_obj::readFile(HX_CSTRING("manifest"));		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(664)
			if (((bytes != null()))){
				HX_STACK_LINE(666)
				bytes->position = (int)0;
				HX_STACK_LINE(668)
				if (((bytes->length > (int)0))){
					HX_STACK_LINE(670)
					::String data = bytes->readUTFBytes(bytes->length);		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(672)
					if (((bool((data != null())) && bool((data.length > (int)0))))){
						HX_STACK_LINE(674)
						Dynamic manifest = ::haxe::Unserializer_obj::run(data);		HX_STACK_VAR(manifest,"manifest");
						HX_STACK_LINE(676)
						{
							HX_STACK_LINE(676)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(676)
							while((true)){
								HX_STACK_LINE(676)
								if ((!(((_g < manifest->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(676)
									break;
								}
								HX_STACK_LINE(676)
								Dynamic asset = manifest->__GetItem(_g);		HX_STACK_VAR(asset,"asset");
								HX_STACK_LINE(676)
								++(_g);
								struct _Function_7_1{
									inline static bool Block( hx::ObjectPtr< ::DefaultAssetLibrary_obj > __this,Dynamic &asset){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","DefaultAssetLibrary.hx",678,0x0fc48912)
										{
											HX_STACK_LINE(678)
											::String key = asset->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(key,"key");
											HX_STACK_LINE(678)
											return __this->className->exists(key);
										}
										return null();
									}
								};
								HX_STACK_LINE(678)
								if ((!(_Function_7_1::Block(this,asset)))){
									HX_STACK_LINE(680)
									{
										HX_STACK_LINE(680)
										::String key = asset->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(680)
										::String value = asset->__Field(HX_CSTRING("path"),true);		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(680)
										this->path->set(key,value);
									}
									HX_STACK_LINE(681)
									{
										HX_STACK_LINE(681)
										::String key = asset->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(681)
										::openfl::_v2::AssetType value = ::Type_obj::createEnum(hx::ClassOf< ::openfl::_v2::AssetType >(),asset->__Field(HX_CSTRING("type"),true),null());		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(681)
										this->type->set(key,value);
									}
								}
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(693)
				::haxe::Log_obj::trace(HX_CSTRING("Warning: Could not load asset manifest (bytes was null)"),hx::SourceInfo(HX_CSTRING("DefaultAssetLibrary.hx"),693,HX_CSTRING("DefaultAssetLibrary"),HX_CSTRING("loadManifest")));
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(699)
					::String _g = ::Std_obj::string(e);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(699)
					::String _g1 = (HX_CSTRING("Warning: Could not load asset manifest (") + _g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(699)
					::String _g2 = (_g1 + HX_CSTRING(")"));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(699)
					::haxe::Log_obj::trace(_g2,hx::SourceInfo(HX_CSTRING("DefaultAssetLibrary.hx"),699,HX_CSTRING("DefaultAssetLibrary"),HX_CSTRING("loadManifest")));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DefaultAssetLibrary_obj,loadManifest,(void))

Void DefaultAssetLibrary_obj::loadMusic( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadMusic",0xdf3492dd,"DefaultAssetLibrary.loadMusic","DefaultAssetLibrary.hx",707,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(729)
		::openfl::_v2::media::Sound _g = this->getMusic(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(729)
		handler(_g).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadSound( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadSound",0x4fa64f07,"DefaultAssetLibrary.loadSound","DefaultAssetLibrary.hx",736,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(758)
		::openfl::_v2::media::Sound _g = this->getSound(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(758)
		handler(_g).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadText( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadText",0x26df3975,"DefaultAssetLibrary.loadText","DefaultAssetLibrary.hx",765,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(765)
		Dynamic handler1 = Dynamic( Array_obj<Dynamic>::__new().Add(handler));		HX_STACK_VAR(handler1,"handler1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,handler1)
		Void run(::openfl::_v2::utils::ByteArray bytes){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",789,0x0fc48912)
			HX_STACK_ARG(bytes,"bytes")
			{
				HX_STACK_LINE(789)
				if (((bytes == null()))){
					HX_STACK_LINE(791)
					handler1->__GetItem((int)0)(null()).Cast< Void >();
				}
				else{
					HX_STACK_LINE(795)
					::String _g = bytes->readUTFBytes(bytes->length);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(795)
					handler1->__GetItem((int)0)(_g).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(787)
		Dynamic callback =  Dynamic(new _Function_1_1(handler1));		HX_STACK_VAR(callback,"callback");
		HX_STACK_LINE(801)
		this->loadBytes(id,callback);
	}
return null();
}



DefaultAssetLibrary_obj::DefaultAssetLibrary_obj()
{
}

void DefaultAssetLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultAssetLibrary);
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(lastModified,"lastModified");
	HX_MARK_MEMBER_NAME(timer,"timer");
	::openfl::_v2::AssetLibrary_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefaultAssetLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(lastModified,"lastModified");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	::openfl::_v2::AssetLibrary_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DefaultAssetLibrary_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"list") ) { return list_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return getPath_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return isLocal_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getMusic") ) { return getMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return loadFont_dyn(); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMusic") ) { return loadMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"loadSound") ) { return loadSound_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastModified") ) { return lastModified; }
		if (HX_FIELD_EQ(inName,"loadManifest") ) { return loadManifest_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadBitmapData") ) { return loadBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DefaultAssetLibrary_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastModified") ) { lastModified=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultAssetLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("className"));
	outFields->push(HX_CSTRING("path"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("lastModified"));
	outFields->push(HX_CSTRING("timer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,className),HX_CSTRING("className")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,path),HX_CSTRING("path")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,type),HX_CSTRING("type")},
	{hx::fsFloat,(int)offsetof(DefaultAssetLibrary_obj,lastModified),HX_CSTRING("lastModified")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(DefaultAssetLibrary_obj,timer),HX_CSTRING("timer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("className"),
	HX_CSTRING("path"),
	HX_CSTRING("type"),
	HX_CSTRING("lastModified"),
	HX_CSTRING("timer"),
	HX_CSTRING("exists"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getMusic"),
	HX_CSTRING("getPath"),
	HX_CSTRING("getSound"),
	HX_CSTRING("getText"),
	HX_CSTRING("isLocal"),
	HX_CSTRING("list"),
	HX_CSTRING("loadBitmapData"),
	HX_CSTRING("loadBytes"),
	HX_CSTRING("loadFont"),
	HX_CSTRING("loadManifest"),
	HX_CSTRING("loadMusic"),
	HX_CSTRING("loadSound"),
	HX_CSTRING("loadText"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::__mClass,"__mClass");
};

#endif

Class DefaultAssetLibrary_obj::__mClass;

void DefaultAssetLibrary_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("DefaultAssetLibrary"), hx::TCanCast< DefaultAssetLibrary_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void DefaultAssetLibrary_obj::__boot()
{
}
