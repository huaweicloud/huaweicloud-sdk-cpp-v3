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
#include <huaweicloud/evs/v2/model/CinderExportToImageRequest.h>
#include <huaweicloud/evs/v2/model/CinderExportToImageRequestBody.h>
#include <huaweicloud/evs/v2/model/CinderExportToImageResponse.h>
#include <huaweicloud/evs/v2/model/CinderListAvailabilityZonesRequest.h>
#include <huaweicloud/evs/v2/model/CinderListAvailabilityZonesResponse.h>
#include <huaweicloud/evs/v2/model/CinderListQuotasRequest.h>
#include <huaweicloud/evs/v2/model/CinderListQuotasResponse.h>
#include <huaweicloud/evs/v2/model/CinderListVolumeTypesRequest.h>
#include <huaweicloud/evs/v2/model/CinderListVolumeTypesResponse.h>
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

    /// <summary>
    /// 为指定云硬盘批量添加标签
    /// </summary>
    /// <remarks>
    /// 为指定云硬盘批量添加标签。  添加标签时，如果云硬盘的标签已存在相同key，则会覆盖已有标签。 单个云硬盘最多支持创建10个标签。
    /// </remarks>
    /// <param name="volumeId">云硬盘ID。</param>
    /// <param name="batchCreateVolumeTagsRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<BatchCreateVolumeTagsResponse> batchCreateVolumeTags(
        BatchCreateVolumeTagsRequest &request
    );
    /// <summary>
    /// 为指定云硬盘批量删除标签
    /// </summary>
    /// <remarks>
    /// 为指定云硬盘批量删除标签。
    /// </remarks>
    /// <param name="volumeId">磁盘ID。</param>
    /// <param name="batchDeleteVolumeTagsRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<BatchDeleteVolumeTagsResponse> batchDeleteVolumeTags(
        BatchDeleteVolumeTagsRequest &request
    );
    /// <summary>
    /// 将云硬盘导出为镜像
    /// </summary>
    /// <remarks>
    /// 将系统盘或数据盘的数据导出为IMS镜像，导出的镜像在IMS的私有镜像列表中可以查 看并使用。
    /// </remarks>
    /// <param name="volumeId">云硬盘ID。</param>
    /// <param name="cinderExportToImageRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<CinderExportToImageResponse> cinderExportToImage(
        CinderExportToImageRequest &request
    );
    /// <summary>
    /// 查询所有的可用分区信息
    /// </summary>
    /// <remarks>
    /// 查询所有的可用分区信息。
    /// </remarks>
    std::shared_ptr<CinderListAvailabilityZonesResponse> cinderListAvailabilityZones(
        CinderListAvailabilityZonesRequest &request
    );
    /// <summary>
    /// 查询租户的详细配额
    /// </summary>
    /// <remarks>
    /// 查询租户的详细配额。
    /// </remarks>
    /// <param name="targetProjectId">目标的项目ID。与project_id保持一致即可。</param>
    /// <param name="usage">是否查询配额详细信息。当前只支持传true。</param>
    std::shared_ptr<CinderListQuotasResponse> cinderListQuotas(
        CinderListQuotasRequest &request
    );
    /// <summary>
    /// 查询云硬盘类型列表
    /// </summary>
    /// <remarks>
    /// 查询云硬盘类型列表。
    /// </remarks>
    std::shared_ptr<CinderListVolumeTypesResponse> cinderListVolumeTypes(
        CinderListVolumeTypesRequest &request
    );
    /// <summary>
    /// 创建云硬盘快照
    /// </summary>
    /// <remarks>
    /// 创建云硬盘快照。
    /// </remarks>
    /// <param name="createSnapshotRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<CreateSnapshotResponse> createSnapshot(
        CreateSnapshotRequest &request
    );
    /// <summary>
    /// 创建云硬盘
    /// </summary>
    /// <remarks>
    /// 创建按需或包周期云硬盘。 在创建包周期云硬盘的场景下： - 如果您需要查看订单可用的优惠券，请参考\&quot;[查询订单可用优惠券](https://support.huaweicloud.com/api-oce/zh-cn_topic_0092953630.html)\&quot;。 - 如果您需要支付订单，请参考\&quot;[支付包周期产品订单](https://support.huaweicloud.com/api-oce/zh-cn_topic_0075746561.html)\&quot;。 - 如果您需要查询订单的资源开通详情，请参考\&quot;[查询订单的资源开通详情](https://support.huaweicloud.com/api-oce/api_order_00001.html)\&quot;。 - 如果您需要退订该包周期资源，请参考“[退订包周期资源](https://support.huaweicloud.com/api-oce/zh-cn_topic_0082522030.html)”。
    /// </remarks>
    /// <param name="createVolumeRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<CreateVolumeResponse> createVolume(
        CreateVolumeRequest &request
    );
    /// <summary>
    /// 删除云硬盘快照
    /// </summary>
    /// <remarks>
    /// 删除云硬盘快照。
    /// </remarks>
    /// <param name="snapshotId">快照ID。</param>
    std::shared_ptr<DeleteSnapshotResponse> deleteSnapshot(
        DeleteSnapshotRequest &request
    );
    /// <summary>
    /// 删除云硬盘
    /// </summary>
    /// <remarks>
    /// 删除一个云硬盘。
    /// </remarks>
    /// <param name="volumeId">云硬盘ID。</param>
    std::shared_ptr<DeleteVolumeResponse> deleteVolume(
        DeleteVolumeRequest &request
    );
    /// <summary>
    /// 查询云硬盘快照详细列表信息
    /// </summary>
    /// <remarks>
    /// 查询云硬盘快照详细列表信息。
    /// </remarks>
    /// <param name="offset">偏移量。 说明:分页查询快照时使用，与limit配合使用。假如共有30个快照，设置offset为11，limit为10，即为从第12个快照开始查询，一次最多可读取10个快照。 (optional, default to 0)</param>
    /// <param name="limit">返回结果个数限制，值为大于0的整数。默认值为1000。 (optional, default to 0)</param>
    /// <param name="name">云硬盘快照名称。最大支持255个字节。 (optional, default to &quot;&quot;)</param>
    /// <param name="status">云硬盘快照状态，具体请参见A.3 云硬盘快照状态。 (optional, default to &quot;&quot;)</param>
    /// <param name="volumeId">快照所属云硬盘的ID。 (optional, default to &quot;&quot;)</param>
    /// <param name="availabilityZone">快照所属云硬盘的可用区。 (optional, default to &quot;&quot;)</param>
    /// <param name="id">指定快照id进行过滤。 (optional, default to &quot;&quot;)</param>
    /// <param name="dedicatedStorageName">专属存储的名称。 (optional, default to &quot;&quot;)</param>
    /// <param name="dedicatedStorageId">专属存储ID。 (optional, default to &quot;&quot;)</param>
    /// <param name="serviceType">服务类型。仅支持EVS、DSS、DESS。 (optional, default to &quot;&quot;)</param>
    /// <param name="enterpriseProjectId">指定企业项目id进行过滤。 传入“all_granted_eps”，代表查询权限范围内的所有企业项目下的云硬盘。 &gt; 说明： &gt;  &gt; 关于企业项目ID的获取及企业项目特性的详细信息，请参考：\&quot;[企业管理用户指南](https://support.huaweicloud.com/usermanual-em/zh-cn_topic_0123692049.html)\&quot;。 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListSnapshotsResponse> listSnapshots(
        ListSnapshotsRequest &request
    );
    /// <summary>
    /// 获取云硬盘资源的所有标签
    /// </summary>
    /// <remarks>
    /// 获取某个租户的所有云硬盘资源的标签信息。
    /// </remarks>
    std::shared_ptr<ListVolumeTagsResponse> listVolumeTags(
        ListVolumeTagsRequest &request
    );
    /// <summary>
    /// 查询所有云硬盘详情
    /// </summary>
    /// <remarks>
    /// 查询所有云硬盘的详细信息。
    /// </remarks>
    /// <param name="marker">通过云硬盘ID进行分页查询。默认为查询第一页数据。 (optional, default to &quot;&quot;)</param>
    /// <param name="name">磁盘名称。 (optional, default to &quot;&quot;)</param>
    /// <param name="limit">返回结果个数限制。默认值为1000。 (optional, default to 0)</param>
    /// <param name="sortKey">返回结果按该关键字排序，支持id，status，size，created_at等关键字，默认为“created_at”。 (optional, default to &quot;&quot;)</param>
    /// <param name="offset">偏移量（偏移量为一个大于0小于磁盘总个数的整数，表示查询该偏移量后面的所有的磁盘）。 (optional, default to 0)</param>
    /// <param name="sortDir">返回结果按照降序或升序排列，默认为“desc”。 降序：desc 升序：asc (optional, default to &quot;&quot;)</param>
    /// <param name="status">云硬盘状态，取值可参考：\&quot;[云硬盘状态](https://support.huaweicloud.com/api-evs/evs_04_0040.html)\&quot;。 (optional, default to &quot;&quot;)</param>
    /// <param name="metadata">云硬盘元数据。 (optional, default to &quot;&quot;)</param>
    /// <param name="availabilityZone">可用区信息。 (optional, default to &quot;&quot;)</param>
    /// <param name="multiattach">是否为共享云硬盘。 true：表示为共享云硬盘。 false：表示为非共享云硬盘。 (optional, default to false)</param>
    /// <param name="serviceType">服务类型，仅支持EVS、DSS、DESS。 (optional, default to &quot;&quot;)</param>
    /// <param name="dedicatedStorageId">专属存储池ID，可过滤出该专属存储池下的所有云硬盘，必须精确匹配。 (optional, default to &quot;&quot;)</param>
    /// <param name="dedicatedStorageName">专属存储池的名字，可过滤出该专属存储池下的所有云硬盘，支持模糊匹配。 (optional, default to &quot;&quot;)</param>
    /// <param name="volumeTypeId">云硬盘类型id。 通过\&quot;[查询云硬盘类型列表](https://support.huaweicloud.com/api-evs/evs_04_3035.html)\&quot;可以查到，即volume_types参数说明表格中的“id” (optional, default to &quot;&quot;)</param>
    /// <param name="id">云硬盘ID。 (optional, default to &quot;&quot;)</param>
    /// <param name="ids">云硬盘id列表，格式为ids&#x3D;[&#39;id1&#39;,&#39;id2&#39;,...,&#39;idx&#39;]，返回“ids”中有效id的云硬盘详情，无效的id会被忽略。 支持查询最多60个id对应的云硬盘详情。 如果“id”和“ids”查询参数同时存在，“id”会被忽略。 (optional, default to &quot;&quot;)</param>
    /// <param name="enterpriseProjectId">指定企业项目id进行过滤。 传入“all_granted_eps”，代表查询权限范围内的所有企业项目下的云硬盘。 &gt; 说明： &gt;  &gt; 关于企业项目ID的获取及企业项目特性的详细信息，请参考：\&quot;[企业管理用户指南](https://support.huaweicloud.com/usermanual-em/zh-cn_topic_0123692049.html)\&quot;。 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListVolumesResponse> listVolumes(
        ListVolumesRequest &request
    );
    /// <summary>
    /// 通过标签查询云硬盘资源实例详情
    /// </summary>
    /// <remarks>
    /// 通过标签查询云硬盘资源实例详情。
    /// </remarks>
    /// <param name="listVolumesByTagsRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<ListVolumesByTagsResponse> listVolumesByTags(
        ListVolumesByTagsRequest &request
    );
    /// <summary>
    /// 扩容云硬盘
    /// </summary>
    /// <remarks>
    /// 对按需或者包周期云硬盘进行扩容。 在扩容包周期云硬盘的场景下： - 如果您需要查看订单可用的优惠券，请参考\&quot;[查询订单可用优惠券](https://support.huaweicloud.com/api-oce/zh-cn_topic_0092953630.html)\&quot;。 - 如果您需要支付订单，请参考\&quot;[支付包周期产品订单](https://support.huaweicloud.com/api-oce/zh-cn_topic_0075746561.html)\&quot;。 - 如果您需要查询订单的资源开通详情，请参考\&quot;[查询订单的资源开通详情](https://support.huaweicloud.com/api-oce/api_order_00001.html)\&quot;。 - 如果您需要退订该包周期资源，请参考“[退订包周期资源](https://support.huaweicloud.com/api-oce/zh-cn_topic_0082522030.html)”。
    /// </remarks>
    /// <param name="volumeId">云硬盘ID。</param>
    /// <param name="resizeVolumeRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<ResizeVolumeResponse> resizeVolume(
        ResizeVolumeRequest &request
    );
    /// <summary>
    /// 回滚快照到云硬盘
    /// </summary>
    /// <remarks>
    /// 将快照数据回滚到云硬盘。支持企业项目授权功能。
    /// </remarks>
    /// <param name="snapshotId">快照ID</param>
    /// <param name="rollbackSnapshotRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<RollbackSnapshotResponse> rollbackSnapshot(
        RollbackSnapshotRequest &request
    );
    /// <summary>
    /// 查询job的状态
    /// </summary>
    /// <remarks>
    /// 查询Job的执行状态。 可用于查询创建云硬盘，扩容云硬盘，删除云硬盘等API的执行状态。
    /// </remarks>
    /// <param name="jobId">job ID。</param>
    std::shared_ptr<ShowJobResponse> showJob(
        ShowJobRequest &request
    );
    /// <summary>
    /// 查询单个云硬盘快照详细信息
    /// </summary>
    /// <remarks>
    /// 查询单个云硬盘快照信息。支持企业项目授权功能。
    /// </remarks>
    /// <param name="snapshotId">快照ID。</param>
    std::shared_ptr<ShowSnapshotResponse> showSnapshot(
        ShowSnapshotRequest &request
    );
    /// <summary>
    /// 查询单个云硬盘详情
    /// </summary>
    /// <remarks>
    /// 查询单个云硬盘的详细信息。支持企业项目授权功能。
    /// </remarks>
    /// <param name="volumeId">云硬盘ID。</param>
    std::shared_ptr<ShowVolumeResponse> showVolume(
        ShowVolumeRequest &request
    );
    /// <summary>
    /// 查询云硬盘标签
    /// </summary>
    /// <remarks>
    /// 查询指定云硬盘的标签信息。
    /// </remarks>
    /// <param name="volumeId">云硬盘ID</param>
    std::shared_ptr<ShowVolumeTagsResponse> showVolumeTags(
        ShowVolumeTagsRequest &request
    );
    /// <summary>
    /// 更新云硬盘快照
    /// </summary>
    /// <remarks>
    /// 更新云硬盘快照。支持企业项目授权功能。
    /// </remarks>
    /// <param name="snapshotId">快照ID</param>
    /// <param name="updateSnapshotRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<UpdateSnapshotResponse> updateSnapshot(
        UpdateSnapshotRequest &request
    );
    /// <summary>
    /// 更新云硬盘
    /// </summary>
    /// <remarks>
    /// 更新一个云硬盘的名称和描述。
    /// </remarks>
    /// <param name="volumeId">云硬盘ID。</param>
    /// <param name="updateVolumeRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<UpdateVolumeResponse> updateVolume(
        UpdateVolumeRequest &request
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

