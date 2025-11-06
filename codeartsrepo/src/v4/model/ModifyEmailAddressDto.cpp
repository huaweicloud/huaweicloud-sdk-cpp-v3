

#include "huaweicloud/codeartsrepo/v4/model/ModifyEmailAddressDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ModifyEmailAddressDto::ModifyEmailAddressDto()
{
    email_ = "";
    emailIsSet_ = false;
    verifyCode_ = "";
    verifyCodeIsSet_ = false;
}

ModifyEmailAddressDto::~ModifyEmailAddressDto() = default;

void ModifyEmailAddressDto::validate()
{
}

web::json::value ModifyEmailAddressDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(verifyCodeIsSet_) {
        val[utility::conversions::to_string_t("verify_code")] = ModelBase::toJson(verifyCode_);
    }

    return val;
}
bool ModifyEmailAddressDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verify_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verify_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerifyCode(refVal);
        }
    }
    return ok;
}


std::string ModifyEmailAddressDto::getEmail() const
{
    return email_;
}

void ModifyEmailAddressDto::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool ModifyEmailAddressDto::emailIsSet() const
{
    return emailIsSet_;
}

void ModifyEmailAddressDto::unsetemail()
{
    emailIsSet_ = false;
}

std::string ModifyEmailAddressDto::getVerifyCode() const
{
    return verifyCode_;
}

void ModifyEmailAddressDto::setVerifyCode(const std::string& value)
{
    verifyCode_ = value;
    verifyCodeIsSet_ = true;
}

bool ModifyEmailAddressDto::verifyCodeIsSet() const
{
    return verifyCodeIsSet_;
}

void ModifyEmailAddressDto::unsetverifyCode()
{
    verifyCodeIsSet_ = false;
}

}
}
}
}
}


