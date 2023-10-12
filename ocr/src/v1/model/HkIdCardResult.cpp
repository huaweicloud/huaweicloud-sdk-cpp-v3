

#include "huaweicloud/ocr/v1/model/HkIdCardResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




HkIdCardResult::HkIdCardResult()
{
    name_ = "";
    nameIsSet_ = false;
    nameEn_ = "";
    nameEnIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    birthDate_ = "";
    birthDateIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    symbols_ = "";
    symbolsIsSet_ = false;
    nameTelegraphCode_ = "";
    nameTelegraphCodeIsSet_ = false;
    permanent_ = false;
    permanentIsSet_ = false;
    initialIssueDate_ = "";
    initialIssueDateIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    portraitLocationIsSet_ = false;
    portraitImage_ = "";
    portraitImageIsSet_ = false;
    confidenceIsSet_ = false;
}

HkIdCardResult::~HkIdCardResult() = default;

void HkIdCardResult::validate()
{
}

web::json::value HkIdCardResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nameEnIsSet_) {
        val[utility::conversions::to_string_t("name_en")] = ModelBase::toJson(nameEn_);
    }
    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(birthDateIsSet_) {
        val[utility::conversions::to_string_t("birth_date")] = ModelBase::toJson(birthDate_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(symbolsIsSet_) {
        val[utility::conversions::to_string_t("symbols")] = ModelBase::toJson(symbols_);
    }
    if(nameTelegraphCodeIsSet_) {
        val[utility::conversions::to_string_t("name_telegraph_code")] = ModelBase::toJson(nameTelegraphCode_);
    }
    if(permanentIsSet_) {
        val[utility::conversions::to_string_t("permanent")] = ModelBase::toJson(permanent_);
    }
    if(initialIssueDateIsSet_) {
        val[utility::conversions::to_string_t("initial_issue_date")] = ModelBase::toJson(initialIssueDate_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(portraitLocationIsSet_) {
        val[utility::conversions::to_string_t("portrait_location")] = ModelBase::toJson(portraitLocation_);
    }
    if(portraitImageIsSet_) {
        val[utility::conversions::to_string_t("portrait_image")] = ModelBase::toJson(portraitImage_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}
bool HkIdCardResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameEn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("birth_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("birth_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBirthDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("symbols"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("symbols"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSymbols(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_telegraph_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_telegraph_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameTelegraphCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permanent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permanent"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermanent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("initial_issue_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("initial_issue_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInitialIssueDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("portrait_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("portrait_location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortraitLocation(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    return ok;
}


std::string HkIdCardResult::getName() const
{
    return name_;
}

void HkIdCardResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HkIdCardResult::nameIsSet() const
{
    return nameIsSet_;
}

void HkIdCardResult::unsetname()
{
    nameIsSet_ = false;
}

std::string HkIdCardResult::getNameEn() const
{
    return nameEn_;
}

void HkIdCardResult::setNameEn(const std::string& value)
{
    nameEn_ = value;
    nameEnIsSet_ = true;
}

bool HkIdCardResult::nameEnIsSet() const
{
    return nameEnIsSet_;
}

void HkIdCardResult::unsetnameEn()
{
    nameEnIsSet_ = false;
}

std::string HkIdCardResult::getSex() const
{
    return sex_;
}

void HkIdCardResult::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool HkIdCardResult::sexIsSet() const
{
    return sexIsSet_;
}

void HkIdCardResult::unsetsex()
{
    sexIsSet_ = false;
}

std::string HkIdCardResult::getBirthDate() const
{
    return birthDate_;
}

void HkIdCardResult::setBirthDate(const std::string& value)
{
    birthDate_ = value;
    birthDateIsSet_ = true;
}

bool HkIdCardResult::birthDateIsSet() const
{
    return birthDateIsSet_;
}

void HkIdCardResult::unsetbirthDate()
{
    birthDateIsSet_ = false;
}

std::string HkIdCardResult::getNumber() const
{
    return number_;
}

void HkIdCardResult::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool HkIdCardResult::numberIsSet() const
{
    return numberIsSet_;
}

void HkIdCardResult::unsetnumber()
{
    numberIsSet_ = false;
}

std::string HkIdCardResult::getSymbols() const
{
    return symbols_;
}

void HkIdCardResult::setSymbols(const std::string& value)
{
    symbols_ = value;
    symbolsIsSet_ = true;
}

bool HkIdCardResult::symbolsIsSet() const
{
    return symbolsIsSet_;
}

void HkIdCardResult::unsetsymbols()
{
    symbolsIsSet_ = false;
}

std::string HkIdCardResult::getNameTelegraphCode() const
{
    return nameTelegraphCode_;
}

void HkIdCardResult::setNameTelegraphCode(const std::string& value)
{
    nameTelegraphCode_ = value;
    nameTelegraphCodeIsSet_ = true;
}

bool HkIdCardResult::nameTelegraphCodeIsSet() const
{
    return nameTelegraphCodeIsSet_;
}

void HkIdCardResult::unsetnameTelegraphCode()
{
    nameTelegraphCodeIsSet_ = false;
}

bool HkIdCardResult::isPermanent() const
{
    return permanent_;
}

void HkIdCardResult::setPermanent(bool value)
{
    permanent_ = value;
    permanentIsSet_ = true;
}

bool HkIdCardResult::permanentIsSet() const
{
    return permanentIsSet_;
}

void HkIdCardResult::unsetpermanent()
{
    permanentIsSet_ = false;
}

std::string HkIdCardResult::getInitialIssueDate() const
{
    return initialIssueDate_;
}

void HkIdCardResult::setInitialIssueDate(const std::string& value)
{
    initialIssueDate_ = value;
    initialIssueDateIsSet_ = true;
}

bool HkIdCardResult::initialIssueDateIsSet() const
{
    return initialIssueDateIsSet_;
}

void HkIdCardResult::unsetinitialIssueDate()
{
    initialIssueDateIsSet_ = false;
}

std::string HkIdCardResult::getIssueDate() const
{
    return issueDate_;
}

void HkIdCardResult::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool HkIdCardResult::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void HkIdCardResult::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::vector<std::vector<int32_t>>& HkIdCardResult::getPortraitLocation()
{
    return portraitLocation_;
}

void HkIdCardResult::setPortraitLocation(const std::vector<std::vector<int32_t>>& value)
{
    portraitLocation_ = value;
    portraitLocationIsSet_ = true;
}

bool HkIdCardResult::portraitLocationIsSet() const
{
    return portraitLocationIsSet_;
}

void HkIdCardResult::unsetportraitLocation()
{
    portraitLocationIsSet_ = false;
}

std::string HkIdCardResult::getPortraitImage() const
{
    return portraitImage_;
}

void HkIdCardResult::setPortraitImage(const std::string& value)
{
    portraitImage_ = value;
    portraitImageIsSet_ = true;
}

bool HkIdCardResult::portraitImageIsSet() const
{
    return portraitImageIsSet_;
}

void HkIdCardResult::unsetportraitImage()
{
    portraitImageIsSet_ = false;
}

Object HkIdCardResult::getConfidence() const
{
    return confidence_;
}

void HkIdCardResult::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool HkIdCardResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void HkIdCardResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


