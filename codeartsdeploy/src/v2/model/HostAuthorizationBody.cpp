

#include "huaweicloud/codeartsdeploy/v2/model/HostAuthorizationBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




HostAuthorizationBody::HostAuthorizationBody()
{
    username_ = "";
    usernameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    privateKey_ = "";
    privateKeyIsSet_ = false;
    trustedType_ = 0;
    trustedTypeIsSet_ = false;
}

HostAuthorizationBody::~HostAuthorizationBody() = default;

void HostAuthorizationBody::validate()
{
}

web::json::value HostAuthorizationBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(privateKeyIsSet_) {
        val[utility::conversions::to_string_t("private_key")] = ModelBase::toJson(privateKey_);
    }
    if(trustedTypeIsSet_) {
        val[utility::conversions::to_string_t("trusted_type")] = ModelBase::toJson(trustedType_);
    }

    return val;
}

bool HostAuthorizationBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("private_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trusted_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trusted_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrustedType(refVal);
        }
    }
    return ok;
}

std::string HostAuthorizationBody::getUsername() const
{
    return username_;
}

void HostAuthorizationBody::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool HostAuthorizationBody::usernameIsSet() const
{
    return usernameIsSet_;
}

void HostAuthorizationBody::unsetusername()
{
    usernameIsSet_ = false;
}

std::string HostAuthorizationBody::getPassword() const
{
    return password_;
}

void HostAuthorizationBody::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool HostAuthorizationBody::passwordIsSet() const
{
    return passwordIsSet_;
}

void HostAuthorizationBody::unsetpassword()
{
    passwordIsSet_ = false;
}

std::string HostAuthorizationBody::getPrivateKey() const
{
    return privateKey_;
}

void HostAuthorizationBody::setPrivateKey(const std::string& value)
{
    privateKey_ = value;
    privateKeyIsSet_ = true;
}

bool HostAuthorizationBody::privateKeyIsSet() const
{
    return privateKeyIsSet_;
}

void HostAuthorizationBody::unsetprivateKey()
{
    privateKeyIsSet_ = false;
}

int32_t HostAuthorizationBody::getTrustedType() const
{
    return trustedType_;
}

void HostAuthorizationBody::setTrustedType(int32_t value)
{
    trustedType_ = value;
    trustedTypeIsSet_ = true;
}

bool HostAuthorizationBody::trustedTypeIsSet() const
{
    return trustedTypeIsSet_;
}

void HostAuthorizationBody::unsettrustedType()
{
    trustedTypeIsSet_ = false;
}

}
}
}
}
}


