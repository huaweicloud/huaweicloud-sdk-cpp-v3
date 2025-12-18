

#include "huaweicloud/meeting/v1/model/AdminDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AdminDTO::AdminDTO()
{
    account_ = "";
    accountIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    pwd_ = "";
    pwdIsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    country_ = "";
    countryIsSet_ = false;
}

AdminDTO::~AdminDTO() = default;

void AdminDTO::validate()
{
}

web::json::value AdminDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountIsSet_) {
        val[utility::conversions::to_string_t("account")] = ModelBase::toJson(account_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(pwdIsSet_) {
        val[utility::conversions::to_string_t("pwd")] = ModelBase::toJson(pwd_);
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
bool AdminDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("pwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPwd(refVal);
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


std::string AdminDTO::getAccount() const
{
    return account_;
}

void AdminDTO::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool AdminDTO::accountIsSet() const
{
    return accountIsSet_;
}

void AdminDTO::unsetaccount()
{
    accountIsSet_ = false;
}

std::string AdminDTO::getName() const
{
    return name_;
}

void AdminDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AdminDTO::nameIsSet() const
{
    return nameIsSet_;
}

void AdminDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string AdminDTO::getPwd() const
{
    return pwd_;
}

void AdminDTO::setPwd(const std::string& value)
{
    pwd_ = value;
    pwdIsSet_ = true;
}

bool AdminDTO::pwdIsSet() const
{
    return pwdIsSet_;
}

void AdminDTO::unsetpwd()
{
    pwdIsSet_ = false;
}

std::string AdminDTO::getEmail() const
{
    return email_;
}

void AdminDTO::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool AdminDTO::emailIsSet() const
{
    return emailIsSet_;
}

void AdminDTO::unsetemail()
{
    emailIsSet_ = false;
}

std::string AdminDTO::getPhone() const
{
    return phone_;
}

void AdminDTO::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool AdminDTO::phoneIsSet() const
{
    return phoneIsSet_;
}

void AdminDTO::unsetphone()
{
    phoneIsSet_ = false;
}

std::string AdminDTO::getCountry() const
{
    return country_;
}

void AdminDTO::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool AdminDTO::countryIsSet() const
{
    return countryIsSet_;
}

void AdminDTO::unsetcountry()
{
    countryIsSet_ = false;
}

}
}
}
}
}


