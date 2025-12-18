

#include "huaweicloud/meeting/v1/model/ModDeviceDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ModDeviceDTO::ModDeviceDTO()
{
    name_ = "";
    nameIsSet_ = false;
    prjCodeMode_ = 0;
    prjCodeModeIsSet_ = false;
    deptCode_ = "";
    deptCodeIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    country_ = "";
    countryIsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

ModDeviceDTO::~ModDeviceDTO() = default;

void ModDeviceDTO::validate()
{
}

web::json::value ModDeviceDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(prjCodeModeIsSet_) {
        val[utility::conversions::to_string_t("prjCodeMode")] = ModelBase::toJson(prjCodeMode_);
    }
    if(deptCodeIsSet_) {
        val[utility::conversions::to_string_t("deptCode")] = ModelBase::toJson(deptCode_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
    }
    if(countryIsSet_) {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(country_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ModDeviceDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("prjCodeMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prjCodeMode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrjCodeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmail(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ModDeviceDTO::getName() const
{
    return name_;
}

void ModDeviceDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ModDeviceDTO::nameIsSet() const
{
    return nameIsSet_;
}

void ModDeviceDTO::unsetname()
{
    nameIsSet_ = false;
}

int32_t ModDeviceDTO::getPrjCodeMode() const
{
    return prjCodeMode_;
}

void ModDeviceDTO::setPrjCodeMode(int32_t value)
{
    prjCodeMode_ = value;
    prjCodeModeIsSet_ = true;
}

bool ModDeviceDTO::prjCodeModeIsSet() const
{
    return prjCodeModeIsSet_;
}

void ModDeviceDTO::unsetprjCodeMode()
{
    prjCodeModeIsSet_ = false;
}

std::string ModDeviceDTO::getDeptCode() const
{
    return deptCode_;
}

void ModDeviceDTO::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool ModDeviceDTO::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void ModDeviceDTO::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

std::string ModDeviceDTO::getPhone() const
{
    return phone_;
}

void ModDeviceDTO::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool ModDeviceDTO::phoneIsSet() const
{
    return phoneIsSet_;
}

void ModDeviceDTO::unsetphone()
{
    phoneIsSet_ = false;
}

std::string ModDeviceDTO::getCountry() const
{
    return country_;
}

void ModDeviceDTO::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool ModDeviceDTO::countryIsSet() const
{
    return countryIsSet_;
}

void ModDeviceDTO::unsetcountry()
{
    countryIsSet_ = false;
}

std::string ModDeviceDTO::getEmail() const
{
    return email_;
}

void ModDeviceDTO::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool ModDeviceDTO::emailIsSet() const
{
    return emailIsSet_;
}

void ModDeviceDTO::unsetemail()
{
    emailIsSet_ = false;
}

std::string ModDeviceDTO::getDescription() const
{
    return description_;
}

void ModDeviceDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ModDeviceDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ModDeviceDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t ModDeviceDTO::getStatus() const
{
    return status_;
}

void ModDeviceDTO::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ModDeviceDTO::statusIsSet() const
{
    return statusIsSet_;
}

void ModDeviceDTO::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


