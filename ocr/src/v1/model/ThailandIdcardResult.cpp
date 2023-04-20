

#include "huaweicloud/ocr/v1/model/ThailandIdcardResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




ThailandIdcardResult::ThailandIdcardResult()
{
    type_ = "";
    typeIsSet_ = false;
    nameEn_ = "";
    nameEnIsSet_ = false;
    refNumber_ = "";
    refNumberIsSet_ = false;
    side_ = "";
    sideIsSet_ = false;
    idNumber_ = "";
    idNumberIsSet_ = false;
    nameTh_ = "";
    nameThIsSet_ = false;
    firstNameEn_ = "";
    firstNameEnIsSet_ = false;
    lastNameEn_ = "";
    lastNameEnIsSet_ = false;
    dateOfBirthTh_ = "";
    dateOfBirthThIsSet_ = false;
    dateOfBirthEn_ = "";
    dateOfBirthEnIsSet_ = false;
    religionTh_ = "";
    religionThIsSet_ = false;
    addressTh_ = "";
    addressThIsSet_ = false;
    dateOfIssueTh_ = "";
    dateOfIssueThIsSet_ = false;
    dateOfIssueEn_ = "";
    dateOfIssueEnIsSet_ = false;
    dateOfExpiryTh_ = "";
    dateOfExpiryThIsSet_ = false;
    dateOfExpiryEn_ = "";
    dateOfExpiryEnIsSet_ = false;
    serialNumber_ = "";
    serialNumberIsSet_ = false;
    cardNumber_ = "";
    cardNumberIsSet_ = false;
    laserNumber_ = "";
    laserNumberIsSet_ = false;
    confidenceIsSet_ = false;
    portraitImage_ = "";
    portraitImageIsSet_ = false;
    portraitLocationIsSet_ = false;
    idcardType_ = "";
    idcardTypeIsSet_ = false;
    textLocationIsSet_ = false;
}

ThailandIdcardResult::~ThailandIdcardResult() = default;

void ThailandIdcardResult::validate()
{
}

web::json::value ThailandIdcardResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameEnIsSet_) {
        val[utility::conversions::to_string_t("name_en")] = ModelBase::toJson(nameEn_);
    }
    if(refNumberIsSet_) {
        val[utility::conversions::to_string_t("ref_number")] = ModelBase::toJson(refNumber_);
    }
    if(sideIsSet_) {
        val[utility::conversions::to_string_t("side")] = ModelBase::toJson(side_);
    }
    if(idNumberIsSet_) {
        val[utility::conversions::to_string_t("id_number")] = ModelBase::toJson(idNumber_);
    }
    if(nameThIsSet_) {
        val[utility::conversions::to_string_t("name_th")] = ModelBase::toJson(nameTh_);
    }
    if(firstNameEnIsSet_) {
        val[utility::conversions::to_string_t("first_name_en")] = ModelBase::toJson(firstNameEn_);
    }
    if(lastNameEnIsSet_) {
        val[utility::conversions::to_string_t("last_name_en")] = ModelBase::toJson(lastNameEn_);
    }
    if(dateOfBirthThIsSet_) {
        val[utility::conversions::to_string_t("date_of_birth_th")] = ModelBase::toJson(dateOfBirthTh_);
    }
    if(dateOfBirthEnIsSet_) {
        val[utility::conversions::to_string_t("date_of_birth_en")] = ModelBase::toJson(dateOfBirthEn_);
    }
    if(religionThIsSet_) {
        val[utility::conversions::to_string_t("religion_th")] = ModelBase::toJson(religionTh_);
    }
    if(addressThIsSet_) {
        val[utility::conversions::to_string_t("address_th")] = ModelBase::toJson(addressTh_);
    }
    if(dateOfIssueThIsSet_) {
        val[utility::conversions::to_string_t("date_of_issue_th")] = ModelBase::toJson(dateOfIssueTh_);
    }
    if(dateOfIssueEnIsSet_) {
        val[utility::conversions::to_string_t("date_of_issue_en")] = ModelBase::toJson(dateOfIssueEn_);
    }
    if(dateOfExpiryThIsSet_) {
        val[utility::conversions::to_string_t("date_of_expiry_th")] = ModelBase::toJson(dateOfExpiryTh_);
    }
    if(dateOfExpiryEnIsSet_) {
        val[utility::conversions::to_string_t("date_of_expiry_en")] = ModelBase::toJson(dateOfExpiryEn_);
    }
    if(serialNumberIsSet_) {
        val[utility::conversions::to_string_t("serial_number")] = ModelBase::toJson(serialNumber_);
    }
    if(cardNumberIsSet_) {
        val[utility::conversions::to_string_t("card_number")] = ModelBase::toJson(cardNumber_);
    }
    if(laserNumberIsSet_) {
        val[utility::conversions::to_string_t("laser_number")] = ModelBase::toJson(laserNumber_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }
    if(portraitImageIsSet_) {
        val[utility::conversions::to_string_t("portrait_image")] = ModelBase::toJson(portraitImage_);
    }
    if(portraitLocationIsSet_) {
        val[utility::conversions::to_string_t("portrait_location")] = ModelBase::toJson(portraitLocation_);
    }
    if(idcardTypeIsSet_) {
        val[utility::conversions::to_string_t("idcard_type")] = ModelBase::toJson(idcardType_);
    }
    if(textLocationIsSet_) {
        val[utility::conversions::to_string_t("text_location")] = ModelBase::toJson(textLocation_);
    }

    return val;
}

bool ThailandIdcardResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ref_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("side"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("side"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSide(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_th"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_th"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameTh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("first_name_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("first_name_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirstNameEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_name_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_name_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastNameEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date_of_birth_th"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date_of_birth_th"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDateOfBirthTh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date_of_birth_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date_of_birth_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDateOfBirthEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("religion_th"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("religion_th"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReligionTh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address_th"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_th"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressTh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date_of_issue_th"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date_of_issue_th"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDateOfIssueTh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date_of_issue_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date_of_issue_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDateOfIssueEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date_of_expiry_th"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date_of_expiry_th"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDateOfExpiryTh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date_of_expiry_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date_of_expiry_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDateOfExpiryEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serial_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serial_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSerialNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("card_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("card_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCardNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("laser_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("laser_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLaserNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            ThailandIdcardConfidence refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("portrait_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("portrait_image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortraitImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("portrait_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("portrait_location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortraitLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("idcard_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idcard_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdcardType(refVal);
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


std::string ThailandIdcardResult::getType() const
{
    return type_;
}

void ThailandIdcardResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ThailandIdcardResult::typeIsSet() const
{
    return typeIsSet_;
}

void ThailandIdcardResult::unsettype()
{
    typeIsSet_ = false;
}

std::string ThailandIdcardResult::getNameEn() const
{
    return nameEn_;
}

void ThailandIdcardResult::setNameEn(const std::string& value)
{
    nameEn_ = value;
    nameEnIsSet_ = true;
}

bool ThailandIdcardResult::nameEnIsSet() const
{
    return nameEnIsSet_;
}

void ThailandIdcardResult::unsetnameEn()
{
    nameEnIsSet_ = false;
}

std::string ThailandIdcardResult::getRefNumber() const
{
    return refNumber_;
}

void ThailandIdcardResult::setRefNumber(const std::string& value)
{
    refNumber_ = value;
    refNumberIsSet_ = true;
}

bool ThailandIdcardResult::refNumberIsSet() const
{
    return refNumberIsSet_;
}

void ThailandIdcardResult::unsetrefNumber()
{
    refNumberIsSet_ = false;
}

std::string ThailandIdcardResult::getSide() const
{
    return side_;
}

void ThailandIdcardResult::setSide(const std::string& value)
{
    side_ = value;
    sideIsSet_ = true;
}

bool ThailandIdcardResult::sideIsSet() const
{
    return sideIsSet_;
}

void ThailandIdcardResult::unsetside()
{
    sideIsSet_ = false;
}

std::string ThailandIdcardResult::getIdNumber() const
{
    return idNumber_;
}

void ThailandIdcardResult::setIdNumber(const std::string& value)
{
    idNumber_ = value;
    idNumberIsSet_ = true;
}

bool ThailandIdcardResult::idNumberIsSet() const
{
    return idNumberIsSet_;
}

void ThailandIdcardResult::unsetidNumber()
{
    idNumberIsSet_ = false;
}

std::string ThailandIdcardResult::getNameTh() const
{
    return nameTh_;
}

void ThailandIdcardResult::setNameTh(const std::string& value)
{
    nameTh_ = value;
    nameThIsSet_ = true;
}

bool ThailandIdcardResult::nameThIsSet() const
{
    return nameThIsSet_;
}

void ThailandIdcardResult::unsetnameTh()
{
    nameThIsSet_ = false;
}

std::string ThailandIdcardResult::getFirstNameEn() const
{
    return firstNameEn_;
}

void ThailandIdcardResult::setFirstNameEn(const std::string& value)
{
    firstNameEn_ = value;
    firstNameEnIsSet_ = true;
}

bool ThailandIdcardResult::firstNameEnIsSet() const
{
    return firstNameEnIsSet_;
}

void ThailandIdcardResult::unsetfirstNameEn()
{
    firstNameEnIsSet_ = false;
}

std::string ThailandIdcardResult::getLastNameEn() const
{
    return lastNameEn_;
}

void ThailandIdcardResult::setLastNameEn(const std::string& value)
{
    lastNameEn_ = value;
    lastNameEnIsSet_ = true;
}

bool ThailandIdcardResult::lastNameEnIsSet() const
{
    return lastNameEnIsSet_;
}

void ThailandIdcardResult::unsetlastNameEn()
{
    lastNameEnIsSet_ = false;
}

std::string ThailandIdcardResult::getDateOfBirthTh() const
{
    return dateOfBirthTh_;
}

void ThailandIdcardResult::setDateOfBirthTh(const std::string& value)
{
    dateOfBirthTh_ = value;
    dateOfBirthThIsSet_ = true;
}

bool ThailandIdcardResult::dateOfBirthThIsSet() const
{
    return dateOfBirthThIsSet_;
}

void ThailandIdcardResult::unsetdateOfBirthTh()
{
    dateOfBirthThIsSet_ = false;
}

std::string ThailandIdcardResult::getDateOfBirthEn() const
{
    return dateOfBirthEn_;
}

void ThailandIdcardResult::setDateOfBirthEn(const std::string& value)
{
    dateOfBirthEn_ = value;
    dateOfBirthEnIsSet_ = true;
}

bool ThailandIdcardResult::dateOfBirthEnIsSet() const
{
    return dateOfBirthEnIsSet_;
}

void ThailandIdcardResult::unsetdateOfBirthEn()
{
    dateOfBirthEnIsSet_ = false;
}

std::string ThailandIdcardResult::getReligionTh() const
{
    return religionTh_;
}

void ThailandIdcardResult::setReligionTh(const std::string& value)
{
    religionTh_ = value;
    religionThIsSet_ = true;
}

bool ThailandIdcardResult::religionThIsSet() const
{
    return religionThIsSet_;
}

void ThailandIdcardResult::unsetreligionTh()
{
    religionThIsSet_ = false;
}

std::string ThailandIdcardResult::getAddressTh() const
{
    return addressTh_;
}

void ThailandIdcardResult::setAddressTh(const std::string& value)
{
    addressTh_ = value;
    addressThIsSet_ = true;
}

bool ThailandIdcardResult::addressThIsSet() const
{
    return addressThIsSet_;
}

void ThailandIdcardResult::unsetaddressTh()
{
    addressThIsSet_ = false;
}

std::string ThailandIdcardResult::getDateOfIssueTh() const
{
    return dateOfIssueTh_;
}

void ThailandIdcardResult::setDateOfIssueTh(const std::string& value)
{
    dateOfIssueTh_ = value;
    dateOfIssueThIsSet_ = true;
}

bool ThailandIdcardResult::dateOfIssueThIsSet() const
{
    return dateOfIssueThIsSet_;
}

void ThailandIdcardResult::unsetdateOfIssueTh()
{
    dateOfIssueThIsSet_ = false;
}

std::string ThailandIdcardResult::getDateOfIssueEn() const
{
    return dateOfIssueEn_;
}

void ThailandIdcardResult::setDateOfIssueEn(const std::string& value)
{
    dateOfIssueEn_ = value;
    dateOfIssueEnIsSet_ = true;
}

bool ThailandIdcardResult::dateOfIssueEnIsSet() const
{
    return dateOfIssueEnIsSet_;
}

void ThailandIdcardResult::unsetdateOfIssueEn()
{
    dateOfIssueEnIsSet_ = false;
}

std::string ThailandIdcardResult::getDateOfExpiryTh() const
{
    return dateOfExpiryTh_;
}

void ThailandIdcardResult::setDateOfExpiryTh(const std::string& value)
{
    dateOfExpiryTh_ = value;
    dateOfExpiryThIsSet_ = true;
}

bool ThailandIdcardResult::dateOfExpiryThIsSet() const
{
    return dateOfExpiryThIsSet_;
}

void ThailandIdcardResult::unsetdateOfExpiryTh()
{
    dateOfExpiryThIsSet_ = false;
}

std::string ThailandIdcardResult::getDateOfExpiryEn() const
{
    return dateOfExpiryEn_;
}

void ThailandIdcardResult::setDateOfExpiryEn(const std::string& value)
{
    dateOfExpiryEn_ = value;
    dateOfExpiryEnIsSet_ = true;
}

bool ThailandIdcardResult::dateOfExpiryEnIsSet() const
{
    return dateOfExpiryEnIsSet_;
}

void ThailandIdcardResult::unsetdateOfExpiryEn()
{
    dateOfExpiryEnIsSet_ = false;
}

std::string ThailandIdcardResult::getSerialNumber() const
{
    return serialNumber_;
}

void ThailandIdcardResult::setSerialNumber(const std::string& value)
{
    serialNumber_ = value;
    serialNumberIsSet_ = true;
}

bool ThailandIdcardResult::serialNumberIsSet() const
{
    return serialNumberIsSet_;
}

void ThailandIdcardResult::unsetserialNumber()
{
    serialNumberIsSet_ = false;
}

std::string ThailandIdcardResult::getCardNumber() const
{
    return cardNumber_;
}

void ThailandIdcardResult::setCardNumber(const std::string& value)
{
    cardNumber_ = value;
    cardNumberIsSet_ = true;
}

bool ThailandIdcardResult::cardNumberIsSet() const
{
    return cardNumberIsSet_;
}

void ThailandIdcardResult::unsetcardNumber()
{
    cardNumberIsSet_ = false;
}

std::string ThailandIdcardResult::getLaserNumber() const
{
    return laserNumber_;
}

void ThailandIdcardResult::setLaserNumber(const std::string& value)
{
    laserNumber_ = value;
    laserNumberIsSet_ = true;
}

bool ThailandIdcardResult::laserNumberIsSet() const
{
    return laserNumberIsSet_;
}

void ThailandIdcardResult::unsetlaserNumber()
{
    laserNumberIsSet_ = false;
}

ThailandIdcardConfidence ThailandIdcardResult::getConfidence() const
{
    return confidence_;
}

void ThailandIdcardResult::setConfidence(const ThailandIdcardConfidence& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool ThailandIdcardResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void ThailandIdcardResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

std::string ThailandIdcardResult::getPortraitImage() const
{
    return portraitImage_;
}

void ThailandIdcardResult::setPortraitImage(const std::string& value)
{
    portraitImage_ = value;
    portraitImageIsSet_ = true;
}

bool ThailandIdcardResult::portraitImageIsSet() const
{
    return portraitImageIsSet_;
}

void ThailandIdcardResult::unsetportraitImage()
{
    portraitImageIsSet_ = false;
}

std::vector<std::vector<int32_t>>& ThailandIdcardResult::getPortraitLocation()
{
    return portraitLocation_;
}

void ThailandIdcardResult::setPortraitLocation(const std::vector<std::vector<int32_t>>& value)
{
    portraitLocation_ = value;
    portraitLocationIsSet_ = true;
}

bool ThailandIdcardResult::portraitLocationIsSet() const
{
    return portraitLocationIsSet_;
}

void ThailandIdcardResult::unsetportraitLocation()
{
    portraitLocationIsSet_ = false;
}

std::string ThailandIdcardResult::getIdcardType() const
{
    return idcardType_;
}

void ThailandIdcardResult::setIdcardType(const std::string& value)
{
    idcardType_ = value;
    idcardTypeIsSet_ = true;
}

bool ThailandIdcardResult::idcardTypeIsSet() const
{
    return idcardTypeIsSet_;
}

void ThailandIdcardResult::unsetidcardType()
{
    idcardTypeIsSet_ = false;
}

Object ThailandIdcardResult::getTextLocation() const
{
    return textLocation_;
}

void ThailandIdcardResult::setTextLocation(const Object& value)
{
    textLocation_ = value;
    textLocationIsSet_ = true;
}

bool ThailandIdcardResult::textLocationIsSet() const
{
    return textLocationIsSet_;
}

void ThailandIdcardResult::unsettextLocation()
{
    textLocationIsSet_ = false;
}

}
}
}
}
}


