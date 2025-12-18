

#include "huaweicloud/meeting/v1/model/QueryCorpAdminResultDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QueryCorpAdminResultDTO::QueryCorpAdminResultDTO()
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
    deptIsSet_ = false;
}

QueryCorpAdminResultDTO::~QueryCorpAdminResultDTO() = default;

void QueryCorpAdminResultDTO::validate()
{
}

web::json::value QueryCorpAdminResultDTO::toJson() const
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
    if(deptIsSet_) {
        val[utility::conversions::to_string_t("dept")] = ModelBase::toJson(dept_);
    }

    return val;
}
bool QueryCorpAdminResultDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("dept"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dept"));
        if(!fieldValue.is_null())
        {
            DeptBasicDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDept(refVal);
        }
    }
    return ok;
}


std::string QueryCorpAdminResultDTO::getId() const
{
    return id_;
}

void QueryCorpAdminResultDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryCorpAdminResultDTO::idIsSet() const
{
    return idIsSet_;
}

void QueryCorpAdminResultDTO::unsetid()
{
    idIsSet_ = false;
}

std::string QueryCorpAdminResultDTO::getAccount() const
{
    return account_;
}

void QueryCorpAdminResultDTO::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool QueryCorpAdminResultDTO::accountIsSet() const
{
    return accountIsSet_;
}

void QueryCorpAdminResultDTO::unsetaccount()
{
    accountIsSet_ = false;
}

std::string QueryCorpAdminResultDTO::getName() const
{
    return name_;
}

void QueryCorpAdminResultDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool QueryCorpAdminResultDTO::nameIsSet() const
{
    return nameIsSet_;
}

void QueryCorpAdminResultDTO::unsetname()
{
    nameIsSet_ = false;
}

int32_t QueryCorpAdminResultDTO::getAdminType() const
{
    return adminType_;
}

void QueryCorpAdminResultDTO::setAdminType(int32_t value)
{
    adminType_ = value;
    adminTypeIsSet_ = true;
}

bool QueryCorpAdminResultDTO::adminTypeIsSet() const
{
    return adminTypeIsSet_;
}

void QueryCorpAdminResultDTO::unsetadminType()
{
    adminTypeIsSet_ = false;
}

std::string QueryCorpAdminResultDTO::getEmail() const
{
    return email_;
}

void QueryCorpAdminResultDTO::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool QueryCorpAdminResultDTO::emailIsSet() const
{
    return emailIsSet_;
}

void QueryCorpAdminResultDTO::unsetemail()
{
    emailIsSet_ = false;
}

std::string QueryCorpAdminResultDTO::getPhone() const
{
    return phone_;
}

void QueryCorpAdminResultDTO::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool QueryCorpAdminResultDTO::phoneIsSet() const
{
    return phoneIsSet_;
}

void QueryCorpAdminResultDTO::unsetphone()
{
    phoneIsSet_ = false;
}

std::string QueryCorpAdminResultDTO::getCountry() const
{
    return country_;
}

void QueryCorpAdminResultDTO::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool QueryCorpAdminResultDTO::countryIsSet() const
{
    return countryIsSet_;
}

void QueryCorpAdminResultDTO::unsetcountry()
{
    countryIsSet_ = false;
}

DeptBasicDTO QueryCorpAdminResultDTO::getDept() const
{
    return dept_;
}

void QueryCorpAdminResultDTO::setDept(const DeptBasicDTO& value)
{
    dept_ = value;
    deptIsSet_ = true;
}

bool QueryCorpAdminResultDTO::deptIsSet() const
{
    return deptIsSet_;
}

void QueryCorpAdminResultDTO::unsetdept()
{
    deptIsSet_ = false;
}

}
}
}
}
}


