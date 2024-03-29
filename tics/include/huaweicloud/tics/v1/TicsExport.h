#ifndef HUAWEICLOUD_SDK_TICS_V1_TicsExport_H_
#define HUAWEICLOUD_SDK_TICS_V1_TicsExport_H_

#include <huaweicloud/core/EXPORT.h>

#if defined(HUAWEICLOUD_SHARED)
#	if defined(HUAWEICLOUD_TICS_V1_SHARED)
#		define HUAWEICLOUD_TICS_V1_EXPORT HUAWEICLOUD_EXPORT
#	else
#		define HUAWEICLOUD_TICS_V1_EXPORT HUAWEICLOUD_IMPORT
#	endif
#else
#	define HUAWEICLOUD_TICS_V1_EXPORT
#endif

#endif // !HUAWEICLOUD_SDK_TICS_V1_TicsExport_H_