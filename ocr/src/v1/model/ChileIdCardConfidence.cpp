

#include "huaweicloud/ocr/v1/model/ChileIdCardConfidence.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




ChileIdCardConfidence::ChileIdCardConfidence()
{
    surname_ = 0.0f;
    surnameIsSet_ = false;
    givenName_ = 0.0f;
    givenNameIsSet_ = false;
    nationality_ = 0.0f;
    nationalityIsSet_ = false;
    sex_ = 0.0f;
    sexIsSet_ = false;
    birth_ = 0.0f;
    birthIsSet_ = false;
    issueDate_ = 0.0f;
    issueDateIsSet_ = false;
    expiryDate_ = 0.0f;
    expiryDateIsSet_ = false;
    documentNumber_ = 0.0f;
    documentNumberIsSet_ = false;
    number_ = 0.0f;
    numberIsSet_ = false;
}

ChileIdCardConfidence::~ChileIdCardConfidence() = default;

void ChileIdCardConfidence::validate()
{
}

web::json::value ChileIdCardConfidence::toJson() const
{
    web::json::value val = web::json::value::object();

    if(surnameIsSet_) {
        val[utility::conversions::to_string_t("surname")] = ModelBase::toJson(surname_);
    }
    if(givenNameIsSet_) {
        val[utility::conversions::to_string_t("given_name")] = ModelBase::toJson(givenName_);
    }
    if(nationalityIsSet_) {
        val[utility::conversions::to_string_t("nationality")] = ModelBase::toJson(nationality_);
    }
    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(birthIsSet_) {
        val[utility::conversions::to_string_t("birth")] = ModelBase::toJson(birth_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(expiryDateIsSet_) {
        val[utility::conversions::to_string_t("expiry_date")] = ModelBase::toJson(expiryDate_);
    }
    if(documentNumberIsSet_) {
        val[utility::conversions::to_string_t("document_number")] = ModelBase::toJson(documentNumber_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }

    return val;
}

bool ChileIdCardConfidence::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("surname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("surname"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSurname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("given_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("given_name"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGivenName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nationality"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nationality"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNationality(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sex"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("birth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("birth"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBirth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_date"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiry_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiry_date"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiryDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("document_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("document_number"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocumentNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    return ok;
}

float ChileIdCardConfidence::getSurname() const
{
    return surname_;
}

void ChileIdCardConfidence::setSurname(float value)
{
    surname_ = value;
    surnameIsSet_ = true;
}

bool ChileIdCardConfidence::surnameIsSet() const
{
    return surnameIsSet_;
}

void ChileIdCardConfidence::unsetsurname()
{
    surnameIsSet_ = false;
}

float ChileIdCardConfidence::getGivenName() const
{
    return givenName_;
}

void ChileIdCardConfidence::setGivenName(float value)
{
    givenName_ = value;
    givenNameIsSet_ = true;
}

bool ChileIdCardConfidence::givenNameIsSet() const
{
    return givenNameIsSet_;
}

void ChileIdCardConfidence::unsetgivenName()
{
    givenNameIsSet_ = false;
}

float ChileIdCardConfidence::getNationality() const
{
    return nationality_;
}

void ChileIdCardConfidence::setNationality(float value)
{
    nationality_ = value;
    nationalityIsSet_ = true;
}

bool ChileIdCardConfidence::nationalityIsSet() const
{
    return nationalityIsSet_;
}

void ChileIdCardConfidence::unsetnationality()
{
    nationalityIsSet_ = false;
}

float ChileIdCardConfidence::getSex() const
{
    return sex_;
}

void ChileIdCardConfidence::setSex(float value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool ChileIdCardConfidence::sexIsSet() const
{
    return sexIsSet_;
}

void ChileIdCardConfidence::unsetsex()
{
    sexIsSet_ = false;
}

float ChileIdCardConfidence::getBirth() const
{
    return birth_;
}

void ChileIdCardConfidence::setBirth(float value)
{
    birth_ = value;
    birthIsSet_ = true;
}

bool ChileIdCardConfidence::birthIsSet() const
{
    return birthIsSet_;
}

void ChileIdCardConfidence::unsetbirth()
{
    birthIsSet_ = false;
}

float ChileIdCardConfidence::getIssueDate() const
{
    return issueDate_;
}

void ChileIdCardConfidence::setIssueDate(float value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool ChileIdCardConfidence::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void ChileIdCardConfidence::unsetissueDate()
{
    issueDateIsSet_ = false;
}

float ChileIdCardConfidence::getExpiryDate() const
{
    return expiryDate_;
}

void ChileIdCardConfidence::setExpiryDate(float value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool ChileIdCardConfidence::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void ChileIdCardConfidence::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

float ChileIdCardConfidence::getDocumentNumber() const
{
    return documentNumber_;
}

void ChileIdCardConfidence::setDocumentNumber(float value)
{
    documentNumber_ = value;
    documentNumberIsSet_ = true;
}

bool ChileIdCardConfidence::documentNumberIsSet() const
{
    return documentNumberIsSet_;
}

void ChileIdCardConfidence::unsetdocumentNumber()
{
    documentNumberIsSet_ = false;
}

float ChileIdCardConfidence::getNumber() const
{
    return number_;
}

void ChileIdCardConfidence::setNumber(float value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool ChileIdCardConfidence::numberIsSet() const
{
    return numberIsSet_;
}

void ChileIdCardConfidence::unsetnumber()
{
    numberIsSet_ = false;
}

}
}
}
}
}


