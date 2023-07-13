#ifndef HUAWEICLOUD_SDK_SDRS_V1_SdrsClient_H_
#define HUAWEICLOUD_SDK_SDRS_V1_SdrsClient_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/sdrs/v1/model/AddProtectedInstanceNicRequest.h>
#include <huaweicloud/sdrs/v1/model/AddProtectedInstanceNicResponse.h>
#include <huaweicloud/sdrs/v1/model/AddProtectedInstanceTagsRequest.h>
#include <huaweicloud/sdrs/v1/model/AddProtectedInstanceTagsResponse.h>
#include <huaweicloud/sdrs/v1/model/AttachProtectedInstanceReplicationRequest.h>
#include <huaweicloud/sdrs/v1/model/AttachProtectedInstanceReplicationResponse.h>
#include <huaweicloud/sdrs/v1/model/BatchAddTagsRequest.h>
#include <huaweicloud/sdrs/v1/model/BatchAddTagsRequestBody.h>
#include <huaweicloud/sdrs/v1/model/BatchAddTagsResponse.h>
#include <huaweicloud/sdrs/v1/model/BatchCreateProtectedInstancesRequest.h>
#include <huaweicloud/sdrs/v1/model/BatchCreateProtectedInstancesRequestBody.h>
#include <huaweicloud/sdrs/v1/model/BatchCreateProtectedInstancesResponse.h>
#include <huaweicloud/sdrs/v1/model/BatchDeleteProtectedInstancesRequest.h>
#include <huaweicloud/sdrs/v1/model/BatchDeleteProtectedInstancesRequestBody.h>
#include <huaweicloud/sdrs/v1/model/BatchDeleteProtectedInstancesResponse.h>
#include <huaweicloud/sdrs/v1/model/BatchDeleteTagsRequest.h>
#include <huaweicloud/sdrs/v1/model/BatchDeleteTagsRequestBody.h>
#include <huaweicloud/sdrs/v1/model/BatchDeleteTagsResponse.h>
#include <huaweicloud/sdrs/v1/model/CreateDisasterRecoveryDrillRequest.h>
#include <huaweicloud/sdrs/v1/model/CreateDisasterRecoveryDrillRequestBody.h>
#include <huaweicloud/sdrs/v1/model/CreateDisasterRecoveryDrillResponse.h>
#include <huaweicloud/sdrs/v1/model/CreateProtectedInstanceRequest.h>
#include <huaweicloud/sdrs/v1/model/CreateProtectedInstanceRequestBody.h>
#include <huaweicloud/sdrs/v1/model/CreateProtectedInstanceResponse.h>
#include <huaweicloud/sdrs/v1/model/CreateProtectionGroupRequest.h>
#include <huaweicloud/sdrs/v1/model/CreateProtectionGroupRequestBody.h>
#include <huaweicloud/sdrs/v1/model/CreateProtectionGroupResponse.h>
#include <huaweicloud/sdrs/v1/model/CreateReplicationRequest.h>
#include <huaweicloud/sdrs/v1/model/CreateReplicationRequestBody.h>
#include <huaweicloud/sdrs/v1/model/CreateReplicationResponse.h>
#include <huaweicloud/sdrs/v1/model/DeleteAllServerGroupFailureJobsRequest.h>
#include <huaweicloud/sdrs/v1/model/DeleteAllServerGroupFailureJobsResponse.h>
#include <huaweicloud/sdrs/v1/model/DeleteDisasterRecoveryDrillRequest.h>
#include <huaweicloud/sdrs/v1/model/DeleteDisasterRecoveryDrillResponse.h>
#include <huaweicloud/sdrs/v1/model/DeleteFailureJobRequest.h>
#include <huaweicloud/sdrs/v1/model/DeleteFailureJobResponse.h>
#include <huaweicloud/sdrs/v1/model/DeleteProtectedInstanceNicRequest.h>
#include <huaweicloud/sdrs/v1/model/DeleteProtectedInstanceNicResponse.h>
#include <huaweicloud/sdrs/v1/model/DeleteProtectedInstanceRequest.h>
#include <huaweicloud/sdrs/v1/model/DeleteProtectedInstanceRequestBody.h>
#include <huaweicloud/sdrs/v1/model/DeleteProtectedInstanceResponse.h>
#include <huaweicloud/sdrs/v1/model/DeleteProtectedInstanceTagRequest.h>
#include <huaweicloud/sdrs/v1/model/DeleteProtectedInstanceTagResponse.h>
#include <huaweicloud/sdrs/v1/model/DeleteProtectionGroupRequest.h>
#include <huaweicloud/sdrs/v1/model/DeleteProtectionGroupResponse.h>
#include <huaweicloud/sdrs/v1/model/DeleteReplicationRequest.h>
#include <huaweicloud/sdrs/v1/model/DeleteReplicationRequestBody.h>
#include <huaweicloud/sdrs/v1/model/DeleteReplicationResponse.h>
#include <huaweicloud/sdrs/v1/model/DeleteServerGroupFailureJobsRequest.h>
#include <huaweicloud/sdrs/v1/model/DeleteServerGroupFailureJobsResponse.h>
#include <huaweicloud/sdrs/v1/model/DetachProtectedInstanceReplicationRequest.h>
#include <huaweicloud/sdrs/v1/model/DetachProtectedInstanceReplicationResponse.h>
#include <huaweicloud/sdrs/v1/model/ExpandReplicationRequest.h>
#include <huaweicloud/sdrs/v1/model/ExpandReplicationResponse.h>
#include <huaweicloud/sdrs/v1/model/ExtendReplicationRequestBody.h>
#include <huaweicloud/sdrs/v1/model/FailoverProtectionGroupRequestBody.h>
#include <huaweicloud/sdrs/v1/model/ListActiveActiveDomainsRequest.h>
#include <huaweicloud/sdrs/v1/model/ListActiveActiveDomainsResponse.h>
#include <huaweicloud/sdrs/v1/model/ListDisasterRecoveryDrillsRequest.h>
#include <huaweicloud/sdrs/v1/model/ListDisasterRecoveryDrillsResponse.h>
#include <huaweicloud/sdrs/v1/model/ListFailureJobsRequest.h>
#include <huaweicloud/sdrs/v1/model/ListFailureJobsResponse.h>
#include <huaweicloud/sdrs/v1/model/ListProtectedInstanceTagsRequest.h>
#include <huaweicloud/sdrs/v1/model/ListProtectedInstanceTagsResponse.h>
#include <huaweicloud/sdrs/v1/model/ListProtectedInstancesByTagsRequest.h>
#include <huaweicloud/sdrs/v1/model/ListProtectedInstancesByTagsRequestBody.h>
#include <huaweicloud/sdrs/v1/model/ListProtectedInstancesByTagsResponse.h>
#include <huaweicloud/sdrs/v1/model/ListProtectedInstancesProjectTagsRequest.h>
#include <huaweicloud/sdrs/v1/model/ListProtectedInstancesProjectTagsResponse.h>
#include <huaweicloud/sdrs/v1/model/ListProtectedInstancesRequest.h>
#include <huaweicloud/sdrs/v1/model/ListProtectedInstancesResponse.h>
#include <huaweicloud/sdrs/v1/model/ListProtectionGroupsRequest.h>
#include <huaweicloud/sdrs/v1/model/ListProtectionGroupsResponse.h>
#include <huaweicloud/sdrs/v1/model/ListReplicationsRequest.h>
#include <huaweicloud/sdrs/v1/model/ListReplicationsResponse.h>
#include <huaweicloud/sdrs/v1/model/ListRpoStatisticsRequest.h>
#include <huaweicloud/sdrs/v1/model/ListRpoStatisticsResponse.h>
#include <huaweicloud/sdrs/v1/model/ProtectedInstanceAddNicRequestBody.h>
#include <huaweicloud/sdrs/v1/model/ProtectedInstanceAddTagsRequestBody.h>
#include <huaweicloud/sdrs/v1/model/ProtectedInstanceAttachReplicationRequestBody.h>
#include <huaweicloud/sdrs/v1/model/ProtectedInstanceDeleteNicRequestBody.h>
#include <huaweicloud/sdrs/v1/model/ResizeProtectedInstanceRequest.h>
#include <huaweicloud/sdrs/v1/model/ResizeProtectedInstanceRequestBody.h>
#include <huaweicloud/sdrs/v1/model/ResizeProtectedInstanceResponse.h>
#include <huaweicloud/sdrs/v1/model/ReverseProtectionGroupRequestBody.h>
#include <huaweicloud/sdrs/v1/model/ShowDisasterRecoveryDrillRequest.h>
#include <huaweicloud/sdrs/v1/model/ShowDisasterRecoveryDrillResponse.h>
#include <huaweicloud/sdrs/v1/model/ShowProtectedInstanceRequest.h>
#include <huaweicloud/sdrs/v1/model/ShowProtectedInstanceResponse.h>
#include <huaweicloud/sdrs/v1/model/ShowProtectionGroupRequest.h>
#include <huaweicloud/sdrs/v1/model/ShowProtectionGroupResponse.h>
#include <huaweicloud/sdrs/v1/model/ShowQuotaRequest.h>
#include <huaweicloud/sdrs/v1/model/ShowQuotaResponse.h>
#include <huaweicloud/sdrs/v1/model/ShowReplicationRequest.h>
#include <huaweicloud/sdrs/v1/model/ShowReplicationResponse.h>
#include <huaweicloud/sdrs/v1/model/StartFailoverProtectionGroupRequest.h>
#include <huaweicloud/sdrs/v1/model/StartFailoverProtectionGroupResponse.h>
#include <huaweicloud/sdrs/v1/model/StartProtectionGroupRequest.h>
#include <huaweicloud/sdrs/v1/model/StartProtectionGroupRequestBody.h>
#include <huaweicloud/sdrs/v1/model/StartProtectionGroupResponse.h>
#include <huaweicloud/sdrs/v1/model/StartReverseProtectionGroupRequest.h>
#include <huaweicloud/sdrs/v1/model/StartReverseProtectionGroupResponse.h>
#include <huaweicloud/sdrs/v1/model/StopProtectionGroupRequest.h>
#include <huaweicloud/sdrs/v1/model/StopProtectionGroupRequestBody.h>
#include <huaweicloud/sdrs/v1/model/StopProtectionGroupResponse.h>
#include <huaweicloud/sdrs/v1/model/UpdateDisasterRecoveryDrillNameRequest.h>
#include <huaweicloud/sdrs/v1/model/UpdateDisasterRecoveryDrillNameRequestBody.h>
#include <huaweicloud/sdrs/v1/model/UpdateDisasterRecoveryDrillNameResponse.h>
#include <huaweicloud/sdrs/v1/model/UpdateProtectedInstanceNameRequest.h>
#include <huaweicloud/sdrs/v1/model/UpdateProtectedInstanceNameRequestBody.h>
#include <huaweicloud/sdrs/v1/model/UpdateProtectedInstanceNameResponse.h>
#include <huaweicloud/sdrs/v1/model/UpdateProtectionGroupNameRequest.h>
#include <huaweicloud/sdrs/v1/model/UpdateProtectionGroupNameRequestBody.h>
#include <huaweicloud/sdrs/v1/model/UpdateProtectionGroupNameResponse.h>
#include <huaweicloud/sdrs/v1/model/UpdateReplicationNameRequest.h>
#include <huaweicloud/sdrs/v1/model/UpdateReplicationNameRequestBody.h>
#include <huaweicloud/sdrs/v1/model/UpdateReplicationNameResponse.h>
#include <string>

#include <huaweicloud/sdrs/v1/model/ListApiVersionsRequest.h>
#include <huaweicloud/sdrs/v1/model/ListApiVersionsResponse.h>
#include <huaweicloud/sdrs/v1/model/ShowSpecifiedApiVersionRequest.h>
#include <huaweicloud/sdrs/v1/model/ShowSpecifiedApiVersionResponse.h>
#include <string>

#include <huaweicloud/sdrs/v1/model/ShowJobStatusRequest.h>
#include <huaweicloud/sdrs/v1/model/ShowJobStatusResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Sdrs::V1::Model;

class HUAWEICLOUD_SDRS_V1_EXPORT  SdrsClient : public Client
{
public:

    SdrsClient();

    virtual ~SdrsClient();

    static ClientBuilder<SdrsClient> newBuilder();

    // 保护实例添加网卡
    //
    // 给指定的保护实例添加网卡。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddProtectedInstanceNicResponse> addProtectedInstanceNic(
        AddProtectedInstanceNicRequest &request
    );
    // 添加保护实例标签
    //
    // 一个保护实例上最多有10个标签。此接口为幂等接口：创建时，如果创建的标签已经存在（key相同），则覆盖。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddProtectedInstanceTagsResponse> addProtectedInstanceTags(
        AddProtectedInstanceTagsRequest &request
    );
    // 保护实例挂载复制对
    //
    // 将指定的复制对挂载到指定的保护实例上。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AttachProtectedInstanceReplicationResponse> attachProtectedInstanceReplication(
        AttachProtectedInstanceReplicationRequest &request
    );
    // 批量添加保护实例标签
    //
    // 为指定保护实例批量添加或删除标签。一个资源上最多有10个标签。
    // 此接口为幂等接口：
    // 创建时如果请求体中存在重复key则报错。
    // 创建时，不允许设置重复key数据,如果数据库已存在该key，就覆盖value的值。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchAddTagsResponse> batchAddTags(
        BatchAddTagsRequest &request
    );
    // 批量创建保护实例
    //
    // 典型场景：没有特殊操作场景
    // 接口功能：批量创建保护实例。保护实例创建完成后，系统默认容灾站点云服务器名称与生产站点云服务器名称相同，但ID不同。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateProtectedInstancesResponse> batchCreateProtectedInstances(
        BatchCreateProtectedInstancesRequest &request
    );
    // 批量删除保护实例
    //
    // 典型场景：没有特殊操作场景
    // 接口功能：批量删除保护实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteProtectedInstancesResponse> batchDeleteProtectedInstances(
        BatchDeleteProtectedInstancesRequest &request
    );
    // 批量删除保护实例标签
    //
    // 为指定保护实例批量删除标签。一个资源上最多有10个标签。
    // 此接口为幂等接口：
    // 删除时，如果删除的标签不存在，默认处理成功,删除时不对标签字符集范围做校验。删除时tags结构体不能缺失，key不能为空，或者空字符串。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteTagsResponse> batchDeleteTags(
        BatchDeleteTagsRequest &request
    );
    // 创建容灾演练
    //
    // 创建容灾演练。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDisasterRecoveryDrillResponse> createDisasterRecoveryDrill(
        CreateDisasterRecoveryDrillRequest &request
    );
    // 创建保护实例
    //
    // 创建保护实例。保护实例创建完成后，系统默认容灾站点云服务器名称与生产站点云服务器名称相同，但ID不同。如果需要修改云服务器名称，请在保护实例详情页面单击云服务器名称，进入云服务器详情页面进行修改
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateProtectedInstanceResponse> createProtectedInstance(
        CreateProtectedInstanceRequest &request
    );
    // 创建保护组
    //
    // 创建保护组。
    // 说明：
    // 本接口为异步接口，调用成功只是表示请求下发，创建结果需要通过“查询job状态”接口获取
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateProtectionGroupResponse> createProtectionGroup(
        CreateProtectionGroupRequest &request
    );
    // 创建复制对
    //
    // 创建复制对，并将其添加到指定的保护组中。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateReplicationResponse> createReplication(
        CreateReplicationRequest &request
    );
    // 删除所有保护组失败任务
    //
    // 删除所有保护组层级的失败任务，创建、删除保护组失败等。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAllServerGroupFailureJobsResponse> deleteAllServerGroupFailureJobs(
        DeleteAllServerGroupFailureJobsRequest &request
    );
    // 删除容灾演练
    //
    // 删除指定的容灾演练。删除后：
    // 容灾演练服务器、容灾演练服务器上挂载的磁盘和网卡将被一并删除。
    // 演练VPC、演练VPC的子网不会被删除。您可以继续使用该VPC创建其他云服务器。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDisasterRecoveryDrillResponse> deleteDisasterRecoveryDrill(
        DeleteDisasterRecoveryDrillRequest &request
    );
    // 删除单个失败任务
    //
    // 删除单个失败任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteFailureJobResponse> deleteFailureJob(
        DeleteFailureJobRequest &request
    );
    // 删除保护实例
    //
    // 删除指定的保护实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteProtectedInstanceResponse> deleteProtectedInstance(
        DeleteProtectedInstanceRequest &request
    );
    // 保护实例删除网卡
    //
    // 删除指定保护实例的指定网卡。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteProtectedInstanceNicResponse> deleteProtectedInstanceNic(
        DeleteProtectedInstanceNicRequest &request
    );
    // 删除保护实例标签
    //
    // 幂等接口：删除时，不对标签字符集做校验，调用接口前必须要做encodeURI，服务端需要对接口URI做decodeURI。
    //  说明:请自行选择工具执行URI编码。
    // 删除的key不存在报404，Key不能为空或者空字符串。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteProtectedInstanceTagResponse> deleteProtectedInstanceTag(
        DeleteProtectedInstanceTagRequest &request
    );
    // 删除保护组
    //
    // 删除指定的保护组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteProtectionGroupResponse> deleteProtectionGroup(
        DeleteProtectionGroupRequest &request
    );
    // 删除复制对
    //
    // 删除指定的复制对。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteReplicationResponse> deleteReplication(
        DeleteReplicationRequest &request
    );
    // 删除指定保护组内的所有失败任务
    //
    // 删除指定保护组内的所有失败任务，创建保护实例失败、创建复制对失败、删除保护实例失败、删除复制对失败等。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteServerGroupFailureJobsResponse> deleteServerGroupFailureJobs(
        DeleteServerGroupFailureJobsRequest &request
    );
    // 保护实例卸载复制对
    //
    // 将指定的复制对从指定的保护实例上卸载。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DetachProtectedInstanceReplicationResponse> detachProtectedInstanceReplication(
        DetachProtectedInstanceReplicationRequest &request
    );
    // 复制对扩容
    //
    // 对复制对包含的两个磁盘进行扩容操作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExpandReplicationResponse> expandReplication(
        ExpandReplicationRequest &request
    );
    // 查询双活域
    //
    // 查询双活域。双活域由本端存储设备、远端存储设备组成，通过双活域，应用服务器可以实现跨站点的数据访问。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListActiveActiveDomainsResponse> listActiveActiveDomains(
        ListActiveActiveDomainsRequest &request
    );
    // 查询容灾演练列表
    //
    // 查询指定保护组下的所有容灾演练列表，当未指定保护组时查询当前租户下的所有容灾演练列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDisasterRecoveryDrillsResponse> listDisasterRecoveryDrills(
        ListDisasterRecoveryDrillsRequest &request
    );
    // 查询失败任务列表
    //
    // 查询所有保护组失败任务列表或者指定保护组下的所有失败任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFailureJobsResponse> listFailureJobs(
        ListFailureJobsRequest &request
    );
    // 查询保护实例标签
    //
    // 查询指定保护实例的标签信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProtectedInstanceTagsResponse> listProtectedInstanceTags(
        ListProtectedInstanceTagsRequest &request
    );
    // 查询保护实例列表
    //
    // 查询当前租户下的所有保护实例列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProtectedInstancesResponse> listProtectedInstances(
        ListProtectedInstancesRequest &request
    );
    // 通过标签查询保护实例
    //
    // 使用标签过滤保护实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProtectedInstancesByTagsResponse> listProtectedInstancesByTags(
        ListProtectedInstancesByTagsRequest &request
    );
    // 查询保护实例项目标签
    //
    // 查询租户在指定Project中保护实例的所有资源标签集合。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProtectedInstancesProjectTagsResponse> listProtectedInstancesProjectTags(
        ListProtectedInstancesProjectTagsRequest &request
    );
    // 查询保护组列表
    //
    // 查询当前租户所有的保护组列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProtectionGroupsResponse> listProtectionGroups(
        ListProtectionGroupsRequest &request
    );
    // 查询复制对列表
    //
    // 查询指定保护组下的所有复制对列表，如果不给定指定保护组则查询当前租户下的所有复制对列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListReplicationsResponse> listReplications(
        ListReplicationsRequest &request
    );
    // 查询资源的RPO超标趋势记录列表
    //
    // 查询当前租户大屏显示中，资源的RPO超标趋势记录列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRpoStatisticsResponse> listRpoStatistics(
        ListRpoStatisticsRequest &request
    );
    // 保护实例变更规格
    //
    // 变更指定保护实例中弹性云服务器的规格，包括：同时变更生产站点云服务器和容灾站点云服务器的规格。
    // 仅变更生产站点云服务器的规格，容灾站点云服务器规格不变。
    // 生产站点云服务器规格不变，仅变更容灾站点云服务器的规格。
    // 当且仅当待变更规格的云服务器处于关机状态时，才能执行此操作。
    //  说明：不同规格的云服务器在性能上存在差异，可能会对云服务器上运行的应用产生影响。
    // 为保证切换/故障切换后云服务器的性能，建议容灾站点服务器的规格（CPU、内存）不低于生产站点云服务器的规格（CPU、内存）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResizeProtectedInstanceResponse> resizeProtectedInstance(
        ResizeProtectedInstanceRequest &request
    );
    // 查询单个容灾演练详情
    //
    // 查询单个容灾演练的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDisasterRecoveryDrillResponse> showDisasterRecoveryDrill(
        ShowDisasterRecoveryDrillRequest &request
    );
    // 查询单个保护实例详情
    //
    // 查询单个保护实例的详细信息，如名称、ID等。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProtectedInstanceResponse> showProtectedInstance(
        ShowProtectedInstanceRequest &request
    );
    // 查询保护组详情
    //
    // 查询单个保护组的详细信息，如ID、名称等。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProtectionGroupResponse> showProtectionGroup(
        ShowProtectionGroupRequest &request
    );
    // 查询租户配额
    //
    // 查询资源的配额相关信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowQuotaResponse> showQuota(
        ShowQuotaRequest &request
    );
    // 查询单个复制对详情
    //
    // 查询单个复制对的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowReplicationResponse> showReplication(
        ShowReplicationRequest &request
    );
    // 保护组故障切换
    //
    // 当保护组的生产站点发生故障时，将保护组的生产站点切到当前的容灾站点，即另一端AZ，启用当前容灾站点的云硬盘以及云服务器等资源。
    // 故障切换完成之后，保护组的当前生产站点变成故障切换发生之前的容灾站点，且生产站点和容灾站点之间的数据已停止保护，必须调用5.4.6-保护组开启保护/重保护接口成功后，两端的数据才会重新被保护。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartFailoverProtectionGroupResponse> startFailoverProtectionGroup(
        StartFailoverProtectionGroupRequest &request
    );
    // 保护组开启保护/重保护
    //
    // 对某一个保护组的“开启保护”或“重保护”操作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartProtectionGroupResponse> startProtectionGroup(
        StartProtectionGroupRequest &request
    );
    // 保护组切换
    //
    // 对保护组进行切换操作，可以将保护组的当前生产站点，从创建保护组时指定的生产站点切换到创建保护组时指定的容灾站点，也可以从创建保护组时指定的容灾站点切换到创建保护组时指定的生产站点。切换后，生产站点和容灾站点的数据仍然处于被保护状态，只是复制方向与操作之前相反。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartReverseProtectionGroupResponse> startReverseProtectionGroup(
        StartReverseProtectionGroupRequest &request
    );
    // 保护组停止保护
    //
    // 对某一个保护组的停止保护操作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopProtectionGroupResponse> stopProtectionGroup(
        StopProtectionGroupRequest &request
    );
    // 更新容灾演练名称
    //
    // 更新容灾演练的名称。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDisasterRecoveryDrillNameResponse> updateDisasterRecoveryDrillName(
        UpdateDisasterRecoveryDrillNameRequest &request
    );
    // 更新保护实例名称
    //
    // 更新某一个保护实例的名称。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProtectedInstanceNameResponse> updateProtectedInstanceName(
        UpdateProtectedInstanceNameRequest &request
    );
    // 更新保护组名称
    //
    // 更新某一个保护组的名称。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProtectionGroupNameResponse> updateProtectionGroupName(
        UpdateProtectionGroupNameRequest &request
    );
    // 更新复制对名称
    //
    // 更新复制对名称。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateReplicationNameResponse> updateReplicationName(
        UpdateReplicationNameRequest &request
    );

    // 查询API版本信息
    //
    // 查询存储容灾当前所有可用的版本信息列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApiVersionsResponse> listApiVersions(
        ListApiVersionsRequest &request
    );
    // 查询指定API版本信息
    //
    // 查询存储容灾指定API版本信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSpecifiedApiVersionResponse> showSpecifiedApiVersion(
        ShowSpecifiedApiVersionRequest &request
    );

    // 查询job状态
    //
    // 查询job的执行状态。
    // 对于创建保护组、删除保护组、创建保护实例、删除保护实例、创建复制对、删除复制对等异步API，命令下发后，会返回job_id，通过job_id可以查询任务的执行状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobStatusResponse> showJobStatus(
        ShowJobStatusRequest &request
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

template class HUAWEICLOUD_SDRS_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Sdrs::V1::SdrsClient>;

#endif // HUAWEICLOUD_SDK_SDRS_V1_SdrsClient_H_

