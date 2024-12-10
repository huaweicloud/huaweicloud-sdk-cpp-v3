

#include "huaweicloud/csms/v1/model/GenerateRandomPasswordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




GenerateRandomPasswordResponse::GenerateRandomPasswordResponse()
{
    password_ = "";
    passwordIsSet_ = false;
}

GenerateRandomPasswordResponse::~GenerateRandomPasswordResponse() = default;

void GenerateRandomPasswordResponse::validate()
{
}

web::json::value GenerateRandomPasswordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }

    return val;
}
bool GenerateRandomPasswordResponse::fromJson(const web::json::value& val)
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


std::string GenerateRandomPasswordResponse::getPassword() const
{
    return password_;
}

void GenerateRandomPasswordResponse::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool GenerateRandomPasswordResponse::passwordIsSet() const
{
    return passwordIsSet_;
}

void GenerateRandomPasswordResponse::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


