

#include "huaweicloud/meeting/v1/model/CorpBasicDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CorpBasicDTO::CorpBasicDTO()
{
    name_ = "";
    nameIsSet_ = false;
    domain_ = "";
    domainIsSet_ = false;
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
    spId_ = "";
    spIdIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    timeZoneId_ = "";
    timeZoneIdIsSet_ = false;
}

CorpBasicDTO::~CorpBasicDTO() = default;

void CorpBasicDTO::validate()
{
}

web::json::value CorpBasicDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
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
    if(spIdIsSet_) {
        val[utility::conversions::to_string_t("spId")] = ModelBase::toJson(spId_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(timeZoneIdIsSet_) {
        val[utility::conversions::to_string_t("timeZoneId")] = ModelBase::toJson(timeZoneId_);
    }

    return val;
}
bool CorpBasicDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("spId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeZoneId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeZoneId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZoneId(refVal);
        }
    }
    return ok;
}


std::string CorpBasicDTO::getName() const
{
    return name_;
}

void CorpBasicDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CorpBasicDTO::nameIsSet() const
{
    return nameIsSet_;
}

void CorpBasicDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string CorpBasicDTO::getDomain() const
{
    return domain_;
}

void CorpBasicDTO::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool CorpBasicDTO::domainIsSet() const
{
    return domainIsSet_;
}

void CorpBasicDTO::unsetdomain()
{
    domainIsSet_ = false;
}

std::string CorpBasicDTO::getPhone() const
{
    return phone_;
}

void CorpBasicDTO::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool CorpBasicDTO::phoneIsSet() const
{
    return phoneIsSet_;
}

void CorpBasicDTO::unsetphone()
{
    phoneIsSet_ = false;
}

std::string CorpBasicDTO::getCountry() const
{
    return country_;
}

void CorpBasicDTO::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool CorpBasicDTO::countryIsSet() const
{
    return countryIsSet_;
}

void CorpBasicDTO::unsetcountry()
{
    countryIsSet_ = false;
}

std::string CorpBasicDTO::getFax() const
{
    return fax_;
}

void CorpBasicDTO::setFax(const std::string& value)
{
    fax_ = value;
    faxIsSet_ = true;
}

bool CorpBasicDTO::faxIsSet() const
{
    return faxIsSet_;
}

void CorpBasicDTO::unsetfax()
{
    faxIsSet_ = false;
}

std::string CorpBasicDTO::getEmail() const
{
    return email_;
}

void CorpBasicDTO::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool CorpBasicDTO::emailIsSet() const
{
    return emailIsSet_;
}

void CorpBasicDTO::unsetemail()
{
    emailIsSet_ = false;
}

std::string CorpBasicDTO::getAddress() const
{
    return address_;
}

void CorpBasicDTO::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool CorpBasicDTO::addressIsSet() const
{
    return addressIsSet_;
}

void CorpBasicDTO::unsetaddress()
{
    addressIsSet_ = false;
}

std::string CorpBasicDTO::getDescription() const
{
    return description_;
}

void CorpBasicDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CorpBasicDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CorpBasicDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CorpBasicDTO::getSpId() const
{
    return spId_;
}

void CorpBasicDTO::setSpId(const std::string& value)
{
    spId_ = value;
    spIdIsSet_ = true;
}

bool CorpBasicDTO::spIdIsSet() const
{
    return spIdIsSet_;
}

void CorpBasicDTO::unsetspId()
{
    spIdIsSet_ = false;
}

std::string CorpBasicDTO::getLanguage() const
{
    return language_;
}

void CorpBasicDTO::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool CorpBasicDTO::languageIsSet() const
{
    return languageIsSet_;
}

void CorpBasicDTO::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string CorpBasicDTO::getTimeZoneId() const
{
    return timeZoneId_;
}

void CorpBasicDTO::setTimeZoneId(const std::string& value)
{
    timeZoneId_ = value;
    timeZoneIdIsSet_ = true;
}

bool CorpBasicDTO::timeZoneIdIsSet() const
{
    return timeZoneIdIsSet_;
}

void CorpBasicDTO::unsettimeZoneId()
{
    timeZoneIdIsSet_ = false;
}

}
}
}
}
}


