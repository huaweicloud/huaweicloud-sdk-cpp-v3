

#include "huaweicloud/cce/v3/model/UserPassword.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UserPassword::UserPassword()
{
    username_ = "";
    usernameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
}

UserPassword::~UserPassword() = default;

void UserPassword::validate()
{
}

web::json::value UserPassword::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }

    return val;
}
bool UserPassword::fromJson(const web::json::value& val)
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
    return ok;
}


std::string UserPassword::getUsername() const
{
    return username_;
}

void UserPassword::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool UserPassword::usernameIsSet() const
{
    return usernameIsSet_;
}

void UserPassword::unsetusername()
{
    usernameIsSet_ = false;
}

std::string UserPassword::getPassword() const
{
    return password_;
}

void UserPassword::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool UserPassword::passwordIsSet() const
{
    return passwordIsSet_;
}

void UserPassword::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


