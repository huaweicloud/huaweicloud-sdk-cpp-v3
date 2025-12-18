

#include "huaweicloud/meeting/v1/model/QueryCorpBasicResultDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QueryCorpBasicResultDTO::QueryCorpBasicResultDTO()
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
    spId_ = "";
    spIdIsSet_ = false;
}

QueryCorpBasicResultDTO::~QueryCorpBasicResultDTO() = default;

void QueryCorpBasicResultDTO::validate()
{
}

web::json::value QueryCorpBasicResultDTO::toJson() const
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
    if(spIdIsSet_) {
        val[utility::conversions::to_string_t("spId")] = ModelBase::toJson(spId_);
    }

    return val;
}
bool QueryCorpBasicResultDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("spId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpId(refVal);
        }
    }
    return ok;
}


std::string QueryCorpBasicResultDTO::getName() const
{
    return name_;
}

void QueryCorpBasicResultDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool QueryCorpBasicResultDTO::nameIsSet() const
{
    return nameIsSet_;
}

void QueryCorpBasicResultDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string QueryCorpBasicResultDTO::getPhone() const
{
    return phone_;
}

void QueryCorpBasicResultDTO::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool QueryCorpBasicResultDTO::phoneIsSet() const
{
    return phoneIsSet_;
}

void QueryCorpBasicResultDTO::unsetphone()
{
    phoneIsSet_ = false;
}

std::string QueryCorpBasicResultDTO::getCountry() const
{
    return country_;
}

void QueryCorpBasicResultDTO::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool QueryCorpBasicResultDTO::countryIsSet() const
{
    return countryIsSet_;
}

void QueryCorpBasicResultDTO::unsetcountry()
{
    countryIsSet_ = false;
}

std::string QueryCorpBasicResultDTO::getFax() const
{
    return fax_;
}

void QueryCorpBasicResultDTO::setFax(const std::string& value)
{
    fax_ = value;
    faxIsSet_ = true;
}

bool QueryCorpBasicResultDTO::faxIsSet() const
{
    return faxIsSet_;
}

void QueryCorpBasicResultDTO::unsetfax()
{
    faxIsSet_ = false;
}

std::string QueryCorpBasicResultDTO::getEmail() const
{
    return email_;
}

void QueryCorpBasicResultDTO::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool QueryCorpBasicResultDTO::emailIsSet() const
{
    return emailIsSet_;
}

void QueryCorpBasicResultDTO::unsetemail()
{
    emailIsSet_ = false;
}

std::string QueryCorpBasicResultDTO::getAddress() const
{
    return address_;
}

void QueryCorpBasicResultDTO::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool QueryCorpBasicResultDTO::addressIsSet() const
{
    return addressIsSet_;
}

void QueryCorpBasicResultDTO::unsetaddress()
{
    addressIsSet_ = false;
}

std::string QueryCorpBasicResultDTO::getDescription() const
{
    return description_;
}

void QueryCorpBasicResultDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool QueryCorpBasicResultDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void QueryCorpBasicResultDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string QueryCorpBasicResultDTO::getSpId() const
{
    return spId_;
}

void QueryCorpBasicResultDTO::setSpId(const std::string& value)
{
    spId_ = value;
    spIdIsSet_ = true;
}

bool QueryCorpBasicResultDTO::spIdIsSet() const
{
    return spIdIsSet_;
}

void QueryCorpBasicResultDTO::unsetspId()
{
    spIdIsSet_ = false;
}

}
}
}
}
}


