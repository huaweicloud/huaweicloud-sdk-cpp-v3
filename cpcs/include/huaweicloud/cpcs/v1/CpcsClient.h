#ifndef HUAWEICLOUD_SDK_CPCS_V1_CpcsClient_H_
#define HUAWEICLOUD_SDK_CPCS_V1_CpcsClient_H_

#include <huaweicloud/cpcs/v1/CpcsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/cpcs/v1/model/AssociateAppsRequest.h>
#include <huaweicloud/cpcs/v1/model/AssociateAppsRequestBody.h>
#include <huaweicloud/cpcs/v1/model/AssociateAppsResponse.h>
#include <huaweicloud/cpcs/v1/model/AuthorizeAccessKeysRequest.h>
#include <huaweicloud/cpcs/v1/model/AuthorizeAccessKeysRequestBody.h>
#include <huaweicloud/cpcs/v1/model/AuthorizeAccessKeysResponse.h>
#include <huaweicloud/cpcs/v1/model/BatchAccessKeysRequestBody.h>
#include <huaweicloud/cpcs/v1/model/BatchDisableAccessKeysRequest.h>
#include <huaweicloud/cpcs/v1/model/BatchDisableAccessKeysResponse.h>
#include <huaweicloud/cpcs/v1/model/BatchEnableAccessKeysRequest.h>
#include <huaweicloud/cpcs/v1/model/BatchEnableAccessKeysResponse.h>
#include <huaweicloud/cpcs/v1/model/CancelAuthorizeAccessKeysRequest.h>
#include <huaweicloud/cpcs/v1/model/CancelAuthorizeAccessKeysResponse.h>
#include <huaweicloud/cpcs/v1/model/CreateAppAccessKeyRequest.h>
#include <huaweicloud/cpcs/v1/model/CreateAppAccessKeyRequestBody.h>
#include <huaweicloud/cpcs/v1/model/CreateAppAccessKeyResponse.h>
#include <huaweicloud/cpcs/v1/model/CreateAppRequest.h>
#include <huaweicloud/cpcs/v1/model/CreateAppRequestBody.h>
#include <huaweicloud/cpcs/v1/model/CreateAppResponse.h>
#include <huaweicloud/cpcs/v1/model/CreateClusterRequest.h>
#include <huaweicloud/cpcs/v1/model/CreateClusterRequestBody.h>
#include <huaweicloud/cpcs/v1/model/CreateClusterResponse.h>
#include <huaweicloud/cpcs/v1/model/DeAuthorizeAccessKeysRequestBody.h>
#include <huaweicloud/cpcs/v1/model/DeleteAccessKeyRequest.h>
#include <huaweicloud/cpcs/v1/model/DeleteAccessKeyResponse.h>
#include <huaweicloud/cpcs/v1/model/DeleteAppRequest.h>
#include <huaweicloud/cpcs/v1/model/DeleteAppResponse.h>
#include <huaweicloud/cpcs/v1/model/DeleteCcspClusterRequest.h>
#include <huaweicloud/cpcs/v1/model/DeleteCcspClusterResponse.h>
#include <huaweicloud/cpcs/v1/model/DisAssociateAppsRequestBody.h>
#include <huaweicloud/cpcs/v1/model/DisableCcspInstanceRequest.h>
#include <huaweicloud/cpcs/v1/model/DisableCcspInstanceResponse.h>
#include <huaweicloud/cpcs/v1/model/DisassociateAppsRequest.h>
#include <huaweicloud/cpcs/v1/model/DisassociateAppsResponse.h>
#include <huaweicloud/cpcs/v1/model/EnableCcspInstanceRequest.h>
#include <huaweicloud/cpcs/v1/model/EnableCcspInstanceResponse.h>
#include <huaweicloud/cpcs/v1/model/ListCcspTenantImagesRequest.h>
#include <huaweicloud/cpcs/v1/model/ListCcspTenantImagesResponse.h>
#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/cpcs/v1/model/ShowAccessKeyRequest.h>
#include <huaweicloud/cpcs/v1/model/ShowAccessKeyResponse.h>
#include <huaweicloud/cpcs/v1/model/ShowAppAccessKeyListRequest.h>
#include <huaweicloud/cpcs/v1/model/ShowAppAccessKeyListResponse.h>
#include <huaweicloud/cpcs/v1/model/ShowAppListRequest.h>
#include <huaweicloud/cpcs/v1/model/ShowAppListResponse.h>
#include <huaweicloud/cpcs/v1/model/ShowAssociationListRequest.h>
#include <huaweicloud/cpcs/v1/model/ShowAssociationListResponse.h>
#include <huaweicloud/cpcs/v1/model/ShowAvailableAzRequest.h>
#include <huaweicloud/cpcs/v1/model/ShowAvailableAzResponse.h>
#include <huaweicloud/cpcs/v1/model/ShowCcspClusterListRequest.h>
#include <huaweicloud/cpcs/v1/model/ShowCcspClusterListResponse.h>
#include <huaweicloud/cpcs/v1/model/ShowCcspClusterRequest.h>
#include <huaweicloud/cpcs/v1/model/ShowCcspClusterResponse.h>
#include <huaweicloud/cpcs/v1/model/ShowCcspInstanceInfoRequest.h>
#include <huaweicloud/cpcs/v1/model/ShowCcspInstanceInfoResponse.h>
#include <huaweicloud/cpcs/v1/model/ShowClusterAccessKeyListRequest.h>
#include <huaweicloud/cpcs/v1/model/ShowClusterAccessKeyListResponse.h>
#include <huaweicloud/cpcs/v1/model/ShowClusterUriRequest.h>
#include <huaweicloud/cpcs/v1/model/ShowClusterUriResponse.h>
#include <huaweicloud/cpcs/v1/model/ShowResourceInfoRequest.h>
#include <huaweicloud/cpcs/v1/model/ShowResourceInfoResponse.h>
#include <huaweicloud/cpcs/v1/model/ShowVmMonitorRequest.h>
#include <huaweicloud/cpcs/v1/model/ShowVmMonitorResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Cpcs::V1::Model;

class HUAWEICLOUD_CPCS_V1_EXPORT  CpcsClient : public Client
{
public:

    CpcsClient();

    virtual ~CpcsClient();

    static ClientBuilder<CpcsClient> newBuilder();

    // 创建密码服务集群与应用绑定关系
    //
    // 创建密码服务集群与应用绑定关系
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AssociateAppsResponse> associateApps(
        AssociateAppsRequest &request
    );
    // 密码服务集群授予应用访问密钥的访问权限
    //
    // 密码服务集群授予应用访问密钥的访问权限
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AuthorizeAccessKeysResponse> authorizeAccessKeys(
        AuthorizeAccessKeysRequest &request
    );
    // 停用应用的访问密钥
    //
    // 停用应用的访问密钥
    // &gt; 只有当访问密钥处于“启用”状态时，方可调用此接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDisableAccessKeysResponse> batchDisableAccessKeys(
        BatchDisableAccessKeysRequest &request
    );
    // 启用应用的访问密钥
    //
    // 启用应用的访问密钥
    // &gt; 只有当访问密钥处于“停用”状态时，方可调用此接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchEnableAccessKeysResponse> batchEnableAccessKeys(
        BatchEnableAccessKeysRequest &request
    );
    // 密码服务集群解除对访问密钥的授权
    //
    // 密码服务集群解除对访问密钥的授权
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelAuthorizeAccessKeysResponse> cancelAuthorizeAccessKeys(
        CancelAuthorizeAccessKeysRequest &request
    );
    // 创建应用
    //
    // 创建应用
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAppResponse> createApp(
        CreateAppRequest &request
    );
    // 创建访问密钥
    //
    // 创建访问密钥
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAppAccessKeyResponse> createAppAccessKey(
        CreateAppAccessKeyRequest &request
    );
    // 创建密码服务集群
    //
    // 创建密码服务集群
    // &gt; 调用接口之后返回订单ID，需要到“待支付订单里面”支付成功之后才能创建密码服务集群。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateClusterResponse> createCluster(
        CreateClusterRequest &request
    );
    // 删除应用的访问密钥
    //
    // 删除应用的访问密钥
    // &gt; 只有当访问密钥处于“停用”状态时，方可调用此接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAccessKeyResponse> deleteAccessKey(
        DeleteAccessKeyRequest &request
    );
    // 删除应用
    //
    // 删除应用
    // &gt; 只有当应用与任何其它服务没有绑定关系的情况下，方可进行集群删除操作该操作不可恢复，请谨慎执行
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAppResponse> deleteApp(
        DeleteAppRequest &request
    );
    // 删除密码服务集群
    //
    // 删除密码服务集群，即释放密码服务集群所有服务实例以及对应的VSM集群实例，并删除集群相关信息
    // &gt; 只有当集群与任何应用都没有绑定关系的情况下，且处于“运行中”状态，且退订了集群中所有实例，方可进行集群删除操作，该操作不可恢复，请谨慎执行
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteCcspClusterResponse> deleteCcspCluster(
        DeleteCcspClusterRequest &request
    );
    // 停用密码服务实例的业务功能
    //
    // 停用密码服务实例的业务功能
    // &gt; 只有当密码服务实例处于“启用”状态时，方可调用此接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisableCcspInstanceResponse> disableCcspInstance(
        DisableCcspInstanceRequest &request
    );
    // 解除密码服务集群与应用绑定关系
    //
    // 解除密码服务集群与应用绑定关系
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisassociateAppsResponse> disassociateApps(
        DisassociateAppsRequest &request
    );
    // 启用密码服务实例的业务功能
    //
    // 启用密码服务实例的业务功能
    // &gt; 只有当密码服务实例处于“停用”状态时，方可调用此接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableCcspInstanceResponse> enableCcspInstance(
        EnableCcspInstanceRequest &request
    );
    // 查询密码服务的镜像
    //
    // 查询密码服务的镜像
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCcspTenantImagesResponse> listCcspTenantImages(
        ListCcspTenantImagesRequest &request
    );
    // 下载访问密钥
    //
    // 下载访问密钥且只能下载一次。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAccessKeyResponse> showAccessKey(
        ShowAccessKeyRequest &request
    );
    // 查询应用的访问密钥列表
    //
    // 查询应用的访问密钥列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAppAccessKeyListResponse> showAppAccessKeyList(
        ShowAppAccessKeyListRequest &request
    );
    // 查询应用列表
    //
    // 查询应用列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAppListResponse> showAppList(
        ShowAppListRequest &request
    );
    // 查询密码服务集群与应用的绑定关系列表
    //
    // 查询密码服务集群与应用的绑定关系列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAssociationListResponse> showAssociationList(
        ShowAssociationListRequest &request
    );
    // 查询可创建密码服务集群的可用区列表
    //
    // 查询可创建密码服务集群的可用区列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAvailableAzResponse> showAvailableAz(
        ShowAvailableAzRequest &request
    );
    // 查询密码服务集群详情
    //
    // 查询密码服务集群信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCcspClusterResponse> showCcspCluster(
        ShowCcspClusterRequest &request
    );
    // 查询密码服务集群列表
    //
    // 查询密码服务集群列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCcspClusterListResponse> showCcspClusterList(
        ShowCcspClusterListRequest &request
    );
    // 查询密码服务实例列表
    //
    // 查询密码服务实例列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCcspInstanceInfoResponse> showCcspInstanceInfo(
        ShowCcspInstanceInfoRequest &request
    );
    // 查询密码服务集群已授权的访问密钥列表
    //
    // 查询密码服务集群已授权的访问密钥列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowClusterAccessKeyListResponse> showClusterAccessKeyList(
        ShowClusterAccessKeyListRequest &request
    );
    // 获取密码服务管理界面URL
    //
    // 获取密码服务管理界面URL
    // &gt; URL存在有效期，URL失效后无法跳转管理界面，需要重新获取URL
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowClusterUriResponse> showClusterUri(
        ShowClusterUriRequest &request
    );
    // 查询租户的资源分布信息
    //
    // 查询租户的资源分布信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowResourceInfoResponse> showResourceInfo(
        ShowResourceInfoRequest &request
    );
    // 密码资源指标监控
    //
    // 获取密码服务实例与虚拟密码机实例的指标（cpu使用率，内存使用率等指标）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVmMonitorResponse> showVmMonitor(
        ShowVmMonitorRequest &request
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

template class HUAWEICLOUD_CPCS_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Cpcs::V1::CpcsClient>;

#endif // HUAWEICLOUD_SDK_CPCS_V1_CpcsClient_H_

