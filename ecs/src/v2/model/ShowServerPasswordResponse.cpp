

#include "huaweicloud/ecs/v2/model/ShowServerPasswordResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerPasswordResponse::ShowServerPasswordResponse()
{
    password_ = "";
    passwordIsSet_ = false;
}

ShowServerPasswordResponse::~ShowServerPasswordResponse() = default;

void ShowServerPasswordResponse::validate()
{
}

web::json::value ShowServerPasswordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }

    return val;
}

bool ShowServerPasswordResponse::fromJson(const web::json::value& val)
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


std::string ShowServerPasswordResponse::getPassword() const
{
    return password_;
}

void ShowServerPasswordResponse::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool ShowServerPasswordResponse::passwordIsSet() const
{
    return passwordIsSet_;
}

void ShowServerPasswordResponse::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


