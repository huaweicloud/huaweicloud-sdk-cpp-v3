#ifndef HUAWEICLOUD_SDK_EPS_V1_EpsClient_H_
#define HUAWEICLOUD_SDK_EPS_V1_EpsClient_H_

#include <huaweicloud/eps/v1/EpsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/eps/v1/model/CreateEnterpriseProjectRequest.h>
#include <huaweicloud/eps/v1/model/CreateEnterpriseProjectResponse.h>
#include <huaweicloud/eps/v1/model/DisableAction.h>
#include <huaweicloud/eps/v1/model/DisableEnterpriseProjectRequest.h>
#include <huaweicloud/eps/v1/model/DisableEnterpriseProjectResponse.h>
#include <huaweicloud/eps/v1/model/EnableAction.h>
#include <huaweicloud/eps/v1/model/EnableEnterpriseProjectRequest.h>
#include <huaweicloud/eps/v1/model/EnableEnterpriseProjectResponse.h>
#include <huaweicloud/eps/v1/model/EnterpriseProject.h>
#include <huaweicloud/eps/v1/model/ListApiVersionsRequest.h>
#include <huaweicloud/eps/v1/model/ListApiVersionsResponse.h>
#include <huaweicloud/eps/v1/model/ListEnterpriseProjectRequest.h>
#include <huaweicloud/eps/v1/model/ListEnterpriseProjectResponse.h>
#include <huaweicloud/eps/v1/model/ListProvidersRequest.h>
#include <huaweicloud/eps/v1/model/ListProvidersResponse.h>
#include <huaweicloud/eps/v1/model/MigrateResource.h>
#include <huaweicloud/eps/v1/model/MigrateResourceRequest.h>
#include <huaweicloud/eps/v1/model/MigrateResourceResponse.h>
#include <huaweicloud/eps/v1/model/ResqEpResouce.h>
#include <huaweicloud/eps/v1/model/ShowApiVersionRequest.h>
#include <huaweicloud/eps/v1/model/ShowApiVersionResponse.h>
#include <huaweicloud/eps/v1/model/ShowEnterpriseProjectQuotaRequest.h>
#include <huaweicloud/eps/v1/model/ShowEnterpriseProjectQuotaResponse.h>
#include <huaweicloud/eps/v1/model/ShowEnterpriseProjectRequest.h>
#include <huaweicloud/eps/v1/model/ShowEnterpriseProjectResponse.h>
#include <huaweicloud/eps/v1/model/ShowResourceBindEnterpriseProjectRequest.h>
#include <huaweicloud/eps/v1/model/ShowResourceBindEnterpriseProjectResponse.h>
#include <huaweicloud/eps/v1/model/UpdateEnterpriseProjectRequest.h>
#include <huaweicloud/eps/v1/model/UpdateEnterpriseProjectResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Eps::V1::Model;

class HUAWEICLOUD_EPS_V1_EXPORT  EpsClient : public Client
{
public:

    EpsClient();

    virtual ~EpsClient();

    static ClientBuilder<EpsClient> newBuilder();

    // 创建企业项目
    //
    // 创建企业项目。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateEnterpriseProjectResponse> createEnterpriseProject(
        CreateEnterpriseProjectRequest &request
    );
    // 停用企业项目
    //
    // 停用企业项目。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisableEnterpriseProjectResponse> disableEnterpriseProject(
        DisableEnterpriseProjectRequest &request
    );
    // 启用企业项目
    //
    // 启用企业项目。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableEnterpriseProjectResponse> enableEnterpriseProject(
        EnableEnterpriseProjectRequest &request
    );
    // 查询API版本列表
    //
    // 查询企业项目的API版本列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApiVersionsResponse> listApiVersions(
        ListApiVersionsRequest &request
    );
    // 查询企业项目列表
    //
    // 查询当前用户已授权的企业项目列表，用户可以使用企业项目绑定资源。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEnterpriseProjectResponse> listEnterpriseProject(
        ListEnterpriseProjectRequest &request
    );
    // 查询企业项目支持的服务
    //
    // 查询企业项目支持的服务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProvidersResponse> listProviders(
        ListProvidersRequest &request
    );
    // 迁移资源
    //
    // 迁移资源到目标企业项目。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<MigrateResourceResponse> migrateResource(
        MigrateResourceRequest &request
    );
    // 查询API版本号详情
    //
    // 查询指定的企业项目API版本号详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowApiVersionResponse> showApiVersion(
        ShowApiVersionRequest &request
    );
    // 查询企业项目详情
    //
    // 查询企业项目详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowEnterpriseProjectResponse> showEnterpriseProject(
        ShowEnterpriseProjectRequest &request
    );
    // 查询企业项目配额
    //
    // 查询企业项目的配额信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowEnterpriseProjectQuotaResponse> showEnterpriseProjectQuota(
        ShowEnterpriseProjectQuotaRequest &request
    );
    // 查询企业项目绑定的资源列表
    //
    // 查询企业项目下绑定的资源详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowResourceBindEnterpriseProjectResponse> showResourceBindEnterpriseProject(
        ShowResourceBindEnterpriseProjectRequest &request
    );
    // 修改企业项目
    //
    // 修改企业项目。当前仅支持修改名称和描述。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateEnterpriseProjectResponse> updateEnterpriseProject(
        UpdateEnterpriseProjectRequest &request
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

template class HUAWEICLOUD_EPS_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Eps::V1::EpsClient>;

#endif // HUAWEICLOUD_SDK_EPS_V1_EpsClient_H_

