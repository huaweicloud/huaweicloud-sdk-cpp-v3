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
    static HttpRequestDef genRequestDefForDownloadRealTimeLog();
    static HttpRequestDef genRequestDefForDownloadTaskLog();
    static HttpRequestDef genRequestDefForEnableBuildJob();
    static HttpRequestDef genRequestDefForListBuildInfoRecord();
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
    static HttpRequestDef genRequestDefForListRelatedProjectInfo();
    static HttpRequestDef genRequestDefForShowProjectPermission();
    static HttpRequestDef genRequestDefForShowRelatedProject();
    static HttpRequestDef genRequestDefForShowSummaryBuildJobInfo();
    static HttpRequestDef genRequestDefForShowUserOverPackageQuota();
    static HttpRequestDef genRequestDefForShowDockerfileTemplate();
    static HttpRequestDef genRequestDefForShowImageTemplateList();
    static HttpRequestDef genRequestDefForCheckJobCountIsTopLimit();
    static HttpRequestDef genRequestDefForCheckJobNameIsExists();
    static HttpRequestDef genRequestDefForListBuildParameter();
    static HttpRequestDef genRequestDefForListJob();
    static HttpRequestDef genRequestDefForListProjectJobs();
    static HttpRequestDef genRequestDefForListRecyclingJob();
    static HttpRequestDef genRequestDefForListUpdateJobHistory();
    static HttpRequestDef genRequestDefForShowBuildParamsList();
    static HttpRequestDef genRequestDefForShowCopyName();
    static HttpRequestDef genRequestDefForShowDefaultBuildParameters();
    static HttpRequestDef genRequestDefForShowDefaultProjectPermission();
    static HttpRequestDef genRequestDefForShowDisable();
    static HttpRequestDef genRequestDefForShowJobConfig();
    static HttpRequestDef genRequestDefForShowJobConfigDiff();
    static HttpRequestDef genRequestDefForShowJobInfo();
    static HttpRequestDef genRequestDefForShowJobNoticeConfigInfo();
    static HttpRequestDef genRequestDefForShowJobRolePermission();
    static HttpRequestDef genRequestDefForShowJobStepStatus();
    static HttpRequestDef genRequestDefForShowJobSystemParameters();
    static HttpRequestDef genRequestDefForShowRunningStatus();
    static HttpRequestDef genRequestDefForDownloadKeystoreByName();
    static HttpRequestDef genRequestDefForListKeystore();
    static HttpRequestDef genRequestDefForListKeystoreSearch();
    static HttpRequestDef genRequestDefForShowKeystorePermission();
    static HttpRequestDef genRequestDefForDownloadLogByRecordId();
    static HttpRequestDef genRequestDefForShowFlowGraph();
    static HttpRequestDef genRequestDefForShowRecordInfo();
    static HttpRequestDef genRequestDefForStopJob();
    static HttpRequestDef genRequestDefForListBuildInfoRecordByJobId();
    static HttpRequestDef genRequestDefForListRecords();
    static HttpRequestDef genRequestDefForShowBuildInfoRecord();
    static HttpRequestDef genRequestDefForShowBuildRecord();
    static HttpRequestDef genRequestDefForShowBuildRecordBuildScript();
    static HttpRequestDef genRequestDefForShowBuildRecordFlowGraph();
    static HttpRequestDef genRequestDefForShowBuildRecordFullStages();
    static HttpRequestDef genRequestDefForShowJobBuildRecordDetail();
    static HttpRequestDef genRequestDefForShowJobTotal();
    static HttpRequestDef genRequestDefForDownloadJunitCoverageZip();
    static HttpRequestDef genRequestDefForListJunitCoverageSummary();
    static HttpRequestDef genRequestDefForListRepoBranch();
    static HttpRequestDef genRequestDefForListRepository();
    static HttpRequestDef genRequestDefForShowJobBuildSuccessRatio();
    static HttpRequestDef genRequestDefForShowJobBuildTime();
    static HttpRequestDef genRequestDefForShowReportSummary();
    static HttpRequestDef genRequestDefForListCustomTemplate();
    static HttpRequestDef genRequestDefForListOfficialTemplate();
    static HttpRequestDef genRequestDefForShowYamlTemplate();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_CodeArtsBuildMeta_H_
