

#include "huaweicloud/ocr/v1/model/DriverLicenseBack.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




DriverLicenseBack::DriverLicenseBack()
{
    type_ = "";
    typeIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    issuingAuthority_ = "";
    issuingAuthorityIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    fileNumber_ = "";
    fileNumberIsSet_ = false;
    record_ = "";
    recordIsSet_ = false;
    textLocationIsSet_ = false;
}

DriverLicenseBack::~DriverLicenseBack() = default;

void DriverLicenseBack::validate()
{
}

web::json::value DriverLicenseBack::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(issuingAuthorityIsSet_) {
        val[utility::conversions::to_string_t("issuing_authority")] = ModelBase::toJson(issuingAuthority_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(fileNumberIsSet_) {
        val[utility::conversions::to_string_t("file_number")] = ModelBase::toJson(fileNumber_);
    }
    if(recordIsSet_) {
        val[utility::conversions::to_string_t("record")] = ModelBase::toJson(record_);
    }
    if(textLocationIsSet_) {
        val[utility::conversions::to_string_t("text_location")] = ModelBase::toJson(textLocation_);
    }

    return val;
}

bool DriverLicenseBack::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("issuing_authority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuing_authority"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuingAuthority(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_location"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextLocation(refVal);
        }
    }
    return ok;
}


std::string DriverLicenseBack::getType() const
{
    return type_;
}

void DriverLicenseBack::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DriverLicenseBack::typeIsSet() const
{
    return typeIsSet_;
}

void DriverLicenseBack::unsettype()
{
    typeIsSet_ = false;
}

std::string DriverLicenseBack::getNumber() const
{
    return number_;
}

void DriverLicenseBack::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool DriverLicenseBack::numberIsSet() const
{
    return numberIsSet_;
}

void DriverLicenseBack::unsetnumber()
{
    numberIsSet_ = false;
}

std::string DriverLicenseBack::getName() const
{
    return name_;
}

void DriverLicenseBack::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DriverLicenseBack::nameIsSet() const
{
    return nameIsSet_;
}

void DriverLicenseBack::unsetname()
{
    nameIsSet_ = false;
}

std::string DriverLicenseBack::getIssuingAuthority() const
{
    return issuingAuthority_;
}

void DriverLicenseBack::setIssuingAuthority(const std::string& value)
{
    issuingAuthority_ = value;
    issuingAuthorityIsSet_ = true;
}

bool DriverLicenseBack::issuingAuthorityIsSet() const
{
    return issuingAuthorityIsSet_;
}

void DriverLicenseBack::unsetissuingAuthority()
{
    issuingAuthorityIsSet_ = false;
}

std::string DriverLicenseBack::getAddress() const
{
    return address_;
}

void DriverLicenseBack::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool DriverLicenseBack::addressIsSet() const
{
    return addressIsSet_;
}

void DriverLicenseBack::unsetaddress()
{
    addressIsSet_ = false;
}

std::string DriverLicenseBack::getFileNumber() const
{
    return fileNumber_;
}

void DriverLicenseBack::setFileNumber(const std::string& value)
{
    fileNumber_ = value;
    fileNumberIsSet_ = true;
}

bool DriverLicenseBack::fileNumberIsSet() const
{
    return fileNumberIsSet_;
}

void DriverLicenseBack::unsetfileNumber()
{
    fileNumberIsSet_ = false;
}

std::string DriverLicenseBack::getRecord() const
{
    return record_;
}

void DriverLicenseBack::setRecord(const std::string& value)
{
    record_ = value;
    recordIsSet_ = true;
}

bool DriverLicenseBack::recordIsSet() const
{
    return recordIsSet_;
}

void DriverLicenseBack::unsetrecord()
{
    recordIsSet_ = false;
}

Object DriverLicenseBack::getTextLocation() const
{
    return textLocation_;
}

void DriverLicenseBack::setTextLocation(const Object& value)
{
    textLocation_ = value;
    textLocationIsSet_ = true;
}

bool DriverLicenseBack::textLocationIsSet() const
{
    return textLocationIsSet_;
}

void DriverLicenseBack::unsettextLocation()
{
    textLocationIsSet_ = false;
}

}
}
}
}
}


