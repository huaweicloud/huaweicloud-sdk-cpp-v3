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
    static HttpRequestDef genRequestDefForCreateBuildJob();
    static HttpRequestDef genRequestDefForCreateTemplates();
    static HttpRequestDef genRequestDefForDeleteBuildJob();
    static HttpRequestDef genRequestDefForDeleteTemplates();
    static HttpRequestDef genRequestDefForDisableBuildJob();
    static HttpRequestDef genRequestDefForDisableNotice();
    static HttpRequestDef genRequestDefForDownloadBuildLog();
    static HttpRequestDef genRequestDefForDownloadKeystore();
    static HttpRequestDef genRequestDefForDownloadTaskLog();
    static HttpRequestDef genRequestDefForEnableBuildJob();
    static HttpRequestDef genRequestDefForListJobConfig();
    static HttpRequestDef genRequestDefForListNotice();
    static HttpRequestDef genRequestDefForListTemplates();
    static HttpRequestDef genRequestDefForRunJob();
    static HttpRequestDef genRequestDefForShowHistoryDetails();
    static HttpRequestDef genRequestDefForShowJobListByProjectId();
    static HttpRequestDef genRequestDefForShowJobStatus();
    static HttpRequestDef genRequestDefForShowJobSuccessRatio();
    static HttpRequestDef genRequestDefForShowLastHistory();
    static HttpRequestDef genRequestDefForShowListHistory();
    static HttpRequestDef genRequestDefForShowListPeriodHistory();
    static HttpRequestDef genRequestDefForShowOutputInfo();
    static HttpRequestDef genRequestDefForShowRecordDetail();
    static HttpRequestDef genRequestDefForStopBuildJob();
    static HttpRequestDef genRequestDefForUpdateBuildJob();
    static HttpRequestDef genRequestDefForUpdateNotice();
    static HttpRequestDef genRequestDefForDownloadLogByRecordId();
    static HttpRequestDef genRequestDefForShowFlowGraph();
    static HttpRequestDef genRequestDefForShowRecordInfo();
    static HttpRequestDef genRequestDefForStopJob();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_CodeArtsBuildMeta_H_
