// register_module_types.gen.cpp
/* THIS FILE IS GENERATED DO NOT EDIT */
#include "register_module_types.h"

#include "modules/modules_enabled.gen.h"

#include "modules/ai/register_types.h"
#include "modules/ammo/register_types.h"
#include "modules/aniiso/register_types.h"
#include "modules/anitimer/register_types.h"
#include "modules/bmp/register_types.h"
#include "modules/bullet/register_types.h"
#include "modules/button_id/register_types.h"
#include "modules/camera/register_types.h"
#include "modules/csg/register_types.h"
#include "modules/cvtt/register_types.h"
#include "modules/dds/register_types.h"
#include "modules/denoise/register_types.h"
#include "modules/enet/register_types.h"
#include "modules/etc/register_types.h"
#include "modules/fbx/register_types.h"
#include "modules/freetype/register_types.h"
#include "modules/gdnative/register_types.h"
#include "modules/gdscript/register_types.h"
#include "modules/gltf/register_types.h"
#include "modules/gridmap/register_types.h"
#include "modules/hdr/register_types.h"
#include "modules/jpg/register_types.h"
#include "modules/jsonrpc/register_types.h"
#include "modules/lightmapper_cpu/register_types.h"
#include "modules/mbedtls/register_types.h"
#include "modules/minimp3/register_types.h"
#include "modules/mobile_vr/register_types.h"
#include "modules/mono/register_types.h"
#include "modules/navigation/register_types.h"
#include "modules/ogg/register_types.h"
#include "modules/opensimplex/register_types.h"
#include "modules/opus/register_types.h"
#include "modules/pvr/register_types.h"
#include "modules/raycast/register_types.h"
#include "modules/regex/register_types.h"
#include "modules/spriteRotater/register_types.h"
#include "modules/squish/register_types.h"
#include "modules/stb_vorbis/register_types.h"
#include "modules/svg/register_types.h"
#include "modules/tga/register_types.h"
#include "modules/theora/register_types.h"
#include "modules/tinyexr/register_types.h"
#include "modules/upnp/register_types.h"
#include "modules/vhacd/register_types.h"
#include "modules/visual_script/register_types.h"
#include "modules/vorbis/register_types.h"
#include "modules/webm/register_types.h"
#include "modules/webp/register_types.h"
#include "modules/webrtc/register_types.h"
#include "modules/websocket/register_types.h"
#include "modules/webxr/register_types.h"
#include "modules/xatlas_unwrap/register_types.h"


void register_module_types() {
#ifdef MODULE_AI_ENABLED
	register_ai_types();
#endif
#ifdef MODULE_AMMO_ENABLED
	register_ammo_types();
#endif
#ifdef MODULE_ANIISO_ENABLED
	register_aniiso_types();
#endif
#ifdef MODULE_ANITIMER_ENABLED
	register_anitimer_types();
#endif
#ifdef MODULE_BMP_ENABLED
	register_bmp_types();
#endif
#ifdef MODULE_BULLET_ENABLED
	register_bullet_types();
#endif
#ifdef MODULE_BUTTON_ID_ENABLED
	register_button_id_types();
#endif
#ifdef MODULE_CAMERA_ENABLED
	register_camera_types();
#endif
#ifdef MODULE_CSG_ENABLED
	register_csg_types();
#endif
#ifdef MODULE_CVTT_ENABLED
	register_cvtt_types();
#endif
#ifdef MODULE_DDS_ENABLED
	register_dds_types();
#endif
#ifdef MODULE_DENOISE_ENABLED
	register_denoise_types();
#endif
#ifdef MODULE_ENET_ENABLED
	register_enet_types();
#endif
#ifdef MODULE_ETC_ENABLED
	register_etc_types();
#endif
#ifdef MODULE_FBX_ENABLED
	register_fbx_types();
#endif
#ifdef MODULE_FREETYPE_ENABLED
	register_freetype_types();
#endif
#ifdef MODULE_GDNATIVE_ENABLED
	register_gdnative_types();
#endif
#ifdef MODULE_GDSCRIPT_ENABLED
	register_gdscript_types();
#endif
#ifdef MODULE_GLTF_ENABLED
	register_gltf_types();
#endif
#ifdef MODULE_GRIDMAP_ENABLED
	register_gridmap_types();
#endif
#ifdef MODULE_HDR_ENABLED
	register_hdr_types();
#endif
#ifdef MODULE_JPG_ENABLED
	register_jpg_types();
#endif
#ifdef MODULE_JSONRPC_ENABLED
	register_jsonrpc_types();
#endif
#ifdef MODULE_LIGHTMAPPER_CPU_ENABLED
	register_lightmapper_cpu_types();
#endif
#ifdef MODULE_MBEDTLS_ENABLED
	register_mbedtls_types();
#endif
#ifdef MODULE_MINIMP3_ENABLED
	register_minimp3_types();
#endif
#ifdef MODULE_MOBILE_VR_ENABLED
	register_mobile_vr_types();
#endif
#ifdef MODULE_MONO_ENABLED
	register_mono_types();
#endif
#ifdef MODULE_NAVIGATION_ENABLED
	register_navigation_types();
#endif
#ifdef MODULE_OGG_ENABLED
	register_ogg_types();
#endif
#ifdef MODULE_OPENSIMPLEX_ENABLED
	register_opensimplex_types();
#endif
#ifdef MODULE_OPUS_ENABLED
	register_opus_types();
#endif
#ifdef MODULE_PVR_ENABLED
	register_pvr_types();
#endif
#ifdef MODULE_RAYCAST_ENABLED
	register_raycast_types();
#endif
#ifdef MODULE_REGEX_ENABLED
	register_regex_types();
#endif
#ifdef MODULE_SPRITEROTATER_ENABLED
	register_spriteRotater_types();
#endif
#ifdef MODULE_SQUISH_ENABLED
	register_squish_types();
#endif
#ifdef MODULE_STB_VORBIS_ENABLED
	register_stb_vorbis_types();
#endif
#ifdef MODULE_SVG_ENABLED
	register_svg_types();
#endif
#ifdef MODULE_TGA_ENABLED
	register_tga_types();
#endif
#ifdef MODULE_THEORA_ENABLED
	register_theora_types();
#endif
#ifdef MODULE_TINYEXR_ENABLED
	register_tinyexr_types();
#endif
#ifdef MODULE_UPNP_ENABLED
	register_upnp_types();
#endif
#ifdef MODULE_VHACD_ENABLED
	register_vhacd_types();
#endif
#ifdef MODULE_VISUAL_SCRIPT_ENABLED
	register_visual_script_types();
#endif
#ifdef MODULE_VORBIS_ENABLED
	register_vorbis_types();
#endif
#ifdef MODULE_WEBM_ENABLED
	register_webm_types();
#endif
#ifdef MODULE_WEBP_ENABLED
	register_webp_types();
#endif
#ifdef MODULE_WEBRTC_ENABLED
	register_webrtc_types();
#endif
#ifdef MODULE_WEBSOCKET_ENABLED
	register_websocket_types();
#endif
#ifdef MODULE_WEBXR_ENABLED
	register_webxr_types();
#endif
#ifdef MODULE_XATLAS_UNWRAP_ENABLED
	register_xatlas_unwrap_types();
#endif

}

void unregister_module_types() {
#ifdef MODULE_AI_ENABLED
	unregister_ai_types();
#endif
#ifdef MODULE_AMMO_ENABLED
	unregister_ammo_types();
#endif
#ifdef MODULE_ANIISO_ENABLED
	unregister_aniiso_types();
#endif
#ifdef MODULE_ANITIMER_ENABLED
	unregister_anitimer_types();
#endif
#ifdef MODULE_BMP_ENABLED
	unregister_bmp_types();
#endif
#ifdef MODULE_BULLET_ENABLED
	unregister_bullet_types();
#endif
#ifdef MODULE_BUTTON_ID_ENABLED
	unregister_button_id_types();
#endif
#ifdef MODULE_CAMERA_ENABLED
	unregister_camera_types();
#endif
#ifdef MODULE_CSG_ENABLED
	unregister_csg_types();
#endif
#ifdef MODULE_CVTT_ENABLED
	unregister_cvtt_types();
#endif
#ifdef MODULE_DDS_ENABLED
	unregister_dds_types();
#endif
#ifdef MODULE_DENOISE_ENABLED
	unregister_denoise_types();
#endif
#ifdef MODULE_ENET_ENABLED
	unregister_enet_types();
#endif
#ifdef MODULE_ETC_ENABLED
	unregister_etc_types();
#endif
#ifdef MODULE_FBX_ENABLED
	unregister_fbx_types();
#endif
#ifdef MODULE_FREETYPE_ENABLED
	unregister_freetype_types();
#endif
#ifdef MODULE_GDNATIVE_ENABLED
	unregister_gdnative_types();
#endif
#ifdef MODULE_GDSCRIPT_ENABLED
	unregister_gdscript_types();
#endif
#ifdef MODULE_GLTF_ENABLED
	unregister_gltf_types();
#endif
#ifdef MODULE_GRIDMAP_ENABLED
	unregister_gridmap_types();
#endif
#ifdef MODULE_HDR_ENABLED
	unregister_hdr_types();
#endif
#ifdef MODULE_JPG_ENABLED
	unregister_jpg_types();
#endif
#ifdef MODULE_JSONRPC_ENABLED
	unregister_jsonrpc_types();
#endif
#ifdef MODULE_LIGHTMAPPER_CPU_ENABLED
	unregister_lightmapper_cpu_types();
#endif
#ifdef MODULE_MBEDTLS_ENABLED
	unregister_mbedtls_types();
#endif
#ifdef MODULE_MINIMP3_ENABLED
	unregister_minimp3_types();
#endif
#ifdef MODULE_MOBILE_VR_ENABLED
	unregister_mobile_vr_types();
#endif
#ifdef MODULE_MONO_ENABLED
	unregister_mono_types();
#endif
#ifdef MODULE_NAVIGATION_ENABLED
	unregister_navigation_types();
#endif
#ifdef MODULE_OGG_ENABLED
	unregister_ogg_types();
#endif
#ifdef MODULE_OPENSIMPLEX_ENABLED
	unregister_opensimplex_types();
#endif
#ifdef MODULE_OPUS_ENABLED
	unregister_opus_types();
#endif
#ifdef MODULE_PVR_ENABLED
	unregister_pvr_types();
#endif
#ifdef MODULE_RAYCAST_ENABLED
	unregister_raycast_types();
#endif
#ifdef MODULE_REGEX_ENABLED
	unregister_regex_types();
#endif
#ifdef MODULE_SPRITEROTATER_ENABLED
	unregister_spriteRotater_types();
#endif
#ifdef MODULE_SQUISH_ENABLED
	unregister_squish_types();
#endif
#ifdef MODULE_STB_VORBIS_ENABLED
	unregister_stb_vorbis_types();
#endif
#ifdef MODULE_SVG_ENABLED
	unregister_svg_types();
#endif
#ifdef MODULE_TGA_ENABLED
	unregister_tga_types();
#endif
#ifdef MODULE_THEORA_ENABLED
	unregister_theora_types();
#endif
#ifdef MODULE_TINYEXR_ENABLED
	unregister_tinyexr_types();
#endif
#ifdef MODULE_UPNP_ENABLED
	unregister_upnp_types();
#endif
#ifdef MODULE_VHACD_ENABLED
	unregister_vhacd_types();
#endif
#ifdef MODULE_VISUAL_SCRIPT_ENABLED
	unregister_visual_script_types();
#endif
#ifdef MODULE_VORBIS_ENABLED
	unregister_vorbis_types();
#endif
#ifdef MODULE_WEBM_ENABLED
	unregister_webm_types();
#endif
#ifdef MODULE_WEBP_ENABLED
	unregister_webp_types();
#endif
#ifdef MODULE_WEBRTC_ENABLED
	unregister_webrtc_types();
#endif
#ifdef MODULE_WEBSOCKET_ENABLED
	unregister_websocket_types();
#endif
#ifdef MODULE_WEBXR_ENABLED
	unregister_webxr_types();
#endif
#ifdef MODULE_XATLAS_UNWRAP_ENABLED
	unregister_xatlas_unwrap_types();
#endif

}
