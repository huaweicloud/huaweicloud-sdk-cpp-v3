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

    /// <summary>
    /// 保护实例添加网卡
    /// </summary>
    /// <remarks>
    /// 给指定的保护实例添加网卡。
    /// </remarks>
    /// <param name="protectedInstanceId">保护实例的ID。</param>
    /// <param name="protectedInstanceAddNicRequestBody">保护实例添加网卡请求体</param>
    std::shared_ptr<AddProtectedInstanceNicResponse> addProtectedInstanceNic(
        AddProtectedInstanceNicRequest &request
    );
    /// <summary>
    /// 添加保护实例标签
    /// </summary>
    /// <remarks>
    /// 一个保护实例上最多有10个标签。此接口为幂等接口：创建时，如果创建的标签已经存在（key相同），则覆盖。
    /// </remarks>
    /// <param name="protectedInstanceId">保护实例的ID。</param>
    /// <param name="protectedInstanceAddTagsRequestBody">添加保护实例标签请求体</param>
    std::shared_ptr<AddProtectedInstanceTagsResponse> addProtectedInstanceTags(
        AddProtectedInstanceTagsRequest &request
    );
    /// <summary>
    /// 保护实例挂载复制对
    /// </summary>
    /// <remarks>
    /// 将指定的复制对挂载到指定的保护实例上。
    /// </remarks>
    /// <param name="protectedInstanceId">保护实例的ID。</param>
    /// <param name="protectedInstanceAttachReplicationRequestBody">保护实例挂载复制对请求体</param>
    std::shared_ptr<AttachProtectedInstanceReplicationResponse> attachProtectedInstanceReplication(
        AttachProtectedInstanceReplicationRequest &request
    );
    /// <summary>
    /// 批量添加保护实例标签
    /// </summary>
    /// <remarks>
    /// 为指定保护实例批量添加或删除标签。一个资源上最多有10个标签。 此接口为幂等接口： 创建时如果请求体中存在重复key则报错。 创建时，不允许设置重复key数据,如果数据库已存在该key，就覆盖value的值。
    /// </remarks>
    /// <param name="protectedInstanceId">保护实例的ID。</param>
    /// <param name="batchAddOrDeleteTagsRequest">批量添加保护实例标签请求体</param>
    std::shared_ptr<BatchAddTagsResponse> batchAddTags(
        BatchAddTagsRequest &request
    );
    /// <summary>
    /// 批量创建保护实例
    /// </summary>
    /// <remarks>
    /// 典型场景：没有特殊操作场景 接口功能：批量创建保护实例。保护实例创建完成后，系统默认容灾站点云服务器名称与生产站点云服务器名称相同，但ID不同。
    /// </remarks>
    /// <param name="batchCreateProtectedInstancesRequestBody">批量创建保护实例请求体</param>
    std::shared_ptr<BatchCreateProtectedInstancesResponse> batchCreateProtectedInstances(
        BatchCreateProtectedInstancesRequest &request
    );
    /// <summary>
    /// 批量删除保护实例
    /// </summary>
    /// <remarks>
    /// 典型场景：没有特殊操作场景 接口功能：批量删除保护实例。
    /// </remarks>
    /// <param name="batchDeleteProtectedInstancesRequestBody">批量删除保护实例的信息。</param>
    std::shared_ptr<BatchDeleteProtectedInstancesResponse> batchDeleteProtectedInstances(
        BatchDeleteProtectedInstancesRequest &request
    );
    /// <summary>
    /// 批量删除保护实例标签
    /// </summary>
    /// <remarks>
    /// 为指定保护实例批量删除标签。一个资源上最多有10个标签。 此接口为幂等接口： 删除时，如果删除的标签不存在，默认处理成功,删除时不对标签字符集范围做校验。删除时tags结构体不能缺失，key不能为空，或者空字符串。
    /// </remarks>
    /// <param name="protectedInstanceId">保护实例的ID。</param>
    /// <param name="batchAddOrDeleteTagsRequest">批量删除保护实例标签请求体</param>
    std::shared_ptr<BatchDeleteTagsResponse> batchDeleteTags(
        BatchDeleteTagsRequest &request
    );
    /// <summary>
    /// 创建容灾演练
    /// </summary>
    /// <remarks>
    /// 创建容灾演练。
    /// </remarks>
    /// <param name="createDisasterRecoveryDrillRequestBody">创建容灾演练请求体</param>
    std::shared_ptr<CreateDisasterRecoveryDrillResponse> createDisasterRecoveryDrill(
        CreateDisasterRecoveryDrillRequest &request
    );
    /// <summary>
    /// 创建保护实例
    /// </summary>
    /// <remarks>
    /// 创建保护实例。保护实例创建完成后，系统默认容灾站点云服务器名称与生产站点云服务器名称相同，但ID不同。如果需要修改云服务器名称，请在保护实例详情页面单击云服务器名称，进入云服务器详情页面进行修改
    /// </remarks>
    /// <param name="createProtectedInstanceRequestBody">创建保护实例请求体</param>
    std::shared_ptr<CreateProtectedInstanceResponse> createProtectedInstance(
        CreateProtectedInstanceRequest &request
    );
    /// <summary>
    /// 创建保护组
    /// </summary>
    /// <remarks>
    /// 创建保护组。 说明： 本接口为异步接口，调用成功只是表示请求下发，创建结果需要通过“查询job状态”接口获取
    /// </remarks>
    /// <param name="createProtectionGroupRequestBody">创建保护组请求体</param>
    std::shared_ptr<CreateProtectionGroupResponse> createProtectionGroup(
        CreateProtectionGroupRequest &request
    );
    /// <summary>
    /// 创建复制对
    /// </summary>
    /// <remarks>
    /// 创建复制对，并将其添加到指定的保护组中。
    /// </remarks>
    /// <param name="createReplicationRequestBody">创建复制对请求体</param>
    std::shared_ptr<CreateReplicationResponse> createReplication(
        CreateReplicationRequest &request
    );
    /// <summary>
    /// 删除所有保护组失败任务
    /// </summary>
    /// <remarks>
    /// 删除所有保护组层级的失败任务，创建、删除保护组失败等。
    /// </remarks>
    std::shared_ptr<DeleteAllServerGroupFailureJobsResponse> deleteAllServerGroupFailureJobs(
        DeleteAllServerGroupFailureJobsRequest &request
    );
    /// <summary>
    /// 删除容灾演练
    /// </summary>
    /// <remarks>
    /// 删除指定的容灾演练。删除后： 容灾演练服务器、容灾演练服务器上挂载的磁盘和网卡将被一并删除。 演练VPC、演练VPC的子网不会被删除。您可以继续使用该VPC创建其他云服务器。
    /// </remarks>
    /// <param name="disasterRecoveryDrillId">容灾演练的ID。</param>
    std::shared_ptr<DeleteDisasterRecoveryDrillResponse> deleteDisasterRecoveryDrill(
        DeleteDisasterRecoveryDrillRequest &request
    );
    /// <summary>
    /// 删除单个失败任务
    /// </summary>
    /// <remarks>
    /// 删除单个失败任务。
    /// </remarks>
    /// <param name="failureJobId">失败任务ID。</param>
    std::shared_ptr<DeleteFailureJobResponse> deleteFailureJob(
        DeleteFailureJobRequest &request
    );
    /// <summary>
    /// 删除保护实例
    /// </summary>
    /// <remarks>
    /// 删除指定的保护实例。
    /// </remarks>
    /// <param name="protectedInstanceId">保护实例的ID。</param>
    /// <param name="deleteProtectedInstanceRequestBody">删除保护实例请求体</param>
    std::shared_ptr<DeleteProtectedInstanceResponse> deleteProtectedInstance(
        DeleteProtectedInstanceRequest &request
    );
    /// <summary>
    /// 保护实例删除网卡
    /// </summary>
    /// <remarks>
    /// 删除指定保护实例的指定网卡。
    /// </remarks>
    /// <param name="protectedInstanceId">保护实例的ID。</param>
    /// <param name="protectedInstanceDeleteNicRequestBody">保护实例删除网卡清请求体</param>
    std::shared_ptr<DeleteProtectedInstanceNicResponse> deleteProtectedInstanceNic(
        DeleteProtectedInstanceNicRequest &request
    );
    /// <summary>
    /// 删除保护实例标签
    /// </summary>
    /// <remarks>
    /// 幂等接口：删除时，不对标签字符集做校验，调用接口前必须要做encodeURI，服务端需要对接口URI做decodeURI。  说明:请自行选择工具执行URI编码。 删除的key不存在报404，Key不能为空或者空字符串。
    /// </remarks>
    /// <param name="protectedInstanceId">保护实例的ID。</param>
    /// <param name="key">标签key。</param>
    std::shared_ptr<DeleteProtectedInstanceTagResponse> deleteProtectedInstanceTag(
        DeleteProtectedInstanceTagRequest &request
    );
    /// <summary>
    /// 删除保护组
    /// </summary>
    /// <remarks>
    /// 删除指定的保护组。
    /// </remarks>
    /// <param name="serverGroupId">保护组ID。</param>
    std::shared_ptr<DeleteProtectionGroupResponse> deleteProtectionGroup(
        DeleteProtectionGroupRequest &request
    );
    /// <summary>
    /// 删除复制对
    /// </summary>
    /// <remarks>
    /// 删除指定的复制对。
    /// </remarks>
    /// <param name="replicationId">复制对的ID。</param>
    /// <param name="deleteReplicationRequestBody">删除复制对请求体</param>
    std::shared_ptr<DeleteReplicationResponse> deleteReplication(
        DeleteReplicationRequest &request
    );
    /// <summary>
    /// 删除指定保护组内的所有失败任务
    /// </summary>
    /// <remarks>
    /// 删除指定保护组内的所有失败任务，创建保护实例失败、创建复制对失败、删除保护实例失败、删除复制对失败等。
    /// </remarks>
    /// <param name="serverGroupId">保护组ID。</param>
    std::shared_ptr<DeleteServerGroupFailureJobsResponse> deleteServerGroupFailureJobs(
        DeleteServerGroupFailureJobsRequest &request
    );
    /// <summary>
    /// 保护实例卸载复制对
    /// </summary>
    /// <remarks>
    /// 将指定的复制对从指定的保护实例上卸载。
    /// </remarks>
    /// <param name="protectedInstanceId">保护实例的ID。</param>
    /// <param name="replicationId">复制对的ID。</param>
    std::shared_ptr<DetachProtectedInstanceReplicationResponse> detachProtectedInstanceReplication(
        DetachProtectedInstanceReplicationRequest &request
    );
    /// <summary>
    /// 复制对扩容
    /// </summary>
    /// <remarks>
    /// 对复制对包含的两个磁盘进行扩容操作。
    /// </remarks>
    /// <param name="replicationId">复制对的ID。</param>
    /// <param name="extendReplicationRequestBody">复制对扩容请求体</param>
    std::shared_ptr<ExpandReplicationResponse> expandReplication(
        ExpandReplicationRequest &request
    );
    /// <summary>
    /// 查询双活域
    /// </summary>
    /// <remarks>
    /// 查询双活域。双活域由本端存储设备、远端存储设备组成，通过双活域，应用服务器可以实现跨站点的数据访问。
    /// </remarks>
    std::shared_ptr<ListActiveActiveDomainsResponse> listActiveActiveDomains(
        ListActiveActiveDomainsRequest &request
    );
    /// <summary>
    /// 查询容灾演练列表
    /// </summary>
    /// <remarks>
    /// 查询指定保护组下的所有容灾演练列表，当未指定保护组时查询当前租户下的所有容灾演练列表。
    /// </remarks>
    /// <param name="serverGroupId">保护组的ID。 (optional, default to &quot;&quot;)</param>
    /// <param name="name">容灾演练的名称。支持模糊查询。 (optional, default to &quot;&quot;)</param>
    /// <param name="status">容灾演练的状态。 (optional, default to &quot;&quot;)</param>
    /// <param name="drillVpcId">演练虚拟私有云ID。 (optional, default to &quot;&quot;)</param>
    /// <param name="limit">每次请求返回结果个数限制，取值范围为[0,1000]的正整数，默认值为1000。 (optional, default to 0)</param>
    /// <param name="offset">每次请求开始的下标，即偏移量，默认值为0。offset必须为数字，不能为负数。 (optional, default to 0)</param>
    std::shared_ptr<ListDisasterRecoveryDrillsResponse> listDisasterRecoveryDrills(
        ListDisasterRecoveryDrillsRequest &request
    );
    /// <summary>
    /// 查询失败任务列表
    /// </summary>
    /// <remarks>
    /// 查询所有保护组失败任务列表或者指定保护组下的所有失败任务列表。
    /// </remarks>
    /// <param name="failureStatus">失败任务状态。createFail：表示创建失败。deleteFail：表示删除失败。attachFail：表示挂载失败。detachFail：表示卸载失败。expandFail：表示扩容失败。resizeFail：表示变更规格失败。startFail：表示开启保护失败。stopFail：表示停止保护失败。reverseFail：表示切换失败。failoverFail：表示故障切换失败。reprotectFail : 表示重保护失败。 (optional, default to &quot;&quot;)</param>
    /// <param name="resourceName">保护组资源名称。 (optional, default to &quot;&quot;)</param>
    /// <param name="serverGroupId">保护组ID。 (optional, default to &quot;&quot;)</param>
    /// <param name="resourceType">资源类型。server_groups：表示保护组。protected_instances：表示保护实例。replications：表示复制对。disaster_recovery_drills：表示容灾演练。 (optional, default to &quot;&quot;)</param>
    /// <param name="limit">每次请求返回结果个数限制。取值范围为[0,1000]的正整数，默认值为1000。 (optional, default to 0)</param>
    /// <param name="offset">每次请求开始的下标，即偏移量，默认值为0。offset必须为数字，不能为负数。 (optional, default to 0)</param>
    std::shared_ptr<ListFailureJobsResponse> listFailureJobs(
        ListFailureJobsRequest &request
    );
    /// <summary>
    /// 查询保护实例标签
    /// </summary>
    /// <remarks>
    /// 查询指定保护实例的标签信息。
    /// </remarks>
    /// <param name="protectedInstanceId">保护实例的ID。</param>
    std::shared_ptr<ListProtectedInstanceTagsResponse> listProtectedInstanceTags(
        ListProtectedInstanceTagsRequest &request
    );
    /// <summary>
    /// 查询保护实例列表
    /// </summary>
    /// <remarks>
    /// 查询当前租户下的所有保护实例列表。
    /// </remarks>
    /// <param name="serverGroupId">保护组的ID，表示查询该保护组下的所有保护实例列表。 (optional, default to &quot;&quot;)</param>
    /// <param name="serverGroupIds">保护组的ID列表，格式为server_group_ids&#x3D;[&#39;server_group_id1&#39;,&#39;server_group_id2&#39;,...,&#39;server_group_idx&#39;]，请使用URL编码进行转换。返回“server_group_ids”中有效server_group_id的所有保护实例列表，无效的server_group_id会被忽略。支持查询最多30个server_group_id对应的所有保护实例列表。如果“server_group_id”和“server_group_ids”查询参数同时存在，“server_group_id”会被忽略。 (optional, default to &quot;&quot;)</param>
    /// <param name="protectedInstanceIds">保护实例的ID列表，格式为protected_instance_ids&#x3D;[&#39;protected_instance_id1&#39;,&#39;protected_instance_id2&#39;,...,&#39;protected_instance_idx&#39;]，请使用URL编码进行转换。返回“protected_instance_ids”中有效protected_instance_id的所有保护实例列表，无效的protected_instance_id会被忽略。支持查询最多30个protected_instance_id对应的所有保护实例列表。如果“server_group_id”或者“server_group_ids”查询参数存在时，“protected_instance_ids”会被忽略。 (optional, default to &quot;&quot;)</param>
    /// <param name="limit">每次请求返回结果个数限制，取值范围为[0,1000]的正整数，默认值为1000。 (optional, default to 0)</param>
    /// <param name="offset">每次请求开始的下标，即偏移量，默认值为0。offset必须为数字，不能为负数。 (optional, default to 0)</param>
    /// <param name="status">保护实例状态。 (optional, default to &quot;&quot;)</param>
    /// <param name="name">保护实例的名称。支持模糊查询。 (optional, default to &quot;&quot;)</param>
    /// <param name="queryType">查询场景类型。status_abnormal：表示查询异常状态的保护实例列表。general或空时：该参数不生效。 (optional, default to &quot;&quot;)</param>
    /// <param name="availabilityZone">保护实例所在的保护组的当前生产站点可用区。 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListProtectedInstancesResponse> listProtectedInstances(
        ListProtectedInstancesRequest &request
    );
    /// <summary>
    /// 通过标签查询保护实例
    /// </summary>
    /// <remarks>
    /// 使用标签过滤保护实例
    /// </remarks>
    /// <param name="listProtectedInstancesByTagsRequestBody">通过标签查询保护实例请求体</param>
    std::shared_ptr<ListProtectedInstancesByTagsResponse> listProtectedInstancesByTags(
        ListProtectedInstancesByTagsRequest &request
    );
    /// <summary>
    /// 查询保护实例项目标签
    /// </summary>
    /// <remarks>
    /// 查询租户在指定Project中保护实例的所有资源标签集合。
    /// </remarks>
    std::shared_ptr<ListProtectedInstancesProjectTagsResponse> listProtectedInstancesProjectTags(
        ListProtectedInstancesProjectTagsRequest &request
    );
    /// <summary>
    /// 查询保护组列表
    /// </summary>
    /// <remarks>
    /// 查询当前租户所有的保护组列表。
    /// </remarks>
    /// <param name="limit">每次请求返回结果个数限制，取值范围为[0,1000]的正整数，默认值为1000。 (optional, default to 0)</param>
    /// <param name="offset">每次请求开始的下标，即偏移量，默认值为0。offset必须为数字，不能为负数。 (optional, default to 0)</param>
    /// <param name="status">保护组状态。 (optional, default to &quot;&quot;)</param>
    /// <param name="name">保护组的名称。支持模糊查询。 (optional, default to &quot;&quot;)</param>
    /// <param name="queryType">查询场景类型。 status_abnormal：表示查询异常状态的保护组列表。 stop_protected：表示查询停止保护的保护组列表。 period_no_dr_drill：表示查询一段时间未做容灾演练的保护组，默认为三个月。 general或空时：该参数不生效。 (optional, default to &quot;&quot;)</param>
    /// <param name="availabilityZone">保护组的当前生产站点可用区。 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListProtectionGroupsResponse> listProtectionGroups(
        ListProtectionGroupsRequest &request
    );
    /// <summary>
    /// 查询复制对列表
    /// </summary>
    /// <remarks>
    /// 查询指定保护组下的所有复制对列表，如果不给定指定保护组则查询当前租户下的所有复制对列表。
    /// </remarks>
    /// <param name="serverGroupId">保护组的ID。 (optional, default to &quot;&quot;)</param>
    /// <param name="serverGroupIds">保护组的ID列表，格式为server_group_ids&#x3D;[&#39;server_group_id1&#39;,&#39;server_group_id2&#39;,...,&#39;server_group_idx&#39;]，请使用URL编码进行转换。返回“server_group_ids”中有效server_group_id的复制对列表，无效的server_group_id会被忽略。支持查询最多30个server_group_id对应的复制对列表。如果“server_group_id”和“server_group_ids”查询参数同时存在，“server_group_id”会被忽略。 (optional, default to &quot;&quot;)</param>
    /// <param name="protectedInstanceId">保护实例的ID。 (optional, default to &quot;&quot;)</param>
    /// <param name="protectedInstanceIds">保护实例的ID列表，格式为protected_instance_ids&#x3D;[&#39;protected_instance_id1&#39;,&#39;protected_instance_id2&#39;,...,&#39;protected_instance_idx&#39;]，请使用URL编码进行转换。返回“protected_instance_ids”中有效protected_instance_id的复制对列表，无效的protected_instance_id会被忽略。支持查询最多30个protected_instance_id对应的复制对列表。如果“protected_instance_id”和“protected_instance_ids”查询参数同时存在，“protected_instance_id”会被忽略。 (optional, default to &quot;&quot;)</param>
    /// <param name="name">复制对的名称。支持模糊查询。 (optional, default to &quot;&quot;)</param>
    /// <param name="status">复制对的状态。 (optional, default to &quot;&quot;)</param>
    /// <param name="limit">每次请求返回结果个数限制，取值范围为[0,1000]的正整数，默认值为1000。 (optional, default to 0)</param>
    /// <param name="offset">每次请求开始的下标，即偏移量，默认值为0。offset必须为数字，不能为负数。 (optional, default to 0)</param>
    /// <param name="queryType">查询场景类型。如需查询异常状态的复制对列表，query_type的值为“status_abnormal”。否则，query_type取值为空或“general”。 (optional, default to &quot;&quot;)</param>
    /// <param name="availabilityZone">复制对所在的保护组的当前生产站点可用区。 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListReplicationsResponse> listReplications(
        ListReplicationsRequest &request
    );
    /// <summary>
    /// 查询资源的RPO超标趋势记录列表
    /// </summary>
    /// <remarks>
    /// 查询当前租户大屏显示中，资源的RPO超标趋势记录列表。
    /// </remarks>
    /// <param name="limit">每次请求返回结果个数限制，取值范围为[0,1000]的正整数，默认值为1000。 (optional, default to 0)</param>
    /// <param name="offset">每次请求开始的下标，即偏移量，默认值为0。offset必须为数字，不能为负数。 (optional, default to 0)</param>
    /// <param name="startTime">开始时间。默认格式为：\&quot;yyyy-MM-dd HH:mm:ss.SSS\&quot;，例：\&quot;2019-04-01 12:00:00.000\&quot;。 (optional, default to &quot;&quot;)</param>
    /// <param name="endTime">结束时间。默认格式为：\&quot;yyyy-MM-dd HH:mm:ss.SSS\&quot;，例：\&quot;2019-04-01 12:00:00.000\&quot;。 (optional, default to &quot;&quot;)</param>
    /// <param name="resourceType">资源类型。replication：表示查询复制对的RPO超标趋势记录。 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListRpoStatisticsResponse> listRpoStatistics(
        ListRpoStatisticsRequest &request
    );
    /// <summary>
    /// 保护实例变更规格
    /// </summary>
    /// <remarks>
    /// 变更指定保护实例中弹性云服务器的规格，包括：同时变更生产站点云服务器和容灾站点云服务器的规格。 仅变更生产站点云服务器的规格，容灾站点云服务器规格不变。 生产站点云服务器规格不变，仅变更容灾站点云服务器的规格。 当且仅当待变更规格的云服务器处于关机状态时，才能执行此操作。  说明：不同规格的云服务器在性能上存在差异，可能会对云服务器上运行的应用产生影响。 为保证切换/故障切换后云服务器的性能，建议容灾站点服务器的规格（CPU、内存）不低于生产站点云服务器的规格（CPU、内存）。
    /// </remarks>
    /// <param name="protectedInstanceId">保护实例的ID。</param>
    /// <param name="resizeProtectedInstanceRequestBody">保护实例变更规格请求体</param>
    std::shared_ptr<ResizeProtectedInstanceResponse> resizeProtectedInstance(
        ResizeProtectedInstanceRequest &request
    );
    /// <summary>
    /// 查询单个容灾演练详情
    /// </summary>
    /// <remarks>
    /// 查询单个容灾演练的详细信息。
    /// </remarks>
    /// <param name="disasterRecoveryDrillId">容灾演练的ID。</param>
    std::shared_ptr<ShowDisasterRecoveryDrillResponse> showDisasterRecoveryDrill(
        ShowDisasterRecoveryDrillRequest &request
    );
    /// <summary>
    /// 查询单个保护实例详情
    /// </summary>
    /// <remarks>
    /// 查询单个保护实例的详细信息，如名称、ID等。
    /// </remarks>
    /// <param name="protectedInstanceId">保护实例的ID。</param>
    std::shared_ptr<ShowProtectedInstanceResponse> showProtectedInstance(
        ShowProtectedInstanceRequest &request
    );
    /// <summary>
    /// 查询保护组详情
    /// </summary>
    /// <remarks>
    /// 查询单个保护组的详细信息，如ID、名称等。
    /// </remarks>
    /// <param name="serverGroupId">保护组的ID。</param>
    std::shared_ptr<ShowProtectionGroupResponse> showProtectionGroup(
        ShowProtectionGroupRequest &request
    );
    /// <summary>
    /// 查询租户配额
    /// </summary>
    /// <remarks>
    /// 查询资源的配额相关信息。
    /// </remarks>
    std::shared_ptr<ShowQuotaResponse> showQuota(
        ShowQuotaRequest &request
    );
    /// <summary>
    /// 查询单个复制对详情
    /// </summary>
    /// <remarks>
    /// 查询单个复制对的详细信息。
    /// </remarks>
    /// <param name="replicationId">复制对ID。</param>
    std::shared_ptr<ShowReplicationResponse> showReplication(
        ShowReplicationRequest &request
    );
    /// <summary>
    /// 保护组故障切换
    /// </summary>
    /// <remarks>
    /// 当保护组的生产站点发生故障时，将保护组的生产站点切到当前的容灾站点，即另一端AZ，启用当前容灾站点的云硬盘以及云服务器等资源。 故障切换完成之后，保护组的当前生产站点变成故障切换发生之前的容灾站点，且生产站点和容灾站点之间的数据已停止保护，必须调用5.4.6-保护组开启保护/重保护接口成功后，两端的数据才会重新被保护。
    /// </remarks>
    /// <param name="serverGroupId">保护组的ID。</param>
    /// <param name="failoverProtectionGroupRequestBody">保护组故障切换请求体</param>
    std::shared_ptr<StartFailoverProtectionGroupResponse> startFailoverProtectionGroup(
        StartFailoverProtectionGroupRequest &request
    );
    /// <summary>
    /// 保护组开启保护/重保护
    /// </summary>
    /// <remarks>
    /// 对某一个保护组的“开启保护”或“重保护”操作。
    /// </remarks>
    /// <param name="serverGroupId">保护组的ID。</param>
    /// <param name="startProtectionGroupRequestBody">开启保护/重保护请求体</param>
    std::shared_ptr<StartProtectionGroupResponse> startProtectionGroup(
        StartProtectionGroupRequest &request
    );
    /// <summary>
    /// 保护组切换
    /// </summary>
    /// <remarks>
    /// 对保护组进行切换操作，可以将保护组的当前生产站点，从创建保护组时指定的生产站点切换到创建保护组时指定的容灾站点，也可以从创建保护组时指定的容灾站点切换到创建保护组时指定的生产站点。切换后，生产站点和容灾站点的数据仍然处于被保护状态，只是复制方向与操作之前相反。
    /// </remarks>
    /// <param name="serverGroupId">保护组的ID。</param>
    /// <param name="reverseProtectionGroupRequestBody">保护组切换请求体</param>
    std::shared_ptr<StartReverseProtectionGroupResponse> startReverseProtectionGroup(
        StartReverseProtectionGroupRequest &request
    );
    /// <summary>
    /// 保护组停止保护
    /// </summary>
    /// <remarks>
    /// 对某一个保护组的停止保护操作。
    /// </remarks>
    /// <param name="serverGroupId">保护组的ID。</param>
    /// <param name="stopProtectionGroupRequestBody">保护组停止保护请求体</param>
    std::shared_ptr<StopProtectionGroupResponse> stopProtectionGroup(
        StopProtectionGroupRequest &request
    );
    /// <summary>
    /// 更新容灾演练名称
    /// </summary>
    /// <remarks>
    /// 更新容灾演练的名称。
    /// </remarks>
    /// <param name="disasterRecoveryDrillId">容灾演练的ID。</param>
    /// <param name="updateDisasterRecoveryDrillNameRequestBody">更新容灾演练名称请求体</param>
    std::shared_ptr<UpdateDisasterRecoveryDrillNameResponse> updateDisasterRecoveryDrillName(
        UpdateDisasterRecoveryDrillNameRequest &request
    );
    /// <summary>
    /// 更新保护实例名称
    /// </summary>
    /// <remarks>
    /// 更新某一个保护实例的名称。
    /// </remarks>
    /// <param name="protectedInstanceId">保护实例的ID。</param>
    /// <param name="updateProtectedInstanceNameRequestBody">更新保护实例名称请求体</param>
    std::shared_ptr<UpdateProtectedInstanceNameResponse> updateProtectedInstanceName(
        UpdateProtectedInstanceNameRequest &request
    );
    /// <summary>
    /// 更新保护组名称
    /// </summary>
    /// <remarks>
    /// 更新某一个保护组的名称。
    /// </remarks>
    /// <param name="serverGroupId">保护组ID。</param>
    /// <param name="updateProtectionGroupNameRequestBody">更新保护组名称请求体</param>
    std::shared_ptr<UpdateProtectionGroupNameResponse> updateProtectionGroupName(
        UpdateProtectionGroupNameRequest &request
    );
    /// <summary>
    /// 更新复制对名称
    /// </summary>
    /// <remarks>
    /// 更新复制对名称。
    /// </remarks>
    /// <param name="replicationId">replication_id</param>
    /// <param name="updateReplicationNameRequestBody">更新复制对名称请求体</param>
    std::shared_ptr<UpdateReplicationNameResponse> updateReplicationName(
        UpdateReplicationNameRequest &request
    );
    /// <summary>
    /// 查询API版本信息
    /// </summary>
    /// <remarks>
    /// 查询存储容灾当前所有可用的版本信息列表。
    /// </remarks>
    std::shared_ptr<ListApiVersionsResponse> listApiVersions(
        ListApiVersionsRequest &request
    );
    /// <summary>
    /// 查询指定API版本信息
    /// </summary>
    /// <remarks>
    /// 查询存储容灾指定API版本信息。
    /// </remarks>
    /// <param name="apiVersion">API版本号。例如: v1。</param>
    std::shared_ptr<ShowSpecifiedApiVersionResponse> showSpecifiedApiVersion(
        ShowSpecifiedApiVersionRequest &request
    );
    /// <summary>
    /// 查询job状态
    /// </summary>
    /// <remarks>
    /// 查询job的执行状态。 对于创建保护组、删除保护组、创建保护实例、删除保护实例、创建复制对、删除复制对等异步API，命令下发后，会返回job_id，通过job_id可以查询任务的执行状态。
    /// </remarks>
    /// <param name="jobId">job ID</param>
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

