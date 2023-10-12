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
    static HttpRequestDef genRequestDefForCreateEnvironment();
    static HttpRequestDef genRequestDefForDeleteEnvironment();
    static HttpRequestDef genRequestDefForDeleteHostFromEnvironment();
    static HttpRequestDef genRequestDefForImportHostToEnvironment();
    static HttpRequestDef genRequestDefForListEnvironments();
    static HttpRequestDef genRequestDefForShowEnvironmentDetail();
    static HttpRequestDef genRequestDefForCreateDeploymentHost();
    static HttpRequestDef genRequestDefForCreateHost();
    static HttpRequestDef genRequestDefForDeleteDeploymentHost();
    static HttpRequestDef genRequestDefForListHosts();
    static HttpRequestDef genRequestDefForListNewHosts();
    static HttpRequestDef genRequestDefForShowDeploymentHostDetail();
    static HttpRequestDef genRequestDefForShowHostDetail();
    static HttpRequestDef genRequestDefForUpdateDeploymentHost();
    static HttpRequestDef genRequestDefForCreateDeploymentGroup();
    static HttpRequestDef genRequestDefForCreateHostCluster();
    static HttpRequestDef genRequestDefForDeleteDeploymentGroup();
    static HttpRequestDef genRequestDefForListHostClusters();
    static HttpRequestDef genRequestDefForListHostGroups();
    static HttpRequestDef genRequestDefForShowDeploymentGroupDetail();
    static HttpRequestDef genRequestDefForShowHostClusterDetail();
    static HttpRequestDef genRequestDefForUpdateDeploymentGroup();
    static HttpRequestDef genRequestDefForListTaskSuccessRate();
    static HttpRequestDef genRequestDefForShowProjectSuccessRate();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_CodeArtsDeployMeta_H_
