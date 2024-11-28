#ifndef HUAWEICLOUD_SDK_CBR_V1_CbrClient_H_
#define HUAWEICLOUD_SDK_CBR_V1_CbrClient_H_

#include <huaweicloud/cbr/v1/CbrExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/cbr/v1/model/AddAgentPathRequest.h>
#include <huaweicloud/cbr/v1/model/AddAgentPathResponse.h>
#include <huaweicloud/cbr/v1/model/AddMemberRequest.h>
#include <huaweicloud/cbr/v1/model/AddMemberResponse.h>
#include <huaweicloud/cbr/v1/model/AddMembersReq.h>
#include <huaweicloud/cbr/v1/model/AddVaultResourceRequest.h>
#include <huaweicloud/cbr/v1/model/AddVaultResourceResponse.h>
#include <huaweicloud/cbr/v1/model/AgentAddPathReq.h>
#include <huaweicloud/cbr/v1/model/AgentRegisterReq.h>
#include <huaweicloud/cbr/v1/model/AgentRemovePathReq.h>
#include <huaweicloud/cbr/v1/model/AgentUpdateReq.h>
#include <huaweicloud/cbr/v1/model/AssociateVaultPolicyRequest.h>
#include <huaweicloud/cbr/v1/model/AssociateVaultPolicyResponse.h>
#include <huaweicloud/cbr/v1/model/BackupReplicateReq.h>
#include <huaweicloud/cbr/v1/model/BackupRestoreReq.h>
#include <huaweicloud/cbr/v1/model/BackupSyncReq.h>
#include <huaweicloud/cbr/v1/model/BackupUpdateReq.h>
#include <huaweicloud/cbr/v1/model/BatchCreateAndDeleteVaultTagsRequest.h>
#include <huaweicloud/cbr/v1/model/BatchCreateAndDeleteVaultTagsResponse.h>
#include <huaweicloud/cbr/v1/model/BatchUpdateVaultRequest.h>
#include <huaweicloud/cbr/v1/model/BatchUpdateVaultRequestBody.h>
#include <huaweicloud/cbr/v1/model/BatchUpdateVaultResponse.h>
#include <huaweicloud/cbr/v1/model/BulkCreateAndDeleteVaultTagsReq.h>
#include <huaweicloud/cbr/v1/model/CbcOrderChange.h>
#include <huaweicloud/cbr/v1/model/CbcUpdate.h>
#include <huaweicloud/cbr/v1/model/ChangeOrderRequest.h>
#include <huaweicloud/cbr/v1/model/ChangeOrderResponse.h>
#include <huaweicloud/cbr/v1/model/CheckAgentRequest.h>
#include <huaweicloud/cbr/v1/model/CheckAgentResponse.h>
#include <huaweicloud/cbr/v1/model/CheckpointReplicateReq.h>
#include <huaweicloud/cbr/v1/model/CopyBackupRequest.h>
#include <huaweicloud/cbr/v1/model/CopyBackupResponse.h>
#include <huaweicloud/cbr/v1/model/CopyCheckpointRequest.h>
#include <huaweicloud/cbr/v1/model/CopyCheckpointResponse.h>
#include <huaweicloud/cbr/v1/model/CreateCheckpointRequest.h>
#include <huaweicloud/cbr/v1/model/CreateCheckpointResponse.h>
#include <huaweicloud/cbr/v1/model/CreateOrganizationPolicyRequest.h>
#include <huaweicloud/cbr/v1/model/CreateOrganizationPolicyResponse.h>
#include <huaweicloud/cbr/v1/model/CreatePolicyRequest.h>
#include <huaweicloud/cbr/v1/model/CreatePolicyResponse.h>
#include <huaweicloud/cbr/v1/model/CreatePostPaidVaultRequest.h>
#include <huaweicloud/cbr/v1/model/CreatePostPaidVaultResponse.h>
#include <huaweicloud/cbr/v1/model/CreateVaultRequest.h>
#include <huaweicloud/cbr/v1/model/CreateVaultResponse.h>
#include <huaweicloud/cbr/v1/model/CreateVaultTagsRequest.h>
#include <huaweicloud/cbr/v1/model/CreateVaultTagsResponse.h>
#include <huaweicloud/cbr/v1/model/DeleteBackupRequest.h>
#include <huaweicloud/cbr/v1/model/DeleteBackupResponse.h>
#include <huaweicloud/cbr/v1/model/DeleteMemberRequest.h>
#include <huaweicloud/cbr/v1/model/DeleteMemberResponse.h>
#include <huaweicloud/cbr/v1/model/DeleteOrganizationPolicyRequest.h>
#include <huaweicloud/cbr/v1/model/DeleteOrganizationPolicyResponse.h>
#include <huaweicloud/cbr/v1/model/DeletePolicyRequest.h>
#include <huaweicloud/cbr/v1/model/DeletePolicyResponse.h>
#include <huaweicloud/cbr/v1/model/DeleteVaultRequest.h>
#include <huaweicloud/cbr/v1/model/DeleteVaultResponse.h>
#include <huaweicloud/cbr/v1/model/DeleteVaultTagRequest.h>
#include <huaweicloud/cbr/v1/model/DeleteVaultTagResponse.h>
#include <huaweicloud/cbr/v1/model/DisassociateVaultPolicyRequest.h>
#include <huaweicloud/cbr/v1/model/DisassociateVaultPolicyResponse.h>
#include <huaweicloud/cbr/v1/model/DomainMigrate.h>
#include <huaweicloud/cbr/v1/model/ImportBackupRequest.h>
#include <huaweicloud/cbr/v1/model/ImportBackupResponse.h>
#include <huaweicloud/cbr/v1/model/ImportCheckpointRequest.h>
#include <huaweicloud/cbr/v1/model/ImportCheckpointResponse.h>
#include <huaweicloud/cbr/v1/model/ListAgentRequest.h>
#include <huaweicloud/cbr/v1/model/ListAgentResponse.h>
#include <huaweicloud/cbr/v1/model/ListBackupsRequest.h>
#include <huaweicloud/cbr/v1/model/ListBackupsResponse.h>
#include <huaweicloud/cbr/v1/model/ListDomainProjectsRequest.h>
#include <huaweicloud/cbr/v1/model/ListDomainProjectsResponse.h>
#include <huaweicloud/cbr/v1/model/ListExternalVaultRequest.h>
#include <huaweicloud/cbr/v1/model/ListExternalVaultResponse.h>
#include <huaweicloud/cbr/v1/model/ListOpLogsRequest.h>
#include <huaweicloud/cbr/v1/model/ListOpLogsResponse.h>
#include <huaweicloud/cbr/v1/model/ListOrganizationPoliciesRequest.h>
#include <huaweicloud/cbr/v1/model/ListOrganizationPoliciesResponse.h>
#include <huaweicloud/cbr/v1/model/ListOrganizationPolicyDetailRequest.h>
#include <huaweicloud/cbr/v1/model/ListOrganizationPolicyDetailResponse.h>
#include <huaweicloud/cbr/v1/model/ListPoliciesRequest.h>
#include <huaweicloud/cbr/v1/model/ListPoliciesResponse.h>
#include <huaweicloud/cbr/v1/model/ListProjectsRequest.h>
#include <huaweicloud/cbr/v1/model/ListProjectsResponse.h>
#include <huaweicloud/cbr/v1/model/ListProtectableRequest.h>
#include <huaweicloud/cbr/v1/model/ListProtectableResponse.h>
#include <huaweicloud/cbr/v1/model/ListVaultRequest.h>
#include <huaweicloud/cbr/v1/model/ListVaultResponse.h>
#include <huaweicloud/cbr/v1/model/MigrateDomainRequest.h>
#include <huaweicloud/cbr/v1/model/MigrateDomainResponse.h>
#include <huaweicloud/cbr/v1/model/MigrateVaultResourceRequest.h>
#include <huaweicloud/cbr/v1/model/MigrateVaultResourceResponse.h>
#include <huaweicloud/cbr/v1/model/OrganizationPolicyCreateReq.h>
#include <huaweicloud/cbr/v1/model/OrganizationPolicyUpdateReq.h>
#include <huaweicloud/cbr/v1/model/PolicyCreateReq.h>
#include <huaweicloud/cbr/v1/model/PolicyUpdateReq.h>
#include <huaweicloud/cbr/v1/model/ProtectableAgentReq.h>
#include <huaweicloud/cbr/v1/model/RegisterAgentRequest.h>
#include <huaweicloud/cbr/v1/model/RegisterAgentResponse.h>
#include <huaweicloud/cbr/v1/model/RemoveAgentPathRequest.h>
#include <huaweicloud/cbr/v1/model/RemoveAgentPathResponse.h>
#include <huaweicloud/cbr/v1/model/RemoveVaultResourceRequest.h>
#include <huaweicloud/cbr/v1/model/RemoveVaultResourceResponse.h>
#include <huaweicloud/cbr/v1/model/RestoreBackupRequest.h>
#include <huaweicloud/cbr/v1/model/RestoreBackupResponse.h>
#include <huaweicloud/cbr/v1/model/SetVaultResourceRequest.h>
#include <huaweicloud/cbr/v1/model/SetVaultResourceResponse.h>
#include <huaweicloud/cbr/v1/model/ShowAgentRequest.h>
#include <huaweicloud/cbr/v1/model/ShowAgentResponse.h>
#include <huaweicloud/cbr/v1/model/ShowBackupRequest.h>
#include <huaweicloud/cbr/v1/model/ShowBackupResponse.h>
#include <huaweicloud/cbr/v1/model/ShowCheckpointRequest.h>
#include <huaweicloud/cbr/v1/model/ShowCheckpointResponse.h>
#include <huaweicloud/cbr/v1/model/ShowDomainRequest.h>
#include <huaweicloud/cbr/v1/model/ShowDomainResponse.h>
#include <huaweicloud/cbr/v1/model/ShowMemberDetailRequest.h>
#include <huaweicloud/cbr/v1/model/ShowMemberDetailResponse.h>
#include <huaweicloud/cbr/v1/model/ShowMembersDetailRequest.h>
#include <huaweicloud/cbr/v1/model/ShowMembersDetailResponse.h>
#include <huaweicloud/cbr/v1/model/ShowMetadataRequest.h>
#include <huaweicloud/cbr/v1/model/ShowMetadataResponse.h>
#include <huaweicloud/cbr/v1/model/ShowMigrateStatusRequest.h>
#include <huaweicloud/cbr/v1/model/ShowMigrateStatusResponse.h>
#include <huaweicloud/cbr/v1/model/ShowOpLogRequest.h>
#include <huaweicloud/cbr/v1/model/ShowOpLogResponse.h>
#include <huaweicloud/cbr/v1/model/ShowOrganizationPolicyRequest.h>
#include <huaweicloud/cbr/v1/model/ShowOrganizationPolicyResponse.h>
#include <huaweicloud/cbr/v1/model/ShowPolicyRequest.h>
#include <huaweicloud/cbr/v1/model/ShowPolicyResponse.h>
#include <huaweicloud/cbr/v1/model/ShowProtectableRequest.h>
#include <huaweicloud/cbr/v1/model/ShowProtectableResponse.h>
#include <huaweicloud/cbr/v1/model/ShowReplicationCapabilitiesRequest.h>
#include <huaweicloud/cbr/v1/model/ShowReplicationCapabilitiesResponse.h>
#include <huaweicloud/cbr/v1/model/ShowStorageUsageRequest.h>
#include <huaweicloud/cbr/v1/model/ShowStorageUsageResponse.h>
#include <huaweicloud/cbr/v1/model/ShowSummaryRequest.h>
#include <huaweicloud/cbr/v1/model/ShowSummaryResponse.h>
#include <huaweicloud/cbr/v1/model/ShowVaultProjectTagRequest.h>
#include <huaweicloud/cbr/v1/model/ShowVaultProjectTagResponse.h>
#include <huaweicloud/cbr/v1/model/ShowVaultRequest.h>
#include <huaweicloud/cbr/v1/model/ShowVaultResourceInstancesRequest.h>
#include <huaweicloud/cbr/v1/model/ShowVaultResourceInstancesResponse.h>
#include <huaweicloud/cbr/v1/model/ShowVaultResponse.h>
#include <huaweicloud/cbr/v1/model/ShowVaultTagRequest.h>
#include <huaweicloud/cbr/v1/model/ShowVaultTagResponse.h>
#include <huaweicloud/cbr/v1/model/SyncReq.h>
#include <huaweicloud/cbr/v1/model/UnregisterAgentRequest.h>
#include <huaweicloud/cbr/v1/model/UnregisterAgentResponse.h>
#include <huaweicloud/cbr/v1/model/UpdateAgentRequest.h>
#include <huaweicloud/cbr/v1/model/UpdateAgentResponse.h>
#include <huaweicloud/cbr/v1/model/UpdateBackupRequest.h>
#include <huaweicloud/cbr/v1/model/UpdateBackupResponse.h>
#include <huaweicloud/cbr/v1/model/UpdateMember.h>
#include <huaweicloud/cbr/v1/model/UpdateMemberStatusRequest.h>
#include <huaweicloud/cbr/v1/model/UpdateMemberStatusResponse.h>
#include <huaweicloud/cbr/v1/model/UpdateOrderRequest.h>
#include <huaweicloud/cbr/v1/model/UpdateOrderResponse.h>
#include <huaweicloud/cbr/v1/model/UpdateOrganizationPolicyRequest.h>
#include <huaweicloud/cbr/v1/model/UpdateOrganizationPolicyResponse.h>
#include <huaweicloud/cbr/v1/model/UpdatePolicyRequest.h>
#include <huaweicloud/cbr/v1/model/UpdatePolicyResponse.h>
#include <huaweicloud/cbr/v1/model/UpdateVaultRequest.h>
#include <huaweicloud/cbr/v1/model/UpdateVaultResponse.h>
#include <huaweicloud/cbr/v1/model/VaultAddResourceReq.h>
#include <huaweicloud/cbr/v1/model/VaultAssociate.h>
#include <huaweicloud/cbr/v1/model/VaultBackupReq.h>
#include <huaweicloud/cbr/v1/model/VaultCreateReq.h>
#include <huaweicloud/cbr/v1/model/VaultDissociate.h>
#include <huaweicloud/cbr/v1/model/VaultMigrateResourceReq.h>
#include <huaweicloud/cbr/v1/model/VaultOrderCreateReqs.h>
#include <huaweicloud/cbr/v1/model/VaultRemoveResourceReq.h>
#include <huaweicloud/cbr/v1/model/VaultResourceInstancesReq.h>
#include <huaweicloud/cbr/v1/model/VaultSetResourceReq.h>
#include <huaweicloud/cbr/v1/model/VaultTagsCreateReq.h>
#include <huaweicloud/cbr/v1/model/VaultUpdateReq.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Cbr::V1::Model;

class HUAWEICLOUD_CBR_V1_EXPORT  CbrClient : public Client
{
public:

    CbrClient();

    virtual ~CbrClient();

    static ClientBuilder<CbrClient> newBuilder();

    // 新增备份路径
    //
    // 对客户端新增备份路径，新增的路径不会校验是否存在。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddAgentPathResponse> addAgentPath(
        AddAgentPathRequest &request
    );
    // 添加备份成员
    //
    // 添加备份可共享的成员，只有云服务器备份可以添加备份共享成员，且仅支持在同一区域的不同用户间共享。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddMemberResponse> addMember(
        AddMemberRequest &request
    );
    // 添加资源
    //
    // 存储库添加资源
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddVaultResourceResponse> addVaultResource(
        AddVaultResourceRequest &request
    );
    // 设置存储库策略
    //
    // 存储库设置策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AssociateVaultPolicyResponse> associateVaultPolicy(
        AssociateVaultPolicyRequest &request
    );
    // 批量添加删除存储库资源标签
    //
    // 为指定实例批量添加或删除标签
    // 标签管理服务需要使用该接口批量管理实例的标签。
    // 一个资源上最多有10个标签。
    // 此接口为幂等接口：
    //     创建时如果请求体中存在重复key则报错。
    //     创建时，不允许重复key，如果数据库存在就覆盖。
    //     删除时，允许重复key。
    //     删除时，如果删除的标签不存在，默认处理成功,删除时不对标签字符集范围做校验。key长度127个字符，value为255个字符。删除时tags结构体不能缺失，key不能为空，或者空字符串。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateAndDeleteVaultTagsResponse> batchCreateAndDeleteVaultTags(
        BatchCreateAndDeleteVaultTagsRequest &request
    );
    // 批量修改存储库
    //
    // 批量修改项目下所有存储库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchUpdateVaultResponse> batchUpdateVault(
        BatchUpdateVaultRequest &request
    );
    // 变更
    //
    // 订单更新，调用该接口更新包周期产品订单信息,返回待支付订单信息。
    // &gt; 该接口目前属于公测阶段，部分region暂时无法使用
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeOrderResponse> changeOrder(
        ChangeOrderRequest &request
    );
    // 查询agent状态
    //
    // 检查应用一致性Agent状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckAgentResponse> checkAgent(
        CheckAgentRequest &request
    );
    // 复制备份
    //
    // 跨区域复制备份。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CopyBackupResponse> copyBackup(
        CopyBackupRequest &request
    );
    // 复制备份还原点
    //
    // 执行复制
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CopyCheckpointResponse> copyCheckpoint(
        CopyCheckpointRequest &request
    );
    // 创建备份还原点
    //
    // 对存储库执行备份，生成备份还原点
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateCheckpointResponse> createCheckpoint(
        CreateCheckpointRequest &request
    );
    // 创建组织策略
    //
    // 创建组织策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateOrganizationPolicyResponse> createOrganizationPolicy(
        CreateOrganizationPolicyRequest &request
    );
    // 创建策略
    //
    // 创建策略，策略分为备份策略和复制策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePolicyResponse> createPolicy(
        CreatePolicyRequest &request
    );
    // 创建包周期存储库
    //
    // 创建包周期存储库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePostPaidVaultResponse> createPostPaidVault(
        CreatePostPaidVaultRequest &request
    );
    // 创建存储库
    //
    // 创建存储库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateVaultResponse> createVault(
        CreateVaultRequest &request
    );
    // 添加存储库资源标签
    //
    // 一个资源上最多有10个标签。
    // 此接口为幂等接口：创建时，如果创建的标签已经存在（key相同），则覆盖。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateVaultTagsResponse> createVaultTags(
        CreateVaultTagsRequest &request
    );
    // 删除备份
    //
    // 删除单个备份。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteBackupResponse> deleteBackup(
        DeleteBackupRequest &request
    );
    // 删除指定备份成员
    //
    // 删除指定的备份共享成员
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteMemberResponse> deleteMember(
        DeleteMemberRequest &request
    );
    // 删除组织策略
    //
    // 删除组织策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteOrganizationPolicyResponse> deleteOrganizationPolicy(
        DeleteOrganizationPolicyRequest &request
    );
    // 删除策略
    //
    // 删除策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePolicyResponse> deletePolicy(
        DeletePolicyRequest &request
    );
    // 删除存储库
    //
    // 删除存储库。若删除储存库，将一并删除存储库中的所有备份。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteVaultResponse> deleteVault(
        DeleteVaultRequest &request
    );
    // 删除存储库资源标签
    //
    // 幂等接口：删除时，如果删除的标签不存在，返回404。Key不能为空或者空字符串。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteVaultTagResponse> deleteVaultTag(
        DeleteVaultTagRequest &request
    );
    // 解除存储库策略
    //
    // 存储库解除策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisassociateVaultPolicyResponse> disassociateVaultPolicy(
        DisassociateVaultPolicyRequest &request
    );
    // 同步备份
    //
    // 同步线下混合云VMware备份副本
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ImportBackupResponse> importBackup(
        ImportBackupRequest &request
    );
    // 同步备份还原点
    //
    // 针对vault同步备份副本
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ImportCheckpointResponse> importCheckpoint(
        ImportCheckpointRequest &request
    );
    // 查询客户端列表
    //
    // 查询客户端列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAgentResponse> listAgent(
        ListAgentRequest &request
    );
    // 查询所有备份
    //
    // 查询所有副本
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBackupsResponse> listBackups(
        ListBackupsRequest &request
    );
    // 查询租户项目列表
    //
    // 根据指定租户名称查询项目列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDomainProjectsResponse> listDomainProjects(
        ListDomainProjectsRequest &request
    );
    // 查询其他区域存储库列表
    //
    // 查询其他区域的存储库列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListExternalVaultResponse> listExternalVault(
        ListExternalVaultRequest &request
    );
    // 查询任务列表
    //
    // 查询任务列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListOpLogsResponse> listOpLogs(
        ListOpLogsRequest &request
    );
    // 查询组织策略列表
    //
    // 查询组织策略列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListOrganizationPoliciesResponse> listOrganizationPolicies(
        ListOrganizationPoliciesRequest &request
    );
    // 查询组织策略部署状态列表
    //
    // 查询组织策略每个账号下策略部署状态列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListOrganizationPolicyDetailResponse> listOrganizationPolicyDetail(
        ListOrganizationPolicyDetailRequest &request
    );
    // 查询策略列表
    //
    // 查询策略列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPoliciesResponse> listPolicies(
        ListPoliciesRequest &request
    );
    // 查询租户的项目信息
    //
    // 查询租户的企业项目信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectsResponse> listProjects(
        ListProjectsRequest &request
    );
    // 查询可保护资源
    //
    // 查询可保护性资源列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProtectableResponse> listProtectable(
        ListProtectableRequest &request
    );
    // 查询存储库列表
    //
    // 查询存储库列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListVaultResponse> listVault(
        ListVaultRequest &request
    );
    // 租户迁移
    //
    // 将CSBS/VBS资源迁移到CBR。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<MigrateDomainResponse> migrateDomain(
        MigrateDomainRequest &request
    );
    // 迁移资源
    //
    // 支持资源迁移到另一个存储库，不删除备份。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<MigrateVaultResourceResponse> migrateVaultResource(
        MigrateVaultResourceRequest &request
    );
    // 注册客户端
    //
    // 注册客户端，安装时候由Agent调用，无需手动注册。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RegisterAgentResponse> registerAgent(
        RegisterAgentRequest &request
    );
    // 移除备份路径
    //
    // 移除已添加的文件备份路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RemoveAgentPathResponse> removeAgentPath(
        RemoveAgentPathRequest &request
    );
    // 移除资源
    //
    // 移除存储库中的资源，若移除资源，将一并删除该资源在保管库中的备份
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RemoveVaultResourceResponse> removeVaultResource(
        RemoveVaultResourceRequest &request
    );
    // 备份恢复
    //
    // 恢复备份数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestoreBackupResponse> restoreBackup(
        RestoreBackupRequest &request
    );
    // 设置存储库资源
    //
    // 设置存储库资源是否自动备份
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetVaultResourceResponse> setVaultResource(
        SetVaultResourceRequest &request
    );
    // 查询指定客户端
    //
    // 查询指定客户端
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAgentResponse> showAgent(
        ShowAgentRequest &request
    );
    // 查询指定备份
    //
    // 根据指定id查询单个副本。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBackupResponse> showBackup(
        ShowBackupRequest &request
    );
    // 查询备份还原点
    //
    // 根据还原点ID查询指定还原点
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCheckpointResponse> showCheckpoint(
        ShowCheckpointRequest &request
    );
    // 查询租户信息
    //
    // 由控制台调用的内部接口，用于仅在查询共享备份时获取源project_id的域名信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainResponse> showDomain(
        ShowDomainRequest &request
    );
    // 获取备份成员详情
    //
    // 获取备份成员的详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMemberDetailResponse> showMemberDetail(
        ShowMemberDetailRequest &request
    );
    // 获取备份成员列表
    //
    // 获取备份共享成员的列表信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMembersDetailResponse> showMembersDetail(
        ShowMembersDetailRequest &request
    );
    // 查询备份元数据
    //
    // 查询备份时资源的元数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMetadataResponse> showMetadata(
        ShowMetadataRequest &request
    );
    // 查询迁移
    //
    // 查询迁移结果
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMigrateStatusResponse> showMigrateStatus(
        ShowMigrateStatusRequest &request
    );
    // 查询单个任务
    //
    // 根据指定任务ID查询任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowOpLogResponse> showOpLog(
        ShowOpLogRequest &request
    );
    // 查询指定组织策略
    //
    // 查询指定组织策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowOrganizationPolicyResponse> showOrganizationPolicy(
        ShowOrganizationPolicyRequest &request
    );
    // 查询单个策略
    //
    // 查询单个策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPolicyResponse> showPolicy(
        ShowPolicyRequest &request
    );
    // 查询指定可保护资源
    //
    // 根据ID查询可保护性资源
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProtectableResponse> showProtectable(
        ShowProtectableRequest &request
    );
    // 查询复制能力
    //
    // 查询本区域的复制能力
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowReplicationCapabilitiesResponse> showReplicationCapabilities(
        ShowReplicationCapabilitiesRequest &request
    );
    // 查询容量统计
    //
    // 查询容量统计
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowStorageUsageResponse> showStorageUsage(
        ShowStorageUsageRequest &request
    );
    // 存储库容量总览
    //
    // 查询项目下所有存储库的总容量和总使用量
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSummaryResponse> showSummary(
        ShowSummaryRequest &request
    );
    // 查询指定存储库
    //
    // 根据ID查询指定存储库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVaultResponse> showVault(
        ShowVaultRequest &request
    );
    // 查询存储库项目标签
    //
    // 查询租户在指定Region和实例类型的所有标签集合
    // 标签管理服务需要能够列出当前租户全部已使用的标签集合，为各服务Console打标签和过滤实例时提供标签联想功能
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVaultProjectTagResponse> showVaultProjectTag(
        ShowVaultProjectTagRequest &request
    );
    // 查询存储库资源实例
    //
    // 使用标签过滤实例
    // 标签管理服务需要提供按标签过滤各服务实例并汇总显示在列表中，需要各服务提供查询能力
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVaultResourceInstancesResponse> showVaultResourceInstances(
        ShowVaultResourceInstancesRequest &request
    );
    // 查询存储库资源标签
    //
    // 查询指定实例的标签信息
    // 标签管理服务需要使用该接口查询指定实例的全部标签数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVaultTagResponse> showVaultTag(
        ShowVaultTagRequest &request
    );
    // 移除客户端
    //
    // 移除客户端，移除客户端时将会删除该客户端所有备份，请谨慎操作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UnregisterAgentResponse> unregisterAgent(
        UnregisterAgentRequest &request
    );
    // 修改客户端
    //
    // 修改客户端状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAgentResponse> updateAgent(
        UpdateAgentRequest &request
    );
    // 更新备份
    //
    // 根据备份id更改备份
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateBackupResponse> updateBackup(
        UpdateBackupRequest &request
    );
    // 更新备份成员状态
    //
    // 更新备份共享成员的状态，需要接收方执行此API。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMemberStatusResponse> updateMemberStatus(
        UpdateMemberStatusRequest &request
    );
    // 变更（废弃）
    //
    // 订单更新，支付cbc订单后，调用该接口更新包周期产品订单信息。该接口已废弃。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateOrderResponse> updateOrder(
        UpdateOrderRequest &request
    );
    // 更新组织策略
    //
    // 更新组织策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateOrganizationPolicyResponse> updateOrganizationPolicy(
        UpdateOrganizationPolicyRequest &request
    );
    // 修改策略
    //
    // 修改策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePolicyResponse> updatePolicy(
        UpdatePolicyRequest &request
    );
    // 修改存储库
    //
    // 根据存储库ID修改存储库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateVaultResponse> updateVault(
        UpdateVaultRequest &request
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

template class HUAWEICLOUD_CBR_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Cbr::V1::CbrClient>;

#endif // HUAWEICLOUD_SDK_CBR_V1_CbrClient_H_

