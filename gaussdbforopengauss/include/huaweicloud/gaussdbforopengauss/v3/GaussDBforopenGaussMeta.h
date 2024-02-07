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
    static HttpRequestDef genRequestDefForDeleteConfiguration();
    static HttpRequestDef genRequestDefForDeleteDatabase();
    static HttpRequestDef genRequestDefForDeleteInstance();
    static HttpRequestDef genRequestDefForDeleteJob();
    static HttpRequestDef genRequestDefForDeleteManualBackup();
    static HttpRequestDef genRequestDefForDownloadBackup();
    static HttpRequestDef genRequestDefForListApplicableInstances();
    static HttpRequestDef genRequestDefForListAppliedHistories();
    static HttpRequestDef genRequestDefForListAvailableFlavors();
    static HttpRequestDef genRequestDefForListBackups();
    static HttpRequestDef genRequestDefForListBindedEips();
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
    static HttpRequestDef genRequestDefForModifyEpsQuota();
    static HttpRequestDef genRequestDefForResetConfiguration();
    static HttpRequestDef genRequestDefForResetPwd();
    static HttpRequestDef genRequestDefForResizeInstanceFlavor();
    static HttpRequestDef genRequestDefForRestartInstance();
    static HttpRequestDef genRequestDefForRunInstanceAction();
    static HttpRequestDef genRequestDefForSetBackupPolicy();
    static HttpRequestDef genRequestDefForSetDbUserPwd();
    static HttpRequestDef genRequestDefForSetRecyclePolicy();
    static HttpRequestDef genRequestDefForShowBackupPolicy();
    static HttpRequestDef genRequestDefForShowBalanceStatus();
    static HttpRequestDef genRequestDefForShowConfigurationDetail();
    static HttpRequestDef genRequestDefForShowDeploymentForm();
    static HttpRequestDef genRequestDefForShowInstanceConfiguration();
    static HttpRequestDef genRequestDefForShowInstanceDisk();
    static HttpRequestDef genRequestDefForShowInstanceParamGroup();
    static HttpRequestDef genRequestDefForShowInstanceSnapshot();
    static HttpRequestDef genRequestDefForShowJobDetail();
    static HttpRequestDef genRequestDefForShowProjectQuotas();
    static HttpRequestDef genRequestDefForShowRecyclePolicy();
    static HttpRequestDef genRequestDefForShowSslCertDownloadLink();
    static HttpRequestDef genRequestDefForStopBackup();
    static HttpRequestDef genRequestDefForSwitchConfiguration();
    static HttpRequestDef genRequestDefForSwitchShard();
    static HttpRequestDef genRequestDefForUpdateInstanceConfiguration();
    static HttpRequestDef genRequestDefForUpdateInstanceName();
    static HttpRequestDef genRequestDefForValidateParaGroupName();
    static HttpRequestDef genRequestDefForValidateWeakPassword();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_GaussDBforopenGaussMeta_H_
