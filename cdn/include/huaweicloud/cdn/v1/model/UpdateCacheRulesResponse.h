
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateCacheRulesResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateCacheRulesResponse_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/CacheConfig.h>
#include <string>

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
class HUAWEICLOUD_CDN_V1_EXPORT  UpdateCacheRulesResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateCacheRulesResponse();
    virtual ~UpdateCacheRulesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateCacheRulesResponse members

    /// <summary>
    /// 
    /// </summary>

    CacheConfig getCacheConfig() const;
    bool cacheConfigIsSet() const;
    void unsetcacheConfig();
    void setCacheConfig(const CacheConfig& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    CacheConfig cacheConfig_;
    bool cacheConfigIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateCacheRulesResponse_H_
