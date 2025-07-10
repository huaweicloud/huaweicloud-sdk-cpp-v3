

#include "huaweicloud/cdn/v2/model/ErrorCodeCacheEngine.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ErrorCodeCacheEngine::ErrorCodeCacheEngine()
{
    code_ = 0;
    codeIsSet_ = false;
    ttl_ = 0;
    ttlIsSet_ = false;
}

ErrorCodeCacheEngine::~ErrorCodeCacheEngine() = default;

void ErrorCodeCacheEngine::validate()
{
}

web::json::value ErrorCodeCacheEngine::toJson() const
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
bool ErrorCodeCacheEngine::fromJson(const web::json::value& val)
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


int32_t ErrorCodeCacheEngine::getCode() const
{
    return code_;
}

void ErrorCodeCacheEngine::setCode(int32_t value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ErrorCodeCacheEngine::codeIsSet() const
{
    return codeIsSet_;
}

void ErrorCodeCacheEngine::unsetcode()
{
    codeIsSet_ = false;
}

int32_t ErrorCodeCacheEngine::getTtl() const
{
    return ttl_;
}

void ErrorCodeCacheEngine::setTtl(int32_t value)
{
    ttl_ = value;
    ttlIsSet_ = true;
}

bool ErrorCodeCacheEngine::ttlIsSet() const
{
    return ttlIsSet_;
}

void ErrorCodeCacheEngine::unsetttl()
{
    ttlIsSet_ = false;
}

}
}
}
}
}


