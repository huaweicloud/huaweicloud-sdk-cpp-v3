#ifndef HUAWEICLOUD_SDK_IMS_V2_ImsExport_H_
#define HUAWEICLOUD_SDK_IMS_V2_ImsExport_H_

#include <huaweicloud/core/EXPORT.h>

#if defined(HUAWEICLOUD_SHARED)
#	if defined(HUAWEICLOUD_IMS_SHARED)
#		define HUAWEICLOUD_IMS_EXPORT HUAWEICLOUD_EXPORT
#	else
#		define HUAWEICLOUD_IMS_EXPORT HUAWEICLOUD_IMPORT
#	endif
#else
#	define HUAWEICLOUD_IMS_EXPORT
#endif

#endif // !HUAWEICLOUD_SDK_IMS_V2_ImsExport_H_