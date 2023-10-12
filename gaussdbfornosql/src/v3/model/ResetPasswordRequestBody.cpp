

#include "huaweicloud/gaussdbfornosql/v3/model/ResetPasswordRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ResetPasswordRequestBody::ResetPasswordRequestBody()
{
    password_ = "";
    passwordIsSet_ = false;
}

ResetPasswordRequestBody::~ResetPasswordRequestBody() = default;

void ResetPasswordRequestBody::validate()
{
}

web::json::value ResetPasswordRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }

    return val;
}
bool ResetPasswordRequestBody::fromJson(const web::json::value& val)
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


std::string ResetPasswordRequestBody::getPassword() const
{
    return password_;
}

void ResetPasswordRequestBody::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool ResetPasswordRequestBody::passwordIsSet() const
{
    return passwordIsSet_;
}

void ResetPasswordRequestBody::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


