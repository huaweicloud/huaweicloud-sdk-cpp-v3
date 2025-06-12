

#include "huaweicloud/metastudio/v1/model/BusinessCardTextConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




BusinessCardTextConfig::BusinessCardTextConfig()
{
    name_ = "";
    nameIsSet_ = false;
    company_ = "";
    companyIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    mobilePhone_ = "";
    mobilePhoneIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    mail_ = "";
    mailIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    other1_ = "";
    other1IsSet_ = false;
    other2_ = "";
    other2IsSet_ = false;
    other3_ = "";
    other3IsSet_ = false;
}

BusinessCardTextConfig::~BusinessCardTextConfig() = default;

void BusinessCardTextConfig::validate()
{
}

web::json::value BusinessCardTextConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(companyIsSet_) {
        val[utility::conversions::to_string_t("company")] = ModelBase::toJson(company_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(mobilePhoneIsSet_) {
        val[utility::conversions::to_string_t("mobile_phone")] = ModelBase::toJson(mobilePhone_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
    }
    if(mailIsSet_) {
        val[utility::conversions::to_string_t("mail")] = ModelBase::toJson(mail_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(other1IsSet_) {
        val[utility::conversions::to_string_t("other1")] = ModelBase::toJson(other1_);
    }
    if(other2IsSet_) {
        val[utility::conversions::to_string_t("other2")] = ModelBase::toJson(other2_);
    }
    if(other3IsSet_) {
        val[utility::conversions::to_string_t("other3")] = ModelBase::toJson(other3_);
    }

    return val;
}
bool BusinessCardTextConfig::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("company"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("company"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompany(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mobile_phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mobile_phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMobilePhone(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("mail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMail(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("other1"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("other1"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOther1(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("other2"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("other2"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOther2(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("other3"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("other3"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOther3(refVal);
        }
    }
    return ok;
}


std::string BusinessCardTextConfig::getName() const
{
    return name_;
}

void BusinessCardTextConfig::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BusinessCardTextConfig::nameIsSet() const
{
    return nameIsSet_;
}

void BusinessCardTextConfig::unsetname()
{
    nameIsSet_ = false;
}

std::string BusinessCardTextConfig::getCompany() const
{
    return company_;
}

void BusinessCardTextConfig::setCompany(const std::string& value)
{
    company_ = value;
    companyIsSet_ = true;
}

bool BusinessCardTextConfig::companyIsSet() const
{
    return companyIsSet_;
}

void BusinessCardTextConfig::unsetcompany()
{
    companyIsSet_ = false;
}

std::string BusinessCardTextConfig::getTitle() const
{
    return title_;
}

void BusinessCardTextConfig::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool BusinessCardTextConfig::titleIsSet() const
{
    return titleIsSet_;
}

void BusinessCardTextConfig::unsettitle()
{
    titleIsSet_ = false;
}

std::string BusinessCardTextConfig::getMobilePhone() const
{
    return mobilePhone_;
}

void BusinessCardTextConfig::setMobilePhone(const std::string& value)
{
    mobilePhone_ = value;
    mobilePhoneIsSet_ = true;
}

bool BusinessCardTextConfig::mobilePhoneIsSet() const
{
    return mobilePhoneIsSet_;
}

void BusinessCardTextConfig::unsetmobilePhone()
{
    mobilePhoneIsSet_ = false;
}

std::string BusinessCardTextConfig::getPhone() const
{
    return phone_;
}

void BusinessCardTextConfig::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool BusinessCardTextConfig::phoneIsSet() const
{
    return phoneIsSet_;
}

void BusinessCardTextConfig::unsetphone()
{
    phoneIsSet_ = false;
}

std::string BusinessCardTextConfig::getMail() const
{
    return mail_;
}

void BusinessCardTextConfig::setMail(const std::string& value)
{
    mail_ = value;
    mailIsSet_ = true;
}

bool BusinessCardTextConfig::mailIsSet() const
{
    return mailIsSet_;
}

void BusinessCardTextConfig::unsetmail()
{
    mailIsSet_ = false;
}

std::string BusinessCardTextConfig::getAddress() const
{
    return address_;
}

void BusinessCardTextConfig::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool BusinessCardTextConfig::addressIsSet() const
{
    return addressIsSet_;
}

void BusinessCardTextConfig::unsetaddress()
{
    addressIsSet_ = false;
}

std::string BusinessCardTextConfig::getOther1() const
{
    return other1_;
}

void BusinessCardTextConfig::setOther1(const std::string& value)
{
    other1_ = value;
    other1IsSet_ = true;
}

bool BusinessCardTextConfig::other1IsSet() const
{
    return other1IsSet_;
}

void BusinessCardTextConfig::unsetother1()
{
    other1IsSet_ = false;
}

std::string BusinessCardTextConfig::getOther2() const
{
    return other2_;
}

void BusinessCardTextConfig::setOther2(const std::string& value)
{
    other2_ = value;
    other2IsSet_ = true;
}

bool BusinessCardTextConfig::other2IsSet() const
{
    return other2IsSet_;
}

void BusinessCardTextConfig::unsetother2()
{
    other2IsSet_ = false;
}

std::string BusinessCardTextConfig::getOther3() const
{
    return other3_;
}

void BusinessCardTextConfig::setOther3(const std::string& value)
{
    other3_ = value;
    other3IsSet_ = true;
}

bool BusinessCardTextConfig::other3IsSet() const
{
    return other3IsSet_;
}

void BusinessCardTextConfig::unsetother3()
{
    other3IsSet_ = false;
}

}
}
}
}
}


