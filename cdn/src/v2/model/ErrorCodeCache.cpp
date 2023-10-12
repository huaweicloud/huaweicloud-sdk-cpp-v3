

#include "huaweicloud/cdn/v2/model/ErrorCodeCache.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ErrorCodeCache::ErrorCodeCache()
{
    code_ = 0;
    codeIsSet_ = false;
    ttl_ = 0;
    ttlIsSet_ = false;
}

ErrorCodeCache::~ErrorCodeCache() = default;

void ErrorCodeCache::validate()
{
}

web::json::value ErrorCodeCache::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(ttlIsSet_) {
        val[utility::conversions::to_string_t("ttl")] = ModelBase::toJson(ttl_);
    }

    return val;
}
bool ErrorCodeCache::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ttl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ttl"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtl(refVal);
        }
    }
    return ok;
}


int32_t ErrorCodeCache::getCode() const
{
    return code_;
}

void ErrorCodeCache::setCode(int32_t value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ErrorCodeCache::codeIsSet() const
{
    return codeIsSet_;
}

void ErrorCodeCache::unsetcode()
{
    codeIsSet_ = false;
}

int32_t ErrorCodeCache::getTtl() const
{
    return ttl_;
}

void ErrorCodeCache::setTtl(int32_t value)
{
    ttl_ = value;
    ttlIsSet_ = true;
}

bool ErrorCodeCache::ttlIsSet() const
{
    return ttlIsSet_;
}

void ErrorCodeCache::unsetttl()
{
    ttlIsSet_ = false;
}

}
}
}
}
}


