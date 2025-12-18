

#include "huaweicloud/meeting/v1/model/VerificationCodeDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




VerificationCodeDTO::VerificationCodeDTO()
{
    contact_ = "";
    contactIsSet_ = false;
    verificationCode_ = "";
    verificationCodeIsSet_ = false;
    country_ = "";
    countryIsSet_ = false;
}

VerificationCodeDTO::~VerificationCodeDTO() = default;

void VerificationCodeDTO::validate()
{
}

web::json::value VerificationCodeDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contactIsSet_) {
        val[utility::conversions::to_string_t("contact")] = ModelBase::toJson(contact_);
    }
    if(verificationCodeIsSet_) {
        val[utility::conversions::to_string_t("verificationCode")] = ModelBase::toJson(verificationCode_);
    }
    if(countryIsSet_) {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(country_);
    }

    return val;
}
bool VerificationCodeDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("contact"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contact"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContact(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verificationCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verificationCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerificationCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("country"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("country"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountry(refVal);
        }
    }
    return ok;
}


std::string VerificationCodeDTO::getContact() const
{
    return contact_;
}

void VerificationCodeDTO::setContact(const std::string& value)
{
    contact_ = value;
    contactIsSet_ = true;
}

bool VerificationCodeDTO::contactIsSet() const
{
    return contactIsSet_;
}

void VerificationCodeDTO::unsetcontact()
{
    contactIsSet_ = false;
}

std::string VerificationCodeDTO::getVerificationCode() const
{
    return verificationCode_;
}

void VerificationCodeDTO::setVerificationCode(const std::string& value)
{
    verificationCode_ = value;
    verificationCodeIsSet_ = true;
}

bool VerificationCodeDTO::verificationCodeIsSet() const
{
    return verificationCodeIsSet_;
}

void VerificationCodeDTO::unsetverificationCode()
{
    verificationCodeIsSet_ = false;
}

std::string VerificationCodeDTO::getCountry() const
{
    return country_;
}

void VerificationCodeDTO::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool VerificationCodeDTO::countryIsSet() const
{
    return countryIsSet_;
}

void VerificationCodeDTO::unsetcountry()
{
    countryIsSet_ = false;
}

}
}
}
}
}


