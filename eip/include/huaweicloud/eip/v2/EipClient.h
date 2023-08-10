#ifndef HUAWEICLOUD_SDK_EIP_V2_EipClient_H_
#define HUAWEICLOUD_SDK_EIP_V2_EipClient_H_

#include <huaweicloud/eip/v2/EipExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/eip/v2/model/AddPublicipsIntoSharedBandwidthRequest.h>
#include <huaweicloud/eip/v2/model/AddPublicipsIntoSharedBandwidthRequestBody.h>
#include <huaweicloud/eip/v2/model/AddPublicipsIntoSharedBandwidthResponse.h>
#include <huaweicloud/eip/v2/model/BatchCreateBandwidthRequestBody.h>
#include <huaweicloud/eip/v2/model/BatchCreateSharedBandwidthsRequest.h>
#include <huaweicloud/eip/v2/model/BatchCreateSharedBandwidthsResponse.h>
#include <huaweicloud/eip/v2/model/BwChangeToPeriodReq.h>
#include <huaweicloud/eip/v2/model/ChangeBandwidthToPeriodRequest.h>
#include <huaweicloud/eip/v2/model/ChangeBandwidthToPeriodResponse.h>
#include <huaweicloud/eip/v2/model/CreateSharedBandwidhRequestBody.h>
#include <huaweicloud/eip/v2/model/CreateSharedBandwidthRequest.h>
#include <huaweicloud/eip/v2/model/CreateSharedBandwidthResponse.h>
#include <huaweicloud/eip/v2/model/DeleteSharedBandwidthRequest.h>
#include <huaweicloud/eip/v2/model/DeleteSharedBandwidthResponse.h>
#include <huaweicloud/eip/v2/model/ListBandwidthPkgRequest.h>
#include <huaweicloud/eip/v2/model/ListBandwidthPkgResponse.h>
#include <huaweicloud/eip/v2/model/ListBandwidthsRequest.h>
#include <huaweicloud/eip/v2/model/ListBandwidthsResponse.h>
#include <huaweicloud/eip/v2/model/ListQuotasRequest.h>
#include <huaweicloud/eip/v2/model/ListQuotasResponse.h>
#include <huaweicloud/eip/v2/model/RemovePublicipsFromSharedBandwidthRequest.h>
#include <huaweicloud/eip/v2/model/RemovePublicipsFromSharedBandwidthRequestBody.h>
#include <huaweicloud/eip/v2/model/RemovePublicipsFromSharedBandwidthResponse.h>
#include <huaweicloud/eip/v2/model/ShowBandwidthRequest.h>
#include <huaweicloud/eip/v2/model/ShowBandwidthResponse.h>
#include <huaweicloud/eip/v2/model/UpdateBandwidthRequest.h>
#include <huaweicloud/eip/v2/model/UpdateBandwidthRequestBody.h>
#include <huaweicloud/eip/v2/model/UpdateBandwidthResponse.h>
#include <huaweicloud/eip/v2/model/UpdatePrePaidBandwidthRequest.h>
#include <huaweicloud/eip/v2/model/UpdatePrePaidBandwidthRequestBody.h>
#include <huaweicloud/eip/v2/model/UpdatePrePaidBandwidthResponse.h>
#include <string>

#include <huaweicloud/eip/v2/model/BatchCreatePublicipTagsRequest.h>
#include <huaweicloud/eip/v2/model/BatchCreatePublicipTagsRequestBody.h>
#include <huaweicloud/eip/v2/model/BatchCreatePublicipTagsResponse.h>
#include <huaweicloud/eip/v2/model/BatchCreatePublicipsRequest.h>
#include <huaweicloud/eip/v2/model/BatchCreatePublicipsResponse.h>
#include <huaweicloud/eip/v2/model/BatchCreatePublicipsV2RequestBody.h>
#include <huaweicloud/eip/v2/model/BatchDeletePublicIpRequest.h>
#include <huaweicloud/eip/v2/model/BatchDeletePublicIpRequestBody.h>
#include <huaweicloud/eip/v2/model/BatchDeletePublicIpResponse.h>
#include <huaweicloud/eip/v2/model/BatchDeletePublicipTagsRequest.h>
#include <huaweicloud/eip/v2/model/BatchDeletePublicipTagsRequestBody.h>
#include <huaweicloud/eip/v2/model/BatchDeletePublicipTagsResponse.h>
#include <huaweicloud/eip/v2/model/BatchDisassociatePublicipsRequest.h>
#include <huaweicloud/eip/v2/model/BatchDisassociatePublicipsResponse.h>
#include <huaweicloud/eip/v2/model/ChangePublicipToPeriodRequest.h>
#include <huaweicloud/eip/v2/model/ChangePublicipToPeriodResponse.h>
#include <huaweicloud/eip/v2/model/ChangeToPeriodReq.h>
#include <huaweicloud/eip/v2/model/CountPublicIpInstanceRequest.h>
#include <huaweicloud/eip/v2/model/CountPublicIpInstanceResponse.h>
#include <huaweicloud/eip/v2/model/CountPublicIpRequest.h>
#include <huaweicloud/eip/v2/model/CountPublicIpResponse.h>
#include <huaweicloud/eip/v2/model/CreatePrePaidPublicipRequest.h>
#include <huaweicloud/eip/v2/model/CreatePrePaidPublicipRequestBody.h>
#include <huaweicloud/eip/v2/model/CreatePrePaidPublicipResponse.h>
#include <huaweicloud/eip/v2/model/CreatePublicipRequest.h>
#include <huaweicloud/eip/v2/model/CreatePublicipRequestBody.h>
#include <huaweicloud/eip/v2/model/CreatePublicipResponse.h>
#include <huaweicloud/eip/v2/model/CreatePublicipTagRequest.h>
#include <huaweicloud/eip/v2/model/CreatePublicipTagRequestBody.h>
#include <huaweicloud/eip/v2/model/CreatePublicipTagResponse.h>
#include <huaweicloud/eip/v2/model/DeletePublicipRequest.h>
#include <huaweicloud/eip/v2/model/DeletePublicipResponse.h>
#include <huaweicloud/eip/v2/model/DeletePublicipTagRequest.h>
#include <huaweicloud/eip/v2/model/DeletePublicipTagResponse.h>
#include <huaweicloud/eip/v2/model/ListPublicipTagsRequest.h>
#include <huaweicloud/eip/v2/model/ListPublicipTagsResponse.h>
#include <huaweicloud/eip/v2/model/ListPublicipsByTagsRequest.h>
#include <huaweicloud/eip/v2/model/ListPublicipsByTagsRequestBody.h>
#include <huaweicloud/eip/v2/model/ListPublicipsByTagsResponse.h>
#include <huaweicloud/eip/v2/model/ListPublicipsRequest.h>
#include <huaweicloud/eip/v2/model/ListPublicipsResponse.h>
#include <huaweicloud/eip/v2/model/ShowPublicIpTypeRequest.h>
#include <huaweicloud/eip/v2/model/ShowPublicIpTypeResponse.h>
#include <huaweicloud/eip/v2/model/ShowPublicipRequest.h>
#include <huaweicloud/eip/v2/model/ShowPublicipResponse.h>
#include <huaweicloud/eip/v2/model/ShowPublicipTagsRequest.h>
#include <huaweicloud/eip/v2/model/ShowPublicipTagsResponse.h>
#include <huaweicloud/eip/v2/model/UpdatePublicipRequest.h>
#include <huaweicloud/eip/v2/model/UpdatePublicipResponse.h>
#include <huaweicloud/eip/v2/model/UpdatePublicipsRequestBody.h>
#include <string>

#include <huaweicloud/eip/v2/model/ShowResourcesJobDetailRequest.h>
#include <huaweicloud/eip/v2/model/ShowResourcesJobDetailResponse.h>
#include <string>

#include <huaweicloud/eip/v2/model/NeutronCreateFloatingIpRequest.h>
#include <huaweicloud/eip/v2/model/NeutronCreateFloatingIpRequestBody.h>
#include <huaweicloud/eip/v2/model/NeutronCreateFloatingIpResponse.h>
#include <huaweicloud/eip/v2/model/NeutronDeleteFloatingIpRequest.h>
#include <huaweicloud/eip/v2/model/NeutronDeleteFloatingIpResponse.h>
#include <huaweicloud/eip/v2/model/NeutronListFloatingIpsRequest.h>
#include <huaweicloud/eip/v2/model/NeutronListFloatingIpsResponse.h>
#include <huaweicloud/eip/v2/model/NeutronShowFloatingIpRequest.h>
#include <huaweicloud/eip/v2/model/NeutronShowFloatingIpResponse.h>
#include <huaweicloud/eip/v2/model/NeutronUpdateFloatingIpRequest.h>
#include <huaweicloud/eip/v2/model/NeutronUpdateFloatingIpRequestBody.h>
#include <huaweicloud/eip/v2/model/NeutronUpdateFloatingIpResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Eip::V2::Model;

class HUAWEICLOUD_EIP_V2_EXPORT  EipClient : public Client
{
public:

    EipClient();

    virtual ~EipClient();

    static ClientBuilder<EipClient> newBuilder();

    // 共享带宽插入弹性公网IP
    //
    // 共享带宽插入弹性公网IP。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddPublicipsIntoSharedBandwidthResponse> addPublicipsIntoSharedBandwidth(
        AddPublicipsIntoSharedBandwidthRequest &request
    );
    // 批量创建共享带宽
    //
    // 批量创建共享带宽。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateSharedBandwidthsResponse> batchCreateSharedBandwidths(
        BatchCreateSharedBandwidthsRequest &request
    );
    // 按需转包API
    //
    // 租户按需转包接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeBandwidthToPeriodResponse> changeBandwidthToPeriod(
        ChangeBandwidthToPeriodRequest &request
    );
    // 创建共享带宽
    //
    // 创建共享带宽。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSharedBandwidthResponse> createSharedBandwidth(
        CreateSharedBandwidthRequest &request
    );
    // 删除共享带宽
    //
    // 删除共享带宽。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSharedBandwidthResponse> deleteSharedBandwidth(
        DeleteSharedBandwidthRequest &request
    );
    // 查询带宽加油包列表
    //
    // 查询带宽加油包列表信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBandwidthPkgResponse> listBandwidthPkg(
        ListBandwidthPkgRequest &request
    );
    // 查询带宽列表
    //
    // 查询带宽列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBandwidthsResponse> listBandwidths(
        ListBandwidthsRequest &request
    );
    // 查询配额接口
    //
    // 查询配额
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListQuotasResponse> listQuotas(
        ListQuotasRequest &request
    );
    // 共享带宽移除弹性公网IP
    //
    // 共享带宽移除弹性公网IP。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RemovePublicipsFromSharedBandwidthResponse> removePublicipsFromSharedBandwidth(
        RemovePublicipsFromSharedBandwidthRequest &request
    );
    // 查询带宽
    //
    // 查询带宽
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBandwidthResponse> showBandwidth(
        ShowBandwidthRequest &request
    );
    // 更新带宽
    //
    // 更新带宽。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateBandwidthResponse> updateBandwidth(
        UpdateBandwidthRequest &request
    );
    // 更新包周期带宽
    //
    // 更新带宽。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePrePaidBandwidthResponse> updatePrePaidBandwidth(
        UpdatePrePaidBandwidthRequest &request
    );

    // 批量创建弹性公网IP资源标签
    //
    // 为指定的弹性公网IP资源实例批量添加标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreatePublicipTagsResponse> batchCreatePublicipTags(
        BatchCreatePublicipTagsRequest &request
    );
    // 批量创建弹性公网IP
    //
    // 批量创建弹性公网IP
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreatePublicipsResponse> batchCreatePublicips(
        BatchCreatePublicipsRequest &request
    );
    // 批量删除弹性公网IP
    //
    // 批量删除弹性公网IP
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeletePublicIpResponse> batchDeletePublicIp(
        BatchDeletePublicIpRequest &request
    );
    // 批量删除弹性公网IP资源标签
    //
    // 为指定的弹性公网IP资源实例批量删除标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeletePublicipTagsResponse> batchDeletePublicipTags(
        BatchDeletePublicipTagsRequest &request
    );
    // 批量解绑弹性公网IP
    //
    // 批量解绑弹性公网IP
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDisassociatePublicipsResponse> batchDisassociatePublicips(
        BatchDisassociatePublicipsRequest &request
    );
    // 按需转包接口
    //
    // 租户按需转包接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangePublicipToPeriodResponse> changePublicipToPeriod(
        ChangePublicipToPeriodRequest &request
    );
    // 查询PublicIp数量
    //
    // 查询PublicIp数量
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountPublicIpResponse> countPublicIp(
        CountPublicIpRequest &request
    );
    // 查询PublicIp实例数
    //
    // 查询PublicIp实例数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountPublicIpInstanceResponse> countPublicIpInstance(
        CountPublicIpInstanceRequest &request
    );
    // 申请包周期弹性公网IP
    //
    // 申请包年包月的弹性公网IP。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePrePaidPublicipResponse> createPrePaidPublicip(
        CreatePrePaidPublicipRequest &request
    );
    // 申请弹性公网IP
    //
    // 申请弹性公网IP，支持IPv4和IPv6。
    //  弹性公网IP（Elastic IP）提供独立的公网IP资源，包括公网IP地址与公网出口带宽服务。可以与弹性云服务器、裸金属服务器、虚拟IP、弹性负载均衡、NAT网关等资源灵活地绑定及解绑。拥有多种灵活的计费方式，可以满足各种业务场景的需要。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePublicipResponse> createPublicip(
        CreatePublicipRequest &request
    );
    // 创建弹性公网IP资源标签
    //
    // 给指定弹性IP资源实例增加标签信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePublicipTagResponse> createPublicipTag(
        CreatePublicipTagRequest &request
    );
    // 删除弹性公网IP
    //
    // 删除弹性公网IP,绑定状态eip不允许直接删除。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePublicipResponse> deletePublicip(
        DeletePublicipRequest &request
    );
    // 删除弹性公网IP的标签
    //
    // 删除指定弹性公网IP的标签信息。其中project_id是项目ID，publicip_id 是要操作的弹性公网IP的id。key是要删除标签的键。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePublicipTagResponse> deletePublicipTag(
        DeletePublicipTagRequest &request
    );
    // 查询租户的弹性公网IP标签
    //
    // 查询租户在指定区域和实例类型的所有标签集合。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPublicipTagsResponse> listPublicipTags(
        ListPublicipTagsRequest &request
    );
    // 查询弹性公网IP列表
    //
    // 查询弹性公网IP列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPublicipsResponse> listPublicips(
        ListPublicipsRequest &request
    );
    // 按标签查询弹性公网IP列表
    //
    // 使用标签过滤弹性公网IP。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPublicipsByTagsResponse> listPublicipsByTags(
        ListPublicipsByTagsRequest &request
    );
    // 查询PublicIp类型
    //
    // 查询PublicIp类型
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPublicIpTypeResponse> showPublicIpType(
        ShowPublicIpTypeRequest &request
    );
    // 查询弹性公网IP
    //
    // 查询指定的弹性公网IP。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPublicipResponse> showPublicip(
        ShowPublicipRequest &request
    );
    // 查询弹性公网IP的标签
    //
    // 查询指定弹性IP实例的标签信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPublicipTagsResponse> showPublicipTags(
        ShowPublicipTagsRequest &request
    );
    // 更新弹性公网IP
    //
    // 更新弹性公网IP，将弹性公网IP跟一个网卡绑定或者解绑定，转换IP地址版本类型。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePublicipResponse> updatePublicip(
        UpdatePublicipRequest &request
    );

    // 查询Job状态接口
    //
    // 查询Job状态接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowResourcesJobDetailResponse> showResourcesJobDetail(
        ShowResourcesJobDetailRequest &request
    );

    // 创建浮动IP
    //
    // 创建浮动IP的外部网络UUID，请使用GET /v2.0/networks?router:external&#x3D;True或neutron net-external-list方式获取。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronCreateFloatingIpResponse> neutronCreateFloatingIp(
        NeutronCreateFloatingIpRequest &request
    );
    // 删除浮动IP
    //
    // 删除指定的浮动IP。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronDeleteFloatingIpResponse> neutronDeleteFloatingIp(
        NeutronDeleteFloatingIpRequest &request
    );
    // 查询浮动IP列表
    //
    // 查询提交请求的租户有权限操作的所有浮动IP地址。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronListFloatingIpsResponse> neutronListFloatingIps(
        NeutronListFloatingIpsRequest &request
    );
    // 查询浮动IP
    //
    // 查询浮动IP详情，包括浮动IP状态，浮动IP所属路由器ID，浮动IP的外部网络ID等等。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronShowFloatingIpResponse> neutronShowFloatingIp(
        NeutronShowFloatingIpRequest &request
    );
    // 更新浮动IP
    //
    // 更新浮动IP。
    //  更新时需在URL中给出浮动IP地址的ID。
    //  port_id 为空，则表示浮动IP从端口解绑。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
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

template class HUAWEICLOUD_EIP_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Eip::V2::EipClient>;

#endif // HUAWEICLOUD_SDK_EIP_V2_EipClient_H_

