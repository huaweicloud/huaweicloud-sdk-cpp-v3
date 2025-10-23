#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_GaussDBforNoSQLMeta_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_GaussDBforNoSQLMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  GaussDBforNoSQLMeta {
public:
    static HttpRequestDef genRequestDefForApplyConfiguration();
    static HttpRequestDef genRequestDefForApplyConfigurationToInstances();
    static HttpRequestDef genRequestDefForBatchDeleteManualBackup();
    static HttpRequestDef genRequestDefForBatchTagAction();
    static HttpRequestDef genRequestDefForBatchUpgradeDatabaseVersion();
    static HttpRequestDef genRequestDefForCancelInstanceScheduleWindow();
    static HttpRequestDef genRequestDefForCheckDisasterRecoveryOperation();
    static HttpRequestDef genRequestDefForCheckWeekPassword();
    static HttpRequestDef genRequestDefForClearInstanceSessions();
    static HttpRequestDef genRequestDefForCompareConfiguration();
    static HttpRequestDef genRequestDefForCopyConfiguration();
    static HttpRequestDef genRequestDefForCreateBack();
    static HttpRequestDef genRequestDefForCreateColdVolume();
    static HttpRequestDef genRequestDefForCreateConfiguration();
    static HttpRequestDef genRequestDefForCreateDbCacheMapping();
    static HttpRequestDef genRequestDefForCreateDbCacheRule();
    static HttpRequestDef genRequestDefForCreateDbUser();
    static HttpRequestDef genRequestDefForCreateDisasterRecovery();
    static HttpRequestDef genRequestDefForCreateGeminiDbDualActive();
    static HttpRequestDef genRequestDefForCreateInstance();
    static HttpRequestDef genRequestDefForDeleteBackup();
    static HttpRequestDef genRequestDefForDeleteConfiguration();
    static HttpRequestDef genRequestDefForDeleteDbCacheMapping();
    static HttpRequestDef genRequestDefForDeleteDbCacheRule();
    static HttpRequestDef genRequestDefForDeleteDbUser();
    static HttpRequestDef genRequestDefForDeleteDisasterRecovery();
    static HttpRequestDef genRequestDefForDeleteEnlargeFailNode();
    static HttpRequestDef genRequestDefForDeleteGeminiDbDualActive();
    static HttpRequestDef genRequestDefForDeleteInstance();
    static HttpRequestDef genRequestDefForDeleteInstancesSession();
    static HttpRequestDef genRequestDefForDeleteLtsConfigs();
    static HttpRequestDef genRequestDefForDeleteRedisDisabledCommands();
    static HttpRequestDef genRequestDefForExpandInstanceNode();
    static HttpRequestDef genRequestDefForListAvailableFlavorInfos();
    static HttpRequestDef genRequestDefForListBackups();
    static HttpRequestDef genRequestDefForListCassandraSlowLogs();
    static HttpRequestDef genRequestDefForListConfigurationDatastores();
    static HttpRequestDef genRequestDefForListConfigurationTemplates();
    static HttpRequestDef genRequestDefForListConfigurations();
    static HttpRequestDef genRequestDefForListDatastores();
    static HttpRequestDef genRequestDefForListDbCacheMappings();
    static HttpRequestDef genRequestDefForListDbCacheRules();
    static HttpRequestDef genRequestDefForListDbUsers();
    static HttpRequestDef genRequestDefForListDedicatedResources();
    static HttpRequestDef genRequestDefForListEpsQuotas();
    static HttpRequestDef genRequestDefForListFlavorInfos();
    static HttpRequestDef genRequestDefForListFlavors();
    static HttpRequestDef genRequestDefForListInfluxdbSlowLogs();
    static HttpRequestDef genRequestDefForListInstanceDatabases();
    static HttpRequestDef genRequestDefForListInstanceMaintenanceWindow();
    static HttpRequestDef genRequestDefForListInstanceSessions();
    static HttpRequestDef genRequestDefForListInstanceTags();
    static HttpRequestDef genRequestDefForListInstances();
    static HttpRequestDef genRequestDefForListInstancesByResourceTags();
    static HttpRequestDef genRequestDefForListInstancesByTags();
    static HttpRequestDef genRequestDefForListInstancesSession();
    static HttpRequestDef genRequestDefForListInstancesSessionStatistics();
    static HttpRequestDef genRequestDefForListJobs();
    static HttpRequestDef genRequestDefForListLtsConfigs();
    static HttpRequestDef genRequestDefForListMongodbErrorLogs();
    static HttpRequestDef genRequestDefForListMongodbSlowLogs();
    static HttpRequestDef genRequestDefForListNosqlTaskList();
    static HttpRequestDef genRequestDefForListProjectTags();
    static HttpRequestDef genRequestDefForListRecycleInstances();
    static HttpRequestDef genRequestDefForListRedisPitrRestoreTime();
    static HttpRequestDef genRequestDefForListRedisSlowLogs();
    static HttpRequestDef genRequestDefForListRestoreDatabases();
    static HttpRequestDef genRequestDefForListRestoreTables();
    static HttpRequestDef genRequestDefForListRestoreTime();
    static HttpRequestDef genRequestDefForListSlowLogs();
    static HttpRequestDef genRequestDefForModifyDbUserPrivilege();
    static HttpRequestDef genRequestDefForModifyEpsQuotas();
    static HttpRequestDef genRequestDefForModifyInstanceMaintenanceWindow();
    static HttpRequestDef genRequestDefForModifyPort();
    static HttpRequestDef genRequestDefForModifyPublicIp();
    static HttpRequestDef genRequestDefForModifyVolume();
    static HttpRequestDef genRequestDefForOfflineNodes();
    static HttpRequestDef genRequestDefForPauseResumeDataSynchronization();
    static HttpRequestDef genRequestDefForResetDbUserPassword();
    static HttpRequestDef genRequestDefForResetParamGroupTemplate();
    static HttpRequestDef genRequestDefForResetPassword();
    static HttpRequestDef genRequestDefForResizeColdVolume();
    static HttpRequestDef genRequestDefForResizeInstance();
    static HttpRequestDef genRequestDefForResizeInstanceVolume();
    static HttpRequestDef genRequestDefForRestartInstance();
    static HttpRequestDef genRequestDefForRestoreExistingInstance();
    static HttpRequestDef genRequestDefForRestoreRedisData();
    static HttpRequestDef genRequestDefForRestoreRedisPitr();
    static HttpRequestDef genRequestDefForSaveLtsConfigs();
    static HttpRequestDef genRequestDefForSaveRedisDisabledCommands();
    static HttpRequestDef genRequestDefForSetAutoEnlargePolicy();
    static HttpRequestDef genRequestDefForSetBackupPolicy();
    static HttpRequestDef genRequestDefForSetDisasterRecoverySettings();
    static HttpRequestDef genRequestDefForSetInstanceDataDump();
    static HttpRequestDef genRequestDefForSetRecyclePolicy();
    static HttpRequestDef genRequestDefForSetRedisPitrPolicy();
    static HttpRequestDef genRequestDefForShowAllInstancesBackups();
    static HttpRequestDef genRequestDefForShowAllInstancesBackupsNew();
    static HttpRequestDef genRequestDefForShowApplicableInstances();
    static HttpRequestDef genRequestDefForShowApplyHistory();
    static HttpRequestDef genRequestDefForShowAutoEnlargePolicy();
    static HttpRequestDef genRequestDefForShowBackupPolicies();
    static HttpRequestDef genRequestDefForShowBackupPolicy();
    static HttpRequestDef genRequestDefForShowConfigurationDetail();
    static HttpRequestDef genRequestDefForShowDisasterRecoverySettings();
    static HttpRequestDef genRequestDefForShowElbIpGroup();
    static HttpRequestDef genRequestDefForShowErrorLog();
    static HttpRequestDef genRequestDefForShowHighRiskCommands();
    static HttpRequestDef genRequestDefForShowInstanceBiactiveRegions();
    static HttpRequestDef genRequestDefForShowInstanceConfiguration();
    static HttpRequestDef genRequestDefForShowInstanceRole();
    static HttpRequestDef genRequestDefForShowIpNumRequirement();
    static HttpRequestDef genRequestDefForShowModifyHistory();
    static HttpRequestDef genRequestDefForShowPasswordlessConfig();
    static HttpRequestDef genRequestDefForShowPauseResumeStutus();
    static HttpRequestDef genRequestDefForShowQuotas();
    static HttpRequestDef genRequestDefForShowRecyclePolicy();
    static HttpRequestDef genRequestDefForShowRedisBigKeys();
    static HttpRequestDef genRequestDefForShowRedisDisabledCommands();
    static HttpRequestDef genRequestDefForShowRedisHotKeys();
    static HttpRequestDef genRequestDefForShowRedisPitrInfo();
    static HttpRequestDef genRequestDefForShowRedisPitrPolicy();
    static HttpRequestDef genRequestDefForShowRestorableList();
    static HttpRequestDef genRequestDefForShowSecondLevelMonitoringStatus();
    static HttpRequestDef genRequestDefForShowSlowLogDesensitization();
    static HttpRequestDef genRequestDefForShrinkInstanceNode();
    static HttpRequestDef genRequestDefForStopBackup();
    static HttpRequestDef genRequestDefForSwitchIpGroup();
    static HttpRequestDef genRequestDefForSwitchOver();
    static HttpRequestDef genRequestDefForSwitchSecondLevelMonitoring();
    static HttpRequestDef genRequestDefForSwitchSlowlogDesensitization();
    static HttpRequestDef genRequestDefForSwitchSsl();
    static HttpRequestDef genRequestDefForSwitchToMaster();
    static HttpRequestDef genRequestDefForSwitchToSlave();
    static HttpRequestDef genRequestDefForUpdateClientNetwork();
    static HttpRequestDef genRequestDefForUpdateConfiguration();
    static HttpRequestDef genRequestDefForUpdateDatabases();
    static HttpRequestDef genRequestDefForUpdateDbCacheRule();
    static HttpRequestDef genRequestDefForUpdateHighRiskCommands();
    static HttpRequestDef genRequestDefForUpdateInstanceConfiguration();
    static HttpRequestDef genRequestDefForUpdateInstanceConfigurations();
    static HttpRequestDef genRequestDefForUpdateInstanceName();
    static HttpRequestDef genRequestDefForUpdatePasswordlessConfig();
    static HttpRequestDef genRequestDefForUpdateSecurityGroup();
    static HttpRequestDef genRequestDefForUpgradeDbVersion();
    static HttpRequestDef genRequestDefForListApiVersion();
    static HttpRequestDef genRequestDefForShowApiVersion();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_GaussDBforNoSQLMeta_H_
