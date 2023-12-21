#ifndef HUAWEICLOUD_SDK_EIP_V3_EipClient_H_
#define HUAWEICLOUD_SDK_EIP_V3_EipClient_H_

#include <huaweicloud/eip/v3/EipExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/eip/v3/model/ListBandwidthRequest.h>
#include <huaweicloud/eip/v3/model/ListBandwidthResponse.h>
#include <huaweicloud/eip/v3/model/ListBandwidthsLimitRequest.h>
#include <huaweicloud/eip/v3/model/ListBandwidthsLimitResponse.h>
#include <huaweicloud/eip/v3/model/ListCommonPoolsRequest.h>
#include <huaweicloud/eip/v3/model/ListCommonPoolsResponse.h>
#include <huaweicloud/eip/v3/model/ListEipBandwidthsRequest.h>
#include <huaweicloud/eip/v3/model/ListEipBandwidthsResponse.h>
#include <huaweicloud/eip/v3/model/ListPublicBorderGroupsRequest.h>
#include <huaweicloud/eip/v3/model/ListPublicBorderGroupsResponse.h>
#include <huaweicloud/eip/v3/model/ListPublicipPoolRequest.h>
#include <huaweicloud/eip/v3/model/ListPublicipPoolResponse.h>
#include <huaweicloud/eip/v3/model/ListShareBandwidthTypesRequest.h>
#include <huaweicloud/eip/v3/model/ListShareBandwidthTypesResponse.h>
#include <huaweicloud/eip/v3/model/ShowPublicipPoolRequest.h>
#include <huaweicloud/eip/v3/model/ShowPublicipPoolResponse.h>
#include <string>

#include <huaweicloud/eip/v3/model/AssociatePublicipsRequest.h>
#include <huaweicloud/eip/v3/model/AssociatePublicipsRequestBody.h>
#include <huaweicloud/eip/v3/model/AssociatePublicipsResponse.h>
#include <huaweicloud/eip/v3/model/AttachBatchPublicIpRequest.h>
#include <huaweicloud/eip/v3/model/AttachBatchPublicIpResponse.h>
#include <huaweicloud/eip/v3/model/AttachShareBandwidthRequest.h>
#include <huaweicloud/eip/v3/model/AttachShareBandwidthResponse.h>
#include <huaweicloud/eip/v3/model/AttachSharebwReq.h>
#include <huaweicloud/eip/v3/model/BatchAttachSharebwReq.h>
#include <huaweicloud/eip/v3/model/CountEipAvailableResourcesRequest.h>
#include <huaweicloud/eip/v3/model/CountEipAvailableResourcesResponse.h>
#include <huaweicloud/eip/v3/model/DetachBatchPublicIpRequest.h>
#include <huaweicloud/eip/v3/model/DetachBatchPublicIpResponse.h>
#include <huaweicloud/eip/v3/model/DetachBatchSharedbwReq.h>
#include <huaweicloud/eip/v3/model/DetachShareBandwidthRequest.h>
#include <huaweicloud/eip/v3/model/DetachShareBandwidthResponse.h>
#include <huaweicloud/eip/v3/model/DetachSharedbwReq.h>
#include <huaweicloud/eip/v3/model/DisableNat64Request.h>
#include <huaweicloud/eip/v3/model/DisableNat64Response.h>
#include <huaweicloud/eip/v3/model/DisassociatePublicipsRequest.h>
#include <huaweicloud/eip/v3/model/DisassociatePublicipsResponse.h>
#include <huaweicloud/eip/v3/model/EipResourcesAvailableV3RequestBody.h>
#include <huaweicloud/eip/v3/model/EnableNat64Request.h>
#include <huaweicloud/eip/v3/model/EnableNat64Response.h>
#include <huaweicloud/eip/v3/model/ListPublicipsRequest.h>
#include <huaweicloud/eip/v3/model/ListPublicipsResponse.h>
#include <huaweicloud/eip/v3/model/ShowPublicipRequest.h>
#include <huaweicloud/eip/v3/model/ShowPublicipResponse.h>
#include <huaweicloud/eip/v3/model/UpdatePublicipRequest.h>
#include <huaweicloud/eip/v3/model/UpdatePublicipResponse.h>
#include <huaweicloud/eip/v3/model/UpdatePublicipsRequestBody.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
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

    // 查询带宽列表
    //
    // 查询带宽列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBandwidthResponse> listBandwidth(
        ListBandwidthRequest &request
    );
    // 查看租户带宽限制
    //
    // 获取EIP带宽限制列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBandwidthsLimitResponse> listBandwidthsLimit(
        ListBandwidthsLimitRequest &request
    );
    // 查询公共池列表
    //
    // 查询公共池列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCommonPoolsResponse> listCommonPools(
        ListCommonPoolsRequest &request
    );
    // 查询带宽列表
    //
    // 查询带宽列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEipBandwidthsResponse> listEipBandwidths(
        ListEipBandwidthsRequest &request
    );
    // 查询公共池分组列表
    //
    // 查询公共池分组列表，包含名称和位置信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPublicBorderGroupsResponse> listPublicBorderGroups(
        ListPublicBorderGroupsRequest &request
    );
    // 查询公网IP池列表
    //
    // 全量查询公网IP池列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPublicipPoolResponse> listPublicipPool(
        ListPublicipPoolRequest &request
    );
    // 查询指定租户下的共享带宽类型列表
    //
    // 查询指定租户下的共享带宽类型列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListShareBandwidthTypesResponse> listShareBandwidthTypes(
        ListShareBandwidthTypesRequest &request
    );
    // 查询公网IP池详情
    //
    // 查询公网IP池详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPublicipPoolResponse> showPublicipPool(
        ShowPublicipPoolRequest &request
    );

    // 绑定弹性公网IP
    //
    // 绑定弹性公网IP
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AssociatePublicipsResponse> associatePublicips(
        AssociatePublicipsRequest &request
    );
    // 共享带宽批量加入弹性公网IP
    //
    // 共享带宽批量加入弹性公网IP
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AttachBatchPublicIpResponse> attachBatchPublicIp(
        AttachBatchPublicIpRequest &request
    );
    // 共享带宽加入弹性公网IP
    //
    // 共享带宽加入弹性公网IP
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AttachShareBandwidthResponse> attachShareBandwidth(
        AttachShareBandwidthRequest &request
    );
    // 查询弹性公网IP可用数
    //
    // IP池用于查询公网可用ip个数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountEipAvailableResourcesResponse> countEipAvailableResources(
        CountEipAvailableResourcesRequest &request
    );
    // 共享带宽批量移出弹性公网IP
    //
    // 共享带宽批量移出弹性公网IP
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DetachBatchPublicIpResponse> detachBatchPublicIp(
        DetachBatchPublicIpRequest &request
    );
    // 共享带宽移出弹性公网IP
    //
    // 共享带宽移出弹性公网IP
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DetachShareBandwidthResponse> detachShareBandwidth(
        DetachShareBandwidthRequest &request
    );
    // 弹性公网IP关闭NAT64
    //
    // 弹性公网IP关闭NAT64
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisableNat64Response> disableNat64(
        DisableNat64Request &request
    );
    // 解绑弹性公网IP
    //
    // 解绑弹性公网IP
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisassociatePublicipsResponse> disassociatePublicips(
        DisassociatePublicipsRequest &request
    );
    // 弹性公网IP开启NAT64
    //
    // 弹性公网IP开启NAT64
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableNat64Response> enableNat64(
        EnableNat64Request &request
    );
    // 全量查询弹性公网IP列表
    //
    // 查询弹性公网IP列表信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPublicipsResponse> listPublicips(
        ListPublicipsRequest &request
    );
    // 查询弹性公网IP详情
    //
    // 查询弹性公网IP详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPublicipResponse> showPublicip(
        ShowPublicipRequest &request
    );
    // 更新弹性公网IP
    //
    // 更新弹性公网IP
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePublicipResponse> updatePublicip(
        UpdatePublicipRequest &request
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

template class HUAWEICLOUD_EIP_V3_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Eip::V3::EipClient>;

#endif // HUAWEICLOUD_SDK_EIP_V3_EipClient_H_

