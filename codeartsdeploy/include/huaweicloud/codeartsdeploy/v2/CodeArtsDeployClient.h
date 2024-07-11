#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_CodeArtsDeployClient_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_CodeArtsDeployClient_H_

#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/codeartsdeploy/v2/model/CreateAppGroupsRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/CreateAppGroupsRequestBody.h>
#include <huaweicloud/codeartsdeploy/v2/model/CreateAppGroupsResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteAppGroupsRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteAppGroupsResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListAppGroupsRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListAppGroupsResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/MoveAppGroupsRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/MoveAppGroupsRequestBody.h>
#include <huaweicloud/codeartsdeploy/v2/model/MoveAppGroupsResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/MoveAppToGroupRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/MoveAppToGroupRequestBody.h>
#include <huaweicloud/codeartsdeploy/v2/model/MoveAppToGroupResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateAppGroupsRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateAppGroupsRequestBody.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateAppGroupsResponse.h>
#include <string>

#include <huaweicloud/codeartsdeploy/v2/model/BatchUpdateApplicationPermissionsRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/BatchUpdateApplicationPermissionsRequestBody.h>
#include <huaweicloud/codeartsdeploy/v2/model/BatchUpdateApplicationPermissionsResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/BatchUpdatePermissionLevelRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/BatchUpdatePermissionLevelRequestBody.h>
#include <huaweicloud/codeartsdeploy/v2/model/BatchUpdatePermissionLevelResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/CheckCanCreateRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/CheckCanCreateResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListApplicationPermissionsRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListApplicationPermissionsResponse.h>
#include <string>

#include <huaweicloud/codeartsdeploy/v2/model/AppBatchDeleteRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/BatchDeleteAppRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/BatchDeleteAppResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/CheckIsDuplicateAppNameRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/CheckIsDuplicateAppNameResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ConfigInfo.h>
#include <huaweicloud/codeartsdeploy/v2/model/CopyApplicationRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/CopyApplicationResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/CreateAppRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/CreateAppRequestBody.h>
#include <huaweicloud/codeartsdeploy/v2/model/CreateAppResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/CreateDeployTaskByTemplateRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/CreateDeployTaskByTemplateResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteApplicationRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteApplicationResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteDeployTaskRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteDeployTaskResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/EnvExecutionBody.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListAllAppRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListAllAppRequestBody.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListAllAppResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListDeployTaskHistoryByDateRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListDeployTaskHistoryByDateResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListDeployTasksRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListDeployTasksResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowAppDetailByIdRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowAppDetailByIdResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowDeployTaskDetailRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowDeployTaskDetailResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowExecutionParamsRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowExecutionParamsResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/StartDeployTaskRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/StartDeployTaskResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/TemplateTaskRequestBody.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateAppDisableStatusRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateAppDisableStatusRequestBody.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateAppDisableStatusResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateAppInfoRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateAppInfoRequestBody.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateAppInfoResponse.h>
#include <string>

#include <huaweicloud/codeartsdeploy/v2/model/CreateEnvironmentRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/CreateEnvironmentResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteEnvironmentRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteEnvironmentResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteHostFromEnvironmentRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteHostFromEnvironmentResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/EnvironmentRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/EnvironmentRequestBody.h>
#include <huaweicloud/codeartsdeploy/v2/model/ImportHostToEnvironmentRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ImportHostToEnvironmentRequestBody.h>
#include <huaweicloud/codeartsdeploy/v2/model/ImportHostToEnvironmentResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListEnvironmentHostsRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListEnvironmentHostsResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListEnvironmentsRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListEnvironmentsResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowEnvironmentDetailRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowEnvironmentDetailResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateEnvironmentRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateEnvironmentResponse.h>
#include <string>

#include <huaweicloud/codeartsdeploy/v2/model/DevUcEnvironmentPermission.h>
#include <huaweicloud/codeartsdeploy/v2/model/EnvironmentPermissionV2Body.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListEnvironmentPermissionsRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListEnvironmentPermissionsResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateEnvironmentPermissionRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateEnvironmentPermissionResponse.h>
#include <string>

#include <huaweicloud/codeartsdeploy/v2/model/BatchDeleteHostsRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/BatchDeleteHostsResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/CopyHostsToTargetRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/CopyHostsToTargetResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/CreateDeploymentHostRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/CreateDeploymentHostResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/CreateHostRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/CreateHostRequestBody.h>
#include <huaweicloud/codeartsdeploy/v2/model/CreateHostResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteDeploymentHostRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteDeploymentHostResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteHostRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteHostResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeploymentHost.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeploymentHostListEntity.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeploymentHostRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeploymentHostRequestExternal.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeploymentHostsCopyRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListHostsRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListHostsResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListNewHostsRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListNewHostsResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowDeploymentHostDetailRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowDeploymentHostDetailResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowHostDetailRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowHostDetailResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateDeploymentHostRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateDeploymentHostResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateHostInfoRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateHostInfoResponse.h>
#include <string>

#include <huaweicloud/codeartsdeploy/v2/model/CreateDeploymentGroupRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/CreateDeploymentGroupResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/CreateHostClusterRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/CreateHostClusterRequestBody.h>
#include <huaweicloud/codeartsdeploy/v2/model/CreateHostClusterResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteDeploymentGroupRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteDeploymentGroupResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteHostClusterRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteHostClusterResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeploymentGroup.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeploymentGroupUpdateRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/HostClusterRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListAssociateEnvironmentsInfosRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListAssociateEnvironmentsInfosResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListHostClustersRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListHostClustersResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListHostGroupBaseInfosRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListHostGroupBaseInfosResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListHostGroupsRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListHostGroupsResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowDeploymentGroupDetailRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowDeploymentGroupDetailResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowHostClusterDetailRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowHostClusterDetailResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateDeploymentGroupRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateDeploymentGroupResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateHostClusterRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateHostClusterResponse.h>
#include <string>

#include <huaweicloud/codeartsdeploy/v2/model/CheckWhetherHostGroupCanBeCreatedRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/CheckWhetherHostGroupCanBeCreatedResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/DevUcClusterPermission.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListHostGroupPermissionsRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListHostGroupPermissionsResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/PermissionUpdateV2Body.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateHostGroupPermissionsRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateHostGroupPermissionsResponse.h>
#include <string>

#include <huaweicloud/codeartsdeploy/v2/model/ListTaskSuccessRateRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListTaskSuccessRateResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowProjectSuccessRateRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowProjectSuccessRateResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/TasksSuccessRateQuery.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Codeartsdeploy::V2::Model;

class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  CodeArtsDeployClient : public Client
{
public:

    CodeArtsDeployClient();

    virtual ~CodeArtsDeployClient();

    static ClientBuilder<CodeArtsDeployClient> newBuilder();

    // 创建分组
    //
    // 创建分组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAppGroupsResponse> createAppGroups(
        CreateAppGroupsRequest &request
    );
    // 删除分组
    //
    // 删除分组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAppGroupsResponse> deleteAppGroups(
        DeleteAppGroupsRequest &request
    );
    // 查询分组列表
    //
    // 查询分组列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAppGroupsResponse> listAppGroups(
        ListAppGroupsRequest &request
    );
    // 移动分组
    //
    // 往上或者往下移动单个分组,用来在页面上调整分组位置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<MoveAppGroupsResponse> moveAppGroups(
        MoveAppGroupsRequest &request
    );
    // 移动应用至指定分组
    //
    // 将应用移动至指定分组（支持批量）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<MoveAppToGroupResponse> moveAppToGroup(
        MoveAppToGroupRequest &request
    );
    // 修改分组
    //
    // 修改分组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAppGroupsResponse> updateAppGroups(
        UpdateAppGroupsRequest &request
    );

    // 批量修改应用权限
    //
    // 批量修改应用权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchUpdateApplicationPermissionsResponse> batchUpdateApplicationPermissions(
        BatchUpdateApplicationPermissionsRequest &request
    );
    // 批量配置应用下鉴权级别
    //
    // 批量配置应用下鉴权级别为项目级或实例级。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchUpdatePermissionLevelResponse> batchUpdatePermissionLevel(
        BatchUpdatePermissionLevelRequest &request
    );
    // 查询当前用户是否有项目下创建应用权限
    //
    // 查询当前用户是否有项目下创建应用权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckCanCreateResponse> checkCanCreate(
        CheckCanCreateRequest &request
    );
    // 查询应用实例级/项目级权限矩阵
    //
    // 查询应用实例级/项目级权限矩阵，传递app_id时，查询应用实例级权限矩阵；未传app_id，传递project_id时，查询应用项目级权限矩阵。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApplicationPermissionsResponse> listApplicationPermissions(
        ListApplicationPermissionsRequest &request
    );

    // 批量删除项目下应用
    //
    // 批量删除项目下应用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteAppResponse> batchDeleteApp(
        BatchDeleteAppRequest &request
    );
    // 查询项目下是否存在同名应用
    //
    // 查询项目下是否存在同名应用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckIsDuplicateAppNameResponse> checkIsDuplicateAppName(
        CheckIsDuplicateAppNameRequest &request
    );
    // 复制应用
    //
    // 复制应用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CopyApplicationResponse> copyApplication(
        CopyApplicationRequest &request
    );
    // 新建应用
    //
    // 新建应用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAppResponse> createApp(
        CreateAppRequest &request
    );
    // 通过模板新建应用
    //
    // 通过模板新建应用。该接口于2024年09月30日后不再维护，推荐使用新版CreateApp接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDeployTaskByTemplateResponse> createDeployTaskByTemplate(
        CreateDeployTaskByTemplateRequest &request
    );
    // 删除应用
    //
    // 根据应用id删除应用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteApplicationResponse> deleteApplication(
        DeleteApplicationRequest &request
    );
    // 删除应用
    //
    // 根据部署任务id删除应用。该接口于2024年09月30日后不再维护，推荐使用新版DeleteApplication接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDeployTaskResponse> deleteDeployTask(
        DeleteDeployTaskRequest &request
    );
    // 获取应用列表
    //
    // 查询项目下应用列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAllAppResponse> listAllApp(
        ListAllAppRequest &request
    );
    // 根据开始时间和结束时间查询项目下指定应用的历史部署记录列表
    //
    // 根据开始时间和结束时间查询项目下指定应用的历史部署记录列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDeployTaskHistoryByDateResponse> listDeployTaskHistoryByDate(
        ListDeployTaskHistoryByDateRequest &request
    );
    // 获取应用列表
    //
    // 查询项目下应用列表。该接口于2024年09月30日后不再维护，推荐使用新版ListAllApp接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDeployTasksResponse> listDeployTasks(
        ListDeployTasksRequest &request
    );
    // 获取应用详情
    //
    // 根据应用id获取应用详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAppDetailByIdResponse> showAppDetailById(
        ShowAppDetailByIdRequest &request
    );
    // 获取应用详情
    //
    // 根据部署任务id获取应用详情。该接口于2024年09月30日后不再维护，推荐使用新版ShowAppDetailById接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeployTaskDetailResponse> showDeployTaskDetail(
        ShowDeployTaskDetailRequest &request
    );
    // 查询部署记录的执行参数
    //
    // 查询部署记录的执行参数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowExecutionParamsResponse> showExecutionParams(
        ShowExecutionParamsRequest &request
    );
    // 部署应用
    //
    // 根据部署任务id部署应用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartDeployTaskResponse> startDeployTask(
        StartDeployTaskRequest &request
    );
    // 禁用/取消禁用应用
    //
    // 禁用/取消禁用应用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAppDisableStatusResponse> updateAppDisableStatus(
        UpdateAppDisableStatusRequest &request
    );
    // 更新应用
    //
    // 更新应用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAppInfoResponse> updateAppInfo(
        UpdateAppInfoRequest &request
    );

    // 应用下创建环境
    //
    // 应用下创建环境。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateEnvironmentResponse> createEnvironment(
        CreateEnvironmentRequest &request
    );
    // 删除应用下的环境
    //
    // 删除应用下的环境。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteEnvironmentResponse> deleteEnvironment(
        DeleteEnvironmentRequest &request
    );
    // 环境下删除主机
    //
    // 环境下删除主机。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteHostFromEnvironmentResponse> deleteHostFromEnvironment(
        DeleteHostFromEnvironmentRequest &request
    );
    // 环境下导入主机
    //
    // 环境下导入主机。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ImportHostToEnvironmentResponse> importHostToEnvironment(
        ImportHostToEnvironmentRequest &request
    );
    // 查询环境内的主机列表
    //
    // 查询环境内的主机列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEnvironmentHostsResponse> listEnvironmentHosts(
        ListEnvironmentHostsRequest &request
    );
    // 查询应用下环境列表
    //
    // 查询应用下环境列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEnvironmentsResponse> listEnvironments(
        ListEnvironmentsRequest &request
    );
    // 查询环境详情
    //
    // 查询环境详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowEnvironmentDetailResponse> showEnvironmentDetail(
        ShowEnvironmentDetailRequest &request
    );
    // 应用下编辑环境
    //
    // 应用下编辑环境。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateEnvironmentResponse> updateEnvironment(
        UpdateEnvironmentRequest &request
    );

    // 查询环境权限
    //
    // 查询环境权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEnvironmentPermissionsResponse> listEnvironmentPermissions(
        ListEnvironmentPermissionsRequest &request
    );
    // 编辑环境权限
    //
    // 编辑环境权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateEnvironmentPermissionResponse> updateEnvironmentPermission(
        UpdateEnvironmentPermissionRequest &request
    );

    // 批量删除主机集群下的主机
    //
    // 批量删除主机集群下的主机。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteHostsResponse> batchDeleteHosts(
        BatchDeleteHostsRequest &request
    );
    // 批量复制主机至目标主机集群
    //
    // 批量复制主机至目标主机集群。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CopyHostsToTargetResponse> copyHostsToTarget(
        CopyHostsToTargetRequest &request
    );
    // 新建主机
    //
    // 在指定主机集群下新建主机。该接口于2024年09月30日后不再维护，推荐使用新版CreateHost接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDeploymentHostResponse> createDeploymentHost(
        CreateDeploymentHostRequest &request
    );
    // 新建主机
    //
    // 在指定主机集群下新建主机。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateHostResponse> createHost(
        CreateHostRequest &request
    );
    // 删除主机
    //
    // 根据主机id删除主机。该接口于2024年9月30日后不再维护。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDeploymentHostResponse> deleteDeploymentHost(
        DeleteDeploymentHostRequest &request
    );
    // 删除主机集群下主机
    //
    // 根据主机id删除主机集群下主机。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteHostResponse> deleteHost(
        DeleteHostRequest &request
    );
    // 查询主机列表
    //
    // 根据主机集群id查询指定主机集群下的主机列表。该接口于2024年09月30日后不再维护，推荐使用新版ListNewHosts接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHostsResponse> listHosts(
        ListHostsRequest &request
    );
    // 查询主机列表
    //
    // 根据主机集群id查询指定主机集群下的主机列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNewHostsResponse> listNewHosts(
        ListNewHostsRequest &request
    );
    // 查询主机详情
    //
    // 根据主机id查询主机详情。该接口于2024年09月30日后不再维护，推荐使用新版ShowHostDetail接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeploymentHostDetailResponse> showDeploymentHostDetail(
        ShowDeploymentHostDetailRequest &request
    );
    // 查询主机详情
    //
    // 根据主机id查询主机详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHostDetailResponse> showHostDetail(
        ShowHostDetailRequest &request
    );
    // 修改主机
    //
    // 根据主机id修改主机信息。该接口于2024年9月30日后不再维护。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDeploymentHostResponse> updateDeploymentHost(
        UpdateDeploymentHostRequest &request
    );
    // 编辑主机集群下主机信息
    //
    // 根据主机id编辑主机集群下主机信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateHostInfoResponse> updateHostInfo(
        UpdateHostInfoRequest &request
    );

    // 新建主机集群
    //
    // 在项目下新建主机集群。该接口于2024年09月30日后不再维护，推荐使用新版CreateHostCluster接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDeploymentGroupResponse> createDeploymentGroup(
        CreateDeploymentGroupRequest &request
    );
    // 新建主机集群
    //
    // 在项目下新建主机集群。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateHostClusterResponse> createHostCluster(
        CreateHostClusterRequest &request
    );
    // 删除主机集群
    //
    // 根据主机集群id删除主机集群。该接口于2024年9月30日后不再维护。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDeploymentGroupResponse> deleteDeploymentGroup(
        DeleteDeploymentGroupRequest &request
    );
    // 删除主机集群
    //
    // 根据主机集群id删除主机集群。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteHostClusterResponse> deleteHostCluster(
        DeleteHostClusterRequest &request
    );
    // 查询主机集群关联环境信息
    //
    // 查询主机集群关联环境信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAssociateEnvironmentsInfosResponse> listAssociateEnvironmentsInfos(
        ListAssociateEnvironmentsInfosRequest &request
    );
    // 查询主机集群列表
    //
    // 按条件查询主机集群列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHostClustersResponse> listHostClusters(
        ListHostClustersRequest &request
    );
    // 查询应用下环境基本信息列表
    //
    // 查询应用下环境基本信息列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHostGroupBaseInfosResponse> listHostGroupBaseInfos(
        ListHostGroupBaseInfosRequest &request
    );
    // 查询主机集群列表
    //
    // 按条件查询主机集群列表。该接口于2024年09月30日后不再维护，推荐使用新版ListHostClusters接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHostGroupsResponse> listHostGroups(
        ListHostGroupsRequest &request
    );
    // 查询主机集群详情
    //
    // 根据主机集群id查询主机集群详情。该接口于2024年09月30日后不再维护，推荐使用新版ShowHostClusterDetail接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeploymentGroupDetailResponse> showDeploymentGroupDetail(
        ShowDeploymentGroupDetailRequest &request
    );
    // 查询主机集群详情
    //
    // 根据主机集群id查询主机集群详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHostClusterDetailResponse> showHostClusterDetail(
        ShowHostClusterDetailRequest &request
    );
    // 修改主机集群
    //
    // 根据主机集群id修改主机集群信息。该接口于2024年9月30日后不再维护。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDeploymentGroupResponse> updateDeploymentGroup(
        UpdateDeploymentGroupRequest &request
    );
    // 编辑主机集群
    //
    // 编辑主机集群。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateHostClusterResponse> updateHostCluster(
        UpdateHostClusterRequest &request
    );

    // 判断当前用户在项目下是否有权限创建主机集群
    //
    // 判断当前用户在项目下是否有权限创建主机集群。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckWhetherHostGroupCanBeCreatedResponse> checkWhetherHostGroupCanBeCreated(
        CheckWhetherHostGroupCanBeCreatedRequest &request
    );
    // 查询主机集群权限矩阵
    //
    // 根据主机集群id查询主机集群权限矩阵。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHostGroupPermissionsResponse> listHostGroupPermissions(
        ListHostGroupPermissionsRequest &request
    );
    // 修改主机集群权限矩阵
    //
    // 根据主机集群id修改主机集群权限矩阵。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateHostGroupPermissionsResponse> updateHostGroupPermissions(
        UpdateHostGroupPermissionsRequest &request
    );

    // 获取指定应用的应用部署成功率
    //
    // 获取指定应用的应用部署成功率。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTaskSuccessRateResponse> listTaskSuccessRate(
        ListTaskSuccessRateRequest &request
    );
    // 获取指定项目的应用部署成功率
    //
    // 获取指定项目的应用部署成功率。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectSuccessRateResponse> showProjectSuccessRate(
        ShowProjectSuccessRateRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const Object& obj);
    std::string parameterToString(const utility::datetime &value);

    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Codeartsdeploy::V2::CodeArtsDeployClient>;

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_CodeArtsDeployClient_H_

