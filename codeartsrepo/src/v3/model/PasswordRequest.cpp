

#include "huaweicloud/codeartsrepo/v3/model/PasswordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




PasswordRequest::PasswordRequest()
{
    pwd_ = "";
    pwdIsSet_ = false;
}

PasswordRequest::~PasswordRequest() = default;

void PasswordRequest::validate()
{
}

web::json::value PasswordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pwdIsSet_) {
        val[utility::conversions::to_string_t("pwd")] = ModelBase::toJson(pwd_);
    }

    return val;
}
bool PasswordRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPwd(refVal);
        }
    }
    return ok;
}


std::string PasswordRequest::getPwd() const
{
    return pwd_;
}

void PasswordRequest::setPwd(const std::string& value)
{
    pwd_ = value;
    pwdIsSet_ = true;
}

bool PasswordRequest::pwdIsSet() const
{
    return pwdIsSet_;
}

void PasswordRequest::unsetpwd()
{
    pwdIsSet_ = false;
}

}
}
}
}
}


