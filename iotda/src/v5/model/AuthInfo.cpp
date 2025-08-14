

#include "huaweicloud/iotda/v5/model/AuthInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AuthInfo::AuthInfo()
{
    authType_ = "";
    authTypeIsSet_ = false;
    secret_ = "";
    secretIsSet_ = false;
    fingerprint_ = "";
    fingerprintIsSet_ = false;
    secureAccess_ = false;
    secureAccessIsSet_ = false;
    timeout_ = 0;
    timeoutIsSet_ = false;
}

AuthInfo::~AuthInfo() = default;

void AuthInfo::validate()
{
}

web::json::value AuthInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authTypeIsSet_) {
        val[utility::conversions::to_string_t("auth_type")] = ModelBase::toJson(authType_);
    }
    if(secretIsSet_) {
        val[utility::conversions::to_string_t("secret")] = ModelBase::toJson(secret_);
    }
    if(fingerprintIsSet_) {
        val[utility::conversions::to_string_t("fingerprint")] = ModelBase::toJson(fingerprint_);
    }
    if(secureAccessIsSet_) {
        val[utility::conversions::to_string_t("secure_access")] = ModelBase::toJson(secureAccess_);
    }
    if(timeoutIsSet_) {
        val[utility::conversions::to_string_t("timeout")] = ModelBase::toJson(timeout_);
    }

    return val;
}
bool AuthInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auth_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecret(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fingerprint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fingerprint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFingerprint(refVal);
        }
    }
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


std::string AuthInfo::getAuthType() const
{
    return authType_;
}

void AuthInfo::setAuthType(const std::string& value)
{
    authType_ = value;
    authTypeIsSet_ = true;
}

bool AuthInfo::authTypeIsSet() const
{
    return authTypeIsSet_;
}

void AuthInfo::unsetauthType()
{
    authTypeIsSet_ = false;
}

std::string AuthInfo::getSecret() const
{
    return secret_;
}

void AuthInfo::setSecret(const std::string& value)
{
    secret_ = value;
    secretIsSet_ = true;
}

bool AuthInfo::secretIsSet() const
{
    return secretIsSet_;
}

void AuthInfo::unsetsecret()
{
    secretIsSet_ = false;
}

std::string AuthInfo::getFingerprint() const
{
    return fingerprint_;
}

void AuthInfo::setFingerprint(const std::string& value)
{
    fingerprint_ = value;
    fingerprintIsSet_ = true;
}

bool AuthInfo::fingerprintIsSet() const
{
    return fingerprintIsSet_;
}

void AuthInfo::unsetfingerprint()
{
    fingerprintIsSet_ = false;
}

bool AuthInfo::isSecureAccess() const
{
    return secureAccess_;
}

void AuthInfo::setSecureAccess(bool value)
{
    secureAccess_ = value;
    secureAccessIsSet_ = true;
}

bool AuthInfo::secureAccessIsSet() const
{
    return secureAccessIsSet_;
}

void AuthInfo::unsetsecureAccess()
{
    secureAccessIsSet_ = false;
}

int32_t AuthInfo::getTimeout() const
{
    return timeout_;
}

void AuthInfo::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool AuthInfo::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void AuthInfo::unsettimeout()
{
    timeoutIsSet_ = false;
}

}
}
}
}
}


