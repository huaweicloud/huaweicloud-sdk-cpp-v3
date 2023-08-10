#ifndef HUAWEICLOUD_SDK_DDS_V3_DdsClient_H_
#define HUAWEICLOUD_SDK_DDS_V3_DdsClient_H_

#include <huaweicloud/dds/v3/DdsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/dds/v3/model/AddReadonlyNodeRequest.h>
#include <huaweicloud/dds/v3/model/AddReadonlyNodeRequestBody.h>
#include <huaweicloud/dds/v3/model/AddReadonlyNodeResponse.h>
#include <huaweicloud/dds/v3/model/AddShardingNodeRequest.h>
#include <huaweicloud/dds/v3/model/AddShardingNodeResponse.h>
#include <huaweicloud/dds/v3/model/ApplyConfigurationRequestBody.h>
#include <huaweicloud/dds/v3/model/AttachEipRequest.h>
#include <huaweicloud/dds/v3/model/AttachEipRequestBody.h>
#include <huaweicloud/dds/v3/model/AttachEipResponse.h>
#include <huaweicloud/dds/v3/model/AttachInternalIpRequest.h>
#include <huaweicloud/dds/v3/model/AttachInternalIpRequestBody.h>
#include <huaweicloud/dds/v3/model/AttachInternalIpResponse.h>
#include <huaweicloud/dds/v3/model/BalancerActiveWindow.h>
#include <huaweicloud/dds/v3/model/BatchOperateInstanceTagRequestBody.h>
#include <huaweicloud/dds/v3/model/BatchTagActionRequest.h>
#include <huaweicloud/dds/v3/model/BatchTagActionResponse.h>
#include <huaweicloud/dds/v3/model/CancelEipRequest.h>
#include <huaweicloud/dds/v3/model/CancelEipResponse.h>
#include <huaweicloud/dds/v3/model/ChangeOpsWindowRequest.h>
#include <huaweicloud/dds/v3/model/ChangeOpsWindowResponse.h>
#include <huaweicloud/dds/v3/model/CheckPasswordRequest.h>
#include <huaweicloud/dds/v3/model/CheckPasswordRequestBody.h>
#include <huaweicloud/dds/v3/model/CheckPasswordResponse.h>
#include <huaweicloud/dds/v3/model/CheckWeakPasswordRequest.h>
#include <huaweicloud/dds/v3/model/CheckWeakPasswordResponse.h>
#include <huaweicloud/dds/v3/model/ClientNetworkRequestBody.h>
#include <huaweicloud/dds/v3/model/CompareConfigurationRequest.h>
#include <huaweicloud/dds/v3/model/CompareConfigurationResponse.h>
#include <huaweicloud/dds/v3/model/CopyConfigurationRequest.h>
#include <huaweicloud/dds/v3/model/CopyConfigurationRequestBody.h>
#include <huaweicloud/dds/v3/model/CopyConfigurationResponse.h>
#include <huaweicloud/dds/v3/model/CreateConfigurationRequest.h>
#include <huaweicloud/dds/v3/model/CreateConfigurationRequestBody.h>
#include <huaweicloud/dds/v3/model/CreateConfigurationResponse.h>
#include <huaweicloud/dds/v3/model/CreateDatabaseRoleRequest.h>
#include <huaweicloud/dds/v3/model/CreateDatabaseRoleRequestBody.h>
#include <huaweicloud/dds/v3/model/CreateDatabaseRoleResponse.h>
#include <huaweicloud/dds/v3/model/CreateDatabaseUserRequest.h>
#include <huaweicloud/dds/v3/model/CreateDatabaseUserRequestBody.h>
#include <huaweicloud/dds/v3/model/CreateDatabaseUserResponse.h>
#include <huaweicloud/dds/v3/model/CreateInstanceRequest.h>
#include <huaweicloud/dds/v3/model/CreateInstanceRequestBody.h>
#include <huaweicloud/dds/v3/model/CreateInstanceResponse.h>
#include <huaweicloud/dds/v3/model/CreateIpRequest.h>
#include <huaweicloud/dds/v3/model/CreateIpRequestBody.h>
#include <huaweicloud/dds/v3/model/CreateIpResponse.h>
#include <huaweicloud/dds/v3/model/CreateManualBackupRequest.h>
#include <huaweicloud/dds/v3/model/CreateManualBackupRequestBody.h>
#include <huaweicloud/dds/v3/model/CreateManualBackupResponse.h>
#include <huaweicloud/dds/v3/model/DeleteAuditLogRequest.h>
#include <huaweicloud/dds/v3/model/DeleteAuditLogRequestBody.h>
#include <huaweicloud/dds/v3/model/DeleteAuditLogResponse.h>
#include <huaweicloud/dds/v3/model/DeleteConfigurationRequest.h>
#include <huaweicloud/dds/v3/model/DeleteConfigurationResponse.h>
#include <huaweicloud/dds/v3/model/DeleteDatabaseRoleRequest.h>
#include <huaweicloud/dds/v3/model/DeleteDatabaseRoleRequestBody.h>
#include <huaweicloud/dds/v3/model/DeleteDatabaseRoleResponse.h>
#include <huaweicloud/dds/v3/model/DeleteDatabaseUserRequest.h>
#include <huaweicloud/dds/v3/model/DeleteDatabaseUserRequestBody.h>
#include <huaweicloud/dds/v3/model/DeleteDatabaseUserResponse.h>
#include <huaweicloud/dds/v3/model/DeleteInstanceRequest.h>
#include <huaweicloud/dds/v3/model/DeleteInstanceResponse.h>
#include <huaweicloud/dds/v3/model/DeleteManualBackupRequest.h>
#include <huaweicloud/dds/v3/model/DeleteManualBackupResponse.h>
#include <huaweicloud/dds/v3/model/DeleteSessionRequest.h>
#include <huaweicloud/dds/v3/model/DeleteSessionRequestBody.h>
#include <huaweicloud/dds/v3/model/DeleteSessionResponse.h>
#include <huaweicloud/dds/v3/model/DiffConfigurationRequest.h>
#include <huaweicloud/dds/v3/model/DownloadErrorlogRequest.h>
#include <huaweicloud/dds/v3/model/DownloadErrorlogRequestBody.h>
#include <huaweicloud/dds/v3/model/DownloadErrorlogResponse.h>
#include <huaweicloud/dds/v3/model/DownloadSlowlogRequest.h>
#include <huaweicloud/dds/v3/model/DownloadSlowlogRequestBody.h>
#include <huaweicloud/dds/v3/model/DownloadSlowlogResponse.h>
#include <huaweicloud/dds/v3/model/EnlargeInstanceRequestBody.h>
#include <huaweicloud/dds/v3/model/EnlargeReplicasetNodeRequestBody.h>
#include <huaweicloud/dds/v3/model/ErrorResponse.h>
#include <huaweicloud/dds/v3/model/ExpandReplicasetNodeRequest.h>
#include <huaweicloud/dds/v3/model/ExpandReplicasetNodeResponse.h>
#include <huaweicloud/dds/v3/model/ListAppliedInstancesRequest.h>
#include <huaweicloud/dds/v3/model/ListAppliedInstancesResponse.h>
#include <huaweicloud/dds/v3/model/ListAuditlogLinksRequest.h>
#include <huaweicloud/dds/v3/model/ListAuditlogLinksResponse.h>
#include <huaweicloud/dds/v3/model/ListAuditlogsRequest.h>
#include <huaweicloud/dds/v3/model/ListAuditlogsResponse.h>
#include <huaweicloud/dds/v3/model/ListAz2MigrateRequest.h>
#include <huaweicloud/dds/v3/model/ListAz2MigrateResponse.h>
#include <huaweicloud/dds/v3/model/ListBackupsRequest.h>
#include <huaweicloud/dds/v3/model/ListBackupsResponse.h>
#include <huaweicloud/dds/v3/model/ListConfigurationsRequest.h>
#include <huaweicloud/dds/v3/model/ListConfigurationsResponse.h>
#include <huaweicloud/dds/v3/model/ListDatabaseRolesRequest.h>
#include <huaweicloud/dds/v3/model/ListDatabaseRolesResponse.h>
#include <huaweicloud/dds/v3/model/ListDatabaseUsersRequest.h>
#include <huaweicloud/dds/v3/model/ListDatabaseUsersResponse.h>
#include <huaweicloud/dds/v3/model/ListDatastoreVersionsRequest.h>
#include <huaweicloud/dds/v3/model/ListDatastoreVersionsResponse.h>
#include <huaweicloud/dds/v3/model/ListErrorLogsRequest.h>
#include <huaweicloud/dds/v3/model/ListErrorLogsResponse.h>
#include <huaweicloud/dds/v3/model/ListFlavorInfosRequest.h>
#include <huaweicloud/dds/v3/model/ListFlavorInfosResponse.h>
#include <huaweicloud/dds/v3/model/ListFlavorsRequest.h>
#include <huaweicloud/dds/v3/model/ListFlavorsResponse.h>
#include <huaweicloud/dds/v3/model/ListInstanceTagsRequest.h>
#include <huaweicloud/dds/v3/model/ListInstanceTagsResponse.h>
#include <huaweicloud/dds/v3/model/ListInstancesByTagsRequest.h>
#include <huaweicloud/dds/v3/model/ListInstancesByTagsRequestBody.h>
#include <huaweicloud/dds/v3/model/ListInstancesByTagsResponse.h>
#include <huaweicloud/dds/v3/model/ListInstancesRequest.h>
#include <huaweicloud/dds/v3/model/ListInstancesResponse.h>
#include <huaweicloud/dds/v3/model/ListLtsSlowLogsRequest.h>
#include <huaweicloud/dds/v3/model/ListLtsSlowLogsRequestBody.h>
#include <huaweicloud/dds/v3/model/ListLtsSlowLogsResponse.h>
#include <huaweicloud/dds/v3/model/ListProjectTagsRequest.h>
#include <huaweicloud/dds/v3/model/ListProjectTagsResponse.h>
#include <huaweicloud/dds/v3/model/ListRecycleInstancesRequest.h>
#include <huaweicloud/dds/v3/model/ListRecycleInstancesResponse.h>
#include <huaweicloud/dds/v3/model/ListRestoreCollectionsRequest.h>
#include <huaweicloud/dds/v3/model/ListRestoreCollectionsResponse.h>
#include <huaweicloud/dds/v3/model/ListRestoreDatabasesRequest.h>
#include <huaweicloud/dds/v3/model/ListRestoreDatabasesResponse.h>
#include <huaweicloud/dds/v3/model/ListRestoreTimesRequest.h>
#include <huaweicloud/dds/v3/model/ListRestoreTimesResponse.h>
#include <huaweicloud/dds/v3/model/ListSessionsRequest.h>
#include <huaweicloud/dds/v3/model/ListSessionsResponse.h>
#include <huaweicloud/dds/v3/model/ListSlowLogsRequest.h>
#include <huaweicloud/dds/v3/model/ListSlowLogsResponse.h>
#include <huaweicloud/dds/v3/model/ListSslCertDownloadAddressRequest.h>
#include <huaweicloud/dds/v3/model/ListSslCertDownloadAddressResponse.h>
#include <huaweicloud/dds/v3/model/ListStorageTypeRequest.h>
#include <huaweicloud/dds/v3/model/ListStorageTypeResponse.h>
#include <huaweicloud/dds/v3/model/ListTasksRequest.h>
#include <huaweicloud/dds/v3/model/ListTasksResponse.h>
#include <huaweicloud/dds/v3/model/MigrateAzRequest.h>
#include <huaweicloud/dds/v3/model/MigrateAzRequestBody.h>
#include <huaweicloud/dds/v3/model/MigrateAzResponse.h>
#include <huaweicloud/dds/v3/model/MongoUpdateReplSetV3RequestBody.h>
#include <huaweicloud/dds/v3/model/OpsWindowRequestBody.h>
#include <huaweicloud/dds/v3/model/ProduceAuditlogLinksRequestBody.h>
#include <huaweicloud/dds/v3/model/RecyclePolicyRequestBody.h>
#include <huaweicloud/dds/v3/model/ReduceInstanceNodeRequestBody.h>
#include <huaweicloud/dds/v3/model/ResetConfigurationRequest.h>
#include <huaweicloud/dds/v3/model/ResetConfigurationResponse.h>
#include <huaweicloud/dds/v3/model/ResetPasswordRequest.h>
#include <huaweicloud/dds/v3/model/ResetPasswordRequestBody.h>
#include <huaweicloud/dds/v3/model/ResetPasswordResponse.h>
#include <huaweicloud/dds/v3/model/ResizeInstanceRequest.h>
#include <huaweicloud/dds/v3/model/ResizeInstanceRequestBody.h>
#include <huaweicloud/dds/v3/model/ResizeInstanceResponse.h>
#include <huaweicloud/dds/v3/model/ResizeInstanceVolumeRequest.h>
#include <huaweicloud/dds/v3/model/ResizeInstanceVolumeRequestBody.h>
#include <huaweicloud/dds/v3/model/ResizeInstanceVolumeResponse.h>
#include <huaweicloud/dds/v3/model/RestartInstanceRequest.h>
#include <huaweicloud/dds/v3/model/RestartInstanceRequestBody.h>
#include <huaweicloud/dds/v3/model/RestartInstanceResponse.h>
#include <huaweicloud/dds/v3/model/RestoreInstanceFromCollectionRequest.h>
#include <huaweicloud/dds/v3/model/RestoreInstanceFromCollectionRequestBody.h>
#include <huaweicloud/dds/v3/model/RestoreInstanceFromCollectionResponse.h>
#include <huaweicloud/dds/v3/model/RestoreInstanceRequest.h>
#include <huaweicloud/dds/v3/model/RestoreInstanceRequestBody.h>
#include <huaweicloud/dds/v3/model/RestoreInstanceResponse.h>
#include <huaweicloud/dds/v3/model/RestoreNewInstanceRequest.h>
#include <huaweicloud/dds/v3/model/RestoreNewInstanceRequestBody.h>
#include <huaweicloud/dds/v3/model/RestoreNewInstanceResponse.h>
#include <huaweicloud/dds/v3/model/SetAuditlogPolicyRequest.h>
#include <huaweicloud/dds/v3/model/SetAuditlogPolicyRequestBody.h>
#include <huaweicloud/dds/v3/model/SetAuditlogPolicyResponse.h>
#include <huaweicloud/dds/v3/model/SetBackupPolicyRequest.h>
#include <huaweicloud/dds/v3/model/SetBackupPolicyRequestBody.h>
#include <huaweicloud/dds/v3/model/SetBackupPolicyResponse.h>
#include <huaweicloud/dds/v3/model/SetBalancerSwitchRequest.h>
#include <huaweicloud/dds/v3/model/SetBalancerSwitchResponse.h>
#include <huaweicloud/dds/v3/model/SetBalancerWindowRequest.h>
#include <huaweicloud/dds/v3/model/SetBalancerWindowResponse.h>
#include <huaweicloud/dds/v3/model/SetRecyclePolicyRequest.h>
#include <huaweicloud/dds/v3/model/SetRecyclePolicyResponse.h>
#include <huaweicloud/dds/v3/model/ShowAuditlogPolicyRequest.h>
#include <huaweicloud/dds/v3/model/ShowAuditlogPolicyResponse.h>
#include <huaweicloud/dds/v3/model/ShowBackupDownloadLinkRequest.h>
#include <huaweicloud/dds/v3/model/ShowBackupDownloadLinkResponse.h>
#include <huaweicloud/dds/v3/model/ShowBackupPolicyRequest.h>
#include <huaweicloud/dds/v3/model/ShowBackupPolicyResponse.h>
#include <huaweicloud/dds/v3/model/ShowConfigurationAppliedHistoryRequest.h>
#include <huaweicloud/dds/v3/model/ShowConfigurationAppliedHistoryResponse.h>
#include <huaweicloud/dds/v3/model/ShowConfigurationModifyHistoryRequest.h>
#include <huaweicloud/dds/v3/model/ShowConfigurationModifyHistoryResponse.h>
#include <huaweicloud/dds/v3/model/ShowConfigurationParameterRequest.h>
#include <huaweicloud/dds/v3/model/ShowConfigurationParameterResponse.h>
#include <huaweicloud/dds/v3/model/ShowConnectionStatisticsRequest.h>
#include <huaweicloud/dds/v3/model/ShowConnectionStatisticsResponse.h>
#include <huaweicloud/dds/v3/model/ShowDiskUsageRequest.h>
#include <huaweicloud/dds/v3/model/ShowDiskUsageResponse.h>
#include <huaweicloud/dds/v3/model/ShowEntityConfigurationRequest.h>
#include <huaweicloud/dds/v3/model/ShowEntityConfigurationResponse.h>
#include <huaweicloud/dds/v3/model/ShowJobDetailRequest.h>
#include <huaweicloud/dds/v3/model/ShowJobDetailResponse.h>
#include <huaweicloud/dds/v3/model/ShowQuotasRequest.h>
#include <huaweicloud/dds/v3/model/ShowQuotasResponse.h>
#include <huaweicloud/dds/v3/model/ShowRecyclePolicyRequest.h>
#include <huaweicloud/dds/v3/model/ShowRecyclePolicyResponse.h>
#include <huaweicloud/dds/v3/model/ShowReplSetNameRequest.h>
#include <huaweicloud/dds/v3/model/ShowReplSetNameResponse.h>
#include <huaweicloud/dds/v3/model/ShowSecondLevelMonitoringStatusRequest.h>
#include <huaweicloud/dds/v3/model/ShowSecondLevelMonitoringStatusResponse.h>
#include <huaweicloud/dds/v3/model/ShowShardingBalancerRequest.h>
#include <huaweicloud/dds/v3/model/ShowShardingBalancerResponse.h>
#include <huaweicloud/dds/v3/model/ShowSlowlogDesensitizationSwitchRequest.h>
#include <huaweicloud/dds/v3/model/ShowSlowlogDesensitizationSwitchResponse.h>
#include <huaweicloud/dds/v3/model/ShowUpgradeDurationRequest.h>
#include <huaweicloud/dds/v3/model/ShowUpgradeDurationResponse.h>
#include <huaweicloud/dds/v3/model/ShrinkInstanceNodesRequest.h>
#include <huaweicloud/dds/v3/model/ShrinkInstanceNodesResponse.h>
#include <huaweicloud/dds/v3/model/SwitchConfigurationRequest.h>
#include <huaweicloud/dds/v3/model/SwitchConfigurationResponse.h>
#include <huaweicloud/dds/v3/model/SwitchSecondLevelMonitoringRequest.h>
#include <huaweicloud/dds/v3/model/SwitchSecondLevelMonitoringRequestBody.h>
#include <huaweicloud/dds/v3/model/SwitchSecondLevelMonitoringResponse.h>
#include <huaweicloud/dds/v3/model/SwitchSlowlogDesensitizationRequest.h>
#include <huaweicloud/dds/v3/model/SwitchSlowlogDesensitizationResponse.h>
#include <huaweicloud/dds/v3/model/SwitchSslRequest.h>
#include <huaweicloud/dds/v3/model/SwitchSslRequestBody.h>
#include <huaweicloud/dds/v3/model/SwitchSslResponse.h>
#include <huaweicloud/dds/v3/model/SwitchoverReplicaSetRequest.h>
#include <huaweicloud/dds/v3/model/SwitchoverReplicaSetResponse.h>
#include <huaweicloud/dds/v3/model/UpdateClientNetworkRequest.h>
#include <huaweicloud/dds/v3/model/UpdateClientNetworkResponse.h>
#include <huaweicloud/dds/v3/model/UpdateConfigurationParameterRequest.h>
#include <huaweicloud/dds/v3/model/UpdateConfigurationParameterRequestBody.h>
#include <huaweicloud/dds/v3/model/UpdateConfigurationParameterResponse.h>
#include <huaweicloud/dds/v3/model/UpdateConfigurationParameterResult.h>
#include <huaweicloud/dds/v3/model/UpdateEntityConfigurationRequest.h>
#include <huaweicloud/dds/v3/model/UpdateEntityConfigurationResponse.h>
#include <huaweicloud/dds/v3/model/UpdateInstanceNameRequest.h>
#include <huaweicloud/dds/v3/model/UpdateInstanceNameResponse.h>
#include <huaweicloud/dds/v3/model/UpdateInstancePortRequest.h>
#include <huaweicloud/dds/v3/model/UpdateInstancePortResponse.h>
#include <huaweicloud/dds/v3/model/UpdateInstanceRemarkRequest.h>
#include <huaweicloud/dds/v3/model/UpdateInstanceRemarkRequestBody.h>
#include <huaweicloud/dds/v3/model/UpdateInstanceRemarkResponse.h>
#include <huaweicloud/dds/v3/model/UpdateNameRequestBody.h>
#include <huaweicloud/dds/v3/model/UpdatePortRequestBody.h>
#include <huaweicloud/dds/v3/model/UpdateReplSetNameRequest.h>
#include <huaweicloud/dds/v3/model/UpdateReplSetNameResponse.h>
#include <huaweicloud/dds/v3/model/UpdateSecurityGroupRequest.h>
#include <huaweicloud/dds/v3/model/UpdateSecurityGroupRequestBody.h>
#include <huaweicloud/dds/v3/model/UpdateSecurityGroupResponse.h>
#include <huaweicloud/dds/v3/model/UpgradeDatabaseVersionRequest.h>
#include <huaweicloud/dds/v3/model/UpgradeDatabaseVersionRequestBody.h>
#include <huaweicloud/dds/v3/model/UpgradeDatabaseVersionResponse.h>
#include <huaweicloud/dds/v3/model/WeakPasswordCheckRequestBody.h>
#include <string>

#include <huaweicloud/dds/v3/model/ListApiVersionRequest.h>
#include <huaweicloud/dds/v3/model/ListApiVersionResponse.h>
#include <huaweicloud/dds/v3/model/ShowApiVersionRequest.h>
#include <huaweicloud/dds/v3/model/ShowApiVersionResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Dds::V3::Model;

class HUAWEICLOUD_DDS_V3_EXPORT  DdsClient : public Client
{
public:

    DdsClient();

    virtual ~DdsClient();

    static ClientBuilder<DdsClient> newBuilder();

    // 实例新增只读节点
    //
    // DDS副本集实例新增只读节点。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddReadonlyNodeResponse> addReadonlyNode(
        AddReadonlyNodeRequest &request
    );
    // 扩容集群实例的节点数量
    //
    // 扩容指定集群实例的节点数量。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddShardingNodeResponse> addShardingNode(
        AddShardingNodeRequest &request
    );
    // 绑定弹性公网IP
    //
    // 为实例下的节点绑定弹性公网IP。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AttachEipResponse> attachEip(
        AttachEipRequest &request
    );
    // 修改实例内网地址
    //
    // 修改实例的内网地址
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AttachInternalIpResponse> attachInternalIp(
        AttachInternalIpRequest &request
    );
    // 批量添加或删除资源标签
    //
    // 批量添加或删除指定实例的标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchTagActionResponse> batchTagAction(
        BatchTagActionRequest &request
    );
    // 解绑弹性公网IP
    //
    // 解绑实例下节点已经绑定的弹性公网IP。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelEipResponse> cancelEip(
        CancelEipRequest &request
    );
    // 设置可维护时间段
    //
    // 修改用户允许启动某项对数据库实例运行有影响的任务的时间范围，例如操作系统升级和数据库软件版本升级的时间窗。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeOpsWindowResponse> changeOpsWindow(
        ChangeOpsWindowRequest &request
    );
    // 检查数据库密码
    //
    // 检查数据库密码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckPasswordResponse> checkPassword(
        CheckPasswordRequest &request
    );
    // 检查弱密码
    //
    // 检查弱密码
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckWeakPasswordResponse> checkWeakPassword(
        CheckWeakPasswordRequest &request
    );
    // 参数模板比较
    //
    // 比较两个参数模板之间的差异。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CompareConfigurationResponse> compareConfiguration(
        CompareConfigurationRequest &request
    );
    // 复制参数模板
    //
    // 复制参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CopyConfigurationResponse> copyConfiguration(
        CopyConfigurationRequest &request
    );
    // 创建参数模板
    //
    // 创建参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateConfigurationResponse> createConfiguration(
        CreateConfigurationRequest &request
    );
    // 创建数据库角色
    //
    // 创建数据库角色。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDatabaseRoleResponse> createDatabaseRole(
        CreateDatabaseRoleRequest &request
    );
    // 创建数据库用户
    //
    // 创建数据库用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDatabaseUserResponse> createDatabaseUser(
        CreateDatabaseUserRequest &request
    );
    // 创建实例
    //
    // 创建文档数据库实例，包括集群实例、副本集实例、以及单节点实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInstanceResponse> createInstance(
        CreateInstanceRequest &request
    );
    // 创建集群的Shard/Config IP
    //
    // 创建集群的Shard/Config IP
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateIpResponse> createIp(
        CreateIpRequest &request
    );
    // 创建手动备份
    //
    // 创建数据库实例的手动备份。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateManualBackupResponse> createManualBackup(
        CreateManualBackupRequest &request
    );
    // 删除审计日志
    //
    // 删除审计日志
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAuditLogResponse> deleteAuditLog(
        DeleteAuditLogRequest &request
    );
    // 删除参数模板
    //
    // 删除参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteConfigurationResponse> deleteConfiguration(
        DeleteConfigurationRequest &request
    );
    // 删除数据库角色
    //
    // 删除数据库角色。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDatabaseRoleResponse> deleteDatabaseRole(
        DeleteDatabaseRoleRequest &request
    );
    // 删除数据库用户
    //
    // 删除数据库用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDatabaseUserResponse> deleteDatabaseUser(
        DeleteDatabaseUserRequest &request
    );
    // 删除实例
    //
    // 删除数据库实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInstanceResponse> deleteInstance(
        DeleteInstanceRequest &request
    );
    // 删除手动备份
    //
    // 删除数据库实例的手动备份。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteManualBackupResponse> deleteManualBackup(
        DeleteManualBackupRequest &request
    );
    // 终结实例节点会话
    //
    // 终结实例节点会话。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSessionResponse> deleteSession(
        DeleteSessionRequest &request
    );
    // 获取错误日志下载链接
    //
    // 获取错误日志下载链接。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadErrorlogResponse> downloadErrorlog(
        DownloadErrorlogRequest &request
    );
    // 获取慢日志下载链接
    //
    // 获取慢日志下载链接。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadSlowlogResponse> downloadSlowlog(
        DownloadSlowlogRequest &request
    );
    // 扩容副本集实例的节点数量
    //
    // 扩容指定副本集实例的节点数量
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExpandReplicasetNodeResponse> expandReplicasetNode(
        ExpandReplicasetNodeRequest &request
    );
    // 查询可应用的实例
    //
    // 查询指定参数模板可被应用的实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAppliedInstancesResponse> listAppliedInstances(
        ListAppliedInstancesRequest &request
    );
    // 获取审计日志下载链接
    //
    // 获取审计日志下载链接。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditlogLinksResponse> listAuditlogLinks(
        ListAuditlogLinksRequest &request
    );
    // 获取审计日志列表
    //
    // 获取审计日志列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditlogsResponse> listAuditlogs(
        ListAuditlogsRequest &request
    );
    // 查询实例可迁移到的可用区
    //
    // 查询实例可迁移到的可用区。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAz2MigrateResponse> listAz2Migrate(
        ListAz2MigrateRequest &request
    );
    // 查询备份列表
    //
    // 根据指定条件查询备份列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBackupsResponse> listBackups(
        ListBackupsRequest &request
    );
    // 获取参数模板列表
    //
    // 获取参数模板列表，包括DDS数据库的所有默认参数模板和用户创建的参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListConfigurationsResponse> listConfigurations(
        ListConfigurationsRequest &request
    );
    // 查询数据库角色列表
    //
    // 查询数据库角色列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDatabaseRolesResponse> listDatabaseRoles(
        ListDatabaseRolesRequest &request
    );
    // 查询数据库用户列表
    //
    // 查询数据库用户列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDatabaseUsersResponse> listDatabaseUsers(
        ListDatabaseUsersRequest &request
    );
    // 查询数据库版本信息
    //
    // 查询指定实例类型的数据库版本信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDatastoreVersionsResponse> listDatastoreVersions(
        ListDatastoreVersionsRequest &request
    );
    // 查询数据库错误日志
    //
    // 查询数据库错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListErrorLogsResponse> listErrorLogs(
        ListErrorLogsRequest &request
    );
    // 查询数据库规格
    //
    // 查询指定条件下的实例规格信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFlavorInfosResponse> listFlavorInfos(
        ListFlavorInfosRequest &request
    );
    // 查询所有实例规格信息
    //
    // 查询指定条件下的所有实例规格信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFlavorsResponse> listFlavors(
        ListFlavorsRequest &request
    );
    // 查询资源标签
    //
    // 查询指定实例的标签信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceTagsResponse> listInstanceTags(
        ListInstanceTagsRequest &request
    );
    // 查询实例列表和详情
    //
    // 根据指定条件查询实例列表和详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstancesResponse> listInstances(
        ListInstancesRequest &request
    );
    // 查询资源实例
    //
    // 根据标签查询指定的数据库实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstancesByTagsResponse> listInstancesByTags(
        ListInstancesByTagsRequest &request
    );
    // 查询数据库慢日志
    //
    // 查询数据库慢日志信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLtsSlowLogsResponse> listLtsSlowLogs(
        ListLtsSlowLogsRequest &request
    );
    // 查询项目标签
    //
    // 查询指定project ID下实例的所有标签集合。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectTagsResponse> listProjectTags(
        ListProjectTagsRequest &request
    );
    // 查询回收站实例列表
    //
    // 查询回收站实例列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRecycleInstancesResponse> listRecycleInstances(
        ListRecycleInstancesRequest &request
    );
    // 获取可恢复的数据库集合列表
    //
    // 获取可恢复的数据库集合列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRestoreCollectionsResponse> listRestoreCollections(
        ListRestoreCollectionsRequest &request
    );
    // 获取可恢复的数据库列表
    //
    // 获取可恢复的数据库列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRestoreDatabasesResponse> listRestoreDatabases(
        ListRestoreDatabasesRequest &request
    );
    // 查询可恢复的时间段
    //
    // 查询实例的可恢复时间段。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRestoreTimesResponse> listRestoreTimes(
        ListRestoreTimesRequest &request
    );
    // 查询实例节点会话
    //
    // 查询实例节点会话。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSessionsResponse> listSessions(
        ListSessionsRequest &request
    );
    // 查询数据库慢日志
    //
    // 查询数据库慢日志信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSlowLogsResponse> listSlowLogs(
        ListSlowLogsRequest &request
    );
    // 获取SSL证书下载地址
    //
    // 获取SSL证书下载地址
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSslCertDownloadAddressResponse> listSslCertDownloadAddress(
        ListSslCertDownloadAddressRequest &request
    );
    // 查询数据库磁盘类型
    //
    // 查询当前区域下的数据库磁盘类型。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListStorageTypeResponse> listStorageType(
        ListStorageTypeRequest &request
    );
    // 查询任务列表和详情
    //
    // 根据指定条件查询任务中心中的任务列表和详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTasksResponse> listTasks(
        ListTasksRequest &request
    );
    // 实例可用区迁移
    //
    // 实例可用区迁移。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<MigrateAzResponse> migrateAz(
        MigrateAzRequest &request
    );
    // 重置参数模板
    //
    // 重置参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetConfigurationResponse> resetConfiguration(
        ResetConfigurationRequest &request
    );
    // 修改数据库用户密码
    //
    // 修改数据库用户密码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetPasswordResponse> resetPassword(
        ResetPasswordRequest &request
    );
    // 变更实例规格
    //
    // 变更实例的规格。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResizeInstanceResponse> resizeInstance(
        ResizeInstanceRequest &request
    );
    // 扩容实例存储容量
    //
    // 扩容实例相关的存储容量大小。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResizeInstanceVolumeResponse> resizeInstanceVolume(
        ResizeInstanceVolumeRequest &request
    );
    // 重启实例
    //
    // 重启实例的数据库服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestartInstanceResponse> restartInstance(
        RestartInstanceRequest &request
    );
    // 恢复到当前实例
    //
    // 恢复到当前实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestoreInstanceResponse> restoreInstance(
        RestoreInstanceRequest &request
    );
    // 库表级时间点恢复
    //
    // 库表级时间点恢复。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestoreInstanceFromCollectionResponse> restoreInstanceFromCollection(
        RestoreInstanceFromCollectionRequest &request
    );
    // 恢复到新实例
    //
    // 根据备份恢复新实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestoreNewInstanceResponse> restoreNewInstance(
        RestoreNewInstanceRequest &request
    );
    // 设置审计日志策略
    //
    // 设置审计日志策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetAuditlogPolicyResponse> setAuditlogPolicy(
        SetAuditlogPolicyRequest &request
    );
    // 设置自动备份策略
    //
    // 设置自动备份策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetBackupPolicyResponse> setBackupPolicy(
        SetBackupPolicyRequest &request
    );
    // 设置集群均衡开关
    //
    // 设置集群均衡开关。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetBalancerSwitchResponse> setBalancerSwitch(
        SetBalancerSwitchRequest &request
    );
    // 设置集群均衡活动时间窗
    //
    // 设置集群均衡活动时间窗。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetBalancerWindowResponse> setBalancerWindow(
        SetBalancerWindowRequest &request
    );
    // 设置实例回收站策略
    //
    // 设置实例回收站策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetRecyclePolicyResponse> setRecyclePolicy(
        SetRecyclePolicyRequest &request
    );
    // 查询审计日志策略
    //
    // 查询审计日志策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAuditlogPolicyResponse> showAuditlogPolicy(
        ShowAuditlogPolicyRequest &request
    );
    // 获取备份下载链接
    //
    // 获取备份下载链接。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBackupDownloadLinkResponse> showBackupDownloadLink(
        ShowBackupDownloadLinkRequest &request
    );
    // 查询自动备份策略
    //
    // 查询自动备份策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBackupPolicyResponse> showBackupPolicy(
        ShowBackupPolicyRequest &request
    );
    // 查询参数模板被应用历史
    //
    // 查询参数模板应用历史
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowConfigurationAppliedHistoryResponse> showConfigurationAppliedHistory(
        ShowConfigurationAppliedHistoryRequest &request
    );
    // 查询参数模板修改历史
    //
    // 查询参数模板修改历史。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowConfigurationModifyHistoryResponse> showConfigurationModifyHistory(
        ShowConfigurationModifyHistoryRequest &request
    );
    // 获取参数模板的详情
    //
    // 获取参数模板的详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowConfigurationParameterResponse> showConfigurationParameter(
        ShowConfigurationParameterRequest &request
    );
    // 查询实例连接数统计信息
    //
    // 查询客户端IP访问至DDS数据库实例的连接数统计信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowConnectionStatisticsResponse> showConnectionStatistics(
        ShowConnectionStatisticsRequest &request
    );
    // 查询实例磁盘信息
    //
    // 查询实例磁盘信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDiskUsageResponse> showDiskUsage(
        ShowDiskUsageRequest &request
    );
    // 获取指定实例的参数信息
    //
    // 获取指定实例的参数，可以是实例，组，节点的参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowEntityConfigurationResponse> showEntityConfiguration(
        ShowEntityConfigurationRequest &request
    );
    // 获取DDS任务中心指定ID的任务信息。
    //
    // 获取DDS任务中心指定ID的任务信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobDetailResponse> showJobDetail(
        ShowJobDetailRequest &request
    );
    // 查询配额
    //
    // 查询单租户在DDS服务下的资源配额，包括单节点实例配额、副本集实例配额、集群实例配额等。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowQuotasResponse> showQuotas(
        ShowQuotasRequest &request
    );
    // 查询实例回收站策略
    //
    // 查询实例回收站策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRecyclePolicyResponse> showRecyclePolicy(
        ShowRecyclePolicyRequest &request
    );
    // 查询数据库复制集名称
    //
    // 查询数据库复制集名称
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowReplSetNameResponse> showReplSetName(
        ShowReplSetNameRequest &request
    );
    // 查询秒级监控配置
    //
    // 查询秒级监控配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSecondLevelMonitoringStatusResponse> showSecondLevelMonitoringStatus(
        ShowSecondLevelMonitoringStatusRequest &request
    );
    // 查询集群均衡设置
    //
    // 查询集群均衡设置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowShardingBalancerResponse> showShardingBalancer(
        ShowShardingBalancerRequest &request
    );
    // 查询慢日志明文开关
    //
    // 查询慢日志明文开关
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSlowlogDesensitizationSwitchResponse> showSlowlogDesensitizationSwitch(
        ShowSlowlogDesensitizationSwitchRequest &request
    );
    // 查询数据库补丁升级预估时长
    //
    // 查询数据库补丁升级预估时长
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUpgradeDurationResponse> showUpgradeDuration(
        ShowUpgradeDurationRequest &request
    );
    // 删除实例的节点
    //
    // 删除实例的节点。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShrinkInstanceNodesResponse> shrinkInstanceNodes(
        ShrinkInstanceNodesRequest &request
    );
    // 应用参数模板
    //
    // 指定实例变更参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchConfigurationResponse> switchConfiguration(
        SwitchConfigurationRequest &request
    );
    // 开启/关闭秒级监控
    //
    // 开启或关闭指定实例的秒级监控。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchSecondLevelMonitoringResponse> switchSecondLevelMonitoring(
        SwitchSecondLevelMonitoringRequest &request
    );
    // 设置慢日志明文开关
    //
    // 设置实例的慢日志明文开关。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchSlowlogDesensitizationResponse> switchSlowlogDesensitization(
        SwitchSlowlogDesensitizationRequest &request
    );
    // 切换SSL开关
    //
    // 切换实例的SSL开关
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchSslResponse> switchSsl(
        SwitchSslRequest &request
    );
    // 切换副本集实例的主备节点
    //
    // 切换副本集实例下的主备节点
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchoverReplicaSetResponse> switchoverReplicaSet(
        SwitchoverReplicaSetRequest &request
    );
    // 副本集跨网段访问配置。
    //
    // 副本集跨网段访问配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateClientNetworkResponse> updateClientNetwork(
        UpdateClientNetworkRequest &request
    );
    // 修改参数模板
    //
    // 修改指定参数模板的参数信息，包括名称、描述、指定参数的值。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateConfigurationParameterResponse> updateConfigurationParameter(
        UpdateConfigurationParameterRequest &request
    );
    // 修改指定实例的参数
    //
    // 修改指定实例的参数，可以是实例，组，节点的参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateEntityConfigurationResponse> updateEntityConfiguration(
        UpdateEntityConfigurationRequest &request
    );
    // 修改实例名称
    //
    // 修改实例名称
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInstanceNameResponse> updateInstanceName(
        UpdateInstanceNameRequest &request
    );
    // 修改数据库端口
    //
    // 修改数据库实例的端口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInstancePortResponse> updateInstancePort(
        UpdateInstancePortRequest &request
    );
    // 修改实例备注
    //
    // 修改实例备注。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInstanceRemarkResponse> updateInstanceRemark(
        UpdateInstanceRemarkRequest &request
    );
    // 修改数据库复制集名称
    //
    // 修改数据库复制集名称
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateReplSetNameResponse> updateReplSetName(
        UpdateReplSetNameRequest &request
    );
    // 变更实例安全组
    //
    // 变更实例关联的安全组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSecurityGroupResponse> updateSecurityGroup(
        UpdateSecurityGroupRequest &request
    );
    // 数据库补丁升级
    //
    // 升级数据库补丁版本。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpgradeDatabaseVersionResponse> upgradeDatabaseVersion(
        UpgradeDatabaseVersionRequest &request
    );

    // 查询当前支持的API版本信息列表
    //
    // 查询当前支持的API版本信息列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApiVersionResponse> listApiVersion(
        ListApiVersionRequest &request
    );
    // 查询指定API版本信息
    //
    // 查询指定API版本信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowApiVersionResponse> showApiVersion(
        ShowApiVersionRequest &request
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

template class HUAWEICLOUD_DDS_V3_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Dds::V3::DdsClient>;

#endif // HUAWEICLOUD_SDK_DDS_V3_DdsClient_H_

