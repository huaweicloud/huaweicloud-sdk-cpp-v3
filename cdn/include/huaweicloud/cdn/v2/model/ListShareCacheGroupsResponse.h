
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListShareCacheGroupsResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListShareCacheGroupsResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/ListShareCacheGroupsConfig.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ListShareCacheGroupsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListShareCacheGroupsResponse();
    virtual ~ListShareCacheGroupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListShareCacheGroupsResponse members

    /// <summary>
    /// 共享缓存配置总数量
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 共享缓存配置
    /// </summary>

    std::vector<ListShareCacheGroupsConfig>& getShareCacheGroups();
    bool shareCacheGroupsIsSet() const;
    void unsetshareCacheGroups();
    void setShareCacheGroups(const std::vector<ListShareCacheGroupsConfig>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<ListShareCacheGroupsConfig> shareCacheGroups_;
    bool shareCacheGroupsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListShareCacheGroupsResponse_H_
