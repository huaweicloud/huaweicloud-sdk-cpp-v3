
#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef CodeArtsDeployMeta::genRequestDefForCreateAppGroups() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForDeleteAppGroups() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForListAppGroups() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForMoveAppGroups() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForMoveAppToGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForUpdateAppGroups() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForBatchUpdateApplicationPermissions() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForBatchUpdatePermissionLevel() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForCheckCanCreate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectId")
                  .withJsonTag("project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForListApplicationPermissions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectId")
                  .withJsonTag("project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForBatchDeleteApp() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForCheckIsDuplicateAppName() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectId")
                  .withJsonTag("project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForCopyApplication() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForCreateApp() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForCreateDeployTaskByTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForDeleteApplication() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForDeleteDeployTask() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForListAllApp() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForListDeployTaskHistoryByDate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartDate")
                  .withJsonTag("start_date")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndDate")
                  .withJsonTag("end_date")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForListDeployTasks() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForShowAppDetailById() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForShowDeployTaskDetail() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForShowExecutionParams() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RecordId")
                  .withJsonTag("record_id")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForStartDeployTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForUpdateAppDisableStatus() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForUpdateAppInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForCheckDeployStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RecordId")
                  .withJsonTag("record_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StepState")
                  .withJsonTag("step_state")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForCreateEnvironment() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForDeleteEnvironment() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForDeleteHostFromEnvironment() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForImportHostToEnvironment() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForListEnvironmentHosts() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("KeyField")
                  .withJsonTag("key_field")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AsProxy")
                  .withJsonTag("as_proxy")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageIndex")
                  .withJsonTag("page_index")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForListEnvironments() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectId")
                  .withJsonTag("project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageIndex")
                  .withJsonTag("page_index")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForShowEnvironmentDetail() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForUpdateEnvironment() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForListEnvironmentPermissions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForUpdateEnvironmentPermission() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForStopDeployTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForBatchDeleteHosts() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForCopyHostsToTarget() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForCreateDeploymentHost() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForCreateHost() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForDeleteDeploymentHost() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForDeleteHost() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForListHosts() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AsProxy")
                  .withJsonTag("as_proxy")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("WithAuth")
                  .withJsonTag("with_auth")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForListNewHosts() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("KeyField")
                  .withJsonTag("key_field")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnvironmentId")
                  .withJsonTag("environment_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageIndex")
                  .withJsonTag("page_index")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AsProxy")
                  .withJsonTag("as_proxy")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForShowDeploymentHostDetail() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForShowHostDetail() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForUpdateDeploymentHost() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForUpdateHostInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForCreateDeploymentGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForCreateHostCluster() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForDeleteDeploymentGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForDeleteHostCluster() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForListAssociateEnvironmentsInfos() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageIndex")
                  .withJsonTag("page_index")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForListHostClusters() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectId")
                  .withJsonTag("project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Os")
                  .withJsonTag("os")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageIndex")
                  .withJsonTag("page_index")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortField")
                  .withJsonTag("sort_field")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortType")
                  .withJsonTag("sort_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IsProxyMode")
                  .withJsonTag("is_proxy_mode")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SlaveClusterId")
                  .withJsonTag("slave_cluster_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForListHostGroupBaseInfos() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectUuid")
                  .withJsonTag("project_uuid")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Os")
                  .withJsonTag("os")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageIndex")
                  .withJsonTag("page_index")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForListHostGroups() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectId")
                  .withJsonTag("project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RegionName")
                  .withJsonTag("region_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Os")
                  .withJsonTag("os")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForShowDeploymentGroupDetail() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForShowHostClusterDetail() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForUpdateDeploymentGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForUpdateHostCluster() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForCheckWhetherHostGroupCanBeCreated() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForListHostGroupPermissions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForUpdateHostGroupPermissions() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForListTaskSuccessRate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsDeployMeta::genRequestDefForShowProjectSuccessRate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartDate")
                  .withJsonTag("start_date")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndDate")
                  .withJsonTag("end_date")
                  .withLocationType(Query_));
    return reqDefBuilder;
}


}
}
}
}

