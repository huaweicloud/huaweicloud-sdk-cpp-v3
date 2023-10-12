

#include "huaweicloud/gaussdbforopengauss/v3/model/ValidateWeakPasswordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ValidateWeakPasswordResponse::ValidateWeakPasswordResponse()
{
    isWeakPassword_ = false;
    isWeakPasswordIsSet_ = false;
}

ValidateWeakPasswordResponse::~ValidateWeakPasswordResponse() = default;

void ValidateWeakPasswordResponse::validate()
{
}

web::json::value ValidateWeakPasswordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isWeakPasswordIsSet_) {
        val[utility::conversions::to_string_t("is_weak_password")] = ModelBase::toJson(isWeakPassword_);
    }

    return val;
}
bool ValidateWeakPasswordResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_weak_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_weak_password"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsWeakPassword(refVal);
        }
    }
    return ok;
}


bool ValidateWeakPasswordResponse::isIsWeakPassword() const
{
    return isWeakPassword_;
}

void ValidateWeakPasswordResponse::setIsWeakPassword(bool value)
{
    isWeakPassword_ = value;
    isWeakPasswordIsSet_ = true;
}

bool ValidateWeakPasswordResponse::isWeakPasswordIsSet() const
{
    return isWeakPasswordIsSet_;
}

void ValidateWeakPasswordResponse::unsetisWeakPassword()
{
    isWeakPasswordIsSet_ = false;
}

}
}
}
}
}


