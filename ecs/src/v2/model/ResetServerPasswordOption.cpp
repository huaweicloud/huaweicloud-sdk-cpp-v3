

#include "huaweicloud/ecs/v2/model/ResetServerPasswordOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ResetServerPasswordOption::ResetServerPasswordOption()
{
    newPassword_ = "";
    newPasswordIsSet_ = false;
    isCheckPassword_ = false;
    isCheckPasswordIsSet_ = false;
}

ResetServerPasswordOption::~ResetServerPasswordOption() = default;

void ResetServerPasswordOption::validate()
{
}

web::json::value ResetServerPasswordOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(newPasswordIsSet_) {
        val[utility::conversions::to_string_t("new_password")] = ModelBase::toJson(newPassword_);
    }
    if(isCheckPasswordIsSet_) {
        val[utility::conversions::to_string_t("is_check_password")] = ModelBase::toJson(isCheckPassword_);
    }

    return val;
}

bool ResetServerPasswordOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_check_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_check_password"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCheckPassword(refVal);
        }
    }
    return ok;
}


std::string ResetServerPasswordOption::getNewPassword() const
{
    return newPassword_;
}

void ResetServerPasswordOption::setNewPassword(const std::string& value)
{
    newPassword_ = value;
    newPasswordIsSet_ = true;
}

bool ResetServerPasswordOption::newPasswordIsSet() const
{
    return newPasswordIsSet_;
}

void ResetServerPasswordOption::unsetnewPassword()
{
    newPasswordIsSet_ = false;
}

bool ResetServerPasswordOption::isIsCheckPassword() const
{
    return isCheckPassword_;
}

void ResetServerPasswordOption::setIsCheckPassword(bool value)
{
    isCheckPassword_ = value;
    isCheckPasswordIsSet_ = true;
}

bool ResetServerPasswordOption::isCheckPasswordIsSet() const
{
    return isCheckPasswordIsSet_;
}

void ResetServerPasswordOption::unsetisCheckPassword()
{
    isCheckPasswordIsSet_ = false;
}

}
}
}
}
}


