

#include "huaweicloud/dbss/v1/model/ChangePasswordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ChangePasswordRequest::ChangePasswordRequest()
{
    newPassword_ = "";
    newPasswordIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

ChangePasswordRequest::~ChangePasswordRequest() = default;

void ChangePasswordRequest::validate()
{
}

web::json::value ChangePasswordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(newPasswordIsSet_) {
        val[utility::conversions::to_string_t("new_password")] = ModelBase::toJson(newPassword_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool ChangePasswordRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("new_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    return ok;
}


std::string ChangePasswordRequest::getNewPassword() const
{
    return newPassword_;
}

void ChangePasswordRequest::setNewPassword(const std::string& value)
{
    newPassword_ = value;
    newPasswordIsSet_ = true;
}

bool ChangePasswordRequest::newPasswordIsSet() const
{
    return newPasswordIsSet_;
}

void ChangePasswordRequest::unsetnewPassword()
{
    newPasswordIsSet_ = false;
}

std::string ChangePasswordRequest::getUserName() const
{
    return userName_;
}

void ChangePasswordRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ChangePasswordRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void ChangePasswordRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


