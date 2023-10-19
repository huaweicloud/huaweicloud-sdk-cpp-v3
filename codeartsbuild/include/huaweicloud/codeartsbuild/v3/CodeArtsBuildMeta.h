#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_CodeArtsBuildMeta_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_CodeArtsBuildMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  CodeArtsBuildMeta {
public:
    static HttpRequestDef genRequestDefForDeleteBuildJob();
    static HttpRequestDef genRequestDefForDisableBuildJob();
    static HttpRequestDef genRequestDefForDownloadKeystore();
    static HttpRequestDef genRequestDefForDownloadLogByRecordId();
    static HttpRequestDef genRequestDefForResumeBuildJob();
    static HttpRequestDef genRequestDefForRunJob();
    static HttpRequestDef genRequestDefForShowHistoryDetails();
    static HttpRequestDef genRequestDefForShowJobListByProjectId();
    static HttpRequestDef genRequestDefForShowJobStatus();
    static HttpRequestDef genRequestDefForShowJobSuccessRatio();
    static HttpRequestDef genRequestDefForShowLastHistory();
    static HttpRequestDef genRequestDefForShowListHistory();
    static HttpRequestDef genRequestDefForShowListPeriodHistory();
    static HttpRequestDef genRequestDefForShowRecordInfo();
    static HttpRequestDef genRequestDefForStopBuildJob();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_CodeArtsBuildMeta_H_
