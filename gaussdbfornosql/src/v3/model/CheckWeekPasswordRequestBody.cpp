

#include "huaweicloud/gaussdbfornosql/v3/model/CheckWeekPasswordRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CheckWeekPasswordRequestBody::CheckWeekPasswordRequestBody()
{
    password_ = "";
    passwordIsSet_ = false;
}

CheckWeekPasswordRequestBody::~CheckWeekPasswordRequestBody() = default;

void CheckWeekPasswordRequestBody::validate()
{
}

web::json::value CheckWeekPasswordRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }

    return val;
}

bool CheckWeekPasswordRequestBody::fromJson(const web::json::value& val)
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

std::string CheckWeekPasswordRequestBody::getPassword() const
{
    return password_;
}

void CheckWeekPasswordRequestBody::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool CheckWeekPasswordRequestBody::passwordIsSet() const
{
    return passwordIsSet_;
}

void CheckWeekPasswordRequestBody::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


