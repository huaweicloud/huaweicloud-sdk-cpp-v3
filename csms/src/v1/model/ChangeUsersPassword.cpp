

#include "huaweicloud/csms/v1/model/ChangeUsersPassword.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ChangeUsersPassword::ChangeUsersPassword()
{
    password_ = "";
    passwordIsSet_ = false;
    oldPassword_ = "";
    oldPasswordIsSet_ = false;
}

ChangeUsersPassword::~ChangeUsersPassword() = default;

void ChangeUsersPassword::validate()
{
}

web::json::value ChangeUsersPassword::toJson() const
{
    web::json::value val = web::json::value::object();

    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(oldPasswordIsSet_) {
        val[utility::conversions::to_string_t("old_password")] = ModelBase::toJson(oldPassword_);
    }

    return val;
}
bool ChangeUsersPassword::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("old_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldPassword(refVal);
        }
    }
    return ok;
}


std::string ChangeUsersPassword::getPassword() const
{
    return password_;
}

void ChangeUsersPassword::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool ChangeUsersPassword::passwordIsSet() const
{
    return passwordIsSet_;
}

void ChangeUsersPassword::unsetpassword()
{
    passwordIsSet_ = false;
}

std::string ChangeUsersPassword::getOldPassword() const
{
    return oldPassword_;
}

void ChangeUsersPassword::setOldPassword(const std::string& value)
{
    oldPassword_ = value;
    oldPasswordIsSet_ = true;
}

bool ChangeUsersPassword::oldPasswordIsSet() const
{
    return oldPasswordIsSet_;
}

void ChangeUsersPassword::unsetoldPassword()
{
    oldPasswordIsSet_ = false;
}

}
}
}
}
}


