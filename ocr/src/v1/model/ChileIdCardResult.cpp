

#include "huaweicloud/ocr/v1/model/ChileIdCardResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




ChileIdCardResult::ChileIdCardResult()
{
    surnameIsSet_ = false;
    givenName_ = "";
    givenNameIsSet_ = false;
    nationality_ = "";
    nationalityIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    birth_ = "";
    birthIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    expiryDate_ = "";
    expiryDateIsSet_ = false;
    documentNumber_ = "";
    documentNumberIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    confidenceIsSet_ = false;
}

ChileIdCardResult::~ChileIdCardResult() = default;

void ChileIdCardResult::validate()
{
}

web::json::value ChileIdCardResult::toJson() const
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
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}

bool ChileIdCardResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("surname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("surname"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSurname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("given_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("given_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGivenName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nationality"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nationality"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNationality(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("birth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("birth"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBirth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiry_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiry_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiryDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("document_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("document_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocumentNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            ChileIdCardConfidence refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ChileIdCardResult::getSurname()
{
    return surname_;
}

void ChileIdCardResult::setSurname(const std::vector<std::string>& value)
{
    surname_ = value;
    surnameIsSet_ = true;
}

bool ChileIdCardResult::surnameIsSet() const
{
    return surnameIsSet_;
}

void ChileIdCardResult::unsetsurname()
{
    surnameIsSet_ = false;
}

std::string ChileIdCardResult::getGivenName() const
{
    return givenName_;
}

void ChileIdCardResult::setGivenName(const std::string& value)
{
    givenName_ = value;
    givenNameIsSet_ = true;
}

bool ChileIdCardResult::givenNameIsSet() const
{
    return givenNameIsSet_;
}

void ChileIdCardResult::unsetgivenName()
{
    givenNameIsSet_ = false;
}

std::string ChileIdCardResult::getNationality() const
{
    return nationality_;
}

void ChileIdCardResult::setNationality(const std::string& value)
{
    nationality_ = value;
    nationalityIsSet_ = true;
}

bool ChileIdCardResult::nationalityIsSet() const
{
    return nationalityIsSet_;
}

void ChileIdCardResult::unsetnationality()
{
    nationalityIsSet_ = false;
}

std::string ChileIdCardResult::getSex() const
{
    return sex_;
}

void ChileIdCardResult::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool ChileIdCardResult::sexIsSet() const
{
    return sexIsSet_;
}

void ChileIdCardResult::unsetsex()
{
    sexIsSet_ = false;
}

std::string ChileIdCardResult::getBirth() const
{
    return birth_;
}

void ChileIdCardResult::setBirth(const std::string& value)
{
    birth_ = value;
    birthIsSet_ = true;
}

bool ChileIdCardResult::birthIsSet() const
{
    return birthIsSet_;
}

void ChileIdCardResult::unsetbirth()
{
    birthIsSet_ = false;
}

std::string ChileIdCardResult::getIssueDate() const
{
    return issueDate_;
}

void ChileIdCardResult::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool ChileIdCardResult::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void ChileIdCardResult::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string ChileIdCardResult::getExpiryDate() const
{
    return expiryDate_;
}

void ChileIdCardResult::setExpiryDate(const std::string& value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool ChileIdCardResult::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void ChileIdCardResult::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

std::string ChileIdCardResult::getDocumentNumber() const
{
    return documentNumber_;
}

void ChileIdCardResult::setDocumentNumber(const std::string& value)
{
    documentNumber_ = value;
    documentNumberIsSet_ = true;
}

bool ChileIdCardResult::documentNumberIsSet() const
{
    return documentNumberIsSet_;
}

void ChileIdCardResult::unsetdocumentNumber()
{
    documentNumberIsSet_ = false;
}

std::string ChileIdCardResult::getNumber() const
{
    return number_;
}

void ChileIdCardResult::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool ChileIdCardResult::numberIsSet() const
{
    return numberIsSet_;
}

void ChileIdCardResult::unsetnumber()
{
    numberIsSet_ = false;
}

ChileIdCardConfidence ChileIdCardResult::getConfidence() const
{
    return confidence_;
}

void ChileIdCardResult::setConfidence(const ChileIdCardConfidence& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool ChileIdCardResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void ChileIdCardResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


