

#include "huaweicloud/meeting/v1/model/ExternalContactDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ExternalContactDTO::ExternalContactDTO()
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
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    customNumber_ = "";
    customNumberIsSet_ = false;
    updateTime_ = 0.0;
    updateTimeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ExternalContactDTO::~ExternalContactDTO() = default;

void ExternalContactDTO::validate()
{
}

web::json::value ExternalContactDTO::toJson() const
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
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(customNumberIsSet_) {
        val[utility::conversions::to_string_t("customNumber")] = ModelBase::toJson(customNumber_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("updateTime")] = ModelBase::toJson(updateTime_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ExternalContactDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("customNumber"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("customNumber"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updateTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateTime"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ExternalContactDTO::getOtherNumber() const
{
    return otherNumber_;
}

void ExternalContactDTO::setOtherNumber(const std::string& value)
{
    otherNumber_ = value;
    otherNumberIsSet_ = true;
}

bool ExternalContactDTO::otherNumberIsSet() const
{
    return otherNumberIsSet_;
}

void ExternalContactDTO::unsetotherNumber()
{
    otherNumberIsSet_ = false;
}

std::string ExternalContactDTO::getOtherNumberCountry() const
{
    return otherNumberCountry_;
}

void ExternalContactDTO::setOtherNumberCountry(const std::string& value)
{
    otherNumberCountry_ = value;
    otherNumberCountryIsSet_ = true;
}

bool ExternalContactDTO::otherNumberCountryIsSet() const
{
    return otherNumberCountryIsSet_;
}

void ExternalContactDTO::unsetotherNumberCountry()
{
    otherNumberCountryIsSet_ = false;
}

std::string ExternalContactDTO::getCountry() const
{
    return country_;
}

void ExternalContactDTO::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool ExternalContactDTO::countryIsSet() const
{
    return countryIsSet_;
}

void ExternalContactDTO::unsetcountry()
{
    countryIsSet_ = false;
}

std::string ExternalContactDTO::getPhone() const
{
    return phone_;
}

void ExternalContactDTO::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool ExternalContactDTO::phoneIsSet() const
{
    return phoneIsSet_;
}

void ExternalContactDTO::unsetphone()
{
    phoneIsSet_ = false;
}

std::string ExternalContactDTO::getEmail() const
{
    return email_;
}

void ExternalContactDTO::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool ExternalContactDTO::emailIsSet() const
{
    return emailIsSet_;
}

void ExternalContactDTO::unsetemail()
{
    emailIsSet_ = false;
}

std::string ExternalContactDTO::getCorpName() const
{
    return corpName_;
}

void ExternalContactDTO::setCorpName(const std::string& value)
{
    corpName_ = value;
    corpNameIsSet_ = true;
}

bool ExternalContactDTO::corpNameIsSet() const
{
    return corpNameIsSet_;
}

void ExternalContactDTO::unsetcorpName()
{
    corpNameIsSet_ = false;
}

std::string ExternalContactDTO::getDeptName() const
{
    return deptName_;
}

void ExternalContactDTO::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool ExternalContactDTO::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void ExternalContactDTO::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string ExternalContactDTO::getPosition() const
{
    return position_;
}

void ExternalContactDTO::setPosition(const std::string& value)
{
    position_ = value;
    positionIsSet_ = true;
}

bool ExternalContactDTO::positionIsSet() const
{
    return positionIsSet_;
}

void ExternalContactDTO::unsetposition()
{
    positionIsSet_ = false;
}

std::string ExternalContactDTO::getAddress() const
{
    return address_;
}

void ExternalContactDTO::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool ExternalContactDTO::addressIsSet() const
{
    return addressIsSet_;
}

void ExternalContactDTO::unsetaddress()
{
    addressIsSet_ = false;
}

std::string ExternalContactDTO::getRemarks() const
{
    return remarks_;
}

void ExternalContactDTO::setRemarks(const std::string& value)
{
    remarks_ = value;
    remarksIsSet_ = true;
}

bool ExternalContactDTO::remarksIsSet() const
{
    return remarksIsSet_;
}

void ExternalContactDTO::unsetremarks()
{
    remarksIsSet_ = false;
}

std::string ExternalContactDTO::getId() const
{
    return id_;
}

void ExternalContactDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ExternalContactDTO::idIsSet() const
{
    return idIsSet_;
}

void ExternalContactDTO::unsetid()
{
    idIsSet_ = false;
}

std::string ExternalContactDTO::getName() const
{
    return name_;
}

void ExternalContactDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ExternalContactDTO::nameIsSet() const
{
    return nameIsSet_;
}

void ExternalContactDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string ExternalContactDTO::getCustomNumber() const
{
    return customNumber_;
}

void ExternalContactDTO::setCustomNumber(const std::string& value)
{
    customNumber_ = value;
    customNumberIsSet_ = true;
}

bool ExternalContactDTO::customNumberIsSet() const
{
    return customNumberIsSet_;
}

void ExternalContactDTO::unsetcustomNumber()
{
    customNumberIsSet_ = false;
}

double ExternalContactDTO::getUpdateTime() const
{
    return updateTime_;
}

void ExternalContactDTO::setUpdateTime(double value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ExternalContactDTO::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ExternalContactDTO::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ExternalContactDTO::getType() const
{
    return type_;
}

void ExternalContactDTO::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ExternalContactDTO::typeIsSet() const
{
    return typeIsSet_;
}

void ExternalContactDTO::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


