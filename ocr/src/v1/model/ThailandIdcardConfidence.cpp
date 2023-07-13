

#include "huaweicloud/ocr/v1/model/ThailandIdcardConfidence.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




ThailandIdcardConfidence::ThailandIdcardConfidence()
{
    idNumber_ = 0.0f;
    idNumberIsSet_ = false;
    nameTh_ = 0.0f;
    nameThIsSet_ = false;
    nameEn_ = 0.0f;
    nameEnIsSet_ = false;
    refNumber_ = 0.0f;
    refNumberIsSet_ = false;
    firstNameEn_ = 0.0f;
    firstNameEnIsSet_ = false;
    lastNameEn_ = 0.0f;
    lastNameEnIsSet_ = false;
    dateOfBirthTh_ = 0.0f;
    dateOfBirthThIsSet_ = false;
    dateOfBirthEn_ = 0.0f;
    dateOfBirthEnIsSet_ = false;
    religionTh_ = 0.0f;
    religionThIsSet_ = false;
    addressTh_ = 0.0f;
    addressThIsSet_ = false;
    dateOfIssueTh_ = 0.0f;
    dateOfIssueThIsSet_ = false;
    dateOfIssueEn_ = 0.0f;
    dateOfIssueEnIsSet_ = false;
    dateOfExpiryTh_ = 0.0f;
    dateOfExpiryThIsSet_ = false;
    dateOfExpiryEn_ = 0.0f;
    dateOfExpiryEnIsSet_ = false;
    serialNumber_ = 0.0f;
    serialNumberIsSet_ = false;
    cardNumber_ = 0.0f;
    cardNumberIsSet_ = false;
    laserNumber_ = 0.0f;
    laserNumberIsSet_ = false;
}

ThailandIdcardConfidence::~ThailandIdcardConfidence() = default;

void ThailandIdcardConfidence::validate()
{
}

web::json::value ThailandIdcardConfidence::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idNumberIsSet_) {
        val[utility::conversions::to_string_t("id_number")] = ModelBase::toJson(idNumber_);
    }
    if(nameThIsSet_) {
        val[utility::conversions::to_string_t("name_th")] = ModelBase::toJson(nameTh_);
    }
    if(nameEnIsSet_) {
        val[utility::conversions::to_string_t("name_en")] = ModelBase::toJson(nameEn_);
    }
    if(refNumberIsSet_) {
        val[utility::conversions::to_string_t("ref_number")] = ModelBase::toJson(refNumber_);
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

    return val;
}

bool ThailandIdcardConfidence::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id_number"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_th"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_th"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameTh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_en"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ref_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref_number"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("first_name_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("first_name_en"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirstNameEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_name_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_name_en"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastNameEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date_of_birth_th"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date_of_birth_th"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDateOfBirthTh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date_of_birth_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date_of_birth_en"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDateOfBirthEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("religion_th"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("religion_th"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReligionTh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address_th"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_th"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressTh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date_of_issue_th"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date_of_issue_th"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDateOfIssueTh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date_of_issue_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date_of_issue_en"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDateOfIssueEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date_of_expiry_th"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date_of_expiry_th"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDateOfExpiryTh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date_of_expiry_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date_of_expiry_en"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDateOfExpiryEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serial_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serial_number"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSerialNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("card_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("card_number"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCardNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("laser_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("laser_number"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLaserNumber(refVal);
        }
    }
    return ok;
}

float ThailandIdcardConfidence::getIdNumber() const
{
    return idNumber_;
}

void ThailandIdcardConfidence::setIdNumber(float value)
{
    idNumber_ = value;
    idNumberIsSet_ = true;
}

bool ThailandIdcardConfidence::idNumberIsSet() const
{
    return idNumberIsSet_;
}

void ThailandIdcardConfidence::unsetidNumber()
{
    idNumberIsSet_ = false;
}

float ThailandIdcardConfidence::getNameTh() const
{
    return nameTh_;
}

void ThailandIdcardConfidence::setNameTh(float value)
{
    nameTh_ = value;
    nameThIsSet_ = true;
}

bool ThailandIdcardConfidence::nameThIsSet() const
{
    return nameThIsSet_;
}

void ThailandIdcardConfidence::unsetnameTh()
{
    nameThIsSet_ = false;
}

float ThailandIdcardConfidence::getNameEn() const
{
    return nameEn_;
}

void ThailandIdcardConfidence::setNameEn(float value)
{
    nameEn_ = value;
    nameEnIsSet_ = true;
}

bool ThailandIdcardConfidence::nameEnIsSet() const
{
    return nameEnIsSet_;
}

void ThailandIdcardConfidence::unsetnameEn()
{
    nameEnIsSet_ = false;
}

float ThailandIdcardConfidence::getRefNumber() const
{
    return refNumber_;
}

void ThailandIdcardConfidence::setRefNumber(float value)
{
    refNumber_ = value;
    refNumberIsSet_ = true;
}

bool ThailandIdcardConfidence::refNumberIsSet() const
{
    return refNumberIsSet_;
}

void ThailandIdcardConfidence::unsetrefNumber()
{
    refNumberIsSet_ = false;
}

float ThailandIdcardConfidence::getFirstNameEn() const
{
    return firstNameEn_;
}

void ThailandIdcardConfidence::setFirstNameEn(float value)
{
    firstNameEn_ = value;
    firstNameEnIsSet_ = true;
}

bool ThailandIdcardConfidence::firstNameEnIsSet() const
{
    return firstNameEnIsSet_;
}

void ThailandIdcardConfidence::unsetfirstNameEn()
{
    firstNameEnIsSet_ = false;
}

float ThailandIdcardConfidence::getLastNameEn() const
{
    return lastNameEn_;
}

void ThailandIdcardConfidence::setLastNameEn(float value)
{
    lastNameEn_ = value;
    lastNameEnIsSet_ = true;
}

bool ThailandIdcardConfidence::lastNameEnIsSet() const
{
    return lastNameEnIsSet_;
}

void ThailandIdcardConfidence::unsetlastNameEn()
{
    lastNameEnIsSet_ = false;
}

float ThailandIdcardConfidence::getDateOfBirthTh() const
{
    return dateOfBirthTh_;
}

void ThailandIdcardConfidence::setDateOfBirthTh(float value)
{
    dateOfBirthTh_ = value;
    dateOfBirthThIsSet_ = true;
}

bool ThailandIdcardConfidence::dateOfBirthThIsSet() const
{
    return dateOfBirthThIsSet_;
}

void ThailandIdcardConfidence::unsetdateOfBirthTh()
{
    dateOfBirthThIsSet_ = false;
}

float ThailandIdcardConfidence::getDateOfBirthEn() const
{
    return dateOfBirthEn_;
}

void ThailandIdcardConfidence::setDateOfBirthEn(float value)
{
    dateOfBirthEn_ = value;
    dateOfBirthEnIsSet_ = true;
}

bool ThailandIdcardConfidence::dateOfBirthEnIsSet() const
{
    return dateOfBirthEnIsSet_;
}

void ThailandIdcardConfidence::unsetdateOfBirthEn()
{
    dateOfBirthEnIsSet_ = false;
}

float ThailandIdcardConfidence::getReligionTh() const
{
    return religionTh_;
}

void ThailandIdcardConfidence::setReligionTh(float value)
{
    religionTh_ = value;
    religionThIsSet_ = true;
}

bool ThailandIdcardConfidence::religionThIsSet() const
{
    return religionThIsSet_;
}

void ThailandIdcardConfidence::unsetreligionTh()
{
    religionThIsSet_ = false;
}

float ThailandIdcardConfidence::getAddressTh() const
{
    return addressTh_;
}

void ThailandIdcardConfidence::setAddressTh(float value)
{
    addressTh_ = value;
    addressThIsSet_ = true;
}

bool ThailandIdcardConfidence::addressThIsSet() const
{
    return addressThIsSet_;
}

void ThailandIdcardConfidence::unsetaddressTh()
{
    addressThIsSet_ = false;
}

float ThailandIdcardConfidence::getDateOfIssueTh() const
{
    return dateOfIssueTh_;
}

void ThailandIdcardConfidence::setDateOfIssueTh(float value)
{
    dateOfIssueTh_ = value;
    dateOfIssueThIsSet_ = true;
}

bool ThailandIdcardConfidence::dateOfIssueThIsSet() const
{
    return dateOfIssueThIsSet_;
}

void ThailandIdcardConfidence::unsetdateOfIssueTh()
{
    dateOfIssueThIsSet_ = false;
}

float ThailandIdcardConfidence::getDateOfIssueEn() const
{
    return dateOfIssueEn_;
}

void ThailandIdcardConfidence::setDateOfIssueEn(float value)
{
    dateOfIssueEn_ = value;
    dateOfIssueEnIsSet_ = true;
}

bool ThailandIdcardConfidence::dateOfIssueEnIsSet() const
{
    return dateOfIssueEnIsSet_;
}

void ThailandIdcardConfidence::unsetdateOfIssueEn()
{
    dateOfIssueEnIsSet_ = false;
}

float ThailandIdcardConfidence::getDateOfExpiryTh() const
{
    return dateOfExpiryTh_;
}

void ThailandIdcardConfidence::setDateOfExpiryTh(float value)
{
    dateOfExpiryTh_ = value;
    dateOfExpiryThIsSet_ = true;
}

bool ThailandIdcardConfidence::dateOfExpiryThIsSet() const
{
    return dateOfExpiryThIsSet_;
}

void ThailandIdcardConfidence::unsetdateOfExpiryTh()
{
    dateOfExpiryThIsSet_ = false;
}

float ThailandIdcardConfidence::getDateOfExpiryEn() const
{
    return dateOfExpiryEn_;
}

void ThailandIdcardConfidence::setDateOfExpiryEn(float value)
{
    dateOfExpiryEn_ = value;
    dateOfExpiryEnIsSet_ = true;
}

bool ThailandIdcardConfidence::dateOfExpiryEnIsSet() const
{
    return dateOfExpiryEnIsSet_;
}

void ThailandIdcardConfidence::unsetdateOfExpiryEn()
{
    dateOfExpiryEnIsSet_ = false;
}

float ThailandIdcardConfidence::getSerialNumber() const
{
    return serialNumber_;
}

void ThailandIdcardConfidence::setSerialNumber(float value)
{
    serialNumber_ = value;
    serialNumberIsSet_ = true;
}

bool ThailandIdcardConfidence::serialNumberIsSet() const
{
    return serialNumberIsSet_;
}

void ThailandIdcardConfidence::unsetserialNumber()
{
    serialNumberIsSet_ = false;
}

float ThailandIdcardConfidence::getCardNumber() const
{
    return cardNumber_;
}

void ThailandIdcardConfidence::setCardNumber(float value)
{
    cardNumber_ = value;
    cardNumberIsSet_ = true;
}

bool ThailandIdcardConfidence::cardNumberIsSet() const
{
    return cardNumberIsSet_;
}

void ThailandIdcardConfidence::unsetcardNumber()
{
    cardNumberIsSet_ = false;
}

float ThailandIdcardConfidence::getLaserNumber() const
{
    return laserNumber_;
}

void ThailandIdcardConfidence::setLaserNumber(float value)
{
    laserNumber_ = value;
    laserNumberIsSet_ = true;
}

bool ThailandIdcardConfidence::laserNumberIsSet() const
{
    return laserNumberIsSet_;
}

void ThailandIdcardConfidence::unsetlaserNumber()
{
    laserNumberIsSet_ = false;
}

}
}
}
}
}


