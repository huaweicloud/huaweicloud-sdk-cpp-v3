#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_GaussDBforopenGaussMeta_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_GaussDBforopenGaussMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  GaussDBforopenGaussMeta {
public:
    static HttpRequestDef genRequestDefForAddInstanceTags();
    static HttpRequestDef genRequestDefForAllowDbPrivileges();
    static HttpRequestDef genRequestDefForAllowDbRolePrivileges();
    static HttpRequestDef genRequestDefForAttachEip();
    static HttpRequestDef genRequestDefForBatchShowUpgradeCandidateVersions();
    static HttpRequestDef genRequestDefForCancelScheduleTask();
    static HttpRequestDef genRequestDefForConfirmRestoredData();
    static HttpRequestDef genRequestDefForCopyConfiguration();
    static HttpRequestDef genRequestDefForCreateConfigurationTemplate();
    static HttpRequestDef genRequestDefForCreateCrossCloudConstructDisaster();
    static HttpRequestDef genRequestDefForCreateDatabase();
    static HttpRequestDef genRequestDefForCreateDatabaseInstance();
    static HttpRequestDef genRequestDefForCreateDatabaseSchemas();
    static HttpRequestDef genRequestDefForCreateDbInstance();
    static HttpRequestDef genRequestDefForCreateDbRole();
    static HttpRequestDef genRequestDefForCreateDbUser();
    static HttpRequestDef genRequestDefForCreateGaussDbInstance();
    static HttpRequestDef genRequestDefForCreateInstance();
    static HttpRequestDef genRequestDefForCreateManualBackup();
    static HttpRequestDef genRequestDefForCreateRestoreInstance();
    static HttpRequestDef genRequestDefForCreateScheduleTask();
    static HttpRequestDef genRequestDefForCreateSlowLogDownload();
    static HttpRequestDef genRequestDefForDeleteConfiguration();
    static HttpRequestDef genRequestDefForDeleteDatabase();
    static HttpRequestDef genRequestDefForDeleteDatabaseSchema();
    static HttpRequestDef genRequestDefForDeleteInstance();
    static HttpRequestDef genRequestDefForDeleteInstanceTag();
    static HttpRequestDef genRequestDefForDeleteJob();
    static HttpRequestDef genRequestDefForDeleteManualBackup();
    static HttpRequestDef genRequestDefForDeleteScheduleTask();
    static HttpRequestDef genRequestDefForDownloadBackup();
    static HttpRequestDef genRequestDefForExecuteCrossCloudDisasterDataCacheEnd();
    static HttpRequestDef genRequestDefForExecuteCrossCloudDisasterDataCacheStart();
    static HttpRequestDef genRequestDefForExecuteCrossCloudDisasterEndSimulation();
    static HttpRequestDef genRequestDefForExecuteCrossCloudDisasterRecoveryFailover();
    static HttpRequestDef genRequestDefForExecuteCrossCloudDisasterRestore();
    static HttpRequestDef genRequestDefForExecuteCrossCloudDisasterStartSimulation();
    static HttpRequestDef genRequestDefForExecuteCrossCloudDisasterSwitchover();
    static HttpRequestDef genRequestDefForExecuteCrossCloudReleaseDisaster();
    static HttpRequestDef genRequestDefForExportSlowSql();
    static HttpRequestDef genRequestDefForInstallKernelPlugin();
    static HttpRequestDef genRequestDefForListApplicableInstances();
    static HttpRequestDef genRequestDefForListAppliedHistories();
    static HttpRequestDef genRequestDefForListAvailableFlavors();
    static HttpRequestDef genRequestDefForListBackups();
    static HttpRequestDef genRequestDefForListBackupsDetails();
    static HttpRequestDef genRequestDefForListBindedEips();
    static HttpRequestDef genRequestDefForListCnInfosBeforeReduce();
    static HttpRequestDef genRequestDefForListComponentInfos();
    static HttpRequestDef genRequestDefForListConfigurations();
    static HttpRequestDef genRequestDefForListConfigurationsDiff();
    static HttpRequestDef genRequestDefForListDatabaseInstances();
    static HttpRequestDef genRequestDefForListDatabaseRoles();
    static HttpRequestDef genRequestDefForListDatabaseSchemas();
    static HttpRequestDef genRequestDefForListDatabases();
    static HttpRequestDef genRequestDefForListDatastores();
    static HttpRequestDef genRequestDefForListDatastoresDetails();
    static HttpRequestDef genRequestDefForListDbBackups();
    static HttpRequestDef genRequestDefForListDbFlavors();
    static HttpRequestDef genRequestDefForListDbUsers();
    static HttpRequestDef genRequestDefForListDisasterRecoveryRecord();
    static HttpRequestDef genRequestDefForListEpsQuotas();
    static HttpRequestDef genRequestDefForListFeatures();
    static HttpRequestDef genRequestDefForListFlavors();
    static HttpRequestDef genRequestDefForListFlavorsDetails();
    static HttpRequestDef genRequestDefForListGaussDbDatastores();
    static HttpRequestDef genRequestDefForListHistoryOperations();
    static HttpRequestDef genRequestDefForListInstanceDetails();
    static HttpRequestDef genRequestDefForListInstanceEngineDetail();
    static HttpRequestDef genRequestDefForListInstanceErrorLogs();
    static HttpRequestDef genRequestDefForListInstanceTags();
    static HttpRequestDef genRequestDefForListInstances();
    static HttpRequestDef genRequestDefForListInstancesDetails();
    static HttpRequestDef genRequestDefForListKernelPlugins();
    static HttpRequestDef genRequestDefForListParamGroupTemplates();
    static HttpRequestDef genRequestDefForListParameterGroupTemplates();
    static HttpRequestDef genRequestDefForListPluginExtensions();
    static HttpRequestDef genRequestDefForListPredefinedTags();
    static HttpRequestDef genRequestDefForListProjectTags();
    static HttpRequestDef genRequestDefForListRecycleInstances();
    static HttpRequestDef genRequestDefForListRecycleInstancesDetails();
    static HttpRequestDef genRequestDefForListRestorableInstances();
    static HttpRequestDef genRequestDefForListRestorableInstancesDetails();
    static HttpRequestDef genRequestDefForListRestoreTimes();
    static HttpRequestDef genRequestDefForListScheduleTask();
    static HttpRequestDef genRequestDefForListSchemaAndTable();
    static HttpRequestDef genRequestDefForListStorageTypes();
    static HttpRequestDef genRequestDefForListSupportKernelPlugins();
    static HttpRequestDef genRequestDefForListTasks();
    static HttpRequestDef genRequestDefForModifyEpsQuota();
    static HttpRequestDef genRequestDefForResetConfiguration();
    static HttpRequestDef genRequestDefForResetDrConfig();
    static HttpRequestDef genRequestDefForResetPwd();
    static HttpRequestDef genRequestDefForResizeInstanceFlavor();
    static HttpRequestDef genRequestDefForRestartInstance();
    static HttpRequestDef genRequestDefForRestoreInstance();
    static HttpRequestDef genRequestDefForResumePluginExtensions();
    static HttpRequestDef genRequestDefForRunInstanceAction();
    static HttpRequestDef genRequestDefForSearchAutoEnlargePolicy();
    static HttpRequestDef genRequestDefForSetBackupPolicy();
    static HttpRequestDef genRequestDefForSetDbUserPwd();
    static HttpRequestDef genRequestDefForSetKernelPluginLicense();
    static HttpRequestDef genRequestDefForSetNewBackupPolicy();
    static HttpRequestDef genRequestDefForSetRecyclePolicy();
    static HttpRequestDef genRequestDefForShowBackupPolicy();
    static HttpRequestDef genRequestDefForShowBalanceStatus();
    static HttpRequestDef genRequestDefForShowBatchUpgradeCandidateVersions();
    static HttpRequestDef genRequestDefForShowConfigurationDetail();
    static HttpRequestDef genRequestDefForShowCrossCloudDisasterInstanceMonitor();
    static HttpRequestDef genRequestDefForShowCrossCloudDisasterRelations();
    static HttpRequestDef genRequestDefForShowDeploymentForm();
    static HttpRequestDef genRequestDefForShowErrorLogSwitchStatus();
    static HttpRequestDef genRequestDefForShowInstanceConfiguration();
    static HttpRequestDef genRequestDefForShowInstanceDisk();
    static HttpRequestDef genRequestDefForShowInstanceParamGroup();
    static HttpRequestDef genRequestDefForShowInstanceParamGroupDetail();
    static HttpRequestDef genRequestDefForShowInstanceSnapshot();
    static HttpRequestDef genRequestDefForShowJobDetail();
    static HttpRequestDef genRequestDefForShowParameterGroupDetail();
    static HttpRequestDef genRequestDefForShowProjectQuotas();
    static HttpRequestDef genRequestDefForShowRecyclePolicy();
    static HttpRequestDef genRequestDefForShowSlowLogDownload();
    static HttpRequestDef genRequestDefForShowSourceInstanceDetail();
    static HttpRequestDef genRequestDefForShowSslCertDownloadLink();
    static HttpRequestDef genRequestDefForShowUpgradeCandidateVersions();
    static HttpRequestDef genRequestDefForShowUpgradeCandidateVersionsDetails();
    static HttpRequestDef genRequestDefForStartInstance();
    static HttpRequestDef genRequestDefForStartMysqlCompatibility();
    static HttpRequestDef genRequestDefForStopBackup();
    static HttpRequestDef genRequestDefForStopInstance();
    static HttpRequestDef genRequestDefForSwitchConfiguration();
    static HttpRequestDef genRequestDefForSwitchShard();
    static HttpRequestDef genRequestDefForUpdateFeatures();
    static HttpRequestDef genRequestDefForUpdateInstanceConfiguration();
    static HttpRequestDef genRequestDefForUpdateInstanceName();
    static HttpRequestDef genRequestDefForUpdateMysqlCompatibility();
    static HttpRequestDef genRequestDefForUpgradeInstanceVersion();
    static HttpRequestDef genRequestDefForUpgradeInstancesVersion();
    static HttpRequestDef genRequestDefForValidateParaGroupName();
    static HttpRequestDef genRequestDefForValidateWeakPassword();
    static HttpRequestDef genRequestDefForCreateLimitTask();
    static HttpRequestDef genRequestDefForDeleteLimitTask();
    static HttpRequestDef genRequestDefForListLimitTask();
    static HttpRequestDef genRequestDefForListNodeLimitSqlModel();
    static HttpRequestDef genRequestDefForShowLimitTask();
    static HttpRequestDef genRequestDefForSyncLimitData();
    static HttpRequestDef genRequestDefForUpdateLimitTask();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_GaussDBforopenGaussMeta_H_
