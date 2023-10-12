

#include "huaweicloud/cdn/v1/model/ShowCacheRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowCacheRulesResponse::ShowCacheRulesResponse()
{
    cacheConfigIsSet_ = false;
}

ShowCacheRulesResponse::~ShowCacheRulesResponse() = default;

void ShowCacheRulesResponse::validate()
{
}

web::json::value ShowCacheRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cacheConfigIsSet_) {
        val[utility::conversions::to_string_t("cache_config")] = ModelBase::toJson(cacheConfig_);
    }

    return val;
}
bool ShowCacheRulesResponse::fromJson(const web::json::value& val)
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


CacheConfig ShowCacheRulesResponse::getCacheConfig() const
{
    return cacheConfig_;
}

void ShowCacheRulesResponse::setCacheConfig(const CacheConfig& value)
{
    cacheConfig_ = value;
    cacheConfigIsSet_ = true;
}

bool ShowCacheRulesResponse::cacheConfigIsSet() const
{
    return cacheConfigIsSet_;
}

void ShowCacheRulesResponse::unsetcacheConfig()
{
    cacheConfigIsSet_ = false;
}

}
}
}
}
}


