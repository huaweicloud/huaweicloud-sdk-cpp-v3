

#include "huaweicloud/identitycenterstore/v1/model/ResetPwdModeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ResetPwdModeResponse::ResetPwdModeResponse()
{
    password_ = "";
    passwordIsSet_ = false;
}

ResetPwdModeResponse::~ResetPwdModeResponse() = default;

void ResetPwdModeResponse::validate()
{
}

web::json::value ResetPwdModeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }

    return val;
}
bool ResetPwdModeResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ResetPwdModeResponse::getPassword() const
{
    return password_;
}

void ResetPwdModeResponse::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool ResetPwdModeResponse::passwordIsSet() const
{
    return passwordIsSet_;
}

void ResetPwdModeResponse::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


