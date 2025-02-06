#ifndef HUAWEICLOUD_SDK_RDS_V3_RdsMeta_H_
#define HUAWEICLOUD_SDK_RDS_V3_RdsMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/rds/v3/RdsExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_RDS_V3_EXPORT  RdsMeta {
public:
    static HttpRequestDef genRequestDefForAddPostgresqlHbaConf();
    static HttpRequestDef genRequestDefForApplyConfigurationAsync();
    static HttpRequestDef genRequestDefForAttachEip();
    static HttpRequestDef genRequestDefForBatchDeleteManualBackup();
    static HttpRequestDef genRequestDefForBatchRestoreDatabase();
    static HttpRequestDef genRequestDefForBatchRestorePostgreSqlTables();
    static HttpRequestDef genRequestDefForBatchStopInstance();
    static HttpRequestDef genRequestDefForBatchTagAddAction();
    static HttpRequestDef genRequestDefForBatchTagDelAction();
    static HttpRequestDef genRequestDefForChangeFailoverMode();
    static HttpRequestDef genRequestDefForChangeFailoverStrategy();
    static HttpRequestDef genRequestDefForChangeOpsWindow();
    static HttpRequestDef genRequestDefForCopyConfiguration();
    static HttpRequestDef genRequestDefForCreateConfiguration();
    static HttpRequestDef genRequestDefForCreateDnsName();
    static HttpRequestDef genRequestDefForCreateInstance();
    static HttpRequestDef genRequestDefForCreateInstanceIam5();
    static HttpRequestDef genRequestDefForCreateManualBackup();
    static HttpRequestDef genRequestDefForCreateRdSforMySqlProxy();
    static HttpRequestDef genRequestDefForCreateRestoreInstance();
    static HttpRequestDef genRequestDefForCreateSqlLimit();
    static HttpRequestDef genRequestDefForCreateXelLogDownload();
    static HttpRequestDef genRequestDefForDeleteConfiguration();
    static HttpRequestDef genRequestDefForDeleteDisasterRecovery();
    static HttpRequestDef genRequestDefForDeleteInstance();
    static HttpRequestDef genRequestDefForDeleteJob();
    static HttpRequestDef genRequestDefForDeleteLogLtsConfigs();
    static HttpRequestDef genRequestDefForDeleteManualBackup();
    static HttpRequestDef genRequestDefForDeletePostgresqlHbaConf();
    static HttpRequestDef genRequestDefForDeleteRdSforMySqlProxy();
    static HttpRequestDef genRequestDefForDeleteSqlLimit();
    static HttpRequestDef genRequestDefForDownloadErrorlog();
    static HttpRequestDef genRequestDefForDownloadSlowlog();
    static HttpRequestDef genRequestDefForEnableConfiguration();
    static HttpRequestDef genRequestDefForListAuditlogs();
    static HttpRequestDef genRequestDefForListBackups();
    static HttpRequestDef genRequestDefForListCollations();
    static HttpRequestDef genRequestDefForListConfigurations();
    static HttpRequestDef genRequestDefForListDatastores();
    static HttpRequestDef genRequestDefForListDrInfos();
    static HttpRequestDef genRequestDefForListDrRelations();
    static HttpRequestDef genRequestDefForListEngineFlavors();
    static HttpRequestDef genRequestDefForListErrorLogs();
    static HttpRequestDef genRequestDefForListErrorLogsNew();
    static HttpRequestDef genRequestDefForListErrorlogForLts();
    static HttpRequestDef genRequestDefForListFlavors();
    static HttpRequestDef genRequestDefForListFlavorsResize();
    static HttpRequestDef genRequestDefForListHistoryDatabase();
    static HttpRequestDef genRequestDefForListInspectionHistories();
    static HttpRequestDef genRequestDefForListInstanceDiagnosis();
    static HttpRequestDef genRequestDefForListInstanceParamHistories();
    static HttpRequestDef genRequestDefForListInstanceTags();
    static HttpRequestDef genRequestDefForListInstances();
    static HttpRequestDef genRequestDefForListInstancesInfoDiagnosis();
    static HttpRequestDef genRequestDefForListInstancesSupportFastRestore();
    static HttpRequestDef genRequestDefForListJobInfo();
    static HttpRequestDef genRequestDefForListJobInfoDetail();
    static HttpRequestDef genRequestDefForListLogLtsConfigs();
    static HttpRequestDef genRequestDefForListOffSiteBackups();
    static HttpRequestDef genRequestDefForListOffSiteInstances();
    static HttpRequestDef genRequestDefForListOffSiteRestoreTimes();
    static HttpRequestDef genRequestDefForListPostgresqlHbaInfo();
    static HttpRequestDef genRequestDefForListPostgresqlHbaInfoHistory();
    static HttpRequestDef genRequestDefForListPostgresqlListHistoryTables();
    static HttpRequestDef genRequestDefForListPredefinedTag();
    static HttpRequestDef genRequestDefForListProjectTags();
    static HttpRequestDef genRequestDefForListRdSforMySqlProxy();
    static HttpRequestDef genRequestDefForListRdSforMysqlProxyFlavors();
    static HttpRequestDef genRequestDefForListReadOnlyReplayDatabase();
    static HttpRequestDef genRequestDefForListRecycleInstances();
    static HttpRequestDef genRequestDefForListRestoreTimes();
    static HttpRequestDef genRequestDefForListShareBackups();
    static HttpRequestDef genRequestDefForListSimplifiedInstances();
    static HttpRequestDef genRequestDefForListSlowLogFile();
    static HttpRequestDef genRequestDefForListSlowLogStatisticsForLts();
    static HttpRequestDef genRequestDefForListSlowLogs();
    static HttpRequestDef genRequestDefForListSlowLogsNew();
    static HttpRequestDef genRequestDefForListSlowlogForLts();
    static HttpRequestDef genRequestDefForListSlowlogStatistics();
    static HttpRequestDef genRequestDefForListSqlLimit();
    static HttpRequestDef genRequestDefForListSslCertDownloadLink();
    static HttpRequestDef genRequestDefForListStorageTypes();
    static HttpRequestDef genRequestDefForListUpdateBackupEnhancePolicy();
    static HttpRequestDef genRequestDefForListUpgradeHistories();
    static HttpRequestDef genRequestDefForListXellogFiles();
    static HttpRequestDef genRequestDefForMigrateFollower();
    static HttpRequestDef genRequestDefForModifyPostgresqlHbaConf();
    static HttpRequestDef genRequestDefForModifyRdSforMySqlProxyRouteMode();
    static HttpRequestDef genRequestDefForRestoreExistInstance();
    static HttpRequestDef genRequestDefForRestoreLogReplayDatabase();
    static HttpRequestDef genRequestDefForRestoreTables();
    static HttpRequestDef genRequestDefForRestoreTablesNew();
    static HttpRequestDef genRequestDefForRestoreToExistingInstance();
    static HttpRequestDef genRequestDefForSetAuditlogPolicy();
    static HttpRequestDef genRequestDefForSetAutoEnlargePolicy();
    static HttpRequestDef genRequestDefForSetAutoUpgradePolicy();
    static HttpRequestDef genRequestDefForSetBackupPolicy();
    static HttpRequestDef genRequestDefForSetBinlogClearPolicy();
    static HttpRequestDef genRequestDefForSetInstancesProxyRestart();
    static HttpRequestDef genRequestDefForSetLogLtsConfigs();
    static HttpRequestDef genRequestDefForSetOffSiteBackupPolicy();
    static HttpRequestDef genRequestDefForSetSecondLevelMonitor();
    static HttpRequestDef genRequestDefForSetSecurityGroup();
    static HttpRequestDef genRequestDefForSetSensitiveSlowLog();
    static HttpRequestDef genRequestDefForShowAuditlogDownloadLink();
    static HttpRequestDef genRequestDefForShowAuditlogPolicy();
    static HttpRequestDef genRequestDefForShowAutoEnlargePolicy();
    static HttpRequestDef genRequestDefForShowAutoUpgradePolicy();
    static HttpRequestDef genRequestDefForShowAvailableVersion();
    static HttpRequestDef genRequestDefForShowBackupDownloadLink();
    static HttpRequestDef genRequestDefForShowBackupPolicy();
    static HttpRequestDef genRequestDefForShowBinlogClearPolicy();
    static HttpRequestDef genRequestDefForShowConfiguration();
    static HttpRequestDef genRequestDefForShowDatabaseLevelDatabase();
    static HttpRequestDef genRequestDefForShowDnsName();
    static HttpRequestDef genRequestDefForShowDomainName();
    static HttpRequestDef genRequestDefForShowDrReplicaStatus();
    static HttpRequestDef genRequestDefForShowIncreBackupPolicy1();
    static HttpRequestDef genRequestDefForShowInstanceConfiguration();
    static HttpRequestDef genRequestDefForShowOffSiteBackupPolicy();
    static HttpRequestDef genRequestDefForShowQuotas();
    static HttpRequestDef genRequestDefForShowRecyclePolicy();
    static HttpRequestDef genRequestDefForShowReplicationStatus();
    static HttpRequestDef genRequestDefForShowSecondLevelMonitoring();
    static HttpRequestDef genRequestDefForShowStorageUsedSpace();
    static HttpRequestDef genRequestDefForShowTdeStatus();
    static HttpRequestDef genRequestDefForShowUpgradeDbMajorVersionStatus();
    static HttpRequestDef genRequestDefForStartFailover();
    static HttpRequestDef genRequestDefForStartInstanceEnlargeVolumeAction();
    static HttpRequestDef genRequestDefForStartInstanceReduceVolumeAction();
    static HttpRequestDef genRequestDefForStartInstanceRestartAction();
    static HttpRequestDef genRequestDefForStartInstanceSingleToHaAction();
    static HttpRequestDef genRequestDefForStartRecyclePolicy();
    static HttpRequestDef genRequestDefForStartResizeFlavorAction();
    static HttpRequestDef genRequestDefForStartupInstance();
    static HttpRequestDef genRequestDefForStopBackup();
    static HttpRequestDef genRequestDefForStopInstance();
    static HttpRequestDef genRequestDefForSwitchSqlLimit();
    static HttpRequestDef genRequestDefForSwitchSsl();
    static HttpRequestDef genRequestDefForUnlockNodeReadonlyStatus();
    static HttpRequestDef genRequestDefForUpdateConfiguration();
    static HttpRequestDef genRequestDefForUpdateDataIp();
    static HttpRequestDef genRequestDefForUpdateDnsName();
    static HttpRequestDef genRequestDefForUpdateIncreBackupPolicy1();
    static HttpRequestDef genRequestDefForUpdateInstanceConfiguration();
    static HttpRequestDef genRequestDefForUpdateInstanceConfigurationAsync();
    static HttpRequestDef genRequestDefForUpdateInstanceName();
    static HttpRequestDef genRequestDefForUpdatePort();
    static HttpRequestDef genRequestDefForUpdatePostgresqlInstanceAlias();
    static HttpRequestDef genRequestDefForUpdateSqlLimit();
    static HttpRequestDef genRequestDefForUpdateTdeStatus();
    static HttpRequestDef genRequestDefForUpdateToPeriod();
    static HttpRequestDef genRequestDefForUpgradeDbMajorVersion();
    static HttpRequestDef genRequestDefForUpgradeDbMajorVersionPreCheck();
    static HttpRequestDef genRequestDefForUpgradeDbVersion();
    static HttpRequestDef genRequestDefForUpgradeDbVersionNew();
    static HttpRequestDef genRequestDefForListApiVersion();
    static HttpRequestDef genRequestDefForListApiVersionNew();
    static HttpRequestDef genRequestDefForShowApiVersion();
    static HttpRequestDef genRequestDefForAllowDbUserPrivilege();
    static HttpRequestDef genRequestDefForCreateDatabase();
    static HttpRequestDef genRequestDefForCreateDbUser();
    static HttpRequestDef genRequestDefForDeleteDatabase();
    static HttpRequestDef genRequestDefForDeleteDbUser();
    static HttpRequestDef genRequestDefForListAuthorizedDatabases();
    static HttpRequestDef genRequestDefForListAuthorizedDbUsers();
    static HttpRequestDef genRequestDefForListDatabases();
    static HttpRequestDef genRequestDefForListDbUsers();
    static HttpRequestDef genRequestDefForResetPwd();
    static HttpRequestDef genRequestDefForRevoke();
    static HttpRequestDef genRequestDefForSetDbUserPwd();
    static HttpRequestDef genRequestDefForSetReadOnlySwitch();
    static HttpRequestDef genRequestDefForUpdateDatabase();
    static HttpRequestDef genRequestDefForUpdateDbUserComment();
    static HttpRequestDef genRequestDefForUpdateHostPrivilege();
    static HttpRequestDef genRequestDefForAllowDbPrivilege();
    static HttpRequestDef genRequestDefForChangeProxyScale();
    static HttpRequestDef genRequestDefForChangeTheDelayThreshold();
    static HttpRequestDef genRequestDefForCreatePostgresqlDatabase();
    static HttpRequestDef genRequestDefForCreatePostgresqlDatabaseSchema();
    static HttpRequestDef genRequestDefForCreatePostgresqlDbUser();
    static HttpRequestDef genRequestDefForCreatePostgresqlExtension();
    static HttpRequestDef genRequestDefForDeletePostgresqlDatabase();
    static HttpRequestDef genRequestDefForDeletePostgresqlDbUser();
    static HttpRequestDef genRequestDefForDeletePostgresqlExtension();
    static HttpRequestDef genRequestDefForExecutePrivilegeDatabaseUserRole();
    static HttpRequestDef genRequestDefForExecuteRevokeDatabaseUserRole();
    static HttpRequestDef genRequestDefForListDatabaseUserRole();
    static HttpRequestDef genRequestDefForListPostgresqlDatabaseSchemas();
    static HttpRequestDef genRequestDefForListPostgresqlDatabases();
    static HttpRequestDef genRequestDefForListPostgresqlDbUserPaginated();
    static HttpRequestDef genRequestDefForListPostgresqlExtension();
    static HttpRequestDef genRequestDefForRevokePostgresqlDbPrivilege();
    static HttpRequestDef genRequestDefForSearchQueryScaleComputeFlavors();
    static HttpRequestDef genRequestDefForSearchQueryScaleFlavors();
    static HttpRequestDef genRequestDefForSetDatabaseUserPrivilege();
    static HttpRequestDef genRequestDefForSetPostgresqlDbUserPwd();
    static HttpRequestDef genRequestDefForShowInformationAboutDatabaseProxy();
    static HttpRequestDef genRequestDefForShowPostgresqlParamValue();
    static HttpRequestDef genRequestDefForShowRecoveryTimeWindow();
    static HttpRequestDef genRequestDefForShowReplayDelayStatus();
    static HttpRequestDef genRequestDefForStartDatabaseProxy();
    static HttpRequestDef genRequestDefForStopDatabaseProxy();
    static HttpRequestDef genRequestDefForSwitchLogReplay();
    static HttpRequestDef genRequestDefForUpdateDatabaseOwner();
    static HttpRequestDef genRequestDefForUpdateDbUserPrivilege();
    static HttpRequestDef genRequestDefForUpdatePostgresqlDatabase();
    static HttpRequestDef genRequestDefForUpdatePostgresqlDbUserComment();
    static HttpRequestDef genRequestDefForUpdatePostgresqlExtension();
    static HttpRequestDef genRequestDefForUpdatePostgresqlParameterValue();
    static HttpRequestDef genRequestDefForUpdateReadWeight();
    static HttpRequestDef genRequestDefForAllowSqlserverDbUserPrivilege();
    static HttpRequestDef genRequestDefForBatchAddMsdtcs();
    static HttpRequestDef genRequestDefForCopyDatabase();
    static HttpRequestDef genRequestDefForCreateSqlserverDatabase();
    static HttpRequestDef genRequestDefForCreateSqlserverDbUser();
    static HttpRequestDef genRequestDefForDeleteMsdtcLocalHost();
    static HttpRequestDef genRequestDefForDeleteSqlserverDatabase();
    static HttpRequestDef genRequestDefForDeleteSqlserverDatabaseEx();
    static HttpRequestDef genRequestDefForDeleteSqlserverDbUser();
    static HttpRequestDef genRequestDefForListAuthorizedSqlserverDbUsers();
    static HttpRequestDef genRequestDefForListMsdtcHosts();
    static HttpRequestDef genRequestDefForListSqlserverDatabases();
    static HttpRequestDef genRequestDefForListSqlserverDbUsers();
    static HttpRequestDef genRequestDefForModifyCollation();
    static HttpRequestDef genRequestDefForRevokeSqlserverDbUserPrivilege();
    static HttpRequestDef genRequestDefForSetInstancesDbShrink();
    static HttpRequestDef genRequestDefForSetInstancesNewDbShrink();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_RdsMeta_H_
