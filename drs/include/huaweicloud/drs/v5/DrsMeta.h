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
    static HttpRequestDef genRequestDefForAssociateSmnTopic();
    static HttpRequestDef genRequestDefForBatchCreateJobsAsync();
    static HttpRequestDef genRequestDefForBatchCreateTags();
    static HttpRequestDef genRequestDefForBatchDeleteJobsById();
    static HttpRequestDef genRequestDefForBatchDeleteTags();
    static HttpRequestDef genRequestDefForBatchExecuteJobActions();
    static HttpRequestDef genRequestDefForBatchStopJobsAction();
    static HttpRequestDef genRequestDefForBatchTagAction();
    static HttpRequestDef genRequestDefForChangeJobFlavor();
    static HttpRequestDef genRequestDefForChangeToPeriod();
    static HttpRequestDef genRequestDefForCheckDataFilter();
    static HttpRequestDef genRequestDefForCheckDataFilterRules();
    static HttpRequestDef genRequestDefForCleanAlarms();
    static HttpRequestDef genRequestDefForCollectColumns();
    static HttpRequestDef genRequestDefForCollectDataFilterRules();
    static HttpRequestDef genRequestDefForCollectDbObjectsAsync();
    static HttpRequestDef genRequestDefForCollectDbObjectsInfo();
    static HttpRequestDef genRequestDefForCollectPositionAsync();
    static HttpRequestDef genRequestDefForCommitAsyncJob();
    static HttpRequestDef genRequestDefForCopyJob();
    static HttpRequestDef genRequestDefForCountInstanceByTags();
    static HttpRequestDef genRequestDefForCreateConnection();
    static HttpRequestDef genRequestDefForCreateJob();
    static HttpRequestDef genRequestDefForCreateReplicationJob();
    static HttpRequestDef genRequestDefForCreateSubscription();
    static HttpRequestDef genRequestDefForDeleteColumnInfos();
    static HttpRequestDef genRequestDefForDeleteConnection();
    static HttpRequestDef genRequestDefForDeleteDataFilterRules();
    static HttpRequestDef genRequestDefForDeleteJdbcDriver();
    static HttpRequestDef genRequestDefForDeleteJob();
    static HttpRequestDef genRequestDefForDeleteReplicationJob();
    static HttpRequestDef genRequestDefForDeleteSubscription();
    static HttpRequestDef genRequestDefForDeleteUserJdbcDriver();
    static HttpRequestDef genRequestDefForDownloadBatchCreateTemplate();
    static HttpRequestDef genRequestDefForDownloadCreateTemplate();
    static HttpRequestDef genRequestDefForDownloadDbObjectTemplate();
    static HttpRequestDef genRequestDefForDownloadFile();
    static HttpRequestDef genRequestDefForExecuteJobAction();
    static HttpRequestDef genRequestDefForExportCreationTemplate();
    static HttpRequestDef genRequestDefForExportJobList();
    static HttpRequestDef genRequestDefForExportOperationInfo();
    static HttpRequestDef genRequestDefForExportReplayReport();
    static HttpRequestDef genRequestDefForListAsyncJobDetail();
    static HttpRequestDef genRequestDefForListAsyncJobs();
    static HttpRequestDef genRequestDefForListConnections();
    static HttpRequestDef genRequestDefForListDbObjects();
    static HttpRequestDef genRequestDefForListExtraColumns();
    static HttpRequestDef genRequestDefForListInstanceByTags();
    static HttpRequestDef genRequestDefForListInstanceTags();
    static HttpRequestDef genRequestDefForListJdbcDrivers();
    static HttpRequestDef genRequestDefForListJobDdls();
    static HttpRequestDef genRequestDefForListJobHistoryParameters();
    static HttpRequestDef genRequestDefForListJobParameters();
    static HttpRequestDef genRequestDefForListJobs();
    static HttpRequestDef genRequestDefForListLinks();
    static HttpRequestDef genRequestDefForListProjectTags();
    static HttpRequestDef genRequestDefForListReplaySupportSourceConfig();
    static HttpRequestDef genRequestDefForListReplicationJobs();
    static HttpRequestDef genRequestDefForListSupportLinks();
    static HttpRequestDef genRequestDefForListTags();
    static HttpRequestDef genRequestDefForListTemplates();
    static HttpRequestDef genRequestDefForListUserJdbcDrivers();
    static HttpRequestDef genRequestDefForListsAgencyPermissions();
    static HttpRequestDef genRequestDefForModifyColumnInfos();
    static HttpRequestDef genRequestDefForModifyConnection();
    static HttpRequestDef genRequestDefForPauseCompareJobs();
    static HttpRequestDef genRequestDefForResetSubscription();
    static HttpRequestDef genRequestDefForRestartCompareJobs();
    static HttpRequestDef genRequestDefForRetrySubscription();
    static HttpRequestDef genRequestDefForSaveDataFilterRules();
    static HttpRequestDef genRequestDefForShowActions();
    static HttpRequestDef genRequestDefForShowAgencyInfo();
    static HttpRequestDef genRequestDefForShowChildNum();
    static HttpRequestDef genRequestDefForShowColumnInfoResult();
    static HttpRequestDef genRequestDefForShowColumnInfos();
    static HttpRequestDef genRequestDefForShowComparePolicy();
    static HttpRequestDef genRequestDefForShowCompareProgress();
    static HttpRequestDef genRequestDefForShowCompareUsersDetail();
    static HttpRequestDef genRequestDefForShowDataFilterRulesResult();
    static HttpRequestDef genRequestDefForShowDataFilteringResult();
    static HttpRequestDef genRequestDefForShowDataProcessingRulesResult();
    static HttpRequestDef genRequestDefForShowDataProgress();
    static HttpRequestDef genRequestDefForShowDbObjectCollectionStatus();
    static HttpRequestDef genRequestDefForShowDbObjectTemplateProgress();
    static HttpRequestDef genRequestDefForShowDbObjectTemplateResult();
    static HttpRequestDef genRequestDefForShowDbObjectsList();
    static HttpRequestDef genRequestDefForShowDirtyData();
    static HttpRequestDef genRequestDefForShowEnterpriseProject();
    static HttpRequestDef genRequestDefForShowExportProgress();
    static HttpRequestDef genRequestDefForShowFiles();
    static HttpRequestDef genRequestDefForShowHealthCompareJobDetail();
    static HttpRequestDef genRequestDefForShowHealthCompareJobList();
    static HttpRequestDef genRequestDefForShowHealthObjectCompareJobOverview();
    static HttpRequestDef genRequestDefForShowIncrementComponentsDetail();
    static HttpRequestDef genRequestDefForShowInstanceTags();
    static HttpRequestDef genRequestDefForShowJobDetail();
    static HttpRequestDef genRequestDefForShowLinkFlavors();
    static HttpRequestDef genRequestDefForShowMetering();
    static HttpRequestDef genRequestDefForShowMonitorData();
    static HttpRequestDef genRequestDefForShowObjectColumnInfo();
    static HttpRequestDef genRequestDefForShowObjectMapping();
    static HttpRequestDef genRequestDefForShowPositionResult();
    static HttpRequestDef genRequestDefForShowProgressData();
    static HttpRequestDef genRequestDefForShowReplayExecuteRecord();
    static HttpRequestDef genRequestDefForShowReplayProgress();
    static HttpRequestDef genRequestDefForShowReplayRecord();
    static HttpRequestDef genRequestDefForShowReplayReportExportStatus();
    static HttpRequestDef genRequestDefForShowReplayResults();
    static HttpRequestDef genRequestDefForShowReplicationJob();
    static HttpRequestDef genRequestDefForShowReportFileObsUris();
    static HttpRequestDef genRequestDefForShowSmnSubscriptionDetail();
    static HttpRequestDef genRequestDefForShowSmnTopicInfo();
    static HttpRequestDef genRequestDefForShowSubscriptionDetail();
    static HttpRequestDef genRequestDefForShowSubscriptionLists();
    static HttpRequestDef genRequestDefForShowSupportObjectType();
    static HttpRequestDef genRequestDefForShowSwitchoverInfo();
    static HttpRequestDef genRequestDefForShowTaskExecuteProgress();
    static HttpRequestDef genRequestDefForShowTimeline();
    static HttpRequestDef genRequestDefForShowUpdateObjectSavingStatus();
    static HttpRequestDef genRequestDefForStartSubscription();
    static HttpRequestDef genRequestDefForStopJobAction();
    static HttpRequestDef genRequestDefForSyncJdbcDriver();
    static HttpRequestDef genRequestDefForSyncUserJdbcDriver();
    static HttpRequestDef genRequestDefForUpdateAgencyPolicy();
    static HttpRequestDef genRequestDefForUpdateBatchAsyncJobs();
    static HttpRequestDef genRequestDefForUpdateComparePolicy();
    static HttpRequestDef genRequestDefForUpdateDataProgress();
    static HttpRequestDef genRequestDefForUpdateJob();
    static HttpRequestDef genRequestDefForUpdateJobConfigurations();
    static HttpRequestDef genRequestDefForUpdateReplicationJob();
    static HttpRequestDef genRequestDefForUpdateStartPosition();
    static HttpRequestDef genRequestDefForUpdateSubscriptionInfo();
    static HttpRequestDef genRequestDefForUploadDbObjectTemplate();
    static HttpRequestDef genRequestDefForUploadJdbcDriver();
    static HttpRequestDef genRequestDefForUploadUserJdbcDriver();
    static HttpRequestDef genRequestDefForValidateJobName();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_DrsMeta_H_
