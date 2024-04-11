#ifndef HUAWEICLOUD_SDK_DRS_V5_DrsMeta_H_
#define HUAWEICLOUD_SDK_DRS_V5_DrsMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/drs/v5/DrsExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_DRS_V5_EXPORT  DrsMeta {
public:
    static HttpRequestDef genRequestDefForBatchCreateJobsAsync();
    static HttpRequestDef genRequestDefForBatchCreateTags();
    static HttpRequestDef genRequestDefForBatchDeleteJobsById();
    static HttpRequestDef genRequestDefForBatchDeleteTags();
    static HttpRequestDef genRequestDefForBatchExecuteJobActions();
    static HttpRequestDef genRequestDefForBatchStopJobsAction();
    static HttpRequestDef genRequestDefForBatchTagAction();
    static HttpRequestDef genRequestDefForCheckDataFilter();
    static HttpRequestDef genRequestDefForCollectColumns();
    static HttpRequestDef genRequestDefForCollectDbObjectsAsync();
    static HttpRequestDef genRequestDefForCollectDbObjectsInfo();
    static HttpRequestDef genRequestDefForCollectPositionAsync();
    static HttpRequestDef genRequestDefForCommitAsyncJob();
    static HttpRequestDef genRequestDefForCopyJob();
    static HttpRequestDef genRequestDefForCountInstanceByTags();
    static HttpRequestDef genRequestDefForCreateJob();
    static HttpRequestDef genRequestDefForDeleteJdbcDriver();
    static HttpRequestDef genRequestDefForDeleteJob();
    static HttpRequestDef genRequestDefForDownloadBatchCreateTemplate();
    static HttpRequestDef genRequestDefForDownloadDbObjectTemplate();
    static HttpRequestDef genRequestDefForExecuteJobAction();
    static HttpRequestDef genRequestDefForExportOperationInfo();
    static HttpRequestDef genRequestDefForImportBatchCreateJobs();
    static HttpRequestDef genRequestDefForListAsyncJobDetail();
    static HttpRequestDef genRequestDefForListAsyncJobs();
    static HttpRequestDef genRequestDefForListDbObjects();
    static HttpRequestDef genRequestDefForListInstanceByTags();
    static HttpRequestDef genRequestDefForListInstanceTags();
    static HttpRequestDef genRequestDefForListJdbcDrivers();
    static HttpRequestDef genRequestDefForListJobHistoryParameters();
    static HttpRequestDef genRequestDefForListJobParameters();
    static HttpRequestDef genRequestDefForListJobs();
    static HttpRequestDef genRequestDefForListLinks();
    static HttpRequestDef genRequestDefForListProjectTags();
    static HttpRequestDef genRequestDefForListTags();
    static HttpRequestDef genRequestDefForListsAgencyPermissions();
    static HttpRequestDef genRequestDefForShowActions();
    static HttpRequestDef genRequestDefForShowColumnInfoResult();
    static HttpRequestDef genRequestDefForShowComparePolicy();
    static HttpRequestDef genRequestDefForShowDataFilteringResult();
    static HttpRequestDef genRequestDefForShowDataProcessingRulesResult();
    static HttpRequestDef genRequestDefForShowDataProgress();
    static HttpRequestDef genRequestDefForShowDbObjectCollectionStatus();
    static HttpRequestDef genRequestDefForShowDbObjectTemplateProgress();
    static HttpRequestDef genRequestDefForShowDbObjectTemplateResult();
    static HttpRequestDef genRequestDefForShowDbObjectsList();
    static HttpRequestDef genRequestDefForShowDirtyData();
    static HttpRequestDef genRequestDefForShowEnterpriseProject();
    static HttpRequestDef genRequestDefForShowHealthCompareJobList();
    static HttpRequestDef genRequestDefForShowIncrementComponentsDetail();
    static HttpRequestDef genRequestDefForShowInstanceTags();
    static HttpRequestDef genRequestDefForShowJobDetail();
    static HttpRequestDef genRequestDefForShowMetering();
    static HttpRequestDef genRequestDefForShowMonitorData();
    static HttpRequestDef genRequestDefForShowObjectMapping();
    static HttpRequestDef genRequestDefForShowPositionResult();
    static HttpRequestDef genRequestDefForShowProgressData();
    static HttpRequestDef genRequestDefForShowReplayResults();
    static HttpRequestDef genRequestDefForShowSupportObjectType();
    static HttpRequestDef genRequestDefForShowUpdateObjectSavingStatus();
    static HttpRequestDef genRequestDefForStopJobAction();
    static HttpRequestDef genRequestDefForSyncJdbcDriver();
    static HttpRequestDef genRequestDefForUpdateBatchAsyncJobs();
    static HttpRequestDef genRequestDefForUpdateDataProgress();
    static HttpRequestDef genRequestDefForUpdateJob();
    static HttpRequestDef genRequestDefForUpdateJobConfigurations();
    static HttpRequestDef genRequestDefForUpdateStartPosition();
    static HttpRequestDef genRequestDefForUploadDbObjectTemplate();
    static HttpRequestDef genRequestDefForUploadJdbcDriver();
    static HttpRequestDef genRequestDefForValidateJobName();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_DrsMeta_H_
