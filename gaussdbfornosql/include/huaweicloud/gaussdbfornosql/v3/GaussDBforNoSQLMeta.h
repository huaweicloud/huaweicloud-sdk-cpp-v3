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
    static HttpRequestDef genRequestDefForBatchTagAction();
    static HttpRequestDef genRequestDefForCheckDisasterRecoveryOperation();
    static HttpRequestDef genRequestDefForCheckWeekPassword();
    static HttpRequestDef genRequestDefForCompareConfiguration();
    static HttpRequestDef genRequestDefForCopyConfiguration();
    static HttpRequestDef genRequestDefForCreateBack();
    static HttpRequestDef genRequestDefForCreateColdVolume();
    static HttpRequestDef genRequestDefForCreateConfiguration();
    static HttpRequestDef genRequestDefForCreateDbUser();
    static HttpRequestDef genRequestDefForCreateDisasterRecovery();
    static HttpRequestDef genRequestDefForCreateInstance();
    static HttpRequestDef genRequestDefForDeleteBackup();
    static HttpRequestDef genRequestDefForDeleteConfiguration();
    static HttpRequestDef genRequestDefForDeleteDbUser();
    static HttpRequestDef genRequestDefForDeleteDisasterRecovery();
    static HttpRequestDef genRequestDefForDeleteEnlargeFailNode();
    static HttpRequestDef genRequestDefForDeleteInstance();
    static HttpRequestDef genRequestDefForDeleteInstancesSession();
    static HttpRequestDef genRequestDefForDeleteLtsConfigs();
    static HttpRequestDef genRequestDefForExpandInstanceNode();
    static HttpRequestDef genRequestDefForListAvailableFlavorInfos();
    static HttpRequestDef genRequestDefForListCassandraSlowLogs();
    static HttpRequestDef genRequestDefForListConfigurationDatastores();
    static HttpRequestDef genRequestDefForListConfigurationTemplates();
    static HttpRequestDef genRequestDefForListConfigurations();
    static HttpRequestDef genRequestDefForListDatastores();
    static HttpRequestDef genRequestDefForListDbUsers();
    static HttpRequestDef genRequestDefForListDedicatedResources();
    static HttpRequestDef genRequestDefForListEpsQuotas();
    static HttpRequestDef genRequestDefForListFlavorInfos();
    static HttpRequestDef genRequestDefForListFlavors();
    static HttpRequestDef genRequestDefForListInfluxdbSlowLogs();
    static HttpRequestDef genRequestDefForListInstanceDatabases();
    static HttpRequestDef genRequestDefForListInstanceTags();
    static HttpRequestDef genRequestDefForListInstances();
    static HttpRequestDef genRequestDefForListInstancesByResourceTags();
    static HttpRequestDef genRequestDefForListInstancesByTags();
    static HttpRequestDef genRequestDefForListInstancesSession();
    static HttpRequestDef genRequestDefForListInstancesSessionStatistics();
    static HttpRequestDef genRequestDefForListLtsConfigs();
    static HttpRequestDef genRequestDefForListMongodbErrorLogs();
    static HttpRequestDef genRequestDefForListMongodbSlowLogs();
    static HttpRequestDef genRequestDefForListProjectTags();
    static HttpRequestDef genRequestDefForListRecycleInstances();
    static HttpRequestDef genRequestDefForListRedisSlowLogs();
    static HttpRequestDef genRequestDefForListRestoreDatabases();
    static HttpRequestDef genRequestDefForListRestoreTables();
    static HttpRequestDef genRequestDefForListRestoreTime();
    static HttpRequestDef genRequestDefForListSlowLogs();
    static HttpRequestDef genRequestDefForModifyDbUserPrivilege();
    static HttpRequestDef genRequestDefForModifyEpsQuotas();
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
    static HttpRequestDef genRequestDefForSaveLtsConfigs();
    static HttpRequestDef genRequestDefForSetAutoEnlargePolicy();
    static HttpRequestDef genRequestDefForSetBackupPolicy();
    static HttpRequestDef genRequestDefForSetRecyclePolicy();
    static HttpRequestDef genRequestDefForShowAllInstancesBackups();
    static HttpRequestDef genRequestDefForShowAllInstancesBackupsNew();
    static HttpRequestDef genRequestDefForShowApplicableInstances();
    static HttpRequestDef genRequestDefForShowApplyHistory();
    static HttpRequestDef genRequestDefForShowAutoEnlargePolicy();
    static HttpRequestDef genRequestDefForShowBackupPolicy();
    static HttpRequestDef genRequestDefForShowConfigurationDetail();
    static HttpRequestDef genRequestDefForShowElbIpGroup();
    static HttpRequestDef genRequestDefForShowErrorLog();
    static HttpRequestDef genRequestDefForShowHighRiskCommands();
    static HttpRequestDef genRequestDefForShowInstanceBiactiveRegions();
    static HttpRequestDef genRequestDefForShowInstanceConfiguration();
    static HttpRequestDef genRequestDefForShowInstanceRole();
    static HttpRequestDef genRequestDefForShowIpNumRequirement();
    static HttpRequestDef genRequestDefForShowModifyHistory();
    static HttpRequestDef genRequestDefForShowPauseResumeStutus();
    static HttpRequestDef genRequestDefForShowQuotas();
    static HttpRequestDef genRequestDefForShowRecyclePolicy();
    static HttpRequestDef genRequestDefForShowRestorableList();
    static HttpRequestDef genRequestDefForShowSlowLogDesensitization();
    static HttpRequestDef genRequestDefForShrinkInstanceNode();
    static HttpRequestDef genRequestDefForSwitchIpGroup();
    static HttpRequestDef genRequestDefForSwitchSlowlogDesensitization();
    static HttpRequestDef genRequestDefForSwitchSsl();
    static HttpRequestDef genRequestDefForSwitchToMaster();
    static HttpRequestDef genRequestDefForSwitchToSlave();
    static HttpRequestDef genRequestDefForUpdateClientNetwork();
    static HttpRequestDef genRequestDefForUpdateConfiguration();
    static HttpRequestDef genRequestDefForUpdateHighRiskCommands();
    static HttpRequestDef genRequestDefForUpdateInstanceConfiguration();
    static HttpRequestDef genRequestDefForUpdateInstanceName();
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
