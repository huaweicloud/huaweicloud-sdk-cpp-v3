#ifndef HUAWEICLOUD_SDK_EIP_V2_EipClient_H_
#define HUAWEICLOUD_SDK_EIP_V2_EipClient_H_

#include <huaweicloud/eip/EipExport.h>
#include "huaweicloud/core/Client.h"
#include "huaweicloud/core/ClientBuilder.h"


#include "huaweicloud/eip/model/AddPublicipsIntoSharedBandwidthRequest.h"
#include "huaweicloud/eip/model/AddPublicipsIntoSharedBandwidthRequestBody.h"
#include "huaweicloud/eip/model/AddPublicipsIntoSharedBandwidthResponse.h"
#include "huaweicloud/eip/model/BatchCreateBandwidthRequestBody.h"
#include "huaweicloud/eip/model/BatchCreateSharedBandwidthsRequest.h"
#include "huaweicloud/eip/model/BatchCreateSharedBandwidthsResponse.h"
#include "huaweicloud/eip/model/CreateSharedBandwidhRequestBody.h"
#include "huaweicloud/eip/model/CreateSharedBandwidthRequest.h"
#include "huaweicloud/eip/model/CreateSharedBandwidthResponse.h"
#include "huaweicloud/eip/model/DeleteSharedBandwidthRequest.h"
#include "huaweicloud/eip/model/DeleteSharedBandwidthResponse.h"
#include "huaweicloud/eip/model/ListBandwidthsRequest.h"
#include "huaweicloud/eip/model/ListBandwidthsResponse.h"
#include "huaweicloud/eip/model/ListQuotasRequest.h"
#include "huaweicloud/eip/model/ListQuotasResponse.h"
#include "huaweicloud/eip/model/RemovePublicipsFromSharedBandwidthRequest.h"
#include "huaweicloud/eip/model/RemovePublicipsFromSharedBandwidthRequestBody.h"
#include "huaweicloud/eip/model/RemovePublicipsFromSharedBandwidthResponse.h"
#include "huaweicloud/eip/model/ShowBandwidthRequest.h"
#include "huaweicloud/eip/model/ShowBandwidthResponse.h"
#include "huaweicloud/eip/model/UpdateBandwidthRequest.h"
#include "huaweicloud/eip/model/UpdateBandwidthRequestBody.h"
#include "huaweicloud/eip/model/UpdateBandwidthResponse.h"
#include "huaweicloud/eip/model/UpdatePrePaidBandwidthRequest.h"
#include "huaweicloud/eip/model/UpdatePrePaidBandwidthRequestBody.h"
#include "huaweicloud/eip/model/UpdatePrePaidBandwidthResponse.h"
#include <string>

#include "huaweicloud/eip/model/BatchCreatePublicipTagsRequest.h"
#include "huaweicloud/eip/model/BatchCreatePublicipTagsRequestBody.h"
#include "huaweicloud/eip/model/BatchCreatePublicipTagsResponse.h"
#include "huaweicloud/eip/model/BatchDeletePublicipTagsRequest.h"
#include "huaweicloud/eip/model/BatchDeletePublicipTagsRequestBody.h"
#include "huaweicloud/eip/model/BatchDeletePublicipTagsResponse.h"
#include "huaweicloud/eip/model/CreatePrePaidPublicipRequest.h"
#include "huaweicloud/eip/model/CreatePrePaidPublicipRequestBody.h"
#include "huaweicloud/eip/model/CreatePrePaidPublicipResponse.h"
#include "huaweicloud/eip/model/CreatePublicipRequest.h"
#include "huaweicloud/eip/model/CreatePublicipRequestBody.h"
#include "huaweicloud/eip/model/CreatePublicipResponse.h"
#include "huaweicloud/eip/model/CreatePublicipTagRequest.h"
#include "huaweicloud/eip/model/CreatePublicipTagRequestBody.h"
#include "huaweicloud/eip/model/CreatePublicipTagResponse.h"
#include "huaweicloud/eip/model/DeletePublicipRequest.h"
#include "huaweicloud/eip/model/DeletePublicipResponse.h"
#include "huaweicloud/eip/model/DeletePublicipTagRequest.h"
#include "huaweicloud/eip/model/DeletePublicipTagResponse.h"
#include "huaweicloud/eip/model/ListPublicipTagsRequest.h"
#include "huaweicloud/eip/model/ListPublicipTagsResponse.h"
#include "huaweicloud/eip/model/ListPublicipsByTagsRequest.h"
#include "huaweicloud/eip/model/ListPublicipsByTagsRequestBody.h"
#include "huaweicloud/eip/model/ListPublicipsByTagsResponse.h"
#include "huaweicloud/eip/model/ListPublicipsRequest.h"
#include "huaweicloud/eip/model/ListPublicipsResponse.h"
#include "huaweicloud/eip/model/ShowPublicipRequest.h"
#include "huaweicloud/eip/model/ShowPublicipResponse.h"
#include "huaweicloud/eip/model/ShowPublicipTagsRequest.h"
#include "huaweicloud/eip/model/ShowPublicipTagsResponse.h"
#include "huaweicloud/eip/model/UpdatePublicipRequest.h"
#include "huaweicloud/eip/model/UpdatePublicipResponse.h"
#include "huaweicloud/eip/model/UpdatePublicipsRequestBody.h"
#include <string>

#include "huaweicloud/eip/model/NeutronCreateFloatingIpRequest.h"
#include "huaweicloud/eip/model/NeutronCreateFloatingIpRequestBody.h"
#include "huaweicloud/eip/model/NeutronCreateFloatingIpResponse.h"
#include "huaweicloud/eip/model/NeutronDeleteFloatingIpRequest.h"
#include "huaweicloud/eip/model/NeutronDeleteFloatingIpResponse.h"
#include "huaweicloud/eip/model/NeutronListFloatingIpsRequest.h"
#include "huaweicloud/eip/model/NeutronListFloatingIpsResponse.h"
#include "huaweicloud/eip/model/NeutronShowFloatingIpRequest.h"
#include "huaweicloud/eip/model/NeutronShowFloatingIpResponse.h"
#include "huaweicloud/eip/model/NeutronUpdateFloatingIpRequest.h"
#include "huaweicloud/eip/model/NeutronUpdateFloatingIpRequestBody.h"
#include "huaweicloud/eip/model/NeutronUpdateFloatingIpResponse.h"
#include <string>

#include <cpprest/details/basic_types.h>
#include "huaweicloud/core/utils/ModelBase.h"
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Eip::V2::Model;

class HUAWEICLOUD_EIP_EXPORT  EipClient : public Client
{
public:

    EipClient();

    virtual ~EipClient();

    static ClientBuilder<EipClient> newBuilder();

    /// <summary>
    /// 共享带宽插入弹性公网IP
    /// </summary>
    /// <remarks>
    /// 共享带宽插入弹性公网IP。
    /// </remarks>
    /// <param name="bandwidthId">带宽唯一标识</param>
    /// <param name="bandwidth">带宽对象</param>
    std::shared_ptr<AddPublicipsIntoSharedBandwidthResponse> addPublicipsIntoSharedBandwidth(
        AddPublicipsIntoSharedBandwidthRequest &request
    );
    /// <summary>
    /// 批量创建共享带宽
    /// </summary>
    /// <remarks>
    /// 批量创建共享带宽。
    /// </remarks>
    /// <param name="bandwidth">带宽对象</param>
    std::shared_ptr<BatchCreateSharedBandwidthsResponse> batchCreateSharedBandwidths(
        BatchCreateSharedBandwidthsRequest &request
    );
    /// <summary>
    /// 创建共享带宽
    /// </summary>
    /// <remarks>
    /// 创建共享带宽。
    /// </remarks>
    /// <param name="bandwidth">带宽对象</param>
    std::shared_ptr<CreateSharedBandwidthResponse> createSharedBandwidth(
        CreateSharedBandwidthRequest &request
    );
    /// <summary>
    /// 删除共享带宽
    /// </summary>
    /// <remarks>
    /// 删除共享带宽。
    /// </remarks>
    /// <param name="bandwidthId">带宽唯一标识  约束： 当前仅支持删除共享带宽</param>
    std::shared_ptr<DeleteSharedBandwidthResponse> deleteSharedBandwidth(
        DeleteSharedBandwidthRequest &request
    );
    /// <summary>
    /// 查询带宽列表
    /// </summary>
    /// <remarks>
    /// 查询带宽列表。
    /// </remarks>
    /// <param name="marker">取值为上一页数据的最后一条记录的id，为空时为查询第一页 (optional, default to &quot;&quot;)</param>
    /// <param name="limit">功能说明：每页返回的个数  取值范围：0~intmax (optional, default to 0)</param>
    /// <param name="enterpriseProjectId">功能说明：企业项目ID。可以使用该字段过滤某个企业项目下的虚拟私有云。  取值范围：最大长度36字节，带“-”连字符的UUID格式，或者是字符串“0”。“0”表示默认企业项目。若需要查询当前用户所有企业项目绑定的虚拟私有云，请传参all_granted_eps。 (optional, default to &quot;&quot;)</param>
    /// <param name="shareType">功能说明：带宽类型，标识是否是共享带宽 取值范围：WHOLE，PER WHOLE表示共享带宽；PER，表示独享带宽 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListBandwidthsResponse> listBandwidths(
        ListBandwidthsRequest &request
    );
    /// <summary>
    /// 查询配额接口
    /// </summary>
    /// <remarks>
    /// 查询配额
    /// </remarks>
    /// <param name="type">功能说明：根据type过滤查询指定类型的配额 取值范围：vpc，subnet，securityGroup，securityGroupRule，publicIp，vpn，vpngw，vpcPeer，firewall，shareBandwidth，shareBandwidthIP，loadbalancer，listener (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListQuotasResponse> listQuotas(
        ListQuotasRequest &request
    );
    /// <summary>
    /// 共享带宽移除弹性公网IP
    /// </summary>
    /// <remarks>
    /// 共享带宽移除弹性公网IP。
    /// </remarks>
    /// <param name="bandwidthId">带宽唯一标识</param>
    /// <param name="bandwidth">带宽对象</param>
    std::shared_ptr<RemovePublicipsFromSharedBandwidthResponse> removePublicipsFromSharedBandwidth(
        RemovePublicipsFromSharedBandwidthRequest &request
    );
    /// <summary>
    /// 查询带宽
    /// </summary>
    /// <remarks>
    /// 查询带宽
    /// </remarks>
    /// <param name="bandwidthId">带宽唯一标识</param>
    std::shared_ptr<ShowBandwidthResponse> showBandwidth(
        ShowBandwidthRequest &request
    );
    /// <summary>
    /// 更新带宽
    /// </summary>
    /// <remarks>
    /// 更新带宽。
    /// </remarks>
    /// <param name="bandwidthId">带宽唯一标识</param>
    /// <param name="bandwidth">带宽对象</param>
    std::shared_ptr<UpdateBandwidthResponse> updateBandwidth(
        UpdateBandwidthRequest &request
    );
    /// <summary>
    /// 更新包周期带宽
    /// </summary>
    /// <remarks>
    /// 更新带宽。
    /// </remarks>
    /// <param name="bandwidthId">带宽唯一标识。通过弹性公网IP详情获取，且此弹性公网IP是包周期的。</param>
    /// <param name="updateBandwidthInformation">更新包周期带宽请求参数</param>
    std::shared_ptr<UpdatePrePaidBandwidthResponse> updatePrePaidBandwidth(
        UpdatePrePaidBandwidthRequest &request
    );
    /// <summary>
    /// 批量创建弹性公网IP资源标签
    /// </summary>
    /// <remarks>
    /// 为指定的弹性公网IP资源实例批量添加标签。
    /// </remarks>
    /// <param name="publicipId">资源ID</param>
    /// <param name="resourceTagAction">批量创建弹性公网IP资源标签请求参数</param>
    std::shared_ptr<BatchCreatePublicipTagsResponse> batchCreatePublicipTags(
        BatchCreatePublicipTagsRequest &request
    );
    /// <summary>
    /// 批量删除弹性公网IP资源标签
    /// </summary>
    /// <remarks>
    /// 为指定的弹性公网IP资源实例批量删除标签。
    /// </remarks>
    /// <param name="publicipId">资源ID</param>
    /// <param name="resourceTagAction">批量删除弹性公网IP资源标签请求参数</param>
    std::shared_ptr<BatchDeletePublicipTagsResponse> batchDeletePublicipTags(
        BatchDeletePublicipTagsRequest &request
    );
    /// <summary>
    /// 申请包周期弹性公网IP
    /// </summary>
    /// <remarks>
    /// 申请包年包月的弹性公网IP。
    /// </remarks>
    /// <param name="createPeriodPublicip">申请包周期弹性公网IP请求参数</param>
    std::shared_ptr<CreatePrePaidPublicipResponse> createPrePaidPublicip(
        CreatePrePaidPublicipRequest &request
    );
    /// <summary>
    /// 申请弹性公网IP
    /// </summary>
    /// <remarks>
    /// 申请弹性公网IP，支持IPv4和IPv6。  弹性公网IP（Elastic IP）提供独立的公网IP资源，包括公网IP地址与公网出口带宽服务。可以与弹性云服务器、裸金属服务器、虚拟IP、弹性负载均衡、NAT网关等资源灵活地绑定及解绑。拥有多种灵活的计费方式，可以满足各种业务场景的需要。
    /// </remarks>
    /// <param name="createPublicip">申请弹性公网IP请求参数</param>
    std::shared_ptr<CreatePublicipResponse> createPublicip(
        CreatePublicipRequest &request
    );
    /// <summary>
    /// 创建弹性公网IP资源标签
    /// </summary>
    /// <remarks>
    /// 给指定弹性IP资源实例增加标签信息。
    /// </remarks>
    /// <param name="publicipId">资源ID</param>
    /// <param name="tag">标签</param>
    std::shared_ptr<CreatePublicipTagResponse> createPublicipTag(
        CreatePublicipTagRequest &request
    );
    /// <summary>
    /// 删除弹性公网IP
    /// </summary>
    /// <remarks>
    /// 删除弹性公网IP,绑定状态eip不允许直接删除。
    /// </remarks>
    /// <param name="publicipId">弹性公网IP唯一标识</param>
    std::shared_ptr<DeletePublicipResponse> deletePublicip(
        DeletePublicipRequest &request
    );
    /// <summary>
    /// 删除弹性公网IP的标签
    /// </summary>
    /// <remarks>
    /// 删除指定弹性公网IP的标签信息。其中project_id是项目ID，publicip_id 是要操作的弹性公网IP的id。key是要删除标签的键。
    /// </remarks>
    /// <param name="publicipId">弹性公网IP的id</param>
    /// <param name="key">标签的键</param>
    std::shared_ptr<DeletePublicipTagResponse> deletePublicipTag(
        DeletePublicipTagRequest &request
    );
    /// <summary>
    /// 查询租户的弹性公网IP标签
    /// </summary>
    /// <remarks>
    /// 查询租户在指定区域和实例类型的所有标签集合。
    /// </remarks>
    std::shared_ptr<ListPublicipTagsResponse> listPublicipTags(
        ListPublicipTagsRequest &request
    );
    /// <summary>
    /// 查询弹性公网IP列表
    /// </summary>
    /// <remarks>
    /// 查询弹性公网IP列表
    /// </remarks>
    /// <param name="marker">取值为上一页数据的最后一条记录的id，为空时为查询第一页 (optional, default to &quot;&quot;)</param>
    /// <param name="limit">功能说明：每页返回的个数  取值范围：0~intmax (optional, default to 0)</param>
    /// <param name="ipVersion">IP地址版本信息  4：IPv4  6：IPv6 (optional, default to 0)</param>
    /// <param name="enterpriseProjectId">功能说明：企业项目ID。可以使用该字段过滤某个企业项目下的弹性IP弹性公网IP。  取值范围：最大长度36字节，带“-”连字符的UUID格式，或者是字符串“0”。“0”表示默认企业项目。若需要查询当前用户所有企业项目绑定的弹性公网IP，请传参all_granted_eps。 (optional, default to &quot;&quot;)</param>
    /// <param name="portId">绑定弹性公网IP的端口id (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="publicIpAddress">IPv4时是申请到的弹性公网IP地址，IPv6时是IPv6地址对应的IPv4地址 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="privateIpAddress">关联端口的私有IP地址 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="id">弹性公网IP唯一标识 (optional, default to std::vector&lt;std::string&gt;())</param>
    std::shared_ptr<ListPublicipsResponse> listPublicips(
        ListPublicipsRequest &request
    );
    /// <summary>
    /// 按标签查询弹性公网IP列表
    /// </summary>
    /// <remarks>
    /// 使用标签过滤弹性公网IP。
    /// </remarks>
    /// <param name="showPublicipResourceInstance">查询弹性IP资源实例请求参数</param>
    std::shared_ptr<ListPublicipsByTagsResponse> listPublicipsByTags(
        ListPublicipsByTagsRequest &request
    );
    /// <summary>
    /// 查询弹性公网IP
    /// </summary>
    /// <remarks>
    /// 查询指定的弹性公网IP。
    /// </remarks>
    /// <param name="publicipId">弹性公网IP唯一标识</param>
    std::shared_ptr<ShowPublicipResponse> showPublicip(
        ShowPublicipRequest &request
    );
    /// <summary>
    /// 查询弹性公网IP的标签
    /// </summary>
    /// <remarks>
    /// 查询指定弹性IP实例的标签信息。
    /// </remarks>
    /// <param name="publicipId">资源ID</param>
    std::shared_ptr<ShowPublicipTagsResponse> showPublicipTags(
        ShowPublicipTagsRequest &request
    );
    /// <summary>
    /// 更新弹性公网IP
    /// </summary>
    /// <remarks>
    /// 更新弹性公网IP，将弹性公网IP跟一个网卡绑定或者解绑定，转换IP地址版本类型。
    /// </remarks>
    /// <param name="publicipId">弹性公网IP唯一标识</param>
    /// <param name="publicip">弹性公网IP对象</param>
    std::shared_ptr<UpdatePublicipResponse> updatePublicip(
        UpdatePublicipRequest &request
    );
    /// <summary>
    /// 创建浮动IP
    /// </summary>
    /// <remarks>
    /// 创建浮动IP的外部网络UUID，请使用GET /v2.0/networks?router:external&#x3D;True或neutron net-external-list方式获取。
    /// </remarks>
    /// <param name="floatingip">创建floatingip对象列表</param>
    std::shared_ptr<NeutronCreateFloatingIpResponse> neutronCreateFloatingIp(
        NeutronCreateFloatingIpRequest &request
    );
    /// <summary>
    /// 删除浮动IP
    /// </summary>
    /// <remarks>
    /// 删除指定的浮动IP。
    /// </remarks>
    /// <param name="floatingipId">floatingip的ID</param>
    std::shared_ptr<NeutronDeleteFloatingIpResponse> neutronDeleteFloatingIp(
        NeutronDeleteFloatingIpRequest &request
    );
    /// <summary>
    /// 查询浮动IP列表
    /// </summary>
    /// <remarks>
    /// 查询提交请求的租户有权限操作的所有浮动IP地址。
    /// </remarks>
    /// <param name="limit">每页显示的条目数量。 (optional, default to &quot;&quot;)</param>
    /// <param name="marker">取值为上一页数据的最后一条记录的id，当marker参数为无效id时，response将响应错误码400 (optional, default to &quot;&quot;)</param>
    /// <param name="pageReverse">False/True，是否设置分页的顺序。 (optional, default to false)</param>
    /// <param name="id">浮动IP的id。 (optional, default to &quot;&quot;)</param>
    /// <param name="floatingIpAddress">浮动IP地址。 (optional, default to &quot;&quot;)</param>
    /// <param name="routerId">所属路由器id。 (optional, default to &quot;&quot;)</param>
    /// <param name="portId">端口id。 (optional, default to &quot;&quot;)</param>
    /// <param name="fixedIpAddress">关联端口的私有IP地址。 (optional, default to &quot;&quot;)</param>
    /// <param name="tenantId">项目ID。 (optional, default to &quot;&quot;)</param>
    /// <param name="floatingNetworkId">外部网络的id。只能使用固定的外网，外部网络的信息请通过GET /v2.0/networks?router:external&#x3D;True或GET /v2.0/networks?name&#x3D;{floating_network}或neutron net-external-list方式查询 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<NeutronListFloatingIpsResponse> neutronListFloatingIps(
        NeutronListFloatingIpsRequest &request
    );
    /// <summary>
    /// 查询浮动IP
    /// </summary>
    /// <remarks>
    /// 查询浮动IP详情，包括浮动IP状态，浮动IP所属路由器ID，浮动IP的外部网络ID等等。
    /// </remarks>
    /// <param name="floatingipId">floatingip的ID</param>
    std::shared_ptr<NeutronShowFloatingIpResponse> neutronShowFloatingIp(
        NeutronShowFloatingIpRequest &request
    );
    /// <summary>
    /// 更新浮动IP
    /// </summary>
    /// <remarks>
    /// 更新浮动IP。  更新时需在URL中给出浮动IP地址的ID。  port_id 为空，则表示浮动IP从端口解绑。
    /// </remarks>
    /// <param name="floatingipId">floatingip的ID</param>
    /// <param name="floatingip">更新floatingip对象</param>
    std::shared_ptr<NeutronUpdateFloatingIpResponse> neutronUpdateFloatingIp(
        NeutronUpdateFloatingIpRequest &request
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

#ifdef RTTR_FLAG
template class HUAWEICLOUD_EIP_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Eip::V2::EipClient>;
#endif

#endif // HUAWEICLOUD_SDK_EIP_V2_EipClient_H_

