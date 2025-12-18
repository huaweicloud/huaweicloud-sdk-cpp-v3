

#include "huaweicloud/meeting/v1/model/ExternalContactBase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ExternalContactBase::ExternalContactBase()
{
    otherNumber_ = "";
    otherNumberIsSet_ = false;
    otherNumberCountry_ = "";
    otherNumberCountryIsSet_ = false;
    country_ = "";
    countryIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    corpName_ = "";
    corpNameIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
    position_ = "";
    positionIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    remarks_ = "";
    remarksIsSet_ = false;
}

ExternalContactBase::~ExternalContactBase() = default;

void ExternalContactBase::validate()
{
}

web::json::value ExternalContactBase::toJson() const
{
    web::json::value val = web::json::value::object();

    if(otherNumberIsSet_) {
        val[utility::conversions::to_string_t("otherNumber")] = ModelBase::toJson(otherNumber_);
    }
    if(otherNumberCountryIsSet_) {
        val[utility::conversions::to_string_t("otherNumberCountry")] = ModelBase::toJson(otherNumberCountry_);
    }
    if(countryIsSet_) {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(country_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(corpNameIsSet_) {
        val[utility::conversions::to_string_t("corpName")] = ModelBase::toJson(corpName_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }
    if(positionIsSet_) {
        val[utility::conversions::to_string_t("position")] = ModelBase::toJson(position_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(remarksIsSet_) {
        val[utility::conversions::to_string_t("remarks")] = ModelBase::toJson(remarks_);
    }

    return val;
}
bool ExternalContactBase::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("otherNumber"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("otherNumber"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOtherNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("otherNumberCountry"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("otherNumberCountry"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOtherNumberCountry(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhone(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("corpName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("corpName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCorpName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("position"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("position"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPosition(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("remarks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remarks"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemarks(refVal);
        }
    }
    return ok;
}


std::string ExternalContactBase::getOtherNumber() const
{
    return otherNumber_;
}

void ExternalContactBase::setOtherNumber(const std::string& value)
{
    otherNumber_ = value;
    otherNumberIsSet_ = true;
}

bool ExternalContactBase::otherNumberIsSet() const
{
    return otherNumberIsSet_;
}

void ExternalContactBase::unsetotherNumber()
{
    otherNumberIsSet_ = false;
}

std::string ExternalContactBase::getOtherNumberCountry() const
{
    return otherNumberCountry_;
}

void ExternalContactBase::setOtherNumberCountry(const std::string& value)
{
    otherNumberCountry_ = value;
    otherNumberCountryIsSet_ = true;
}

bool ExternalContactBase::otherNumberCountryIsSet() const
{
    return otherNumberCountryIsSet_;
}

void ExternalContactBase::unsetotherNumberCountry()
{
    otherNumberCountryIsSet_ = false;
}

std::string ExternalContactBase::getCountry() const
{
    return country_;
}

void ExternalContactBase::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool ExternalContactBase::countryIsSet() const
{
    return countryIsSet_;
}

void ExternalContactBase::unsetcountry()
{
    countryIsSet_ = false;
}

std::string ExternalContactBase::getPhone() const
{
    return phone_;
}

void ExternalContactBase::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool ExternalContactBase::phoneIsSet() const
{
    return phoneIsSet_;
}

void ExternalContactBase::unsetphone()
{
    phoneIsSet_ = false;
}

std::string ExternalContactBase::getEmail() const
{
    return email_;
}

void ExternalContactBase::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool ExternalContactBase::emailIsSet() const
{
    return emailIsSet_;
}

void ExternalContactBase::unsetemail()
{
    emailIsSet_ = false;
}

std::string ExternalContactBase::getCorpName() const
{
    return corpName_;
}

void ExternalContactBase::setCorpName(const std::string& value)
{
    corpName_ = value;
    corpNameIsSet_ = true;
}

bool ExternalContactBase::corpNameIsSet() const
{
    return corpNameIsSet_;
}

void ExternalContactBase::unsetcorpName()
{
    corpNameIsSet_ = false;
}

std::string ExternalContactBase::getDeptName() const
{
    return deptName_;
}

void ExternalContactBase::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool ExternalContactBase::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void ExternalContactBase::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string ExternalContactBase::getPosition() const
{
    return position_;
}

void ExternalContactBase::setPosition(const std::string& value)
{
    position_ = value;
    positionIsSet_ = true;
}

bool ExternalContactBase::positionIsSet() const
{
    return positionIsSet_;
}

void ExternalContactBase::unsetposition()
{
    positionIsSet_ = false;
}

std::string ExternalContactBase::getAddress() const
{
    return address_;
}

void ExternalContactBase::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool ExternalContactBase::addressIsSet() const
{
    return addressIsSet_;
}

void ExternalContactBase::unsetaddress()
{
    addressIsSet_ = false;
}

std::string ExternalContactBase::getRemarks() const
{
    return remarks_;
}

void ExternalContactBase::setRemarks(const std::string& value)
{
    remarks_ = value;
    remarksIsSet_ = true;
}

bool ExternalContactBase::remarksIsSet() const
{
    return remarksIsSet_;
}

void ExternalContactBase::unsetremarks()
{
    remarksIsSet_ = false;
}

}
}
}
}
}


