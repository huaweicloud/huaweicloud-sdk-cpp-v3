

#include "huaweicloud/ecs/v2/model/ResetServerPasswordRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ResetServerPasswordRequestBody::ResetServerPasswordRequestBody()
{
    resetPasswordIsSet_ = false;
}

ResetServerPasswordRequestBody::~ResetServerPasswordRequestBody() = default;

void ResetServerPasswordRequestBody::validate()
{
}

web::json::value ResetServerPasswordRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resetPasswordIsSet_) {
        val[utility::conversions::to_string_t("reset-password")] = ModelBase::toJson(resetPassword_);
    }

    return val;
}

bool ResetServerPasswordRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("reset-password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reset-password"));
        if(!fieldValue.is_null())
        {
            ResetServerPasswordOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResetPassword(refVal);
        }
    }
    return ok;
}

ResetServerPasswordOption ResetServerPasswordRequestBody::getResetPassword() const
{
    return resetPassword_;
}

void ResetServerPasswordRequestBody::setResetPassword(const ResetServerPasswordOption& value)
{
    resetPassword_ = value;
    resetPasswordIsSet_ = true;
}

bool ResetServerPasswordRequestBody::resetPasswordIsSet() const
{
    return resetPasswordIsSet_;
}

void ResetServerPasswordRequestBody::unsetresetPassword()
{
    resetPasswordIsSet_ = false;
}

}
}
}
}
}


