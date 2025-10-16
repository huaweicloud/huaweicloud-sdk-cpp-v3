

#include "huaweicloud/cpcs/v1/model/AuthObject_auth_accessKey.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




AuthObject_auth_accessKey::AuthObject_auth_accessKey()
{
    id_ = "";
    idIsSet_ = false;
    secret_ = "";
    secretIsSet_ = false;
}

AuthObject_auth_accessKey::~AuthObject_auth_accessKey() = default;

void AuthObject_auth_accessKey::validate()
{
}

web::json::value AuthObject_auth_accessKey::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(secretIsSet_) {
        val[utility::conversions::to_string_t("secret")] = ModelBase::toJson(secret_);
    }

    return val;
}
bool AuthObject_auth_accessKey::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    return ok;
}


std::string AuthObject_auth_accessKey::getId() const
{
    return id_;
}

void AuthObject_auth_accessKey::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AuthObject_auth_accessKey::idIsSet() const
{
    return idIsSet_;
}

void AuthObject_auth_accessKey::unsetid()
{
    idIsSet_ = false;
}

std::string AuthObject_auth_accessKey::getSecret() const
{
    return secret_;
}

void AuthObject_auth_accessKey::setSecret(const std::string& value)
{
    secret_ = value;
    secretIsSet_ = true;
}

bool AuthObject_auth_accessKey::secretIsSet() const
{
    return secretIsSet_;
}

void AuthObject_auth_accessKey::unsetsecret()
{
    secretIsSet_ = false;
}

}
}
}
}
}


