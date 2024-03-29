#ifndef HUAWEICLOUD_SDK_CDN_V2_CdnExport_H_
#define HUAWEICLOUD_SDK_CDN_V2_CdnExport_H_

#include <huaweicloud/core/EXPORT.h>

#if defined(HUAWEICLOUD_SHARED)
#	if defined(HUAWEICLOUD_CDN_V2_SHARED)
#		define HUAWEICLOUD_CDN_V2_EXPORT HUAWEICLOUD_EXPORT
#	else
#		define HUAWEICLOUD_CDN_V2_EXPORT HUAWEICLOUD_IMPORT
#	endif
#else
#	define HUAWEICLOUD_CDN_V2_EXPORT
#endif

#endif // !HUAWEICLOUD_SDK_CDN_V2_CdnExport_H_