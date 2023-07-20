

#include "huaweicloud/gaussdbforopengauss/v3/model/PwdResetRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




PwdResetRequest::PwdResetRequest()
{
    password_ = "";
    passwordIsSet_ = false;
}

PwdResetRequest::~PwdResetRequest() = default;

void PwdResetRequest::validate()
{
}

web::json::value PwdResetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }

    return val;
}

bool PwdResetRequest::fromJson(const web::json::value& val)
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

std::string PwdResetRequest::getPassword() const
{
    return password_;
}

void PwdResetRequest::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool PwdResetRequest::passwordIsSet() const
{
    return passwordIsSet_;
}

void PwdResetRequest::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


