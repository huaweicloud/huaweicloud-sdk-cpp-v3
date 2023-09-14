#ifndef HUAWEICLOUD_SDK_SMN_V2_SmnExport_H_
#define HUAWEICLOUD_SDK_SMN_V2_SmnExport_H_

#include <huaweicloud/core/EXPORT.h>

#if defined(HUAWEICLOUD_SHARED)
#	if defined(HUAWEICLOUD_SMN_V2_SHARED)
#		define HUAWEICLOUD_SMN_V2_EXPORT HUAWEICLOUD_EXPORT
#	else
#		define HUAWEICLOUD_SMN_V2_EXPORT HUAWEICLOUD_IMPORT
#	endif
#else
#	define HUAWEICLOUD_SMN_V2_EXPORT
#endif

#endif // !HUAWEICLOUD_SDK_SMN_V2_SmnExport_H_