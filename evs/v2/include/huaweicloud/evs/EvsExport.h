#ifndef HUAWEICLOUD_SDK_EVS_V2_EvsExport_H_
#define HUAWEICLOUD_SDK_EVS_V2_EvsExport_H_

#include <huaweicloud/core/EXPORT.h>

#if defined(HUAWEICLOUD_SHARED)
#	if defined(HUAWEICLOUD_EVS_SHARED)
#		define HUAWEICLOUD_EVS_EXPORT HUAWEICLOUD_EXPORT
#	else
#		define HUAWEICLOUD_EVS_EXPORT HUAWEICLOUD_IMPORT
#	endif
#else
#	define HUAWEICLOUD_EVS_EXPORT
#endif

#endif // !HUAWEICLOUD_SDK_EVS_V2_EvsExport_H_