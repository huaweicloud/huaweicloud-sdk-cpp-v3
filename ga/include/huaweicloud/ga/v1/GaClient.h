#ifndef HUAWEICLOUD_SDK_GA_V1_GaClient_H_
#define HUAWEICLOUD_SDK_GA_V1_GaClient_H_

#include <huaweicloud/ga/v1/GaExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/ga/v1/model/CreateAcceleratorRequest.h>
#include <huaweicloud/ga/v1/model/CreateAcceleratorRequestBody.h>
#include <huaweicloud/ga/v1/model/CreateAcceleratorResponse.h>
#include <huaweicloud/ga/v1/model/DeleteAcceleratorRequest.h>
#include <huaweicloud/ga/v1/model/DeleteAcceleratorResponse.h>
#include <huaweicloud/ga/v1/model/ListAcceleratorsRequest.h>
#include <huaweicloud/ga/v1/model/ListAcceleratorsResponse.h>
#include <huaweicloud/ga/v1/model/ShowAcceleratorRequest.h>
#include <huaweicloud/ga/v1/model/ShowAcceleratorResponse.h>
#include <huaweicloud/ga/v1/model/UpdateAcceleratorRequest.h>
#include <huaweicloud/ga/v1/model/UpdateAcceleratorRequestBody.h>
#include <huaweicloud/ga/v1/model/UpdateAcceleratorResponse.h>
#include <string>

#include <huaweicloud/ga/v1/model/ListByoipPoolsRequest.h>
#include <huaweicloud/ga/v1/model/ListByoipPoolsResponse.h>
#include <string>

#include <huaweicloud/ga/v1/model/CreateEndpointRequest.h>
#include <huaweicloud/ga/v1/model/CreateEndpointRequestBody.h>
#include <huaweicloud/ga/v1/model/CreateEndpointResponse.h>
#include <huaweicloud/ga/v1/model/DeleteEndpointRequest.h>
#include <huaweicloud/ga/v1/model/DeleteEndpointResponse.h>
#include <huaweicloud/ga/v1/model/ListEndpointsRequest.h>
#include <huaweicloud/ga/v1/model/ListEndpointsResponse.h>
#include <huaweicloud/ga/v1/model/ShowEndpointRequest.h>
#include <huaweicloud/ga/v1/model/ShowEndpointResponse.h>
#include <huaweicloud/ga/v1/model/UpdateEndpointRequest.h>
#include <huaweicloud/ga/v1/model/UpdateEndpointRequestBody.h>
#include <huaweicloud/ga/v1/model/UpdateEndpointResponse.h>
#include <string>

#include <huaweicloud/ga/v1/model/CreateEndpointGroupRequest.h>
#include <huaweicloud/ga/v1/model/CreateEndpointGroupRequestBody.h>
#include <huaweicloud/ga/v1/model/CreateEndpointGroupResponse.h>
#include <huaweicloud/ga/v1/model/DeleteEndpointGroupRequest.h>
#include <huaweicloud/ga/v1/model/DeleteEndpointGroupResponse.h>
#include <huaweicloud/ga/v1/model/ListEndpointGroupsRequest.h>
#include <huaweicloud/ga/v1/model/ListEndpointGroupsResponse.h>
#include <huaweicloud/ga/v1/model/ShowEndpointGroupRequest.h>
#include <huaweicloud/ga/v1/model/ShowEndpointGroupResponse.h>
#include <huaweicloud/ga/v1/model/UpdateEndpointGroupRequest.h>
#include <huaweicloud/ga/v1/model/UpdateEndpointGroupRequestBody.h>
#include <huaweicloud/ga/v1/model/UpdateEndpointGroupResponse.h>
#include <string>

#include <huaweicloud/ga/v1/model/CreateHealthCheckRequest.h>
#include <huaweicloud/ga/v1/model/CreateHealthCheckRequestBody.h>
#include <huaweicloud/ga/v1/model/CreateHealthCheckResponse.h>
#include <huaweicloud/ga/v1/model/DeleteHealthCheckRequest.h>
#include <huaweicloud/ga/v1/model/DeleteHealthCheckResponse.h>
#include <huaweicloud/ga/v1/model/ListHealthChecksRequest.h>
#include <huaweicloud/ga/v1/model/ListHealthChecksResponse.h>
#include <huaweicloud/ga/v1/model/ShowHealthCheckRequest.h>
#include <huaweicloud/ga/v1/model/ShowHealthCheckResponse.h>
#include <huaweicloud/ga/v1/model/UpdateHealthCheckRequest.h>
#include <huaweicloud/ga/v1/model/UpdateHealthCheckRequestBody.h>
#include <huaweicloud/ga/v1/model/UpdateHealthCheckResponse.h>
#include <string>

#include <huaweicloud/ga/v1/model/AddIpGroupIpRequest.h>
#include <huaweicloud/ga/v1/model/AddIpGroupIpRequestBody.h>
#include <huaweicloud/ga/v1/model/AddIpGroupIpResponse.h>
#include <huaweicloud/ga/v1/model/AssociateListenerRequest.h>
#include <huaweicloud/ga/v1/model/AssociateListenerRequestBody.h>
#include <huaweicloud/ga/v1/model/AssociateListenerResponse.h>
#include <huaweicloud/ga/v1/model/CreateIpGroupRequest.h>
#include <huaweicloud/ga/v1/model/CreateIpGroupRequestBody.h>
#include <huaweicloud/ga/v1/model/CreateIpGroupResponse.h>
#include <huaweicloud/ga/v1/model/DeleteIpGroupRequest.h>
#include <huaweicloud/ga/v1/model/DeleteIpGroupResponse.h>
#include <huaweicloud/ga/v1/model/DisassociateListenerRequest.h>
#include <huaweicloud/ga/v1/model/DisassociateListenerRequestBody.h>
#include <huaweicloud/ga/v1/model/DisassociateListenerResponse.h>
#include <huaweicloud/ga/v1/model/ListIpGroupsRequest.h>
#include <huaweicloud/ga/v1/model/ListIpGroupsResponse.h>
#include <huaweicloud/ga/v1/model/RemoveIpGroupIpRequest.h>
#include <huaweicloud/ga/v1/model/RemoveIpGroupIpRequestBody.h>
#include <huaweicloud/ga/v1/model/RemoveIpGroupIpResponse.h>
#include <huaweicloud/ga/v1/model/ShowIpGroupRequest.h>
#include <huaweicloud/ga/v1/model/ShowIpGroupResponse.h>
#include <huaweicloud/ga/v1/model/UpdateIpGroupRequest.h>
#include <huaweicloud/ga/v1/model/UpdateIpGroupRequestBody.h>
#include <huaweicloud/ga/v1/model/UpdateIpGroupResponse.h>
#include <string>

#include <huaweicloud/ga/v1/model/CreateListenerRequest.h>
#include <huaweicloud/ga/v1/model/CreateListenerRequestBody.h>
#include <huaweicloud/ga/v1/model/CreateListenerResponse.h>
#include <huaweicloud/ga/v1/model/DeleteListenerRequest.h>
#include <huaweicloud/ga/v1/model/DeleteListenerResponse.h>
#include <huaweicloud/ga/v1/model/ListListenersRequest.h>
#include <huaweicloud/ga/v1/model/ListListenersResponse.h>
#include <huaweicloud/ga/v1/model/ShowListenerRequest.h>
#include <huaweicloud/ga/v1/model/ShowListenerResponse.h>
#include <huaweicloud/ga/v1/model/UpdateListenerRequest.h>
#include <huaweicloud/ga/v1/model/UpdateListenerRequestBody.h>
#include <huaweicloud/ga/v1/model/UpdateListenerResponse.h>
#include <string>

#include <huaweicloud/ga/v1/model/CreateLogtankRequest.h>
#include <huaweicloud/ga/v1/model/CreateLogtankRequestBody.h>
#include <huaweicloud/ga/v1/model/CreateLogtankResponse.h>
#include <huaweicloud/ga/v1/model/DeleteLogtankRequest.h>
#include <huaweicloud/ga/v1/model/DeleteLogtankResponse.h>
#include <huaweicloud/ga/v1/model/ListLogtanksRequest.h>
#include <huaweicloud/ga/v1/model/ListLogtanksResponse.h>
#include <huaweicloud/ga/v1/model/ShowLogtankRequest.h>
#include <huaweicloud/ga/v1/model/ShowLogtankResponse.h>
#include <huaweicloud/ga/v1/model/UpdateLogtankRequest.h>
#include <huaweicloud/ga/v1/model/UpdateLogtankRequestBody.h>
#include <huaweicloud/ga/v1/model/UpdateLogtankResponse.h>
#include <string>

#include <huaweicloud/ga/v1/model/ListAllPopsRequest.h>
#include <huaweicloud/ga/v1/model/ListAllPopsResponse.h>
#include <string>

#include <huaweicloud/ga/v1/model/ListTenantQuotasRequest.h>
#include <huaweicloud/ga/v1/model/ListTenantQuotasResponse.h>
#include <string>

#include <huaweicloud/ga/v1/model/ListRegionsRequest.h>
#include <huaweicloud/ga/v1/model/ListRegionsResponse.h>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Ga::V1::Model;

class HUAWEICLOUD_GA_V1_EXPORT  GaClient : public Client
{
public:

    GaClient();

    virtual ~GaClient();

    static ClientBuilder<GaClient> newBuilder();

    // 创建全球加速器
    //
    // 创建全球加速器。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAcceleratorResponse> createAccelerator(
        CreateAcceleratorRequest &request
    );
    // 删除全球加速器
    //
    // 删除全球加速器。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAcceleratorResponse> deleteAccelerator(
        DeleteAcceleratorRequest &request
    );
    // 查询全球加速器列表
    //
    // 查询全球加速器列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAcceleratorsResponse> listAccelerators(
        ListAcceleratorsRequest &request
    );
    // 查询全球加速器详情
    //
    // 查询全球加速器详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAcceleratorResponse> showAccelerator(
        ShowAcceleratorRequest &request
    );
    // 更新全球加速器
    //
    // 更新全球加速器。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAcceleratorResponse> updateAccelerator(
        UpdateAcceleratorRequest &request
    );

    // 查询自带IP地址池列表
    //
    // 查询自带IP地址池列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListByoipPoolsResponse> listByoipPools(
        ListByoipPoolsRequest &request
    );

    // 创建终端节点
    //
    // 创建终端节点。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateEndpointResponse> createEndpoint(
        CreateEndpointRequest &request
    );
    // 删除终端节点
    //
    // 删除终端节点。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteEndpointResponse> deleteEndpoint(
        DeleteEndpointRequest &request
    );
    // 查询终端节点组下终端节点列表
    //
    // 查询终端节点组下终端节点列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEndpointsResponse> listEndpoints(
        ListEndpointsRequest &request
    );
    // 查询终端节点详情
    //
    // 查询终端节点详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowEndpointResponse> showEndpoint(
        ShowEndpointRequest &request
    );
    // 更新终端节点
    //
    // 更新终端节点。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateEndpointResponse> updateEndpoint(
        UpdateEndpointRequest &request
    );

    // 创建终端节点组
    //
    // 创建终端节点组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateEndpointGroupResponse> createEndpointGroup(
        CreateEndpointGroupRequest &request
    );
    // 删除终端节点组
    //
    // 删除终端节点组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteEndpointGroupResponse> deleteEndpointGroup(
        DeleteEndpointGroupRequest &request
    );
    // 查询终端节点组列表
    //
    // 查询终端节点组列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEndpointGroupsResponse> listEndpointGroups(
        ListEndpointGroupsRequest &request
    );
    // 查询终端节点组详情
    //
    // 查询终端节点组详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowEndpointGroupResponse> showEndpointGroup(
        ShowEndpointGroupRequest &request
    );
    // 更新终端节点组
    //
    // 更新终端节点组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateEndpointGroupResponse> updateEndpointGroup(
        UpdateEndpointGroupRequest &request
    );

    // 创建健康检查
    //
    // 创建健康检查。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateHealthCheckResponse> createHealthCheck(
        CreateHealthCheckRequest &request
    );
    // 删除健康检查
    //
    // 删除健康检查。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteHealthCheckResponse> deleteHealthCheck(
        DeleteHealthCheckRequest &request
    );
    // 查询健康检查列表
    //
    // 查询健康检查列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHealthChecksResponse> listHealthChecks(
        ListHealthChecksRequest &request
    );
    // 查询健康检查详情
    //
    // 查询健康检查详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHealthCheckResponse> showHealthCheck(
        ShowHealthCheckRequest &request
    );
    // 更新健康检查
    //
    // 更新健康检查。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateHealthCheckResponse> updateHealthCheck(
        UpdateHealthCheckRequest &request
    );

    // 添加IP地址组中的IP网段
    //
    // 添加IP地址组中的IP网段。
    // 该接口属于异步接口，接口返回后，后台的添加任务仍在执行；可以使用查询IP地址组详情接口查询状态，当IP地址组状态为ACTIVE时，表示条目添加完成。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddIpGroupIpResponse> addIpGroupIp(
        AddIpGroupIpRequest &request
    );
    // 绑定IP地址组与监听器
    //
    // 绑定IP地址组与监听器。
    // 该接口属于异步接口，接口返回后，后台的绑定任务仍在执行；可以使用查询IP地址组详情接口查询状态，当IP地址组状态为ACTIVE时，表示绑定完成。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AssociateListenerResponse> associateListener(
        AssociateListenerRequest &request
    );
    // 创建IP地址组
    //
    // 创建IP地址组。
    // 该接口属于异步接口，会先返回一个IP地址组ID，但后台的创建任务仍在执行；可以使用查询IP地址组详情接口查询状态，当IP地址组状态为ACTIVE时，表示IP地址组创建完成。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateIpGroupResponse> createIpGroup(
        CreateIpGroupRequest &request
    );
    // 删除IP地址组
    //
    // 删除IP地址组。
    // 该接口属于异步接口，接口返回后，后台的删除任务仍在执行；可以使用查询IP地址组详情接口查询状态，当查询不到该IP地址组时，表示删除完成；删除IP地址组时，若IP地址组已经绑定了监听器，则需要先解绑IP地址组与监听器，再进行删除。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteIpGroupResponse> deleteIpGroup(
        DeleteIpGroupRequest &request
    );
    // 解绑IP地址组与监听器
    //
    // 解绑IP地址组与监听器。
    // 该接口属于异步接口，接口返回后，后台的解绑任务仍在执行；可以使用查询IP地址组详情接口查询状态，当IP地址组状态为ACTIVE时，表示解绑完成。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisassociateListenerResponse> disassociateListener(
        DisassociateListenerRequest &request
    );
    // 查询IP地址组列表
    //
    // 查询IP地址组列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIpGroupsResponse> listIpGroups(
        ListIpGroupsRequest &request
    );
    // 删除IP地址组中的IP网段
    //
    // 删除IP地址组中的IP网段。
    // 该接口属于异步接口，接口返回后，后台的删除任务仍在执行；可以使用查询IP地址组详情接口查询状态，当IP地址组状态为ACTIVE时，表示条目删除完成。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RemoveIpGroupIpResponse> removeIpGroupIp(
        RemoveIpGroupIpRequest &request
    );
    // 查询IP地址组详情
    //
    // 查询IP地址组详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowIpGroupResponse> showIpGroup(
        ShowIpGroupRequest &request
    );
    // 更新IP地址组
    //
    // 更新IP地址组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateIpGroupResponse> updateIpGroup(
        UpdateIpGroupRequest &request
    );

    // 创建监听器
    //
    // 创建监听器。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateListenerResponse> createListener(
        CreateListenerRequest &request
    );
    // 删除监听器
    //
    // 删除监听器。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteListenerResponse> deleteListener(
        DeleteListenerRequest &request
    );
    // 查询监听器列表
    //
    // 查询监听器列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListListenersResponse> listListeners(
        ListListenersRequest &request
    );
    // 查询监听器详情
    //
    // 查询监听器详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowListenerResponse> showListener(
        ShowListenerRequest &request
    );
    // 更新监听器
    //
    // 更新监听器。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateListenerResponse> updateListener(
        UpdateListenerRequest &request
    );

    // 创建云日志
    //
    // 创建云日志。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateLogtankResponse> createLogtank(
        CreateLogtankRequest &request
    );
    // 删除云日志
    //
    // 删除云日志。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteLogtankResponse> deleteLogtank(
        DeleteLogtankRequest &request
    );
    // 查询云日志列表
    //
    // 查询云日志列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLogtanksResponse> listLogtanks(
        ListLogtanksRequest &request
    );
    // 查询云日志详情
    //
    // 查询云日志详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowLogtankResponse> showLogtank(
        ShowLogtankRequest &request
    );
    // 更新云日志
    //
    // 更新云日志。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateLogtankResponse> updateLogtank(
        UpdateLogtankRequest &request
    );

    // 查询pop列表
    //
    // 查询pop列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAllPopsResponse> listAllPops(
        ListAllPopsRequest &request
    );

    // 查询配额列表
    //
    // 查询配额列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTenantQuotasResponse> listTenantQuotas(
        ListTenantQuotasRequest &request
    );

    // 查询区域列表
    //
    // 查询区域列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRegionsResponse> listRegions(
        ListRegionsRequest &request
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

template class HUAWEICLOUD_GA_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Ga::V1::GaClient>;

#endif // HUAWEICLOUD_SDK_GA_V1_GaClient_H_

