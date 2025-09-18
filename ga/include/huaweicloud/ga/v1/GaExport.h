#ifndef HUAWEICLOUD_SDK_GA_V1_GaExport_H_
#define HUAWEICLOUD_SDK_GA_V1_GaExport_H_

#include <huaweicloud/core/EXPORT.h>

#if defined(HUAWEICLOUD_SHARED)
#	if defined(HUAWEICLOUD_GA_V1_SHARED)
#		define HUAWEICLOUD_GA_V1_EXPORT HUAWEICLOUD_EXPORT
#	else
#		define HUAWEICLOUD_GA_V1_EXPORT HUAWEICLOUD_IMPORT
#	endif
#else
#	define HUAWEICLOUD_GA_V1_EXPORT
#endif

#endif // !HUAWEICLOUD_SDK_GA_V1_GaExport_H_