#ifndef HUAWEICLOUD_SDK_EIP_V2_EipExport_H_
#define HUAWEICLOUD_SDK_EIP_V2_EipExport_H_

#include <huaweicloud/core/EXPORT.h>

#if defined(HUAWEICLOUD_SHARED)
#	if defined(HUAWEICLOUD_EIP_SHARED)
#		define HUAWEICLOUD_EIP_EXPORT HUAWEICLOUD_EXPORT
#	else
#		define HUAWEICLOUD_EIP_EXPORT HUAWEICLOUD_IMPORT
#	endif
#else
#	define HUAWEICLOUD_EIP_EXPORT
#endif

#endif // !HUAWEICLOUD_SDK_EIP_V2_EipExport_H_