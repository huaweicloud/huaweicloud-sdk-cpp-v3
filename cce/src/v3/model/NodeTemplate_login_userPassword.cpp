

#include "huaweicloud/cce/v3/model/NodeTemplate_login_userPassword.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeTemplate_login_userPassword::NodeTemplate_login_userPassword()
{
    username_ = "";
    usernameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
}

NodeTemplate_login_userPassword::~NodeTemplate_login_userPassword() = default;

void NodeTemplate_login_userPassword::validate()
{
}

web::json::value NodeTemplate_login_userPassword::toJson() const
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
bool NodeTemplate_login_userPassword::fromJson(const web::json::value& val)
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


std::string NodeTemplate_login_userPassword::getUsername() const
{
    return username_;
}

void NodeTemplate_login_userPassword::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool NodeTemplate_login_userPassword::usernameIsSet() const
{
    return usernameIsSet_;
}

void NodeTemplate_login_userPassword::unsetusername()
{
    usernameIsSet_ = false;
}

std::string NodeTemplate_login_userPassword::getPassword() const
{
    return password_;
}

void NodeTemplate_login_userPassword::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool NodeTemplate_login_userPassword::passwordIsSet() const
{
    return passwordIsSet_;
}

void NodeTemplate_login_userPassword::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


