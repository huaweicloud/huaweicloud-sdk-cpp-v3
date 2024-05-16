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
    static HttpRequestDef genRequestDefForAttachEip();
    static HttpRequestDef genRequestDefForCopyConfiguration();
    static HttpRequestDef genRequestDefForCreateConfigurationTemplate();
    static HttpRequestDef genRequestDefForCreateDatabase();
    static HttpRequestDef genRequestDefForCreateDatabaseSchemas();
    static HttpRequestDef genRequestDefForCreateDbInstance();
    static HttpRequestDef genRequestDefForCreateDbUser();
    static HttpRequestDef genRequestDefForCreateInstance();
    static HttpRequestDef genRequestDefForCreateManualBackup();
    static HttpRequestDef genRequestDefForCreateRestoreInstance();
    static HttpRequestDef genRequestDefForCreateSlowLogDownload();
    static HttpRequestDef genRequestDefForDeleteConfiguration();
    static HttpRequestDef genRequestDefForDeleteDatabase();
    static HttpRequestDef genRequestDefForDeleteInstance();
    static HttpRequestDef genRequestDefForDeleteInstanceTag();
    static HttpRequestDef genRequestDefForDeleteJob();
    static HttpRequestDef genRequestDefForDeleteManualBackup();
    static HttpRequestDef genRequestDefForDownloadBackup();
    static HttpRequestDef genRequestDefForListApplicableInstances();
    static HttpRequestDef genRequestDefForListAppliedHistories();
    static HttpRequestDef genRequestDefForListAvailableFlavors();
    static HttpRequestDef genRequestDefForListBackups();
    static HttpRequestDef genRequestDefForListBindedEips();
    static HttpRequestDef genRequestDefForListCnInfosBeforeReduce();
    static HttpRequestDef genRequestDefForListComponentInfos();
    static HttpRequestDef genRequestDefForListConfigurations();
    static HttpRequestDef genRequestDefForListConfigurationsDiff();
    static HttpRequestDef genRequestDefForListDatabaseSchemas();
    static HttpRequestDef genRequestDefForListDatabases();
    static HttpRequestDef genRequestDefForListDatastores();
    static HttpRequestDef genRequestDefForListDbBackups();
    static HttpRequestDef genRequestDefForListDbFlavors();
    static HttpRequestDef genRequestDefForListDbUsers();
    static HttpRequestDef genRequestDefForListEpsQuotas();
    static HttpRequestDef genRequestDefForListFlavors();
    static HttpRequestDef genRequestDefForListGaussDbDatastores();
    static HttpRequestDef genRequestDefForListHistoryOperations();
    static HttpRequestDef genRequestDefForListInstanceErrorLogs();
    static HttpRequestDef genRequestDefForListInstanceTags();
    static HttpRequestDef genRequestDefForListInstances();
    static HttpRequestDef genRequestDefForListInstancesDetails();
    static HttpRequestDef genRequestDefForListParamGroupTemplates();
    static HttpRequestDef genRequestDefForListPredefinedTags();
    static HttpRequestDef genRequestDefForListProjectTags();
    static HttpRequestDef genRequestDefForListRecycleInstances();
    static HttpRequestDef genRequestDefForListRestorableInstances();
    static HttpRequestDef genRequestDefForListRestoreTimes();
    static HttpRequestDef genRequestDefForListStorageTypes();
    static HttpRequestDef genRequestDefForListTasks();
    static HttpRequestDef genRequestDefForListTopIoTraffics();
    static HttpRequestDef genRequestDefForModifyEpsQuota();
    static HttpRequestDef genRequestDefForResetConfiguration();
    static HttpRequestDef genRequestDefForResetPwd();
    static HttpRequestDef genRequestDefForResizeInstanceFlavor();
    static HttpRequestDef genRequestDefForRestartInstance();
    static HttpRequestDef genRequestDefForRestoreInstance();
    static HttpRequestDef genRequestDefForRunInstanceAction();
    static HttpRequestDef genRequestDefForSearchAutoEnlargePolicy();
    static HttpRequestDef genRequestDefForSetBackupPolicy();
    static HttpRequestDef genRequestDefForSetDbUserPwd();
    static HttpRequestDef genRequestDefForSetRecyclePolicy();
    static HttpRequestDef genRequestDefForShowBackupPolicy();
    static HttpRequestDef genRequestDefForShowBalanceStatus();
    static HttpRequestDef genRequestDefForShowConfigurationDetail();
    static HttpRequestDef genRequestDefForShowDeploymentForm();
    static HttpRequestDef genRequestDefForShowErrorLogSwitchStatus();
    static HttpRequestDef genRequestDefForShowInstanceConfiguration();
    static HttpRequestDef genRequestDefForShowInstanceDisk();
    static HttpRequestDef genRequestDefForShowInstanceParamGroup();
    static HttpRequestDef genRequestDefForShowInstanceSnapshot();
    static HttpRequestDef genRequestDefForShowJobDetail();
    static HttpRequestDef genRequestDefForShowProjectQuotas();
    static HttpRequestDef genRequestDefForShowRecyclePolicy();
    static HttpRequestDef genRequestDefForShowSlowLogDownload();
    static HttpRequestDef genRequestDefForShowSslCertDownloadLink();
    static HttpRequestDef genRequestDefForShowUpgradeCandidateVersions();
    static HttpRequestDef genRequestDefForStartInstance();
    static HttpRequestDef genRequestDefForStopBackup();
    static HttpRequestDef genRequestDefForSwitchConfiguration();
    static HttpRequestDef genRequestDefForSwitchShard();
    static HttpRequestDef genRequestDefForUpdateInstanceConfiguration();
    static HttpRequestDef genRequestDefForUpdateInstanceName();
    static HttpRequestDef genRequestDefForUpgradeInstanceVersion();
    static HttpRequestDef genRequestDefForValidateParaGroupName();
    static HttpRequestDef genRequestDefForValidateWeakPassword();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_GaussDBforopenGaussMeta_H_
