

#include "huaweicloud/meeting/v1/model/ModAdminDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ModAdminDTO::ModAdminDTO()
{
    name_ = "";
    nameIsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    country_ = "";
    countryIsSet_ = false;
}

ModAdminDTO::~ModAdminDTO() = default;

void ModAdminDTO::validate()
{
}

web::json::value ModAdminDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
    }
    if(countryIsSet_) {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(country_);
    }

    return val;
}
bool ModAdminDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhone(refVal);
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


std::string ModAdminDTO::getName() const
{
    return name_;
}

void ModAdminDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ModAdminDTO::nameIsSet() const
{
    return nameIsSet_;
}

void ModAdminDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string ModAdminDTO::getEmail() const
{
    return email_;
}

void ModAdminDTO::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool ModAdminDTO::emailIsSet() const
{
    return emailIsSet_;
}

void ModAdminDTO::unsetemail()
{
    emailIsSet_ = false;
}

std::string ModAdminDTO::getPhone() const
{
    return phone_;
}

void ModAdminDTO::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool ModAdminDTO::phoneIsSet() const
{
    return phoneIsSet_;
}

void ModAdminDTO::unsetphone()
{
    phoneIsSet_ = false;
}

std::string ModAdminDTO::getCountry() const
{
    return country_;
}

void ModAdminDTO::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool ModAdminDTO::countryIsSet() const
{
    return countryIsSet_;
}

void ModAdminDTO::unsetcountry()
{
    countryIsSet_ = false;
}

}
}
}
}
}


