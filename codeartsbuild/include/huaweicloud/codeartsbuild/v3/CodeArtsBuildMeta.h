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
    static HttpRequestDef genRequestDefForCheckJobNameIsExists();
    static HttpRequestDef genRequestDefForCreateBuildJob();
    static HttpRequestDef genRequestDefForCreateTemplates();
    static HttpRequestDef genRequestDefForDeleteBuildJob();
    static HttpRequestDef genRequestDefForDeleteTemplates();
    static HttpRequestDef genRequestDefForDisableBuildJob();
    static HttpRequestDef genRequestDefForDisableNotice();
    static HttpRequestDef genRequestDefForDownloadBuildLog();
    static HttpRequestDef genRequestDefForDownloadKeystore();
    static HttpRequestDef genRequestDefForDownloadKeystoreByName();
    static HttpRequestDef genRequestDefForDownloadRealTimeLog();
    static HttpRequestDef genRequestDefForDownloadTaskLog();
    static HttpRequestDef genRequestDefForEnableBuildJob();
    static HttpRequestDef genRequestDefForListBuildInfoRecord();
    static HttpRequestDef genRequestDefForListBuildInfoRecordByJobId();
    static HttpRequestDef genRequestDefForListJobConfig();
    static HttpRequestDef genRequestDefForListKeystore();
    static HttpRequestDef genRequestDefForListNotice();
    static HttpRequestDef genRequestDefForListOfficialTemplate();
    static HttpRequestDef genRequestDefForListProjectJobs();
    static HttpRequestDef genRequestDefForListRecords();
    static HttpRequestDef genRequestDefForListRecyclingJob();
    static HttpRequestDef genRequestDefForListRelatedProjectInfo();
    static HttpRequestDef genRequestDefForListTemplates();
    static HttpRequestDef genRequestDefForRunJob();
    static HttpRequestDef genRequestDefForShowBuildInfoRecord();
    static HttpRequestDef genRequestDefForShowBuildParamsList();
    static HttpRequestDef genRequestDefForShowBuildRecord();
    static HttpRequestDef genRequestDefForShowBuildRecordBuildScript();
    static HttpRequestDef genRequestDefForShowBuildRecordFullStages();
    static HttpRequestDef genRequestDefForShowDefaultBuildParameters();
    static HttpRequestDef genRequestDefForShowDockerfileTemplate();
    static HttpRequestDef genRequestDefForShowHistoryDetails();
    static HttpRequestDef genRequestDefForShowImageTemplateList();
    static HttpRequestDef genRequestDefForShowJobBuildSuccessRatio();
    static HttpRequestDef genRequestDefForShowJobBuildTime();
    static HttpRequestDef genRequestDefForShowJobConfig();
    static HttpRequestDef genRequestDefForShowJobConfigDiff();
    static HttpRequestDef genRequestDefForShowJobInfo();
    static HttpRequestDef genRequestDefForShowJobListByProjectId();
    static HttpRequestDef genRequestDefForShowJobNoticeConfigInfo();
    static HttpRequestDef genRequestDefForShowJobRolePermission();
    static HttpRequestDef genRequestDefForShowJobStatus();
    static HttpRequestDef genRequestDefForShowJobSuccessRatio();
    static HttpRequestDef genRequestDefForShowJobSystemParameters();
    static HttpRequestDef genRequestDefForShowKeystorePermission();
    static HttpRequestDef genRequestDefForShowLastHistory();
    static HttpRequestDef genRequestDefForShowListHistory();
    static HttpRequestDef genRequestDefForShowListPeriodHistory();
    static HttpRequestDef genRequestDefForShowOutputInfo();
    static HttpRequestDef genRequestDefForShowProjectPermission();
    static HttpRequestDef genRequestDefForShowRecordDetail();
    static HttpRequestDef genRequestDefForShowRelatedProject();
    static HttpRequestDef genRequestDefForShowReportSummary();
    static HttpRequestDef genRequestDefForShowRunningStatus();
    static HttpRequestDef genRequestDefForShowYamlTemplate();
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
