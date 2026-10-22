#ifndef HUAWEICLOUD_SDK_EVS_V2_EvsClient_H_
#define HUAWEICLOUD_SDK_EVS_V2_EvsClient_H_

#include <huaweicloud/evs/v2/EvsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/evs/v2/model/AssociateAutoSnapshotPolicyRequest.h>
#include <huaweicloud/evs/v2/model/AssociateAutoSnapshotPolicyResponse.h>
#include <huaweicloud/evs/v2/model/BatchCreateResourceTagsRequestBody.h>
#include <huaweicloud/evs/v2/model/BatchCreateSnapshotGroupTagRequest.h>
#include <huaweicloud/evs/v2/model/BatchCreateSnapshotGroupTagResponse.h>
#include <huaweicloud/evs/v2/model/BatchCreateSnapshotTagsRequest.h>
#include <huaweicloud/evs/v2/model/BatchCreateSnapshotTagsResponse.h>
#include <huaweicloud/evs/v2/model/BatchCreateVolumeTagsRequest.h>
#include <huaweicloud/evs/v2/model/BatchCreateVolumeTagsRequestBody.h>
#include <huaweicloud/evs/v2/model/BatchCreateVolumeTagsResponse.h>
#include <huaweicloud/evs/v2/model/BatchDeleteResourceTagsRequestBody.h>
#include <huaweicloud/evs/v2/model/BatchDeleteSnapshotGroupTagRequest.h>
#include <huaweicloud/evs/v2/model/BatchDeleteSnapshotGroupTagResponse.h>
#include <huaweicloud/evs/v2/model/BatchDeleteSnapshotTagsRequest.h>
#include <huaweicloud/evs/v2/model/BatchDeleteSnapshotTagsResponse.h>
#include <huaweicloud/evs/v2/model/BatchDeleteVolumeTagsRequest.h>
#include <huaweicloud/evs/v2/model/BatchDeleteVolumeTagsRequestBody.h>
#include <huaweicloud/evs/v2/model/BatchDeleteVolumeTagsResponse.h>
#include <huaweicloud/evs/v2/model/BatchResizeVolumeRequestBody.h>
#include <huaweicloud/evs/v2/model/BatchResizeVolumesRequest.h>
#include <huaweicloud/evs/v2/model/BatchResizeVolumesResponse.h>
#include <huaweicloud/evs/v2/model/ChangeVolumeChargeModeRequest.h>
#include <huaweicloud/evs/v2/model/ChangeVolumeChargeModeRequestBody.h>
#include <huaweicloud/evs/v2/model/ChangeVolumeChargeModeResponse.h>
#include <huaweicloud/evs/v2/model/CinderAcceptVolumeTransferRequest.h>
#include <huaweicloud/evs/v2/model/CinderAcceptVolumeTransferRequestBody.h>
#include <huaweicloud/evs/v2/model/CinderAcceptVolumeTransferResponse.h>
#include <huaweicloud/evs/v2/model/CinderCreateVolumeTransferRequest.h>
#include <huaweicloud/evs/v2/model/CinderCreateVolumeTransferRequestBody.h>
#include <huaweicloud/evs/v2/model/CinderCreateVolumeTransferResponse.h>
#include <huaweicloud/evs/v2/model/CinderDeleteVolumeTransferRequest.h>
#include <huaweicloud/evs/v2/model/CinderDeleteVolumeTransferResponse.h>
#include <huaweicloud/evs/v2/model/CinderListAvailabilityZonesRequest.h>
#include <huaweicloud/evs/v2/model/CinderListAvailabilityZonesResponse.h>
#include <huaweicloud/evs/v2/model/CinderListQuotasRequest.h>
#include <huaweicloud/evs/v2/model/CinderListQuotasResponse.h>
#include <huaweicloud/evs/v2/model/CinderListVolumeTransfersRequest.h>
#include <huaweicloud/evs/v2/model/CinderListVolumeTransfersResponse.h>
#include <huaweicloud/evs/v2/model/CinderListVolumeTypesRequest.h>
#include <huaweicloud/evs/v2/model/CinderListVolumeTypesResponse.h>
#include <huaweicloud/evs/v2/model/CinderShowVolumeTransferRequest.h>
#include <huaweicloud/evs/v2/model/CinderShowVolumeTransferResponse.h>
#include <huaweicloud/evs/v2/model/CountAutoSnapshotPoliciesRequest.h>
#include <huaweicloud/evs/v2/model/CountAutoSnapshotPoliciesResponse.h>
#include <huaweicloud/evs/v2/model/CountSnapshotChainsRequest.h>
#include <huaweicloud/evs/v2/model/CountSnapshotChainsResponse.h>
#include <huaweicloud/evs/v2/model/CountSnapshotsGroupRequest.h>
#include <huaweicloud/evs/v2/model/CountSnapshotsGroupResponse.h>
#include <huaweicloud/evs/v2/model/CountSnapshotsRequest.h>
#include <huaweicloud/evs/v2/model/CountSnapshotsResponse.h>
#include <huaweicloud/evs/v2/model/CreateAutoSnapshotPolicyRequest.h>
#include <huaweicloud/evs/v2/model/CreateAutoSnapshotPolicyResponse.h>
#include <huaweicloud/evs/v2/model/CreateSnapshotGroupRequest.h>
#include <huaweicloud/evs/v2/model/CreateSnapshotGroupRequestBody.h>
#include <huaweicloud/evs/v2/model/CreateSnapshotGroupResponse.h>
#include <huaweicloud/evs/v2/model/CreateSnapshotPolicyRequestBody.h>
#include <huaweicloud/evs/v2/model/CreateSnapshotRequest.h>
#include <huaweicloud/evs/v2/model/CreateSnapshotRequestBody.h>
#include <huaweicloud/evs/v2/model/CreateSnapshotResponse.h>
#include <huaweicloud/evs/v2/model/CreateStandardSnapshotRequest.h>
#include <huaweicloud/evs/v2/model/CreateStandardSnapshotRequestBody.h>
#include <huaweicloud/evs/v2/model/CreateStandardSnapshotResponse.h>
#include <huaweicloud/evs/v2/model/CreateVolumeRequest.h>
#include <huaweicloud/evs/v2/model/CreateVolumeRequestBody.h>
#include <huaweicloud/evs/v2/model/CreateVolumeResponse.h>
#include <huaweicloud/evs/v2/model/DeleteAutoSnapshotPolicyRequest.h>
#include <huaweicloud/evs/v2/model/DeleteAutoSnapshotPolicyResponse.h>
#include <huaweicloud/evs/v2/model/DeleteSnapshotGroupRequest.h>
#include <huaweicloud/evs/v2/model/DeleteSnapshotGroupResponse.h>
#include <huaweicloud/evs/v2/model/DeleteSnapshotRequest.h>
#include <huaweicloud/evs/v2/model/DeleteSnapshotResponse.h>
#include <huaweicloud/evs/v2/model/DeleteStandardSnapshotRequest.h>
#include <huaweicloud/evs/v2/model/DeleteStandardSnapshotResponse.h>
#include <huaweicloud/evs/v2/model/DeleteVolumeInRecycleRequest.h>
#include <huaweicloud/evs/v2/model/DeleteVolumeInRecycleResponse.h>
#include <huaweicloud/evs/v2/model/DeleteVolumeRequest.h>
#include <huaweicloud/evs/v2/model/DeleteVolumeResponse.h>
#include <huaweicloud/evs/v2/model/DisassociateAutoSnapshotPolicyRequest.h>
#include <huaweicloud/evs/v2/model/DisassociateAutoSnapshotPolicyResponse.h>
#include <huaweicloud/evs/v2/model/ListAutoSnapshotPolicyRequest.h>
#include <huaweicloud/evs/v2/model/ListAutoSnapshotPolicyResponse.h>
#include <huaweicloud/evs/v2/model/ListSnapshotChainsRequest.h>
#include <huaweicloud/evs/v2/model/ListSnapshotChainsResponse.h>
#include <huaweicloud/evs/v2/model/ListSnapshotGroupRequest.h>
#include <huaweicloud/evs/v2/model/ListSnapshotGroupResponse.h>
#include <huaweicloud/evs/v2/model/ListSnapshotGroupTagsRequest.h>
#include <huaweicloud/evs/v2/model/ListSnapshotGroupTagsResponse.h>
#include <huaweicloud/evs/v2/model/ListSnapshotTagsRequest.h>
#include <huaweicloud/evs/v2/model/ListSnapshotTagsResponse.h>
#include <huaweicloud/evs/v2/model/ListSnapshotsDetailsRequest.h>
#include <huaweicloud/evs/v2/model/ListSnapshotsDetailsResponse.h>
#include <huaweicloud/evs/v2/model/ListSnapshotsRequest.h>
#include <huaweicloud/evs/v2/model/ListSnapshotsResponse.h>
#include <huaweicloud/evs/v2/model/ListVolumeTagsRequest.h>
#include <huaweicloud/evs/v2/model/ListVolumeTagsResponse.h>
#include <huaweicloud/evs/v2/model/ListVolumesByTagsRequest.h>
#include <huaweicloud/evs/v2/model/ListVolumesByTagsRequestBody.h>
#include <huaweicloud/evs/v2/model/ListVolumesByTagsResponse.h>
#include <huaweicloud/evs/v2/model/ListVolumesInRecycleRequest.h>
#include <huaweicloud/evs/v2/model/ListVolumesInRecycleResponse.h>
#include <huaweicloud/evs/v2/model/ListVolumesRequest.h>
#include <huaweicloud/evs/v2/model/ListVolumesResponse.h>
#include <huaweicloud/evs/v2/model/ModifyRecycleBinPolicyRequestBody.h>
#include <huaweicloud/evs/v2/model/ModifyVolumeQoSRequest.h>
#include <huaweicloud/evs/v2/model/ModifyVolumeQoSRequestBody.h>
#include <huaweicloud/evs/v2/model/ModifyVolumeQoSResponse.h>
#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/evs/v2/model/ResizeVolumeRequest.h>
#include <huaweicloud/evs/v2/model/ResizeVolumeRequestBody.h>
#include <huaweicloud/evs/v2/model/ResizeVolumeResponse.h>
#include <huaweicloud/evs/v2/model/RetypeVolumeRequest.h>
#include <huaweicloud/evs/v2/model/RetypeVolumeRequestBody.h>
#include <huaweicloud/evs/v2/model/RetypeVolumeResponse.h>
#include <huaweicloud/evs/v2/model/RevertVolumeInRecycleRequest.h>
#include <huaweicloud/evs/v2/model/RevertVolumeInRecycleResponse.h>
#include <huaweicloud/evs/v2/model/RollbackSnapshotRequest.h>
#include <huaweicloud/evs/v2/model/RollbackSnapshotRequestBody.h>
#include <huaweicloud/evs/v2/model/RollbackSnapshotRequestBodyV5.h>
#include <huaweicloud/evs/v2/model/RollbackSnapshotResponse.h>
#include <huaweicloud/evs/v2/model/RollbackStandardSnapshotRequest.h>
#include <huaweicloud/evs/v2/model/RollbackStandardSnapshotResponse.h>
#include <huaweicloud/evs/v2/model/ShowAutoSnapshotPolicyRequest.h>
#include <huaweicloud/evs/v2/model/ShowAutoSnapshotPolicyResponse.h>
#include <huaweicloud/evs/v2/model/ShowJobRequest.h>
#include <huaweicloud/evs/v2/model/ShowJobResponse.h>
#include <huaweicloud/evs/v2/model/ShowRecyclePolicyRequest.h>
#include <huaweicloud/evs/v2/model/ShowRecyclePolicyResponse.h>
#include <huaweicloud/evs/v2/model/ShowSnapshotGroupRequest.h>
#include <huaweicloud/evs/v2/model/ShowSnapshotGroupResponse.h>
#include <huaweicloud/evs/v2/model/ShowSnapshotRequest.h>
#include <huaweicloud/evs/v2/model/ShowSnapshotResponse.h>
#include <huaweicloud/evs/v2/model/ShowStandardSnapshotRequest.h>
#include <huaweicloud/evs/v2/model/ShowStandardSnapshotResponse.h>
#include <huaweicloud/evs/v2/model/ShowVolumeInRecycleRequest.h>
#include <huaweicloud/evs/v2/model/ShowVolumeInRecycleResponse.h>
#include <huaweicloud/evs/v2/model/ShowVolumeRequest.h>
#include <huaweicloud/evs/v2/model/ShowVolumeResponse.h>
#include <huaweicloud/evs/v2/model/ShowVolumeTagsRequest.h>
#include <huaweicloud/evs/v2/model/ShowVolumeTagsResponse.h>
#include <huaweicloud/evs/v2/model/UnsubscribePostpaidVolumeRequest.h>
#include <huaweicloud/evs/v2/model/UnsubscribePostpaidVolumeResponse.h>
#include <huaweicloud/evs/v2/model/UnsubscribeVolumeRequestBody.h>
#include <huaweicloud/evs/v2/model/UpdateAutoSnapshotPolicyRequest.h>
#include <huaweicloud/evs/v2/model/UpdateAutoSnapshotPolicyResponse.h>
#include <huaweicloud/evs/v2/model/UpdateRecyclePolicyRequest.h>
#include <huaweicloud/evs/v2/model/UpdateRecyclePolicyResponse.h>
#include <huaweicloud/evs/v2/model/UpdateSnapshotGroupRequest.h>
#include <huaweicloud/evs/v2/model/UpdateSnapshotGroupRequestBody.h>
#include <huaweicloud/evs/v2/model/UpdateSnapshotGroupResponse.h>
#include <huaweicloud/evs/v2/model/UpdateSnapshotPolicyRequestBody.h>
#include <huaweicloud/evs/v2/model/UpdateSnapshotRequest.h>
#include <huaweicloud/evs/v2/model/UpdateSnapshotRequestBody.h>
#include <huaweicloud/evs/v2/model/UpdateSnapshotRequestBodyV5.h>
#include <huaweicloud/evs/v2/model/UpdateSnapshotResponse.h>
#include <huaweicloud/evs/v2/model/UpdateStandardSnapshotRequest.h>
#include <huaweicloud/evs/v2/model/UpdateStandardSnapshotResponse.h>
#include <huaweicloud/evs/v2/model/UpdateVolumeRequest.h>
#include <huaweicloud/evs/v2/model/UpdateVolumeRequestBody.h>
#include <huaweicloud/evs/v2/model/UpdateVolumeResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/evs/v2/model/ListVersionsRequest.h>
#include <huaweicloud/evs/v2/model/ListVersionsResponse.h>
#include <huaweicloud/evs/v2/model/ShowVersionRequest.h>
#include <huaweicloud/evs/v2/model/ShowVersionResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Evs::V2::Model;

class HUAWEICLOUD_EVS_V2_EXPORT  EvsClient : public Client
{
public:

    EvsClient();

    virtual ~EvsClient();

    static ClientBuilder<EvsClient> newBuilder();

    // 绑定自动快照策略
    //
    // 绑定自动快照策略。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AssociateAutoSnapshotPolicyResponse> associateAutoSnapshotPolicy(
        AssociateAutoSnapshotPolicyRequest &request
    );
    // 为指定快照组添加标签
    //
    // 为指定快照组添加标签。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateSnapshotGroupTagResponse> batchCreateSnapshotGroupTag(
        BatchCreateSnapshotGroupTagRequest &request
    );
    // 为指定快照添加标签
    //
    // 为指定快照添加标签。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateSnapshotTagsResponse> batchCreateSnapshotTags(
        BatchCreateSnapshotTagsRequest &request
    );
    // 为指定云硬盘批量添加标签
    //
    // 为指定云硬盘批量添加标签。
    // 
    // 添加标签时，如果云硬盘的标签已存在相同key，则会覆盖已有标签。
    // 单个云硬盘最多支持创建10个标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateVolumeTagsResponse> batchCreateVolumeTags(
        BatchCreateVolumeTagsRequest &request
    );
    // 为指定快照组删除标签
    //
    // 为指定快照组删除标签。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteSnapshotGroupTagResponse> batchDeleteSnapshotGroupTag(
        BatchDeleteSnapshotGroupTagRequest &request
    );
    // 为指定快照删除标签
    //
    // 为指定快照删除标签。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteSnapshotTagsResponse> batchDeleteSnapshotTags(
        BatchDeleteSnapshotTagsRequest &request
    );
    // 为指定云硬盘批量删除标签
    //
    // 为指定云硬盘批量删除标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteVolumeTagsResponse> batchDeleteVolumeTags(
        BatchDeleteVolumeTagsRequest &request
    );
    // 批量扩容云硬盘
    //
    // 对按需或者包周期云硬盘进行批量扩容。
    // [在批量扩容存在包周期云硬盘的场景下：](tag:hws)
    // - [如果您需要查看订单可用的优惠券，请参考\&quot;[查询订单可用优惠券](https://support.huaweicloud.com/api-oce/zh-cn_topic_0092953630.html)\&quot;。](tag:hws)
    // - [如果您需要支付订单，请参考\&quot;[支付包周期产品订单](https://support.huaweicloud.com/api-oce/api_order_00030.html)\&quot;。](tag:hws)
    // - [如果您需要退订该包周期资源，请参考“[退订包周期资源](https://support.huaweicloud.com/api-oce/zh-cn_topic_0082522030.html)”。](tag:hws)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchResizeVolumesResponse> batchResizeVolumes(
        BatchResizeVolumesRequest &request
    );
    // 修改云硬盘计费模式
    //
    // 将挂载状态下的云硬盘的计费模式有按需转成包周期，且到期时间和挂载的虚拟机保持一致。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeVolumeChargeModeResponse> changeVolumeChargeMode(
        ChangeVolumeChargeModeRequest &request
    );
    // 接受云硬盘过户
    //
    // 通过云硬盘过户记录ID以及身份认证密钥来接受云硬盘过户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CinderAcceptVolumeTransferResponse> cinderAcceptVolumeTransfer(
        CinderAcceptVolumeTransferRequest &request
    );
    // 创建云硬盘过户
    //
    // 指定云硬盘来创建云硬盘过户记录，创建成功后，会返回过户记录ID以及身份认证密钥。
    // 云硬盘在过户过程中的状态变化如下：创建云硬盘过户后，云硬盘状态由“available”变为“awaiting-transfer”。当云硬盘过户被接收后，云硬盘状态变为“available”。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CinderCreateVolumeTransferResponse> cinderCreateVolumeTransfer(
        CinderCreateVolumeTransferRequest &request
    );
    // 删除云硬盘过户
    //
    // 当云硬盘过户未被接受时，您可以删除云硬盘过户记录，接受后则无法执行删除操作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CinderDeleteVolumeTransferResponse> cinderDeleteVolumeTransfer(
        CinderDeleteVolumeTransferRequest &request
    );
    // 查询所有的可用分区信息
    //
    // 查询所有的可用分区信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CinderListAvailabilityZonesResponse> cinderListAvailabilityZones(
        CinderListAvailabilityZonesRequest &request
    );
    // 查询租户的详细配额
    //
    // 查询租户的详细配额。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CinderListQuotasResponse> cinderListQuotas(
        CinderListQuotasRequest &request
    );
    // 查询云硬盘过户记录列表概要
    //
    // 查询当前租户下所有云硬盘的过户记录列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CinderListVolumeTransfersResponse> cinderListVolumeTransfers(
        CinderListVolumeTransfersRequest &request
    );
    // 查询云硬盘类型列表
    //
    // 查询云硬盘类型列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CinderListVolumeTypesResponse> cinderListVolumeTypes(
        CinderListVolumeTypesRequest &request
    );
    // 查询单个云硬盘过户记录详情
    //
    // 查询单个云硬盘的过户记录详情，比如过户记录创建时间、ID以及名称等信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CinderShowVolumeTransferResponse> cinderShowVolumeTransfer(
        CinderShowVolumeTransferRequest &request
    );
    // 查询自动快照策略总数
    //
    // 查询自动快照策略总数。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountAutoSnapshotPoliciesResponse> countAutoSnapshotPolicies(
        CountAutoSnapshotPoliciesRequest &request
    );
    // 查询快照链个数
    //
    // 查询快照链个数。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountSnapshotChainsResponse> countSnapshotChains(
        CountSnapshotChainsRequest &request
    );
    // 查询快照个数
    //
    // 查询快照个数。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountSnapshotsResponse> countSnapshots(
        CountSnapshotsRequest &request
    );
    // 查询快照一致性组个数
    //
    // 查询快照一致性组个数。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountSnapshotsGroupResponse> countSnapshotsGroup(
        CountSnapshotsGroupRequest &request
    );
    // 创建自动快照策略
    //
    // 创建自动快照策略。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAutoSnapshotPolicyResponse> createAutoSnapshotPolicy(
        CreateAutoSnapshotPolicyRequest &request
    );
    // 创建云硬盘快照
    //
    // 创建云硬盘快照。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSnapshotResponse> createSnapshot(
        CreateSnapshotRequest &request
    );
    // 创建快照一致性组
    //
    // 创建快照一致性组。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSnapshotGroupResponse> createSnapshotGroup(
        CreateSnapshotGroupRequest &request
    );
    // 创建快照
    //
    // 创建标准快照。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateStandardSnapshotResponse> createStandardSnapshot(
        CreateStandardSnapshotRequest &request
    );
    // 创建云硬盘
    //
    // 创建按需或包周期云硬盘。
    // 在创建包周期云硬盘的场景下：
    // - 如果您需要查看订单可用的优惠券，请参考\&quot;[查询订单可用优惠券](https://support.huaweicloud.com/api-oce/zh-cn_topic_0092953630.html)\&quot;。
    // - 如果您需要支付订单，请参考\&quot;[支付包周期产品订单](https://support.huaweicloud.com/api-oce/zh-cn_topic_0075746561.html)\&quot;。
    // - 如果您需要查询订单的资源开通详情，请参考\&quot;[查询订单的资源开通详情](https://support.huaweicloud.com/api-oce/api_order_00001.html)\&quot;。
    // - 如果您需要退订该包周期资源，请参考“[退订包周期资源](https://support.huaweicloud.com/api-oce/zh-cn_topic_0082522030.html)”。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateVolumeResponse> createVolume(
        CreateVolumeRequest &request
    );
    // 删除单个自动快照策略
    //
    // 删除单个自动快照策略。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAutoSnapshotPolicyResponse> deleteAutoSnapshotPolicy(
        DeleteAutoSnapshotPolicyRequest &request
    );
    // 删除云硬盘快照
    //
    // 删除云硬盘快照。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSnapshotResponse> deleteSnapshot(
        DeleteSnapshotRequest &request
    );
    // 删除快照一致性组
    //
    // 删除快照一致性组。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSnapshotGroupResponse> deleteSnapshotGroup(
        DeleteSnapshotGroupRequest &request
    );
    // 删除快照
    //
    // 删除快照。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteStandardSnapshotResponse> deleteStandardSnapshot(
        DeleteStandardSnapshotRequest &request
    );
    // 删除云硬盘
    //
    // 删除一个云硬盘。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteVolumeResponse> deleteVolume(
        DeleteVolumeRequest &request
    );
    // 删除回收站中单个云硬盘
    //
    // 删除回收站中单个云硬盘。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteVolumeInRecycleResponse> deleteVolumeInRecycle(
        DeleteVolumeInRecycleRequest &request
    );
    // 解绑自动快照策略
    //
    // 解绑自动快照策略。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisassociateAutoSnapshotPolicyResponse> disassociateAutoSnapshotPolicy(
        DisassociateAutoSnapshotPolicyRequest &request
    );
    // 查询自动快照策略
    //
    // 查询自动快照策略。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAutoSnapshotPolicyResponse> listAutoSnapshotPolicy(
        ListAutoSnapshotPolicyRequest &request
    );
    // 查询快照链列表
    //
    // 查询快照链的列表。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSnapshotChainsResponse> listSnapshotChains(
        ListSnapshotChainsRequest &request
    );
    // 查询快照一致性组列表
    //
    // 查询快照一致性组列表。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSnapshotGroupResponse> listSnapshotGroup(
        ListSnapshotGroupRequest &request
    );
    // 查询快照组的所有标签
    //
    // 查询快照组的所有标签。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSnapshotGroupTagsResponse> listSnapshotGroupTags(
        ListSnapshotGroupTagsRequest &request
    );
    // 查询快照资源的所有标签
    //
    // 查询快照资源的所有标签。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSnapshotTagsResponse> listSnapshotTags(
        ListSnapshotTagsRequest &request
    );
    // 查询云硬盘快照详情列表
    //
    // 查询云硬盘快照详细列表信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSnapshotsResponse> listSnapshots(
        ListSnapshotsRequest &request
    );
    // 查询快照详情列表
    //
    // 查询快照详情列表。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSnapshotsDetailsResponse> listSnapshotsDetails(
        ListSnapshotsDetailsRequest &request
    );
    // 获取云硬盘资源的所有标签
    //
    // 获取某个租户的所有云硬盘资源的标签信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListVolumeTagsResponse> listVolumeTags(
        ListVolumeTagsRequest &request
    );
    // 查询所有云硬盘详情
    //
    // 查询所有云硬盘的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListVolumesResponse> listVolumes(
        ListVolumesRequest &request
    );
    // 通过标签查询云硬盘资源实例详情
    //
    // 通过标签查询云硬盘资源实例详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListVolumesByTagsResponse> listVolumesByTags(
        ListVolumesByTagsRequest &request
    );
    // 查询回收站中所有云硬盘详情
    //
    // 查询回收站中所有云硬盘的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListVolumesInRecycleResponse> listVolumesInRecycle(
        ListVolumesInRecycleRequest &request
    );
    // 修改云硬盘QoS
    //
    // 调整云硬盘的iops或者吞吐量。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyVolumeQoSResponse> modifyVolumeQoS(
        ModifyVolumeQoSRequest &request
    );
    // 扩容云硬盘
    //
    // 对按需或者包周期云硬盘进行扩容。
    // 在扩容包周期云硬盘的场景下：
    // - 如果您需要查看订单可用的优惠券，请参考\&quot;[查询订单可用优惠券](https://support.huaweicloud.com/api-oce/zh-cn_topic_0092953630.html)\&quot;。
    // - 如果您需要支付订单，请参考\&quot;[支付包周期产品订单](https://support.huaweicloud.com/api-oce/zh-cn_topic_0075746561.html)\&quot;。
    // - 如果您需要查询订单的资源开通详情，请参考\&quot;[查询订单的资源开通详情](https://support.huaweicloud.com/api-oce/api_order_00001.html)\&quot;。
    // - 如果您需要退订该包周期资源，请参考“[退订包周期资源](https://support.huaweicloud.com/api-oce/zh-cn_topic_0082522030.html)”。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResizeVolumeResponse> resizeVolume(
        ResizeVolumeRequest &request
    );
    // 磁盘类型变更
    //
    // 对按需或者包周期云硬盘进行磁盘类型变更。
    // [在磁盘类型变更包周期云硬盘的场景下：](tag:hws)
    // - [如果您需要查看订单可用的优惠券，请参考\&quot;[查询订单可用优惠券](https://support.huaweicloud.com/api-oce/zh-cn_topic_0092953630.html)\&quot;。](tag:hws)
    // - [如果您需要支付订单，请参考\&quot;[支付包周期产品订单](https://support.huaweicloud.com/api-oce/api_order_00030.html)\&quot;。](tag:hws)
    // - [如果您需要查询订单的资源开通详情，请参考\&quot;[查询订单的资源开通详情](https://support.huaweicloud.com/api-oce/api_order_00001.html)\&quot;。](tag:hws)
    // - [如果您需要退订该包周期资源，请参考“[退订包周期资源](https://support.huaweicloud.com/api-oce/zh-cn_topic_0082522030.html)”。](tag:hws)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RetypeVolumeResponse> retypeVolume(
        RetypeVolumeRequest &request
    );
    // 还原回收站中单个云硬盘
    //
    // 还原回收站中单个云硬盘。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RevertVolumeInRecycleResponse> revertVolumeInRecycle(
        RevertVolumeInRecycleRequest &request
    );
    // 回滚快照到云硬盘
    //
    // 将快照数据回滚到云硬盘。支持企业项目授权功能。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RollbackSnapshotResponse> rollbackSnapshot(
        RollbackSnapshotRequest &request
    );
    // 快照回滚
    //
    // 将快照数据回滚到云硬盘。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RollbackStandardSnapshotResponse> rollbackStandardSnapshot(
        RollbackStandardSnapshotRequest &request
    );
    // 查询单个自动快照策略
    //
    // 查询单个自动快照策略。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutoSnapshotPolicyResponse> showAutoSnapshotPolicy(
        ShowAutoSnapshotPolicyRequest &request
    );
    // 查询job的状态
    //
    // 查询Job的执行状态。
    // 可用于查询创建云硬盘，扩容云硬盘，删除云硬盘等API的执行状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobResponse> showJob(
        ShowJobRequest &request
    );
    // 查询回收站策略
    //
    // 查询回收站策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRecyclePolicyResponse> showRecyclePolicy(
        ShowRecyclePolicyRequest &request
    );
    // 查询单个云硬盘快照详情
    //
    // 查询单个云硬盘快照信息。支持企业项目授权功能。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSnapshotResponse> showSnapshot(
        ShowSnapshotRequest &request
    );
    // 查询单个快照一致性组
    //
    // 查询单个快照一致性组。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSnapshotGroupResponse> showSnapshotGroup(
        ShowSnapshotGroupRequest &request
    );
    // 查询单个快照信息
    //
    // 查询单个快照信息。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowStandardSnapshotResponse> showStandardSnapshot(
        ShowStandardSnapshotRequest &request
    );
    // 查询单个云硬盘详情
    //
    // 查询单个云硬盘的详细信息。支持企业项目授权功能。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVolumeResponse> showVolume(
        ShowVolumeRequest &request
    );
    // 查询回收站中单个云硬盘详情
    //
    // 查询回收站中单个云硬盘的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVolumeInRecycleResponse> showVolumeInRecycle(
        ShowVolumeInRecycleRequest &request
    );
    // 查询云硬盘标签
    //
    // 查询指定云硬盘的标签信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVolumeTagsResponse> showVolumeTags(
        ShowVolumeTagsRequest &request
    );
    // 退订包周期计费模式的云硬盘
    //
    // 退订包周期计费模式的云硬盘，有如下约束：
    // -  系统盘、启动盘不可使用当前接口退订，必须和弹性云服务器一起退订
    // -  接口的请求body体最多可以传60个云硬盘id
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UnsubscribePostpaidVolumeResponse> unsubscribePostpaidVolume(
        UnsubscribePostpaidVolumeRequest &request
    );
    // 更新自动快照策略
    //
    // 更新自动快照策略。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAutoSnapshotPolicyResponse> updateAutoSnapshotPolicy(
        UpdateAutoSnapshotPolicyRequest &request
    );
    // 更新回收站策略
    //
    // 更新回收站策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRecyclePolicyResponse> updateRecyclePolicy(
        UpdateRecyclePolicyRequest &request
    );
    // 更新云硬盘快照
    //
    // 更新云硬盘快照。支持企业项目授权功能。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSnapshotResponse> updateSnapshot(
        UpdateSnapshotRequest &request
    );
    // 更新快照一致性组
    //
    // 更新快照一致性组。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSnapshotGroupResponse> updateSnapshotGroup(
        UpdateSnapshotGroupRequest &request
    );
    // 更新快照信息
    //
    // 更新快照信息。标准快照当前只在部分区域支持，具体的区域列表请通过控制台查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateStandardSnapshotResponse> updateStandardSnapshot(
        UpdateStandardSnapshotRequest &request
    );
    // 更新云硬盘
    //
    // 更新一个云硬盘的名称和描述。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateVolumeResponse> updateVolume(
        UpdateVolumeRequest &request
    );

    // 查询接口版本信息列表
    //
    // 查询接口版本信息列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListVersionsResponse> listVersions(
        ListVersionsRequest &request
    );
    // 查询API接口的版本信息
    //
    // 查询接口的指定版本信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVersionResponse> showVersion(
        ShowVersionRequest &request
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

template class HUAWEICLOUD_EVS_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Evs::V2::EvsClient>;

#endif // HUAWEICLOUD_SDK_EVS_V2_EvsClient_H_

