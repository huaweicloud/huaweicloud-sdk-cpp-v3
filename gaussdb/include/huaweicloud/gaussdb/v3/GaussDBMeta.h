#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_GaussDBMeta_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_GaussDBMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_GAUSSDB_V3_EXPORT  GaussDBMeta {
public:
    static HttpRequestDef genRequestDefForAddDatabasePermission();
    static HttpRequestDef genRequestDefForBatchTagAction();
    static HttpRequestDef genRequestDefForCancelGaussMySqlInstanceEip();
    static HttpRequestDef genRequestDefForCancelScheduleTask();
    static HttpRequestDef genRequestDefForChangeGaussMySqlInstanceSpecification();
    static HttpRequestDef genRequestDefForChangeGaussMySqlProxySpecification();
    static HttpRequestDef genRequestDefForCheckResource();
    static HttpRequestDef genRequestDefForCopyConfigurations();
    static HttpRequestDef genRequestDefForCopyInstanceConfigurations();
    static HttpRequestDef genRequestDefForCreateAccessControl();
    static HttpRequestDef genRequestDefForCreateGaussMySqlBackup();
    static HttpRequestDef genRequestDefForCreateGaussMySqlConfiguration();
    static HttpRequestDef genRequestDefForCreateGaussMySqlDatabase();
    static HttpRequestDef genRequestDefForCreateGaussMySqlDatabaseUser();
    static HttpRequestDef genRequestDefForCreateGaussMySqlInstance();
    static HttpRequestDef genRequestDefForCreateGaussMySqlProxy();
    static HttpRequestDef genRequestDefForCreateGaussMySqlReadonlyNode();
    static HttpRequestDef genRequestDefForCreateGaussMysqlDns();
    static HttpRequestDef genRequestDefForCreateRestoreTables();
    static HttpRequestDef genRequestDefForDeleteDatabasePermission();
    static HttpRequestDef genRequestDefForDeleteGaussMySqlBackup();
    static HttpRequestDef genRequestDefForDeleteGaussMySqlConfiguration();
    static HttpRequestDef genRequestDefForDeleteGaussMySqlDatabase();
    static HttpRequestDef genRequestDefForDeleteGaussMySqlDatabaseUser();
    static HttpRequestDef genRequestDefForDeleteGaussMySqlInstance();
    static HttpRequestDef genRequestDefForDeleteGaussMySqlProxy();
    static HttpRequestDef genRequestDefForDeleteGaussMySqlReadonlyNode();
    static HttpRequestDef genRequestDefForDeleteScheduleTasK();
    static HttpRequestDef genRequestDefForDeleteTaskRecord();
    static HttpRequestDef genRequestDefForDescribeBackupEncryptStatus();
    static HttpRequestDef genRequestDefForExpandGaussMySqlInstanceVolume();
    static HttpRequestDef genRequestDefForExpandGaussMySqlProxy();
    static HttpRequestDef genRequestDefForInvokeGaussMySqlInstanceSwitchOver();
    static HttpRequestDef genRequestDefForListAuditLogDownloadLink();
    static HttpRequestDef genRequestDefForListConfigurationsDifferences();
    static HttpRequestDef genRequestDefForListConfigurationsInstances();
    static HttpRequestDef genRequestDefForListEnterpriseProjects();
    static HttpRequestDef genRequestDefForListGaussMySqlConfigurations();
    static HttpRequestDef genRequestDefForListGaussMySqlDatabase();
    static HttpRequestDef genRequestDefForListGaussMySqlDatabaseCharsets();
    static HttpRequestDef genRequestDefForListGaussMySqlDatabaseUser();
    static HttpRequestDef genRequestDefForListGaussMySqlDedicatedResources();
    static HttpRequestDef genRequestDefForListGaussMySqlInstanceDetailInfo();
    static HttpRequestDef genRequestDefForListGaussMySqlInstanceDetailInfoUnifyStatus();
    static HttpRequestDef genRequestDefForListGaussMySqlInstances();
    static HttpRequestDef genRequestDefForListGaussMySqlInstancesUnifyStatus();
    static HttpRequestDef genRequestDefForListImmediateJobs();
    static HttpRequestDef genRequestDefForListInstanceConfigurations();
    static HttpRequestDef genRequestDefForListInstanceTags();
    static HttpRequestDef genRequestDefForListLtsErrorLogDetails();
    static HttpRequestDef genRequestDefForListLtsSlowlogDetails();
    static HttpRequestDef genRequestDefForListModifyHistory();
    static HttpRequestDef genRequestDefForListProjectTags();
    static HttpRequestDef genRequestDefForListScheduleJobs();
    static HttpRequestDef genRequestDefForModifyBackupEncryptStatus();
    static HttpRequestDef genRequestDefForModifyGaussMySqlProxyRouteMode();
    static HttpRequestDef genRequestDefForModifyGaussMysqlDns();
    static HttpRequestDef genRequestDefForResetGaussMySqlDatabasePassword();
    static HttpRequestDef genRequestDefForResetGaussMySqlPassword();
    static HttpRequestDef genRequestDefForRestartGaussMySqlInstance();
    static HttpRequestDef genRequestDefForRestartGaussMySqlNode();
    static HttpRequestDef genRequestDefForRestoreOldInstance();
    static HttpRequestDef genRequestDefForSetGaussMySqlProxyWeight();
    static HttpRequestDef genRequestDefForSetGaussMySqlQuotas();
    static HttpRequestDef genRequestDefForShowAuditLog();
    static HttpRequestDef genRequestDefForShowAutoScalingPolicy();
    static HttpRequestDef genRequestDefForShowBackupRestoreTime();
    static HttpRequestDef genRequestDefForShowDedicatedResourceInfo();
    static HttpRequestDef genRequestDefForShowGaussMySqlBackupList();
    static HttpRequestDef genRequestDefForShowGaussMySqlBackupPolicy();
    static HttpRequestDef genRequestDefForShowGaussMySqlConfiguration();
    static HttpRequestDef genRequestDefForShowGaussMySqlEngineVersion();
    static HttpRequestDef genRequestDefForShowGaussMySqlFlavors();
    static HttpRequestDef genRequestDefForShowGaussMySqlIncrementalBackupList();
    static HttpRequestDef genRequestDefForShowGaussMySqlInstanceInfo();
    static HttpRequestDef genRequestDefForShowGaussMySqlInstanceInfoUnifyStatus();
    static HttpRequestDef genRequestDefForShowGaussMySqlJobInfo();
    static HttpRequestDef genRequestDefForShowGaussMySqlProjectQuotas();
    static HttpRequestDef genRequestDefForShowGaussMySqlProxyFlavors();
    static HttpRequestDef genRequestDefForShowGaussMySqlProxyList();
    static HttpRequestDef genRequestDefForShowGaussMySqlQuotas();
    static HttpRequestDef genRequestDefForShowInstanceDatabaseVersion();
    static HttpRequestDef genRequestDefForShowInstanceMonitorExtend();
    static HttpRequestDef genRequestDefForShowIntelligentDiagnosisAbnormalCountOfInstances();
    static HttpRequestDef genRequestDefForShowIntelligentDiagnosisInstanceInfosPerMetric();
    static HttpRequestDef genRequestDefForShowRestoreTables();
    static HttpRequestDef genRequestDefForShrinkGaussMySqlProxy();
    static HttpRequestDef genRequestDefForSwitchAccessControl();
    static HttpRequestDef genRequestDefForSwitchGaussMySqlConfiguration();
    static HttpRequestDef genRequestDefForSwitchGaussMySqlInstanceSsl();
    static HttpRequestDef genRequestDefForSwitchGaussMySqlProxySsl();
    static HttpRequestDef genRequestDefForUpdateAuditLog();
    static HttpRequestDef genRequestDefForUpdateAutoScalingPolicy();
    static HttpRequestDef genRequestDefForUpdateBackupOffsitePolicy();
    static HttpRequestDef genRequestDefForUpdateGaussMySqlBackupPolicy();
    static HttpRequestDef genRequestDefForUpdateGaussMySqlConfiguration();
    static HttpRequestDef genRequestDefForUpdateGaussMySqlDatabaseComment();
    static HttpRequestDef genRequestDefForUpdateGaussMySqlDatabaseUserComment();
    static HttpRequestDef genRequestDefForUpdateGaussMySqlInstanceAlias();
    static HttpRequestDef genRequestDefForUpdateGaussMySqlInstanceEip();
    static HttpRequestDef genRequestDefForUpdateGaussMySqlInstanceInternalIp();
    static HttpRequestDef genRequestDefForUpdateGaussMySqlInstanceName();
    static HttpRequestDef genRequestDefForUpdateGaussMySqlInstanceOpsWindow();
    static HttpRequestDef genRequestDefForUpdateGaussMySqlInstancePort();
    static HttpRequestDef genRequestDefForUpdateGaussMySqlInstanceSecurityGroup();
    static HttpRequestDef genRequestDefForUpdateGaussMySqlQuotas();
    static HttpRequestDef genRequestDefForUpdateInstanceConfigurations();
    static HttpRequestDef genRequestDefForUpdateInstanceMonitor();
    static HttpRequestDef genRequestDefForUpdateProxyConnectionPoolType();
    static HttpRequestDef genRequestDefForUpdateProxyNewConfigurations();
    static HttpRequestDef genRequestDefForUpdateProxyPort();
    static HttpRequestDef genRequestDefForUpdateProxySessionConsistence();
    static HttpRequestDef genRequestDefForUpdateTransactionSplitStatus();
    static HttpRequestDef genRequestDefForUpgradeGaussMySqlInstanceDatabase();
    static HttpRequestDef genRequestDefForDeleteSqlFilterRule();
    static HttpRequestDef genRequestDefForSetSqlFilterRule();
    static HttpRequestDef genRequestDefForShowSqlFilterControl();
    static HttpRequestDef genRequestDefForShowSqlFilterRule();
    static HttpRequestDef genRequestDefForUpdateSqlFilterControl();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_GaussDBMeta_H_
