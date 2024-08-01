#ifndef HUAWEICLOUD_SDK_RAM_V1_RamExport_H_
#define HUAWEICLOUD_SDK_RAM_V1_RamExport_H_

#include <huaweicloud/core/EXPORT.h>

#if defined(HUAWEICLOUD_SHARED)
#	if defined(HUAWEICLOUD_RAM_V1_SHARED)
#		define HUAWEICLOUD_RAM_V1_EXPORT HUAWEICLOUD_EXPORT
#	else
#		define HUAWEICLOUD_RAM_V1_EXPORT HUAWEICLOUD_IMPORT
#	endif
#else
#	define HUAWEICLOUD_RAM_V1_EXPORT
#endif

#endif // !HUAWEICLOUD_SDK_RAM_V1_RamExport_H_