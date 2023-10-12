
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowCacheRulesResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowCacheRulesResponse_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/CacheConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  ShowCacheRulesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowCacheRulesResponse();
    virtual ~ShowCacheRulesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCacheRulesResponse members

    /// <summary>
    /// 
    /// </summary>

    CacheConfig getCacheConfig() const;
    bool cacheConfigIsSet() const;
    void unsetcacheConfig();
    void setCacheConfig(const CacheConfig& value);


protected:
    CacheConfig cacheConfig_;
    bool cacheConfigIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowCacheRulesResponse_H_
