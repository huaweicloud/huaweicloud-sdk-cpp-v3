

#include "huaweicloud/cdn/v1/model/UpdateCacheRulesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateCacheRulesResponse::UpdateCacheRulesResponse()
{
    cacheConfigIsSet_ = false;
}

UpdateCacheRulesResponse::~UpdateCacheRulesResponse() = default;

void UpdateCacheRulesResponse::validate()
{
}

web::json::value UpdateCacheRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cacheConfigIsSet_) {
        val[utility::conversions::to_string_t("cache_config")] = ModelBase::toJson(cacheConfig_);
    }

    return val;
}

bool UpdateCacheRulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cache_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cache_config"));
        if(!fieldValue.is_null())
        {
            CacheConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCacheConfig(refVal);
        }
    }
    return ok;
}

CacheConfig UpdateCacheRulesResponse::getCacheConfig() const
{
    return cacheConfig_;
}

void UpdateCacheRulesResponse::setCacheConfig(const CacheConfig& value)
{
    cacheConfig_ = value;
    cacheConfigIsSet_ = true;
}

bool UpdateCacheRulesResponse::cacheConfigIsSet() const
{
    return cacheConfigIsSet_;
}

void UpdateCacheRulesResponse::unsetcacheConfig()
{
    cacheConfigIsSet_ = false;
}

}
}
}
}
}


