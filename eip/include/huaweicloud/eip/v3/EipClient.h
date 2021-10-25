#ifndef HUAWEICLOUD_SDK_EIP_V3_EipClient_H_
#define HUAWEICLOUD_SDK_EIP_V3_EipClient_H_

#include <huaweicloud/eip/v3/EipExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/eip/v3/model/ListCommonPoolsRequest.h>
#include <huaweicloud/eip/v3/model/ListCommonPoolsResponse.h>
#include <huaweicloud/eip/v3/model/ListPublicBorderGroupsRequest.h>
#include <huaweicloud/eip/v3/model/ListPublicBorderGroupsResponse.h>
#include <huaweicloud/eip/v3/model/ListShareBandwidthTypesRequest.h>
#include <huaweicloud/eip/v3/model/ListShareBandwidthTypesResponse.h>
#include <string>

#include <huaweicloud/eip/v3/model/AssociatePublicipsRequest.h>
#include <huaweicloud/eip/v3/model/AssociatePublicipsRequestBody.h>
#include <huaweicloud/eip/v3/model/AssociatePublicipsResponse.h>
#include <huaweicloud/eip/v3/model/DisassociatePublicipsRequest.h>
#include <huaweicloud/eip/v3/model/DisassociatePublicipsRequestBody.h>
#include <huaweicloud/eip/v3/model/DisassociatePublicipsResponse.h>
#include <huaweicloud/eip/v3/model/ListPublicipPoolRequest.h>
#include <huaweicloud/eip/v3/model/ListPublicipPoolResponse.h>
#include <huaweicloud/eip/v3/model/ListPublicipsRequest.h>
#include <huaweicloud/eip/v3/model/ListPublicipsResponse.h>
#include <huaweicloud/eip/v3/model/ShowPublicipPoolRequest.h>
#include <huaweicloud/eip/v3/model/ShowPublicipPoolResponse.h>
#include <huaweicloud/eip/v3/model/ShowPublicipRequest.h>
#include <huaweicloud/eip/v3/model/ShowPublicipResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Eip::V3::Model;

class HUAWEICLOUD_EIP_V3_EXPORT  EipClient : public Client
{
public:

    EipClient();

    virtual ~EipClient();

    static ClientBuilder<EipClient> newBuilder();

    /// <summary>
    /// 查询公共池列表
    /// </summary>
    /// <remarks>
    /// 查询公共池列表
    /// </remarks>
    /// <param name="fields">显示，形式为\&quot;fields&#x3D;id&amp;fields&#x3D;name&amp;...\&quot;  支持字段：id/name/status/type/used/allow_share_bandwidth_types/public_border_group (optional, default to &quot;&quot;)</param>
    /// <param name="name">公共池名称 (optional, default to &quot;&quot;)</param>
    /// <param name="publicBorderGroup">公共池位于中心还是边缘 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListCommonPoolsResponse> listCommonPools(
        ListCommonPoolsRequest &request
    );
    /// <summary>
    /// 查询公共池分组列表
    /// </summary>
    /// <remarks>
    /// 查询公共池分组列表，包含名称和位置信息
    /// </remarks>
    /// <param name="fields">显示，形式为\&quot;fields&#x3D;id&amp;fields&#x3D;name&amp;...\&quot;  支持字段：publicip_pools/public_border_group (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListPublicBorderGroupsResponse> listPublicBorderGroups(
        ListPublicBorderGroupsRequest &request
    );
    /// <summary>
    /// 查询指定租户下的共享带宽类型列表
    /// </summary>
    /// <remarks>
    /// 查询指定租户下的共享带宽类型列表
    /// </remarks>
    /// <param name="fields">形式为\\\&quot;fields&#x3D;id&amp;fields&#x3D;bandwidth_type&amp;...\\\&quot;，支持字段：id/bandwidth_type/name_en/name_zh/created_at/update_at/public_border_group/description (optional, default to &quot;&quot;)</param>
    /// <param name="id">支持带宽类型的id (optional, default to &quot;&quot;)</param>
    /// <param name="bandwidthType">带宽支持类型 (optional, default to &quot;&quot;)</param>
    /// <param name="nameEn">带宽类型英文表述 (optional, default to &quot;&quot;)</param>
    /// <param name="nameZh">带宽类型中文表述 (optional, default to &quot;&quot;)</param>
    /// <param name="publicBorderGroup">带宽类型所处位置，中心站点or边缘站点 (optional, default to &quot;&quot;)</param>
    /// <param name="sortKey">排序，形式为\&quot;sort_key&#x3D;id&amp;sort_dir&#x3D;asc\&quot;  支持字段：id/bandwidth_type/public_border_group (optional, default to &quot;&quot;)</param>
    /// <param name="sortDir">排序方向  取值范围：asc、desc (optional, default to &quot;&quot;)</param>
    /// <param name="limit">每页返回的个数取值范围：0~[2000]，其中2000为局点差异项，具体取值由局点决定 (optional, default to 0)</param>
    std::shared_ptr<ListShareBandwidthTypesResponse> listShareBandwidthTypes(
        ListShareBandwidthTypesRequest &request
    );
    /// <summary>
    /// 绑定弹性公网IP
    /// </summary>
    /// <remarks>
    /// 绑定弹性公网IP
    /// </remarks>
    /// <param name="publicipId">弹性公网IP的ID</param>
    /// <param name="associatePublicipsRequestBody">弹性公网ip对象</param>
    std::shared_ptr<AssociatePublicipsResponse> associatePublicips(
        AssociatePublicipsRequest &request
    );
    /// <summary>
    /// 解绑弹性公网IP
    /// </summary>
    /// <remarks>
    /// 解绑弹性公网IP
    /// </remarks>
    /// <param name="publicipId">弹性公网IP的ID</param>
    /// <param name="disassociatePublicipsRequestBody">弹性公网ip对象</param>
    std::shared_ptr<DisassociatePublicipsResponse> disassociatePublicips(
        DisassociatePublicipsRequest &request
    );
    /// <summary>
    /// 查询公网IP池列表
    /// </summary>
    /// <remarks>
    /// 全量查询公网IP池列表
    /// </remarks>
    /// <param name="marker">分页查询起始的资源ID，为空时为查询第一页 (optional, default to &quot;&quot;)</param>
    /// <param name="limit">每页返回的个数取值范围：0~[2000]，其中2000为局点差异项，具体取值由局点决定 (optional, default to 0)</param>
    /// <param name="fields">显示，形式为\&quot;fields&#x3D;id&amp;fields&#x3D;name&amp;...\&quot;  支持字段：id/name/size/used/project_id/status/billing_info/created_at/updated_at/type/shared/is_common/description/tags/enterprise_project_id/allow_share_bandwidth_types/public_border_group (optional, default to &quot;&quot;)</param>
    /// <param name="sortKey">排序，形式为\&quot;sort_key&#x3D;id&amp;sort_dir&#x3D;asc\&quot;  支持字段：id/name/created_at/updated_at/public_border_group (optional, default to &quot;&quot;)</param>
    /// <param name="sortDir">排序方向  取值范围：asc、desc (optional, default to &quot;&quot;)</param>
    /// <param name="id">根据id过滤 (optional, default to &quot;&quot;)</param>
    /// <param name="name">根据name过滤 (optional, default to &quot;&quot;)</param>
    /// <param name="size">根据size过滤 (optional, default to 0)</param>
    /// <param name="status">根据status过滤 (optional, default to &quot;&quot;)</param>
    /// <param name="type">根据type过滤 (optional, default to &quot;&quot;)</param>
    /// <param name="description">根据description过滤 (optional, default to &quot;&quot;)</param>
    /// <param name="publicBorderGroup">根据public_border_group过滤 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListPublicipPoolResponse> listPublicipPool(
        ListPublicipPoolRequest &request
    );
    /// <summary>
    /// 全量查询弹性公网IP列表
    /// </summary>
    /// <remarks>
    /// 查询弹性公网IP列表信息
    /// </remarks>
    /// <param name="marker">分页查询起始的资源ID，为空时为查询第一页 (optional, default to &quot;&quot;)</param>
    /// <param name="offset">分页查询起始的资源序号 (optional, default to 0)</param>
    /// <param name="limit">每页返回的个数取值范围：0~[2000]，其中2000为局点差异项，具体取值由局点决定 (optional, default to 0)</param>
    /// <param name="fields">显示，形式为\&quot;fields&#x3D;id&amp;fields&#x3D;owner&amp;...\&quot;  支持字段：id/project_id/ip_version/type/public_ip_address/public_ipv6_address/network_type/status/description/created_at/updated_at/vnic/bandwidth/associate_instance_type/associate_instance_id/lock_status/billing_info/tags/enterprise_project_id/allow_share_bandwidth_types/public_border_group/alias/publicip_pool_name/publicip_pool_id (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="sortKey">排序，形式为\&quot;sort_key&#x3D;id\&quot;  支持字段：id/public_ip_address/public_ipv6_address/ip_version/created_at/updated_at/public_border_group (optional, default to &quot;&quot;)</param>
    /// <param name="sortDir">排序方向  取值范围：asc、desc (optional, default to &quot;&quot;)</param>
    /// <param name="id">根据id过滤 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="ipVersion">根据ip_version过滤  取值范围：4、6 (optional, default to std::vector&lt;int32_t&gt;())</param>
    /// <param name="publicIpAddress">根据public_ip_address过滤 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="publicIpAddressLike">根据public_ip_address过滤，模糊搜索 (optional, default to &quot;&quot;)</param>
    /// <param name="publicIpv6Address">根据public_ipv6_address过滤 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="publicIpv6AddressLike">根据public_ipv6_address过滤，模糊搜索 (optional, default to &quot;&quot;)</param>
    /// <param name="type">根据type过滤  取值范围：EIP、DUALSTACK、DUALSTACK_SUBNET  EIP: 弹性公网IP   DUALSTACK: 双栈IPV6   DUALSTACK_SUBNET: 双栈子网 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="networkType">根据network_type过滤  取值范围：5_telcom、5_union、5_bgp、5_sbgp、5_ipv6、5_graybgp (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="publicipPoolName">根据publicip_pool_name过滤  取值范围：5_telcom、5_union、5_bgp、5_sbgp、5_ipv6、5_graybgp、专属池名称等 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="status">根据status过滤  取值范围：FREEZED、DOWN、ACTIVE、ERROR (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="aliasLike">根据alias模糊搜索 (optional, default to &quot;&quot;)</param>
    /// <param name="alias">根据alias过滤 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="description">根据description过滤 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="vnicPeriodprivateIpAddress">根据private_ip_address过滤 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="vnicPeriodprivateIpAddressLike">根据private_ip_address模糊搜索 (optional, default to &quot;&quot;)</param>
    /// <param name="vnicPerioddeviceId">根据device_id过滤 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="vnicPerioddeviceOwner">根据device_owner过滤 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="vnicPeriodvpcId">根据vpc_id过滤 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="vnicPeriodportId">根据port_id过滤 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="vnicPerioddeviceOwnerPrefixlike">根据device_owner_prefixlike模糊搜索 (optional, default to &quot;&quot;)</param>
    /// <param name="vnicPeriodinstanceType">根据instance_type过滤 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="vnicPeriodinstanceId">根据instance_id过滤 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="bandwidthPeriodid">根据id过滤 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="bandwidthPeriodname">根据name过滤 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="bandwidthPeriodnameLike">根据name模糊过滤 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="bandwidthPeriodsize">根据size过滤 (optional, default to std::vector&lt;int32_t&gt;())</param>
    /// <param name="bandwidthPeriodshareType">根据share_type过滤 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="bandwidthPeriodchargeMode">根据charge_mode过滤 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="billingInfo">根据billing_info过滤 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="billingMode">根据订单模式过滤,   取值范围：YEARLY_MONTHLY、PAY_PER_USE (optional, default to &quot;&quot;)</param>
    /// <param name="associateInstanceType">根据associate_instance_type过滤  取值范围：PORT、NATGW、ELB、VPN、ELBV1 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="associateInstanceId">根据associate_instance_id过滤 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="enterpriseProjectId">根据enterprise_project_id过滤 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="publicBorderGroup">根据public_border_group过滤 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="allowShareBandwidthTypeAny">共享带宽类型，根据任一共享带宽类型过滤EIP列表。 可以指定多个带宽类型，不同的带宽类型间用逗号分隔。 (optional, default to std::vector&lt;std::string&gt;())</param>
    std::shared_ptr<ListPublicipsResponse> listPublicips(
        ListPublicipsRequest &request
    );
    /// <summary>
    /// 查询弹性公网IP详情
    /// </summary>
    /// <remarks>
    /// 查询弹性公网IP详情
    /// </remarks>
    /// <param name="publicipId">弹性公网IP的ID</param>
    /// <param name="fields">显示，形式为\&quot;fields&#x3D;id&amp;fields&#x3D;owner&amp;...\&quot;  支持字段：id/project_id/ip_version/type/public_ip_address/public_ipv6_address/network_type/status/description/created_at/updated_at/vnic/bandwidth/associate_instance_type/associate_instance_id/lock_status/billing_info/tags/enterprise_project_id/publicip_pool_name/allow_share_bandwidth_types/alias/publicip_pool_id/public_border_group (optional, default to std::vector&lt;std::string&gt;())</param>
    std::shared_ptr<ShowPublicipResponse> showPublicip(
        ShowPublicipRequest &request
    );
    /// <summary>
    /// 查询公网IP池详情
    /// </summary>
    /// <remarks>
    /// 查询公网IP池详情
    /// </remarks>
    /// <param name="publicipPoolId">公网IP池ID唯一标识</param>
    /// <param name="fields">显示，形式为\&quot;fields&#x3D;id&amp;fields&#x3D;name&amp;...\&quot;  支持字段：id/name/size/used/project_id/status/billing_info/created_at/updated_at/type/shared/is_common/description/tags/enterprise_project_id/allow_share_bandwidth_types/public_border_group (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ShowPublicipPoolResponse> showPublicipPool(
        ShowPublicipPoolRequest &request
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

template class HUAWEICLOUD_EIP_V3_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Eip::V3::EipClient>;

#endif // HUAWEICLOUD_SDK_EIP_V3_EipClient_H_

