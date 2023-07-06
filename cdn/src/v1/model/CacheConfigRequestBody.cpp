

#include "huaweicloud/cdn/v1/model/CacheConfigRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




CacheConfigRequestBody::CacheConfigRequestBody()
{
    cacheConfigIsSet_ = false;
}

CacheConfigRequestBody::~CacheConfigRequestBody() = default;

void CacheConfigRequestBody::validate()
{
}

web::json::value CacheConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cacheConfigIsSet_) {
        val[utility::conversions::to_string_t("cache_config")] = ModelBase::toJson(cacheConfig_);
    }

    return val;
}

bool CacheConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cache_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cache_config"));
        if(!fieldValue.is_null())
        {
            CacheConfigRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCacheConfig(refVal);
        }
    }
    return ok;
}

CacheConfigRequest CacheConfigRequestBody::getCacheConfig() const
{
    return cacheConfig_;
}

void CacheConfigRequestBody::setCacheConfig(const CacheConfigRequest& value)
{
    cacheConfig_ = value;
    cacheConfigIsSet_ = true;
}

bool CacheConfigRequestBody::cacheConfigIsSet() const
{
    return cacheConfigIsSet_;
}

void CacheConfigRequestBody::unsetcacheConfig()
{
    cacheConfigIsSet_ = false;
}

}
}
}
}
}


