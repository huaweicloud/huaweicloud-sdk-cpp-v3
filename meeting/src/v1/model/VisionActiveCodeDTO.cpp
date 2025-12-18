

#include "huaweicloud/meeting/v1/model/VisionActiveCodeDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




VisionActiveCodeDTO::VisionActiveCodeDTO()
{
    devType_ = "";
    devTypeIsSet_ = false;
    deptCode_ = "";
    deptCodeIsSet_ = false;
    devName_ = "";
    devNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    smsNumber_ = "";
    smsNumberIsSet_ = false;
    country_ = "";
    countryIsSet_ = false;
    emailAddr_ = "";
    emailAddrIsSet_ = false;
}

VisionActiveCodeDTO::~VisionActiveCodeDTO() = default;

void VisionActiveCodeDTO::validate()
{
}

web::json::value VisionActiveCodeDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(devTypeIsSet_) {
        val[utility::conversions::to_string_t("devType")] = ModelBase::toJson(devType_);
    }
    if(deptCodeIsSet_) {
        val[utility::conversions::to_string_t("deptCode")] = ModelBase::toJson(deptCode_);
    }
    if(devNameIsSet_) {
        val[utility::conversions::to_string_t("devName")] = ModelBase::toJson(devName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(smsNumberIsSet_) {
        val[utility::conversions::to_string_t("smsNumber")] = ModelBase::toJson(smsNumber_);
    }
    if(countryIsSet_) {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(country_);
    }
    if(emailAddrIsSet_) {
        val[utility::conversions::to_string_t("emailAddr")] = ModelBase::toJson(emailAddr_);
    }

    return val;
}
bool VisionActiveCodeDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("devType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("devType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("devName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("devName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("smsNumber"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smsNumber"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmsNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("emailAddr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("emailAddr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmailAddr(refVal);
        }
    }
    return ok;
}


std::string VisionActiveCodeDTO::getDevType() const
{
    return devType_;
}

void VisionActiveCodeDTO::setDevType(const std::string& value)
{
    devType_ = value;
    devTypeIsSet_ = true;
}

bool VisionActiveCodeDTO::devTypeIsSet() const
{
    return devTypeIsSet_;
}

void VisionActiveCodeDTO::unsetdevType()
{
    devTypeIsSet_ = false;
}

std::string VisionActiveCodeDTO::getDeptCode() const
{
    return deptCode_;
}

void VisionActiveCodeDTO::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool VisionActiveCodeDTO::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void VisionActiveCodeDTO::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

std::string VisionActiveCodeDTO::getDevName() const
{
    return devName_;
}

void VisionActiveCodeDTO::setDevName(const std::string& value)
{
    devName_ = value;
    devNameIsSet_ = true;
}

bool VisionActiveCodeDTO::devNameIsSet() const
{
    return devNameIsSet_;
}

void VisionActiveCodeDTO::unsetdevName()
{
    devNameIsSet_ = false;
}

std::string VisionActiveCodeDTO::getDescription() const
{
    return description_;
}

void VisionActiveCodeDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool VisionActiveCodeDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void VisionActiveCodeDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string VisionActiveCodeDTO::getSmsNumber() const
{
    return smsNumber_;
}

void VisionActiveCodeDTO::setSmsNumber(const std::string& value)
{
    smsNumber_ = value;
    smsNumberIsSet_ = true;
}

bool VisionActiveCodeDTO::smsNumberIsSet() const
{
    return smsNumberIsSet_;
}

void VisionActiveCodeDTO::unsetsmsNumber()
{
    smsNumberIsSet_ = false;
}

std::string VisionActiveCodeDTO::getCountry() const
{
    return country_;
}

void VisionActiveCodeDTO::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool VisionActiveCodeDTO::countryIsSet() const
{
    return countryIsSet_;
}

void VisionActiveCodeDTO::unsetcountry()
{
    countryIsSet_ = false;
}

std::string VisionActiveCodeDTO::getEmailAddr() const
{
    return emailAddr_;
}

void VisionActiveCodeDTO::setEmailAddr(const std::string& value)
{
    emailAddr_ = value;
    emailAddrIsSet_ = true;
}

bool VisionActiveCodeDTO::emailAddrIsSet() const
{
    return emailAddrIsSet_;
}

void VisionActiveCodeDTO::unsetemailAddr()
{
    emailAddrIsSet_ = false;
}

}
}
}
}
}


