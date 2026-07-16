

#include "huaweicloud/cce/v3/model/Credentials.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




Credentials::Credentials()
{
    accessKeyId_ = "";
    accessKeyIdIsSet_ = false;
    secretAccessKey_ = "";
    secretAccessKeyIsSet_ = false;
    securityToken_ = "";
    securityTokenIsSet_ = false;
    expiration_ = "";
    expirationIsSet_ = false;
}

Credentials::~Credentials() = default;

void Credentials::validate()
{
}

web::json::value Credentials::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessKeyIdIsSet_) {
        val[utility::conversions::to_string_t("accessKeyId")] = ModelBase::toJson(accessKeyId_);
    }
    if(secretAccessKeyIsSet_) {
        val[utility::conversions::to_string_t("secretAccessKey")] = ModelBase::toJson(secretAccessKey_);
    }
    if(securityTokenIsSet_) {
        val[utility::conversions::to_string_t("securityToken")] = ModelBase::toJson(securityToken_);
    }
    if(expirationIsSet_) {
        val[utility::conversions::to_string_t("expiration")] = ModelBase::toJson(expiration_);
    }

    return val;
}
bool Credentials::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("accessKeyId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accessKeyId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secretAccessKey"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secretAccessKey"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretAccessKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("securityToken"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("securityToken"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiration(refVal);
        }
    }
    return ok;
}


std::string Credentials::getAccessKeyId() const
{
    return accessKeyId_;
}

void Credentials::setAccessKeyId(const std::string& value)
{
    accessKeyId_ = value;
    accessKeyIdIsSet_ = true;
}

bool Credentials::accessKeyIdIsSet() const
{
    return accessKeyIdIsSet_;
}

void Credentials::unsetaccessKeyId()
{
    accessKeyIdIsSet_ = false;
}

std::string Credentials::getSecretAccessKey() const
{
    return secretAccessKey_;
}

void Credentials::setSecretAccessKey(const std::string& value)
{
    secretAccessKey_ = value;
    secretAccessKeyIsSet_ = true;
}

bool Credentials::secretAccessKeyIsSet() const
{
    return secretAccessKeyIsSet_;
}

void Credentials::unsetsecretAccessKey()
{
    secretAccessKeyIsSet_ = false;
}

std::string Credentials::getSecurityToken() const
{
    return securityToken_;
}

void Credentials::setSecurityToken(const std::string& value)
{
    securityToken_ = value;
    securityTokenIsSet_ = true;
}

bool Credentials::securityTokenIsSet() const
{
    return securityTokenIsSet_;
}

void Credentials::unsetsecurityToken()
{
    securityTokenIsSet_ = false;
}

std::string Credentials::getExpiration() const
{
    return expiration_;
}

void Credentials::setExpiration(const std::string& value)
{
    expiration_ = value;
    expirationIsSet_ = true;
}

bool Credentials::expirationIsSet() const
{
    return expirationIsSet_;
}

void Credentials::unsetexpiration()
{
    expirationIsSet_ = false;
}

}
}
}
}
}


