

#include "huaweicloud/meeting/v1/model/QueryAdminResultDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QueryAdminResultDTO::QueryAdminResultDTO()
{
    id_ = "";
    idIsSet_ = false;
    account_ = "";
    accountIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    adminType_ = 0;
    adminTypeIsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    country_ = "";
    countryIsSet_ = false;
}

QueryAdminResultDTO::~QueryAdminResultDTO() = default;

void QueryAdminResultDTO::validate()
{
}

web::json::value QueryAdminResultDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(accountIsSet_) {
        val[utility::conversions::to_string_t("account")] = ModelBase::toJson(account_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(adminTypeIsSet_) {
        val[utility::conversions::to_string_t("adminType")] = ModelBase::toJson(adminType_);
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
bool QueryAdminResultDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("adminType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("adminType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminType(refVal);
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


std::string QueryAdminResultDTO::getId() const
{
    return id_;
}

void QueryAdminResultDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryAdminResultDTO::idIsSet() const
{
    return idIsSet_;
}

void QueryAdminResultDTO::unsetid()
{
    idIsSet_ = false;
}

std::string QueryAdminResultDTO::getAccount() const
{
    return account_;
}

void QueryAdminResultDTO::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool QueryAdminResultDTO::accountIsSet() const
{
    return accountIsSet_;
}

void QueryAdminResultDTO::unsetaccount()
{
    accountIsSet_ = false;
}

std::string QueryAdminResultDTO::getName() const
{
    return name_;
}

void QueryAdminResultDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool QueryAdminResultDTO::nameIsSet() const
{
    return nameIsSet_;
}

void QueryAdminResultDTO::unsetname()
{
    nameIsSet_ = false;
}

int32_t QueryAdminResultDTO::getAdminType() const
{
    return adminType_;
}

void QueryAdminResultDTO::setAdminType(int32_t value)
{
    adminType_ = value;
    adminTypeIsSet_ = true;
}

bool QueryAdminResultDTO::adminTypeIsSet() const
{
    return adminTypeIsSet_;
}

void QueryAdminResultDTO::unsetadminType()
{
    adminTypeIsSet_ = false;
}

std::string QueryAdminResultDTO::getEmail() const
{
    return email_;
}

void QueryAdminResultDTO::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool QueryAdminResultDTO::emailIsSet() const
{
    return emailIsSet_;
}

void QueryAdminResultDTO::unsetemail()
{
    emailIsSet_ = false;
}

std::string QueryAdminResultDTO::getPhone() const
{
    return phone_;
}

void QueryAdminResultDTO::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool QueryAdminResultDTO::phoneIsSet() const
{
    return phoneIsSet_;
}

void QueryAdminResultDTO::unsetphone()
{
    phoneIsSet_ = false;
}

std::string QueryAdminResultDTO::getCountry() const
{
    return country_;
}

void QueryAdminResultDTO::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool QueryAdminResultDTO::countryIsSet() const
{
    return countryIsSet_;
}

void QueryAdminResultDTO::unsetcountry()
{
    countryIsSet_ = false;
}

}
}
}
}
}


