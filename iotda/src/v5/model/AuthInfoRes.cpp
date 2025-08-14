

#include "huaweicloud/iotda/v5/model/AuthInfoRes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AuthInfoRes::AuthInfoRes()
{
    authType_ = "";
    authTypeIsSet_ = false;
    secret_ = "";
    secretIsSet_ = false;
    secondarySecret_ = "";
    secondarySecretIsSet_ = false;
    fingerprint_ = "";
    fingerprintIsSet_ = false;
    secondaryFingerprint_ = "";
    secondaryFingerprintIsSet_ = false;
    secureAccess_ = false;
    secureAccessIsSet_ = false;
    timeout_ = 0;
    timeoutIsSet_ = false;
}

AuthInfoRes::~AuthInfoRes() = default;

void AuthInfoRes::validate()
{
}

web::json::value AuthInfoRes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authTypeIsSet_) {
        val[utility::conversions::to_string_t("auth_type")] = ModelBase::toJson(authType_);
    }
    if(secretIsSet_) {
        val[utility::conversions::to_string_t("secret")] = ModelBase::toJson(secret_);
    }
    if(secondarySecretIsSet_) {
        val[utility::conversions::to_string_t("secondary_secret")] = ModelBase::toJson(secondarySecret_);
    }
    if(fingerprintIsSet_) {
        val[utility::conversions::to_string_t("fingerprint")] = ModelBase::toJson(fingerprint_);
    }
    if(secondaryFingerprintIsSet_) {
        val[utility::conversions::to_string_t("secondary_fingerprint")] = ModelBase::toJson(secondaryFingerprint_);
    }
    if(secureAccessIsSet_) {
        val[utility::conversions::to_string_t("secure_access")] = ModelBase::toJson(secureAccess_);
    }
    if(timeoutIsSet_) {
        val[utility::conversions::to_string_t("timeout")] = ModelBase::toJson(timeout_);
    }

    return val;
}
bool AuthInfoRes::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("secondary_secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secondary_secret"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecondarySecret(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("secondary_fingerprint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secondary_fingerprint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecondaryFingerprint(refVal);
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


std::string AuthInfoRes::getAuthType() const
{
    return authType_;
}

void AuthInfoRes::setAuthType(const std::string& value)
{
    authType_ = value;
    authTypeIsSet_ = true;
}

bool AuthInfoRes::authTypeIsSet() const
{
    return authTypeIsSet_;
}

void AuthInfoRes::unsetauthType()
{
    authTypeIsSet_ = false;
}

std::string AuthInfoRes::getSecret() const
{
    return secret_;
}

void AuthInfoRes::setSecret(const std::string& value)
{
    secret_ = value;
    secretIsSet_ = true;
}

bool AuthInfoRes::secretIsSet() const
{
    return secretIsSet_;
}

void AuthInfoRes::unsetsecret()
{
    secretIsSet_ = false;
}

std::string AuthInfoRes::getSecondarySecret() const
{
    return secondarySecret_;
}

void AuthInfoRes::setSecondarySecret(const std::string& value)
{
    secondarySecret_ = value;
    secondarySecretIsSet_ = true;
}

bool AuthInfoRes::secondarySecretIsSet() const
{
    return secondarySecretIsSet_;
}

void AuthInfoRes::unsetsecondarySecret()
{
    secondarySecretIsSet_ = false;
}

std::string AuthInfoRes::getFingerprint() const
{
    return fingerprint_;
}

void AuthInfoRes::setFingerprint(const std::string& value)
{
    fingerprint_ = value;
    fingerprintIsSet_ = true;
}

bool AuthInfoRes::fingerprintIsSet() const
{
    return fingerprintIsSet_;
}

void AuthInfoRes::unsetfingerprint()
{
    fingerprintIsSet_ = false;
}

std::string AuthInfoRes::getSecondaryFingerprint() const
{
    return secondaryFingerprint_;
}

void AuthInfoRes::setSecondaryFingerprint(const std::string& value)
{
    secondaryFingerprint_ = value;
    secondaryFingerprintIsSet_ = true;
}

bool AuthInfoRes::secondaryFingerprintIsSet() const
{
    return secondaryFingerprintIsSet_;
}

void AuthInfoRes::unsetsecondaryFingerprint()
{
    secondaryFingerprintIsSet_ = false;
}

bool AuthInfoRes::isSecureAccess() const
{
    return secureAccess_;
}

void AuthInfoRes::setSecureAccess(bool value)
{
    secureAccess_ = value;
    secureAccessIsSet_ = true;
}

bool AuthInfoRes::secureAccessIsSet() const
{
    return secureAccessIsSet_;
}

void AuthInfoRes::unsetsecureAccess()
{
    secureAccessIsSet_ = false;
}

int32_t AuthInfoRes::getTimeout() const
{
    return timeout_;
}

void AuthInfoRes::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool AuthInfoRes::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void AuthInfoRes::unsettimeout()
{
    timeoutIsSet_ = false;
}

}
}
}
}
}


