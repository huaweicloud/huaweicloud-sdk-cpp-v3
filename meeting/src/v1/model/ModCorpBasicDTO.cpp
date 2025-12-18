

#include "huaweicloud/meeting/v1/model/ModCorpBasicDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ModCorpBasicDTO::ModCorpBasicDTO()
{
    name_ = "";
    nameIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    country_ = "";
    countryIsSet_ = false;
    fax_ = "";
    faxIsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ModCorpBasicDTO::~ModCorpBasicDTO() = default;

void ModCorpBasicDTO::validate()
{
}

web::json::value ModCorpBasicDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
    }
    if(countryIsSet_) {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(country_);
    }
    if(faxIsSet_) {
        val[utility::conversions::to_string_t("fax")] = ModelBase::toJson(fax_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool ModCorpBasicDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("fax"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fax"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFax(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string ModCorpBasicDTO::getName() const
{
    return name_;
}

void ModCorpBasicDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ModCorpBasicDTO::nameIsSet() const
{
    return nameIsSet_;
}

void ModCorpBasicDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string ModCorpBasicDTO::getPhone() const
{
    return phone_;
}

void ModCorpBasicDTO::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool ModCorpBasicDTO::phoneIsSet() const
{
    return phoneIsSet_;
}

void ModCorpBasicDTO::unsetphone()
{
    phoneIsSet_ = false;
}

std::string ModCorpBasicDTO::getCountry() const
{
    return country_;
}

void ModCorpBasicDTO::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool ModCorpBasicDTO::countryIsSet() const
{
    return countryIsSet_;
}

void ModCorpBasicDTO::unsetcountry()
{
    countryIsSet_ = false;
}

std::string ModCorpBasicDTO::getFax() const
{
    return fax_;
}

void ModCorpBasicDTO::setFax(const std::string& value)
{
    fax_ = value;
    faxIsSet_ = true;
}

bool ModCorpBasicDTO::faxIsSet() const
{
    return faxIsSet_;
}

void ModCorpBasicDTO::unsetfax()
{
    faxIsSet_ = false;
}

std::string ModCorpBasicDTO::getEmail() const
{
    return email_;
}

void ModCorpBasicDTO::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool ModCorpBasicDTO::emailIsSet() const
{
    return emailIsSet_;
}

void ModCorpBasicDTO::unsetemail()
{
    emailIsSet_ = false;
}

std::string ModCorpBasicDTO::getAddress() const
{
    return address_;
}

void ModCorpBasicDTO::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool ModCorpBasicDTO::addressIsSet() const
{
    return addressIsSet_;
}

void ModCorpBasicDTO::unsetaddress()
{
    addressIsSet_ = false;
}

std::string ModCorpBasicDTO::getDescription() const
{
    return description_;
}

void ModCorpBasicDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ModCorpBasicDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ModCorpBasicDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


