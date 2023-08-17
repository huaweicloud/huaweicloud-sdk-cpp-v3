#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_CodeArtsBuildExport_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_CodeArtsBuildExport_H_

#include <huaweicloud/core/EXPORT.h>

#if defined(HUAWEICLOUD_SHARED)
#	if defined(HUAWEICLOUD_CODEARTSBUILD_V3_SHARED)
#		define HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT HUAWEICLOUD_EXPORT
#	else
#		define HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT HUAWEICLOUD_IMPORT
#	endif
#else
#	define HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT
#endif

#endif // !HUAWEICLOUD_SDK_CODEARTSBUILD_V3_CodeArtsBuildExport_H_