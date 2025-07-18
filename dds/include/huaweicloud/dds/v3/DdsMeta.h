#ifndef HUAWEICLOUD_SDK_DDS_V3_DdsMeta_H_
#define HUAWEICLOUD_SDK_DDS_V3_DdsMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/dds/v3/DdsExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_DDS_V3_EXPORT  DdsMeta {
public:
    static HttpRequestDef genRequestDefForAddReadonlyNode();
    static HttpRequestDef genRequestDefForAddShardingNode();
    static HttpRequestDef genRequestDefForAttachEip();
    static HttpRequestDef genRequestDefForAttachInternalIp();
    static HttpRequestDef genRequestDefForBatchDeleteBackup();
    static HttpRequestDef genRequestDefForBatchTagAction();
    static HttpRequestDef genRequestDefForBatchUpgradeDatabaseVersion();
    static HttpRequestDef genRequestDefForCancelEip();
    static HttpRequestDef genRequestDefForCancelScheduledTask();
    static HttpRequestDef genRequestDefForChangeOpsWindow();
    static HttpRequestDef genRequestDefForCheckPassword();
    static HttpRequestDef genRequestDefForCheckWeakPassword();
    static HttpRequestDef genRequestDefForCompareConfiguration();
    static HttpRequestDef genRequestDefForCopyConfiguration();
    static HttpRequestDef genRequestDefForCreateConfiguration();
    static HttpRequestDef genRequestDefForCreateDatabaseRole();
    static HttpRequestDef genRequestDefForCreateDatabaseUser();
    static HttpRequestDef genRequestDefForCreateInstance();
    static HttpRequestDef genRequestDefForCreateIp();
    static HttpRequestDef genRequestDefForCreateKillOpRule();
    static HttpRequestDef genRequestDefForCreateManualBackup();
    static HttpRequestDef genRequestDefForDeleteAuditLog();
    static HttpRequestDef genRequestDefForDeleteConfiguration();
    static HttpRequestDef genRequestDefForDeleteDatabaseRole();
    static HttpRequestDef genRequestDefForDeleteDatabaseUser();
    static HttpRequestDef genRequestDefForDeleteInstance();
    static HttpRequestDef genRequestDefForDeleteKillOpRuleList();
    static HttpRequestDef genRequestDefForDeleteLtsConfig();
    static HttpRequestDef genRequestDefForDeleteManualBackup();
    static HttpRequestDef genRequestDefForDeleteMongosNode();
    static HttpRequestDef genRequestDefForDeleteReadonlyNode();
    static HttpRequestDef genRequestDefForDeleteSession();
    static HttpRequestDef genRequestDefForDownloadErrorlog();
    static HttpRequestDef genRequestDefForDownloadSlowlog();
    static HttpRequestDef genRequestDefForExpandReplicasetNode();
    static HttpRequestDef genRequestDefForListAppliedInstances();
    static HttpRequestDef genRequestDefForListAuditlogLinks();
    static HttpRequestDef genRequestDefForListAuditlogs();
    static HttpRequestDef genRequestDefForListAz2Migrate();
    static HttpRequestDef genRequestDefForListBackups();
    static HttpRequestDef genRequestDefForListConfigurations();
    static HttpRequestDef genRequestDefForListDatabaseRoles();
    static HttpRequestDef genRequestDefForListDatabaseUsers();
    static HttpRequestDef genRequestDefForListDatabases();
    static HttpRequestDef genRequestDefForListDatastoreVersions();
    static HttpRequestDef genRequestDefForListErrorLogs();
    static HttpRequestDef genRequestDefForListFlavorInfos();
    static HttpRequestDef genRequestDefForListFlavors();
    static HttpRequestDef genRequestDefForListInstanceTags();
    static HttpRequestDef genRequestDefForListInstances();
    static HttpRequestDef genRequestDefForListInstancesByTags();
    static HttpRequestDef genRequestDefForListLtsConfigs();
    static HttpRequestDef genRequestDefForListLtsErrorLogs();
    static HttpRequestDef genRequestDefForListLtsSlowLogs();
    static HttpRequestDef genRequestDefForListProjectTags();
    static HttpRequestDef genRequestDefForListRecycleInstances();
    static HttpRequestDef genRequestDefForListRestoreCollections();
    static HttpRequestDef genRequestDefForListRestoreDatabases();
    static HttpRequestDef genRequestDefForListRestoreTimes();
    static HttpRequestDef genRequestDefForListScheduledTasks();
    static HttpRequestDef genRequestDefForListSessions();
    static HttpRequestDef genRequestDefForListSlowLogs();
    static HttpRequestDef genRequestDefForListSslCertDownloadAddress();
    static HttpRequestDef genRequestDefForListStorageType();
    static HttpRequestDef genRequestDefForListTasks();
    static HttpRequestDef genRequestDefForMigrateAz();
    static HttpRequestDef genRequestDefForResetConfiguration();
    static HttpRequestDef genRequestDefForResetPassword();
    static HttpRequestDef genRequestDefForResizeInstance();
    static HttpRequestDef genRequestDefForResizeInstanceVolume();
    static HttpRequestDef genRequestDefForRestartInstance();
    static HttpRequestDef genRequestDefForRestoreInstance();
    static HttpRequestDef genRequestDefForRestoreInstanceFromCollection();
    static HttpRequestDef genRequestDefForRestoreNewInstance();
    static HttpRequestDef genRequestDefForSetAuditlogPolicy();
    static HttpRequestDef genRequestDefForSetAutoEnlargePolicies();
    static HttpRequestDef genRequestDefForSetBackupPolicy();
    static HttpRequestDef genRequestDefForSetBalancerSwitch();
    static HttpRequestDef genRequestDefForSetBalancerWindow();
    static HttpRequestDef genRequestDefForSetRecyclePolicy();
    static HttpRequestDef genRequestDefForShowAuditlogPolicy();
    static HttpRequestDef genRequestDefForShowAutoEnlargePolicy();
    static HttpRequestDef genRequestDefForShowBackupDownloadLink();
    static HttpRequestDef genRequestDefForShowBackupPolicy();
    static HttpRequestDef genRequestDefForShowClientNetwork();
    static HttpRequestDef genRequestDefForShowConfigurationAppliedHistory();
    static HttpRequestDef genRequestDefForShowConfigurationModifyHistory();
    static HttpRequestDef genRequestDefForShowConfigurationParameter();
    static HttpRequestDef genRequestDefForShowConnectionStatistics();
    static HttpRequestDef genRequestDefForShowDiskUsage();
    static HttpRequestDef genRequestDefForShowEntityConfiguration();
    static HttpRequestDef genRequestDefForShowInstanceConfigurationModifyHistory();
    static HttpRequestDef genRequestDefForShowJobDetail();
    static HttpRequestDef genRequestDefForShowKillOpRuleRuleList();
    static HttpRequestDef genRequestDefForShowQuotas();
    static HttpRequestDef genRequestDefForShowRecyclePolicy();
    static HttpRequestDef genRequestDefForShowReplSetName();
    static HttpRequestDef genRequestDefForShowSecondLevelMonitoringStatus();
    static HttpRequestDef genRequestDefForShowShardingBalancer();
    static HttpRequestDef genRequestDefForShowSlowlogDesensitizationSwitch();
    static HttpRequestDef genRequestDefForShowUpgradeDuration();
    static HttpRequestDef genRequestDefForShrinkInstanceNodes();
    static HttpRequestDef genRequestDefForStopBackup();
    static HttpRequestDef genRequestDefForSwitchConfiguration();
    static HttpRequestDef genRequestDefForSwitchInstancePrimary();
    static HttpRequestDef genRequestDefForSwitchSecondLevelMonitoring();
    static HttpRequestDef genRequestDefForSwitchSlowlogDesensitization();
    static HttpRequestDef genRequestDefForSwitchSsl();
    static HttpRequestDef genRequestDefForSwitchoverReplicaSet();
    static HttpRequestDef genRequestDefForUpdateClientNetwork();
    static HttpRequestDef genRequestDefForUpdateConfigurationParameter();
    static HttpRequestDef genRequestDefForUpdateEntityConfiguration();
    static HttpRequestDef genRequestDefForUpdateInstanceName();
    static HttpRequestDef genRequestDefForUpdateInstancePort();
    static HttpRequestDef genRequestDefForUpdateInstanceRemark();
    static HttpRequestDef genRequestDefForUpdateKillOpRule();
    static HttpRequestDef genRequestDefForUpdateLtsConfig();
    static HttpRequestDef genRequestDefForUpdateReplSetName();
    static HttpRequestDef genRequestDefForUpdateSecurityGroup();
    static HttpRequestDef genRequestDefForUpgradeDatabaseVersion();
    static HttpRequestDef genRequestDefForValidateConfigurationName();
    static HttpRequestDef genRequestDefForListApiVersion();
    static HttpRequestDef genRequestDefForShowApiVersion();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_DdsMeta_H_
