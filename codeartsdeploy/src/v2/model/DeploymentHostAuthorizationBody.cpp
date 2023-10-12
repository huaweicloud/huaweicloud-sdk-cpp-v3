

#include "huaweicloud/codeartsdeploy/v2/model/DeploymentHostAuthorizationBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeploymentHostAuthorizationBody::DeploymentHostAuthorizationBody()
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

DeploymentHostAuthorizationBody::~DeploymentHostAuthorizationBody() = default;

void DeploymentHostAuthorizationBody::validate()
{
}

web::json::value DeploymentHostAuthorizationBody::toJson() const
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
bool DeploymentHostAuthorizationBody::fromJson(const web::json::value& val)
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


std::string DeploymentHostAuthorizationBody::getUsername() const
{
    return username_;
}

void DeploymentHostAuthorizationBody::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool DeploymentHostAuthorizationBody::usernameIsSet() const
{
    return usernameIsSet_;
}

void DeploymentHostAuthorizationBody::unsetusername()
{
    usernameIsSet_ = false;
}

std::string DeploymentHostAuthorizationBody::getPassword() const
{
    return password_;
}

void DeploymentHostAuthorizationBody::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool DeploymentHostAuthorizationBody::passwordIsSet() const
{
    return passwordIsSet_;
}

void DeploymentHostAuthorizationBody::unsetpassword()
{
    passwordIsSet_ = false;
}

std::string DeploymentHostAuthorizationBody::getPrivateKey() const
{
    return privateKey_;
}

void DeploymentHostAuthorizationBody::setPrivateKey(const std::string& value)
{
    privateKey_ = value;
    privateKeyIsSet_ = true;
}

bool DeploymentHostAuthorizationBody::privateKeyIsSet() const
{
    return privateKeyIsSet_;
}

void DeploymentHostAuthorizationBody::unsetprivateKey()
{
    privateKeyIsSet_ = false;
}

int32_t DeploymentHostAuthorizationBody::getTrustedType() const
{
    return trustedType_;
}

void DeploymentHostAuthorizationBody::setTrustedType(int32_t value)
{
    trustedType_ = value;
    trustedTypeIsSet_ = true;
}

bool DeploymentHostAuthorizationBody::trustedTypeIsSet() const
{
    return trustedTypeIsSet_;
}

void DeploymentHostAuthorizationBody::unsettrustedType()
{
    trustedTypeIsSet_ = false;
}

}
}
}
}
}


