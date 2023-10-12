

#include "huaweicloud/gaussdbforopengauss/v3/model/WeakPasswordRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




WeakPasswordRequestBody::WeakPasswordRequestBody()
{
    password_ = "";
    passwordIsSet_ = false;
}

WeakPasswordRequestBody::~WeakPasswordRequestBody() = default;

void WeakPasswordRequestBody::validate()
{
}

web::json::value WeakPasswordRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }

    return val;
}
bool WeakPasswordRequestBody::fromJson(const web::json::value& val)
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


std::string WeakPasswordRequestBody::getPassword() const
{
    return password_;
}

void WeakPasswordRequestBody::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool WeakPasswordRequestBody::passwordIsSet() const
{
    return passwordIsSet_;
}

void WeakPasswordRequestBody::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


