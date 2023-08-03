#ifndef HUAWEICLOUD_SDK_TMS_V1_TmsClient_H_
#define HUAWEICLOUD_SDK_TMS_V1_TmsClient_H_

#include <huaweicloud/tms/v1/TmsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/tms/v1/model/CreatePredefineTagsRequest.h>
#include <huaweicloud/tms/v1/model/CreatePredefineTagsResponse.h>
#include <huaweicloud/tms/v1/model/CreateResourceTagRequest.h>
#include <huaweicloud/tms/v1/model/CreateResourceTagResponse.h>
#include <huaweicloud/tms/v1/model/DeletePredefineTagsRequest.h>
#include <huaweicloud/tms/v1/model/DeletePredefineTagsResponse.h>
#include <huaweicloud/tms/v1/model/DeleteResourceTagRequest.h>
#include <huaweicloud/tms/v1/model/DeleteResourceTagResponse.h>
#include <huaweicloud/tms/v1/model/ListApiVersionsRequest.h>
#include <huaweicloud/tms/v1/model/ListApiVersionsResponse.h>
#include <huaweicloud/tms/v1/model/ListPredefineTagsRequest.h>
#include <huaweicloud/tms/v1/model/ListPredefineTagsResponse.h>
#include <huaweicloud/tms/v1/model/ListProvidersRequest.h>
#include <huaweicloud/tms/v1/model/ListProvidersResponse.h>
#include <huaweicloud/tms/v1/model/ListResourceRequest.h>
#include <huaweicloud/tms/v1/model/ListResourceResponse.h>
#include <huaweicloud/tms/v1/model/ListTagKeysRequest.h>
#include <huaweicloud/tms/v1/model/ListTagKeysResponse.h>
#include <huaweicloud/tms/v1/model/ListTagValuesRequest.h>
#include <huaweicloud/tms/v1/model/ListTagValuesResponse.h>
#include <huaweicloud/tms/v1/model/ModifyPrefineTag.h>
#include <huaweicloud/tms/v1/model/ReqCreatePredefineTag.h>
#include <huaweicloud/tms/v1/model/ReqCreateTag.h>
#include <huaweicloud/tms/v1/model/ReqDeletePredefineTag.h>
#include <huaweicloud/tms/v1/model/ReqDeleteTag.h>
#include <huaweicloud/tms/v1/model/ResqTagResource.h>
#include <huaweicloud/tms/v1/model/ShowApiVersionRequest.h>
#include <huaweicloud/tms/v1/model/ShowApiVersionResponse.h>
#include <huaweicloud/tms/v1/model/ShowResourceTagRequest.h>
#include <huaweicloud/tms/v1/model/ShowResourceTagResponse.h>
#include <huaweicloud/tms/v1/model/ShowTagQuotaRequest.h>
#include <huaweicloud/tms/v1/model/ShowTagQuotaResponse.h>
#include <huaweicloud/tms/v1/model/UpdatePredefineTagsRequest.h>
#include <huaweicloud/tms/v1/model/UpdatePredefineTagsResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Tms::V1::Model;

class HUAWEICLOUD_TMS_V1_EXPORT  TmsClient : public Client
{
public:

    TmsClient();

    virtual ~TmsClient();

    static ClientBuilder<TmsClient> newBuilder();

    // 创建预定义标签
    //
    // 用于创建预定标签。用户创建预定义标签后，可以使用预定义标签来给资源创建标签。该接口支持幂等特性和处理批量数据。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePredefineTagsResponse> createPredefineTags(
        CreatePredefineTagsRequest &request
    );
    // 批量添加标签
    //
    // 用于给云服务的多个资源添加标签，每个资源最多可添加10个标签，每次最多支持批量操作20个资源。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateResourceTagResponse> createResourceTag(
        CreateResourceTagRequest &request
    );
    // 删除预定义标签
    //
    // 用于删除预定标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePredefineTagsResponse> deletePredefineTags(
        DeletePredefineTagsRequest &request
    );
    // 批量移除标签
    //
    // 用于批量移除云服务多个资源的标签，每个资源最多支持移除10个标签，每次最多支持批量操作20个资源。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteResourceTagResponse> deleteResourceTag(
        DeleteResourceTagRequest &request
    );
    // 查询API版本列表
    //
    // 查询标签管理服务的API版本列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApiVersionsResponse> listApiVersions(
        ListApiVersionsRequest &request
    );
    // 查询预定义标签列表
    //
    // 用于查询预定义标签列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPredefineTagsResponse> listPredefineTags(
        ListPredefineTagsRequest &request
    );
    // 查询标签管理支持的服务
    //
    // 查询标签管理支持的服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProvidersResponse> listProviders(
        ListProvidersRequest &request
    );
    // 根据标签过滤资源
    //
    // 根据标签过滤资源。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListResourceResponse> listResource(
        ListResourceRequest &request
    );
    // 查询标签键列表
    //
    // 查询指定区域的所有标签键.
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTagKeysResponse> listTagKeys(
        ListTagKeysRequest &request
    );
    // 查询标签值列表
    //
    // 查询指定区域的标签键下的所有标签值。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTagValuesResponse> listTagValues(
        ListTagValuesRequest &request
    );
    // 查询API版本号详情
    //
    // 查询指定的标签管理服务API版本号详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowApiVersionResponse> showApiVersion(
        ShowApiVersionRequest &request
    );
    // 查询资源标签
    //
    // 查询单个资源上的标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowResourceTagResponse> showResourceTag(
        ShowResourceTagRequest &request
    );
    // 查询标签配额
    //
    // 查询标签的配额信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTagQuotaResponse> showTagQuota(
        ShowTagQuotaRequest &request
    );
    // 修改预定义标签
    //
    // 修改预定义标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePredefineTagsResponse> updatePredefineTags(
        UpdatePredefineTagsRequest &request
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

template class HUAWEICLOUD_TMS_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Tms::V1::TmsClient>;

#endif // HUAWEICLOUD_SDK_TMS_V1_TmsClient_H_

