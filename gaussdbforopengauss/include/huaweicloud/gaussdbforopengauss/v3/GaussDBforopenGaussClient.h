#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_GaussDBforopenGaussClient_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_GaussDBforopenGaussClient_H_

#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/gaussdbforopengauss/v3/model/AddInstanceTagsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/AddInstanceTagsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/AddTagsRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/AllowDbPrivilegesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/AllowDbPrivilegesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ApplyConfigurationRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/AttachEipRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/AttachEipResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/BackupPolicyErrorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/BindEIPRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CopyConfigurationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CopyConfigurationResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateConfigurationTemplateRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateConfigurationTemplateRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateConfigurationTemplateResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDatabaseRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDatabaseResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDatabaseSchemasRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDatabaseSchemasResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDbInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDbInstanceResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDbUserRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDbUserResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateInstanceResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateManualBackupRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateManualBackupRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateManualBackupResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateRestoreInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateRestoreInstanceResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DataStroeErrorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DbUserPwdRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteBackupErrorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteConfigurationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteConfigurationResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteInstanceResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteJobRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteJobResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteManualBackupRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteManualBackupResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/FlavorErrorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenDatabaseForCreation.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenGaussDatabaseSchemaReq.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenGaussGrantRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenGaussUserForCreation.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListApplicableInstancesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListApplicableInstancesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListAppliedHistoriesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListAppliedHistoriesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListAvailableFlavorsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListAvailableFlavorsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListBackupsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListBackupsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListBindedEipsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListBindedEipsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListComponentInfosRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListComponentInfosResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListConfigurationsDiffRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListConfigurationsDiffResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListConfigurationsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListConfigurationsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseSchemasRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseSchemasResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabasesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabasesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatastoresRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatastoresResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDbBackupsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDbBackupsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDbFlavorsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDbFlavorsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDbUsersRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDbUsersResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListEpsQuotasRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListEpsQuotasResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListFlavorsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListFlavorsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListGaussDbDatastoresRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListGaussDbDatastoresResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListHistoryOperationsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListHistoryOperationsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListInstanceTagsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListInstanceTagsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListInstancesDetailsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListInstancesDetailsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListInstancesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListInstancesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListParamGroupTemplatesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListParamGroupTemplatesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListPredefinedTagsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListPredefinedTagsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListProjectTagsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListProjectTagsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListRecycleInstancesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListRecycleInstancesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListRestorableInstancesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListRestorableInstancesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListRestoreTimesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListRestoreTimesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListStorageTypesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListStorageTypesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListTasksRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListTasksResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ModifyEpsQuotaRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ModifyEpsQuotaRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ModifyEpsQuotaResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussErrorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussInstanceActionRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussInstanceRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussModifyInstanceConfigurationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussResizeRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpengaussRestoreInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ParaErrorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ParaErrorResponseBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ParamGroupCopyRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ParamGroupDiffRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/PwdResetRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RecyclePolicyRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResetConfigurationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResetConfigurationResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResetPwdRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResetPwdResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResizeInstanceFlavorRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResizeInstanceFlavorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResourceErrorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RestartInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RestartInstanceResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RunInstanceActionRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RunInstanceActionResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SetBackupPolicyRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SetBackupPolicyRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SetBackupPolicyResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SetDbUserPwdRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SetDbUserPwdResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SetRecyclePolicyRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SetRecyclePolicyResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowBackupPolicyRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowBackupPolicyResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowBalanceStatusRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowBalanceStatusResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowConfigurationDetailRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowConfigurationDetailResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowDeploymentFormRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowDeploymentFormResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceConfigurationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceConfigurationResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceDiskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceDiskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceParamGroupRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceParamGroupResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceSnapshotRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceSnapshotResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowJobDetailRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowJobDetailResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowProjectQuotasRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowProjectQuotasResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowRecyclePolicyRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowRecyclePolicyResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSslCertDownloadLinkRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSslCertDownloadLinkResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchConfigurationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchConfigurationResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchShardRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchShardRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchShardResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateInstanceConfigurationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateInstanceConfigurationResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateInstanceNameRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateInstanceNameResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateNameRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ValidateParaGroupNameRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ValidateParaGroupNameResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ValidateWeakPasswordRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ValidateWeakPasswordResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/WeakPasswordRequestBody.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Gaussdbforopengauss::V3::Model;

class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  GaussDBforopenGaussClient : public Client
{
public:

    GaussDBforopenGaussClient();

    virtual ~GaussDBforopenGaussClient();

    static ClientBuilder<GaussDBforopenGaussClient> newBuilder();

    // 添加实例标签。
    //
    // 对指定实例添加用户标签信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddInstanceTagsResponse> addInstanceTags(
        AddInstanceTagsRequest &request
    );
    // 授权数据库帐号
    //
    // 在指定实例的数据库中, 设置帐号的权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AllowDbPrivilegesResponse> allowDbPrivileges(
        AllowDbPrivilegesRequest &request
    );
    // 绑定/解绑弹性公网IP
    //
    // 实例下的节点绑定弹性公网IP/解绑弹性公网IP
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AttachEipResponse> attachEip(
        AttachEipRequest &request
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
    std::shared_ptr<CreateConfigurationTemplateResponse> createConfigurationTemplate(
        CreateConfigurationTemplateRequest &request
    );
    // 创建数据库
    //
    // 在指定实例中创建数据库。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDatabaseResponse> createDatabase(
        CreateDatabaseRequest &request
    );
    // 创建数据库SCHEMA
    //
    // 在指定实例的数据库中, 创建数据库schema。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDatabaseSchemasResponse> createDatabaseSchemas(
        CreateDatabaseSchemasRequest &request
    );
    // 创建数据库实例
    //
    // 创建数据库实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDbInstanceResponse> createDbInstance(
        CreateDbInstanceRequest &request
    );
    // 创建数据库用户
    //
    // 在指定实例中创建数据库用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDbUserResponse> createDbUser(
        CreateDbUserRequest &request
    );
    // 创建数据库实例
    //
    // 创建数据库企业版和集中式实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInstanceResponse> createInstance(
        CreateInstanceRequest &request
    );
    // 创建手动备份
    //
    // 创建手动备份。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateManualBackupResponse> createManualBackup(
        CreateManualBackupRequest &request
    );
    // 恢复到新实例
    //
    // 根据备份恢复新实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRestoreInstanceResponse> createRestoreInstance(
        CreateRestoreInstanceRequest &request
    );
    // 删除参数模板
    //
    // 删除参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteConfigurationResponse> deleteConfiguration(
        DeleteConfigurationRequest &request
    );
    // 删除实例
    //
    // 删除数据库实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInstanceResponse> deleteInstance(
        DeleteInstanceRequest &request
    );
    // 删除任务记录
    //
    // 删除任务记录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteJobResponse> deleteJob(
        DeleteJobRequest &request
    );
    // 删除手动备份
    //
    // 删除手动备份。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteManualBackupResponse> deleteManualBackup(
        DeleteManualBackupRequest &request
    );
    // 查询可应用实例列表
    //
    // 查询可应用当前参数组模板的实例列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApplicableInstancesResponse> listApplicableInstances(
        ListApplicableInstancesRequest &request
    );
    // 查询参数模板的应用记录
    //
    // 查询参数模板的应用记录，以实例级别为维度。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAppliedHistoriesResponse> listAppliedHistories(
        ListAppliedHistoriesRequest &request
    );
    // 查询实例可变更规格
    //
    // 查询实例可变更规格列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAvailableFlavorsResponse> listAvailableFlavors(
        ListAvailableFlavorsRequest &request
    );
    // 查询备份列表
    //
    // 获取备份列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBackupsResponse> listBackups(
        ListBackupsRequest &request
    );
    // 查询实例已绑定EIP列表
    //
    // 查询实例已绑定EIP列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBindedEipsResponse> listBindedEips(
        ListBindedEipsRequest &request
    );
    // 查询实例的组件列表
    //
    // 查询实例的组件列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListComponentInfosResponse> listComponentInfos(
        ListComponentInfosRequest &request
    );
    // 获取参数模板列表
    //
    // 获取参数模板列表，包括所有数据库的默认参数模板和用户创建的参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListConfigurationsResponse> listConfigurations(
        ListConfigurationsRequest &request
    );
    // 比较两个参数组模板之间的差异
    //
    // 获取两个参数配置模板的差异列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListConfigurationsDiffResponse> listConfigurationsDiff(
        ListConfigurationsDiffRequest &request
    );
    // 查询数据库SCHEMA列表
    //
    // 查询指定实例的数据库SCHEMA列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDatabaseSchemasResponse> listDatabaseSchemas(
        ListDatabaseSchemasRequest &request
    );
    // 查询数据库列表
    //
    // 查询指定实例中的数据库列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDatabasesResponse> listDatabases(
        ListDatabasesRequest &request
    );
    // 查询数据库引擎的版本
    //
    // 查询指定数据库引擎对应的版本信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDatastoresResponse> listDatastores(
        ListDatastoresRequest &request
    );
    // 查询备份列表
    //
    // 获取备份列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDbBackupsResponse> listDbBackups(
        ListDbBackupsRequest &request
    );
    // 查询数据库规格
    //
    // 查询数据库的规格信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDbFlavorsResponse> listDbFlavors(
        ListDbFlavorsRequest &request
    );
    // 查询数据库用户列表
    //
    // 在指定实例中查询数据库用户列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDbUsersResponse> listDbUsers(
        ListDbUsersRequest &request
    );
    // 查询企业项目配额组
    //
    // 查询企业项目配额组信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEpsQuotasResponse> listEpsQuotas(
        ListEpsQuotasRequest &request
    );
    // 查询数据库规格
    //
    // 查询数据库的规格信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFlavorsResponse> listFlavors(
        ListFlavorsRequest &request
    );
    // 查询引擎列表
    //
    // 查询引擎列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGaussDbDatastoresResponse> listGaussDbDatastores(
        ListGaussDbDatastoresRequest &request
    );
    // 查询参数模板的修改历史
    //
    // 查询参数模板的修改历史记录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHistoryOperationsResponse> listHistoryOperations(
        ListHistoryOperationsRequest &request
    );
    // 查询实例标签
    //
    // 查询指定实例的用户标签信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceTagsResponse> listInstanceTags(
        ListInstanceTagsRequest &request
    );
    // 查询数据库实例列表/查询实例详情
    //
    // 查询数据库实例列表/查询实例详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstancesResponse> listInstances(
        ListInstancesRequest &request
    );
    // 查询数据库实例列表/查询实例详情
    //
    // 查询数据库实例列表/查询实例详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstancesDetailsResponse> listInstancesDetails(
        ListInstancesDetailsRequest &request
    );
    // 获取参数模板列表
    //
    // 获取参数模板列表，包括所有数据库的默认参数模板和用户创建的参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListParamGroupTemplatesResponse> listParamGroupTemplates(
        ListParamGroupTemplatesRequest &request
    );
    // 查询预定义标签
    //
    // 查询预预定义标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPredefinedTagsResponse> listPredefinedTags(
        ListPredefinedTagsRequest &request
    );
    // 查询项目标签
    //
    // 查询项目下所有用户标签信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectTagsResponse> listProjectTags(
        ListProjectTagsRequest &request
    );
    // 查询回收站所有引擎实例列表。
    //
    // 查询回收站所有引擎实例列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRecycleInstancesResponse> listRecycleInstances(
        ListRecycleInstancesRequest &request
    );
    // 查询可用于备份恢复的实例列表
    //
    // 查询可用于备份恢复的实例列表，实例信息要符合备份条件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRestorableInstancesResponse> listRestorableInstances(
        ListRestorableInstancesRequest &request
    );
    // 查询可恢复时间段
    //
    // 查询可恢复时间段。
    // 如果您备份策略中的保存天数设置较长，建议您传入查询日期“date”。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRestoreTimesResponse> listRestoreTimes(
        ListRestoreTimesRequest &request
    );
    // 查询数据库磁盘类型
    //
    // 查询指定数据库引擎对应的磁盘类型。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListStorageTypesResponse> listStorageTypes(
        ListStorageTypesRequest &request
    );
    // 查询任务列表
    //
    // 获取任务中心的任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTasksResponse> listTasks(
        ListTasksRequest &request
    );
    // 修改企业项目配额
    //
    // 修改企业项目配额。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyEpsQuotaResponse> modifyEpsQuota(
        ModifyEpsQuotaRequest &request
    );
    // 重置参数模板
    //
    // 重置参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetConfigurationResponse> resetConfiguration(
        ResetConfigurationRequest &request
    );
    // 重置数据库密码。
    //
    // 重置数据库密码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetPwdResponse> resetPwd(
        ResetPwdRequest &request
    );
    // GaussDB数据库实例规格变更
    //
    // GaussDB数据库实例规格变更
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResizeInstanceFlavorResponse> resizeInstanceFlavor(
        ResizeInstanceFlavorRequest &request
    );
    // 重启数据库实例
    //
    // 重启数据库实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestartInstanceResponse> restartInstance(
        RestartInstanceRequest &request
    );
    // CN横向扩容/DN分片扩容/磁盘扩容
    //
    // CN横向扩容/DN分片扩容/磁盘扩容
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RunInstanceActionResponse> runInstanceAction(
        RunInstanceActionRequest &request
    );
    // 设置自动备份策略。
    //
    // 设置自动备份策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetBackupPolicyResponse> setBackupPolicy(
        SetBackupPolicyRequest &request
    );
    // 重置数据库帐号密码
    //
    // 重置指定数据库帐号的密码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetDbUserPwdResponse> setDbUserPwd(
        SetDbUserPwdRequest &request
    );
    // 设置回收站策略
    //
    // 设置回收站策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetRecyclePolicyResponse> setRecyclePolicy(
        SetRecyclePolicyRequest &request
    );
    // 查询自动备份策略
    //
    // 查询自动备份策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBackupPolicyResponse> showBackupPolicy(
        ShowBackupPolicyRequest &request
    );
    // 查询实例主备平衡状态
    //
    // 查询实例是否发生过主备切换而导致主机负载不均衡。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBalanceStatusResponse> showBalanceStatus(
        ShowBalanceStatusRequest &request
    );
    // 查询参数模板详情
    //
    // 根据参数模板ID获取指定参数模板详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowConfigurationDetailResponse> showConfigurationDetail(
        ShowConfigurationDetailRequest &request
    );
    // 查询解决方案模板配置
    //
    // 根据解决方案模板名称或实例ID查询副本数、分片数、节点数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeploymentFormResponse> showDeploymentForm(
        ShowDeploymentFormRequest &request
    );
    // 获取指定实例的参数模板
    //
    // 获取指定实例的参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceConfigurationResponse> showInstanceConfiguration(
        ShowInstanceConfigurationRequest &request
    );
    // 查询实例存储空间使用信息
    //
    // 查询指定实例的存储使用空间和最大空间。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceDiskResponse> showInstanceDisk(
        ShowInstanceDiskRequest &request
    );
    // 获取指定实例的参数模板
    //
    // 获取指定实例的参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceParamGroupResponse> showInstanceParamGroup(
        ShowInstanceParamGroupRequest &request
    );
    // 根据时间点或者备份文件查询原实例信息
    //
    // 根据时间点或者备份文件查询原实例信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceSnapshotResponse> showInstanceSnapshot(
        ShowInstanceSnapshotRequest &request
    );
    // 获取指定ID的任务信息。
    //
    // 获取指定ID的任务信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobDetailResponse> showJobDetail(
        ShowJobDetailRequest &request
    );
    // 查询租户的实例配额
    //
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectQuotasResponse> showProjectQuotas(
        ShowProjectQuotasRequest &request
    );
    // 查看回收站策略
    //
    // 查看回收站的回收策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRecyclePolicyResponse> showRecyclePolicy(
        ShowRecyclePolicyRequest &request
    );
    // 查询实例SSL证书下载地址
    //
    // 查询实例SSL证书下载地址。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSslCertDownloadLinkResponse> showSslCertDownloadLink(
        ShowSslCertDownloadLinkRequest &request
    );
    // 应用参数模板
    //
    // 指定实例变更参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchConfigurationResponse> switchConfiguration(
        SwitchConfigurationRequest &request
    );
    // 分片节点主备切换。
    //
    // 支持用户对单个或多个DN分片做主备切换，同一分组内只能指定一个新的备节点进行升主操作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchShardResponse> switchShard(
        SwitchShardRequest &request
    );
    // 修改指定实例的参数
    //
    // 修改指定实例的参数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInstanceConfigurationResponse> updateInstanceConfiguration(
        UpdateInstanceConfigurationRequest &request
    );
    // 修改实例名称
    //
    // 修改实例名称。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInstanceNameResponse> updateInstanceName(
        UpdateInstanceNameRequest &request
    );
    // 校验参数组名称是否存在
    //
    // 校验参数组名称是否存在。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ValidateParaGroupNameResponse> validateParaGroupName(
        ValidateParaGroupNameRequest &request
    );
    // 弱密码校验
    //
    // 校验数据库root用户密码的安全性。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ValidateWeakPasswordResponse> validateWeakPassword(
        ValidateWeakPasswordRequest &request
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

template class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Gaussdbforopengauss::V3::GaussDBforopenGaussClient>;

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_GaussDBforopenGaussClient_H_

