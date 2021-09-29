#ifndef HUAWEICLOUD_SDK_VOD_V1_VodExport_H_
#define HUAWEICLOUD_SDK_VOD_V1_VodExport_H_

#include <huaweicloud/core/EXPORT.h>

#if defined(HUAWEICLOUD_SHARED)
#	if defined(HUAWEICLOUD_VOD_V1_SHARED)
#		define HUAWEICLOUD_VOD_V1_EXPORT HUAWEICLOUD_EXPORT
#	else
#		define HUAWEICLOUD_VOD_V1_EXPORT HUAWEICLOUD_IMPORT
#	endif
#else
#	define HUAWEICLOUD_VOD_V1_EXPORT
#endif

#endif // !HUAWEICLOUD_SDK_VOD_V1_VodExport_H_