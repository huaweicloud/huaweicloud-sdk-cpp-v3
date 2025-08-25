#ifndef HUAWEICLOUD_SDK_CCE_V5_CceClient_H_
#define HUAWEICLOUD_SDK_CCE_V5_CceClient_H_

#include <huaweicloud/cce/v5/CceExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/cce/v5/model/CreateImageCacheRequest.h>
#include <huaweicloud/cce/v5/model/CreateImageCacheRequestBody.h>
#include <huaweicloud/cce/v5/model/CreateImageCacheResponse.h>
#include <huaweicloud/cce/v5/model/DeleteImageCacheRequest.h>
#include <huaweicloud/cce/v5/model/DeleteImageCacheResponse.h>
#include <huaweicloud/cce/v5/model/ListImageCachesRequest.h>
#include <huaweicloud/cce/v5/model/ListImageCachesResponse.h>
#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/cce/v5/model/ShowImageCacheRequest.h>
#include <huaweicloud/cce/v5/model/ShowImageCacheResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Cce::V5::Model;

class HUAWEICLOUD_CCE_V5_EXPORT  CceClient : public Client
{
public:

    CceClient();

    virtual ~CceClient();

    static ClientBuilder<CceClient> newBuilder();

    // 创建镜像缓存
    //
    // 创建镜像缓存。创建过程会在指定集群中启动临时Pod进行镜像缓存构建，创建镜像缓存后，可在负载创建时通过使用镜像缓存功能大幅减少下载容器镜像的耗时，实现容器的快速启动。单租户创建镜像缓存数量上限为50。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateImageCacheResponse> createImageCache(
        CreateImageCacheRequest &request
    );
    // 删除镜像缓存
    //
    // 删除镜像缓存
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteImageCacheResponse> deleteImageCache(
        DeleteImageCacheRequest &request
    );
    // 查询镜像缓存列表
    //
    // 查询镜像缓存列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListImageCachesResponse> listImageCaches(
        ListImageCachesRequest &request
    );
    // 查询镜像缓存详情
    //
    // 查询镜像缓存详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowImageCacheResponse> showImageCache(
        ShowImageCacheRequest &request
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

template class HUAWEICLOUD_CCE_V5_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Cce::V5::CceClient>;

#endif // HUAWEICLOUD_SDK_CCE_V5_CceClient_H_

