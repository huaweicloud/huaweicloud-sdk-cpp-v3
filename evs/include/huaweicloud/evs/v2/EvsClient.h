#ifndef HUAWEICLOUD_SDK_EVS_V2_EvsClient_H_
#define HUAWEICLOUD_SDK_EVS_V2_EvsClient_H_

#include <huaweicloud/evs/v2/EvsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/evs/v2/model/BatchCreateVolumeTagsRequest.h>
#include <huaweicloud/evs/v2/model/BatchCreateVolumeTagsRequestBody.h>
#include <huaweicloud/evs/v2/model/BatchCreateVolumeTagsResponse.h>
#include <huaweicloud/evs/v2/model/BatchDeleteVolumeTagsRequest.h>
#include <huaweicloud/evs/v2/model/BatchDeleteVolumeTagsRequestBody.h>
#include <huaweicloud/evs/v2/model/BatchDeleteVolumeTagsResponse.h>
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
#include <huaweicloud/evs/v2/model/CreateSnapshotRequest.h>
#include <huaweicloud/evs/v2/model/CreateSnapshotRequestBody.h>
#include <huaweicloud/evs/v2/model/CreateSnapshotResponse.h>
#include <huaweicloud/evs/v2/model/CreateVolumeRequest.h>
#include <huaweicloud/evs/v2/model/CreateVolumeRequestBody.h>
#include <huaweicloud/evs/v2/model/CreateVolumeResponse.h>
#include <huaweicloud/evs/v2/model/DeleteSnapshotRequest.h>
#include <huaweicloud/evs/v2/model/DeleteSnapshotResponse.h>
#include <huaweicloud/evs/v2/model/DeleteVolumeRequest.h>
#include <huaweicloud/evs/v2/model/DeleteVolumeResponse.h>
#include <huaweicloud/evs/v2/model/ListSnapshotsRequest.h>
#include <huaweicloud/evs/v2/model/ListSnapshotsResponse.h>
#include <huaweicloud/evs/v2/model/ListVolumeTagsRequest.h>
#include <huaweicloud/evs/v2/model/ListVolumeTagsResponse.h>
#include <huaweicloud/evs/v2/model/ListVolumesByTagsRequest.h>
#include <huaweicloud/evs/v2/model/ListVolumesByTagsRequestBody.h>
#include <huaweicloud/evs/v2/model/ListVolumesByTagsResponse.h>
#include <huaweicloud/evs/v2/model/ListVolumesRequest.h>
#include <huaweicloud/evs/v2/model/ListVolumesResponse.h>
#include <huaweicloud/evs/v2/model/ResizeVolumeRequest.h>
#include <huaweicloud/evs/v2/model/ResizeVolumeRequestBody.h>
#include <huaweicloud/evs/v2/model/ResizeVolumeResponse.h>
#include <huaweicloud/evs/v2/model/RollbackSnapshotRequest.h>
#include <huaweicloud/evs/v2/model/RollbackSnapshotRequestBody.h>
#include <huaweicloud/evs/v2/model/RollbackSnapshotResponse.h>
#include <huaweicloud/evs/v2/model/ShowJobRequest.h>
#include <huaweicloud/evs/v2/model/ShowJobResponse.h>
#include <huaweicloud/evs/v2/model/ShowSnapshotRequest.h>
#include <huaweicloud/evs/v2/model/ShowSnapshotResponse.h>
#include <huaweicloud/evs/v2/model/ShowVolumeRequest.h>
#include <huaweicloud/evs/v2/model/ShowVolumeResponse.h>
#include <huaweicloud/evs/v2/model/ShowVolumeTagsRequest.h>
#include <huaweicloud/evs/v2/model/ShowVolumeTagsResponse.h>
#include <huaweicloud/evs/v2/model/UpdateSnapshotRequest.h>
#include <huaweicloud/evs/v2/model/UpdateSnapshotRequestBody.h>
#include <huaweicloud/evs/v2/model/UpdateSnapshotResponse.h>
#include <huaweicloud/evs/v2/model/UpdateVolumeRequest.h>
#include <huaweicloud/evs/v2/model/UpdateVolumeRequestBody.h>
#include <huaweicloud/evs/v2/model/UpdateVolumeResponse.h>
#include <string>

#include <huaweicloud/evs/v2/model/ListVersionsRequest.h>
#include <huaweicloud/evs/v2/model/ListVersionsResponse.h>
#include <huaweicloud/evs/v2/model/ShowVersionRequest.h>
#include <huaweicloud/evs/v2/model/ShowVersionResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
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

    // 为指定云硬盘批量添加标签
    //
    // 为指定云硬盘批量添加标签。
    // 
    // 添加标签时，如果云硬盘的标签已存在相同key，则会覆盖已有标签。
    // 单个云硬盘最多支持创建10个标签。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<BatchCreateVolumeTagsResponse> batchCreateVolumeTags(
        BatchCreateVolumeTagsRequest &request
    );
    // 为指定云硬盘批量删除标签
    //
    // 为指定云硬盘批量删除标签。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<BatchDeleteVolumeTagsResponse> batchDeleteVolumeTags(
        BatchDeleteVolumeTagsRequest &request
    );
    // 接受云硬盘过户
    //
    // 通过云硬盘过户记录ID以及身份认证密钥来接受云硬盘过户。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<CinderAcceptVolumeTransferResponse> cinderAcceptVolumeTransfer(
        CinderAcceptVolumeTransferRequest &request
    );
    // 创建云硬盘过户
    //
    // 指定云硬盘来创建云硬盘过户记录，创建成功后，会返回过户记录ID以及身份认证密钥。
    // 云硬盘在过户过程中的状态变化如下：创建云硬盘过户后，云硬盘状态由“available”变为“awaiting-transfer”。当云硬盘过户被接收后，云硬盘状态变为“available”。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<CinderCreateVolumeTransferResponse> cinderCreateVolumeTransfer(
        CinderCreateVolumeTransferRequest &request
    );
    // 删除云硬盘过户
    //
    // 当云硬盘过户未被接受时，您可以删除云硬盘过户记录，接受后则无法执行删除操作。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<CinderDeleteVolumeTransferResponse> cinderDeleteVolumeTransfer(
        CinderDeleteVolumeTransferRequest &request
    );
    // 查询所有的可用分区信息
    //
    // 查询所有的可用分区信息。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<CinderListAvailabilityZonesResponse> cinderListAvailabilityZones(
        CinderListAvailabilityZonesRequest &request
    );
    // 查询租户的详细配额
    //
    // 查询租户的详细配额。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<CinderListQuotasResponse> cinderListQuotas(
        CinderListQuotasRequest &request
    );
    // 查询云硬盘过户记录列表概要
    //
    // 查询当前租户下所有云硬盘的过户记录列表
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<CinderListVolumeTransfersResponse> cinderListVolumeTransfers(
        CinderListVolumeTransfersRequest &request
    );
    // 查询云硬盘类型列表
    //
    // 查询云硬盘类型列表。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<CinderListVolumeTypesResponse> cinderListVolumeTypes(
        CinderListVolumeTypesRequest &request
    );
    // 查询单个云硬盘过户记录详情
    //
    // 查询单个云硬盘的过户记录详情，比如过户记录创建时间、ID以及名称等信息。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<CinderShowVolumeTransferResponse> cinderShowVolumeTransfer(
        CinderShowVolumeTransferRequest &request
    );
    // 创建云硬盘快照
    //
    // 创建云硬盘快照。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<CreateSnapshotResponse> createSnapshot(
        CreateSnapshotRequest &request
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
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<CreateVolumeResponse> createVolume(
        CreateVolumeRequest &request
    );
    // 删除云硬盘快照
    //
    // 删除云硬盘快照。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<DeleteSnapshotResponse> deleteSnapshot(
        DeleteSnapshotRequest &request
    );
    // 删除云硬盘
    //
    // 删除一个云硬盘。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<DeleteVolumeResponse> deleteVolume(
        DeleteVolumeRequest &request
    );
    // 查询云硬盘快照详情列表
    //
    // 查询云硬盘快照详细列表信息。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ListSnapshotsResponse> listSnapshots(
        ListSnapshotsRequest &request
    );
    // 获取云硬盘资源的所有标签
    //
    // 获取某个租户的所有云硬盘资源的标签信息。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ListVolumeTagsResponse> listVolumeTags(
        ListVolumeTagsRequest &request
    );
    // 查询所有云硬盘详情
    //
    // 查询所有云硬盘的详细信息。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ListVolumesResponse> listVolumes(
        ListVolumesRequest &request
    );
    // 通过标签查询云硬盘资源实例详情
    //
    // 通过标签查询云硬盘资源实例详情。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ListVolumesByTagsResponse> listVolumesByTags(
        ListVolumesByTagsRequest &request
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
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ResizeVolumeResponse> resizeVolume(
        ResizeVolumeRequest &request
    );
    // 回滚快照到云硬盘
    //
    // 将快照数据回滚到云硬盘。支持企业项目授权功能。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RollbackSnapshotResponse> rollbackSnapshot(
        RollbackSnapshotRequest &request
    );
    // 查询job的状态
    //
    // 查询Job的执行状态。
    // 可用于查询创建云硬盘，扩容云硬盘，删除云硬盘等API的执行状态。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ShowJobResponse> showJob(
        ShowJobRequest &request
    );
    // 查询单个云硬盘快照详情
    //
    // 查询单个云硬盘快照信息。支持企业项目授权功能。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ShowSnapshotResponse> showSnapshot(
        ShowSnapshotRequest &request
    );
    // 查询单个云硬盘详情
    //
    // 查询单个云硬盘的详细信息。支持企业项目授权功能。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ShowVolumeResponse> showVolume(
        ShowVolumeRequest &request
    );
    // 查询云硬盘标签
    //
    // 查询指定云硬盘的标签信息。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ShowVolumeTagsResponse> showVolumeTags(
        ShowVolumeTagsRequest &request
    );
    // 更新云硬盘快照
    //
    // 更新云硬盘快照。支持企业项目授权功能。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<UpdateSnapshotResponse> updateSnapshot(
        UpdateSnapshotRequest &request
    );
    // 更新云硬盘
    //
    // 更新一个云硬盘的名称和描述。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<UpdateVolumeResponse> updateVolume(
        UpdateVolumeRequest &request
    );

    // 查询接口版本信息列表
    //
    // 查询接口版本信息列表。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ListVersionsResponse> listVersions(
        ListVersionsRequest &request
    );
    // 查询API接口的版本信息
    //
    // 查询接口的指定版本信息。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
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

