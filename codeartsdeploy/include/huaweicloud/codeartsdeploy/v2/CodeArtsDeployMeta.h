#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_CodeArtsDeployMeta_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_CodeArtsDeployMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  CodeArtsDeployMeta {
public:
    static HttpRequestDef genRequestDefForCreateAppGroups();
    static HttpRequestDef genRequestDefForDeleteAppGroups();
    static HttpRequestDef genRequestDefForListAppGroups();
    static HttpRequestDef genRequestDefForMoveAppGroups();
    static HttpRequestDef genRequestDefForMoveAppToGroup();
    static HttpRequestDef genRequestDefForUpdateAppGroups();
    static HttpRequestDef genRequestDefForBatchUpdateApplicationPermissions();
    static HttpRequestDef genRequestDefForBatchUpdatePermissionLevel();
    static HttpRequestDef genRequestDefForCheckCanCreate();
    static HttpRequestDef genRequestDefForListApplicationPermissions();
    static HttpRequestDef genRequestDefForBatchDeleteApp();
    static HttpRequestDef genRequestDefForCheckIsDuplicateAppName();
    static HttpRequestDef genRequestDefForCopyApplication();
    static HttpRequestDef genRequestDefForCreateApp();
    static HttpRequestDef genRequestDefForCreateDeployTaskByTemplate();
    static HttpRequestDef genRequestDefForDeleteApplication();
    static HttpRequestDef genRequestDefForDeleteDeployTask();
    static HttpRequestDef genRequestDefForListAllApp();
    static HttpRequestDef genRequestDefForListDeployTaskHistoryByDate();
    static HttpRequestDef genRequestDefForListDeployTasks();
    static HttpRequestDef genRequestDefForShowAppDetailById();
    static HttpRequestDef genRequestDefForShowDeployTaskDetail();
    static HttpRequestDef genRequestDefForShowExecutionParams();
    static HttpRequestDef genRequestDefForStartDeployTask();
    static HttpRequestDef genRequestDefForUpdateAppDisableStatus();
    static HttpRequestDef genRequestDefForUpdateAppInfo();
    static HttpRequestDef genRequestDefForCreateEnvironment();
    static HttpRequestDef genRequestDefForDeleteEnvironment();
    static HttpRequestDef genRequestDefForDeleteHostFromEnvironment();
    static HttpRequestDef genRequestDefForImportHostToEnvironment();
    static HttpRequestDef genRequestDefForListEnvironmentHosts();
    static HttpRequestDef genRequestDefForListEnvironments();
    static HttpRequestDef genRequestDefForShowEnvironmentDetail();
    static HttpRequestDef genRequestDefForUpdateEnvironment();
    static HttpRequestDef genRequestDefForListEnvironmentPermissions();
    static HttpRequestDef genRequestDefForUpdateEnvironmentPermission();
    static HttpRequestDef genRequestDefForBatchDeleteHosts();
    static HttpRequestDef genRequestDefForCopyHostsToTarget();
    static HttpRequestDef genRequestDefForCreateDeploymentHost();
    static HttpRequestDef genRequestDefForCreateHost();
    static HttpRequestDef genRequestDefForDeleteDeploymentHost();
    static HttpRequestDef genRequestDefForDeleteHost();
    static HttpRequestDef genRequestDefForListHosts();
    static HttpRequestDef genRequestDefForListNewHosts();
    static HttpRequestDef genRequestDefForShowDeploymentHostDetail();
    static HttpRequestDef genRequestDefForShowHostDetail();
    static HttpRequestDef genRequestDefForUpdateDeploymentHost();
    static HttpRequestDef genRequestDefForUpdateHostInfo();
    static HttpRequestDef genRequestDefForCreateDeploymentGroup();
    static HttpRequestDef genRequestDefForCreateHostCluster();
    static HttpRequestDef genRequestDefForDeleteDeploymentGroup();
    static HttpRequestDef genRequestDefForDeleteHostCluster();
    static HttpRequestDef genRequestDefForListAssociateEnvironmentsInfos();
    static HttpRequestDef genRequestDefForListHostClusters();
    static HttpRequestDef genRequestDefForListHostGroupBaseInfos();
    static HttpRequestDef genRequestDefForListHostGroups();
    static HttpRequestDef genRequestDefForShowDeploymentGroupDetail();
    static HttpRequestDef genRequestDefForShowHostClusterDetail();
    static HttpRequestDef genRequestDefForUpdateDeploymentGroup();
    static HttpRequestDef genRequestDefForUpdateHostCluster();
    static HttpRequestDef genRequestDefForCheckWhetherHostGroupCanBeCreated();
    static HttpRequestDef genRequestDefForListHostGroupPermissions();
    static HttpRequestDef genRequestDefForUpdateHostGroupPermissions();
    static HttpRequestDef genRequestDefForListTaskSuccessRate();
    static HttpRequestDef genRequestDefForShowProjectSuccessRate();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_CodeArtsDeployMeta_H_
