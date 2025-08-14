

#include "huaweicloud/iotda/v5/model/AuthInfoWithoutSecret.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AuthInfoWithoutSecret::AuthInfoWithoutSecret()
{
    secureAccess_ = false;
    secureAccessIsSet_ = false;
    timeout_ = 0;
    timeoutIsSet_ = false;
}

AuthInfoWithoutSecret::~AuthInfoWithoutSecret() = default;

void AuthInfoWithoutSecret::validate()
{
}

web::json::value AuthInfoWithoutSecret::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secureAccessIsSet_) {
        val[utility::conversions::to_string_t("secure_access")] = ModelBase::toJson(secureAccess_);
    }
    if(timeoutIsSet_) {
        val[utility::conversions::to_string_t("timeout")] = ModelBase::toJson(timeout_);
    }

    return val;
}
bool AuthInfoWithoutSecret::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secure_access"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secure_access"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecureAccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeout(refVal);
        }
    }
    return ok;
}


bool AuthInfoWithoutSecret::isSecureAccess() const
{
    return secureAccess_;
}

void AuthInfoWithoutSecret::setSecureAccess(bool value)
{
    secureAccess_ = value;
    secureAccessIsSet_ = true;
}

bool AuthInfoWithoutSecret::secureAccessIsSet() const
{
    return secureAccessIsSet_;
}

void AuthInfoWithoutSecret::unsetsecureAccess()
{
    secureAccessIsSet_ = false;
}

int32_t AuthInfoWithoutSecret::getTimeout() const
{
    return timeout_;
}

void AuthInfoWithoutSecret::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool AuthInfoWithoutSecret::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void AuthInfoWithoutSecret::unsettimeout()
{
    timeoutIsSet_ = false;
}

}
}
}
}
}


