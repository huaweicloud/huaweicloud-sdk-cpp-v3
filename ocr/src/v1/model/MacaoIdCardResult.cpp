

#include "huaweicloud/ocr/v1/model/MacaoIdCardResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




MacaoIdCardResult::MacaoIdCardResult()
{
    side_ = "";
    sideIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nameEn_ = "";
    nameEnIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    expiryDate_ = "";
    expiryDateIsSet_ = false;
    birthDate_ = "";
    birthDateIsSet_ = false;
    initialIssueDate_ = "";
    initialIssueDateIsSet_ = false;
    height_ = "";
    heightIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    symbols_ = "";
    symbolsIsSet_ = false;
    machineCode1_ = "";
    machineCode1IsSet_ = false;
    machineCode2_ = "";
    machineCode2IsSet_ = false;
    machineCode3_ = "";
    machineCode3IsSet_ = false;
    portraitImage_ = "";
    portraitImageIsSet_ = false;
    confidenceIsSet_ = false;
}

MacaoIdCardResult::~MacaoIdCardResult() = default;

void MacaoIdCardResult::validate()
{
}

web::json::value MacaoIdCardResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sideIsSet_) {
        val[utility::conversions::to_string_t("side")] = ModelBase::toJson(side_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nameEnIsSet_) {
        val[utility::conversions::to_string_t("name_en")] = ModelBase::toJson(nameEn_);
    }
    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(expiryDateIsSet_) {
        val[utility::conversions::to_string_t("expiry_date")] = ModelBase::toJson(expiryDate_);
    }
    if(birthDateIsSet_) {
        val[utility::conversions::to_string_t("birth_date")] = ModelBase::toJson(birthDate_);
    }
    if(initialIssueDateIsSet_) {
        val[utility::conversions::to_string_t("initial_issue_date")] = ModelBase::toJson(initialIssueDate_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(symbolsIsSet_) {
        val[utility::conversions::to_string_t("symbols")] = ModelBase::toJson(symbols_);
    }
    if(machineCode1IsSet_) {
        val[utility::conversions::to_string_t("machine_code1")] = ModelBase::toJson(machineCode1_);
    }
    if(machineCode2IsSet_) {
        val[utility::conversions::to_string_t("machine_code2")] = ModelBase::toJson(machineCode2_);
    }
    if(machineCode3IsSet_) {
        val[utility::conversions::to_string_t("machine_code3")] = ModelBase::toJson(machineCode3_);
    }
    if(portraitImageIsSet_) {
        val[utility::conversions::to_string_t("portrait_image")] = ModelBase::toJson(portraitImage_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}

bool MacaoIdCardResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("side"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("side"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSide(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("birth_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("birth_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBirthDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("machine_code1"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("machine_code1"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMachineCode1(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("machine_code2"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("machine_code2"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMachineCode2(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("machine_code3"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("machine_code3"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMachineCode3(refVal);
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


std::string MacaoIdCardResult::getSide() const
{
    return side_;
}

void MacaoIdCardResult::setSide(const std::string& value)
{
    side_ = value;
    sideIsSet_ = true;
}

bool MacaoIdCardResult::sideIsSet() const
{
    return sideIsSet_;
}

void MacaoIdCardResult::unsetside()
{
    sideIsSet_ = false;
}

std::string MacaoIdCardResult::getName() const
{
    return name_;
}

void MacaoIdCardResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MacaoIdCardResult::nameIsSet() const
{
    return nameIsSet_;
}

void MacaoIdCardResult::unsetname()
{
    nameIsSet_ = false;
}

std::string MacaoIdCardResult::getNameEn() const
{
    return nameEn_;
}

void MacaoIdCardResult::setNameEn(const std::string& value)
{
    nameEn_ = value;
    nameEnIsSet_ = true;
}

bool MacaoIdCardResult::nameEnIsSet() const
{
    return nameEnIsSet_;
}

void MacaoIdCardResult::unsetnameEn()
{
    nameEnIsSet_ = false;
}

std::string MacaoIdCardResult::getSex() const
{
    return sex_;
}

void MacaoIdCardResult::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool MacaoIdCardResult::sexIsSet() const
{
    return sexIsSet_;
}

void MacaoIdCardResult::unsetsex()
{
    sexIsSet_ = false;
}

std::string MacaoIdCardResult::getIssueDate() const
{
    return issueDate_;
}

void MacaoIdCardResult::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool MacaoIdCardResult::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void MacaoIdCardResult::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string MacaoIdCardResult::getExpiryDate() const
{
    return expiryDate_;
}

void MacaoIdCardResult::setExpiryDate(const std::string& value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool MacaoIdCardResult::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void MacaoIdCardResult::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

std::string MacaoIdCardResult::getBirthDate() const
{
    return birthDate_;
}

void MacaoIdCardResult::setBirthDate(const std::string& value)
{
    birthDate_ = value;
    birthDateIsSet_ = true;
}

bool MacaoIdCardResult::birthDateIsSet() const
{
    return birthDateIsSet_;
}

void MacaoIdCardResult::unsetbirthDate()
{
    birthDateIsSet_ = false;
}

std::string MacaoIdCardResult::getInitialIssueDate() const
{
    return initialIssueDate_;
}

void MacaoIdCardResult::setInitialIssueDate(const std::string& value)
{
    initialIssueDate_ = value;
    initialIssueDateIsSet_ = true;
}

bool MacaoIdCardResult::initialIssueDateIsSet() const
{
    return initialIssueDateIsSet_;
}

void MacaoIdCardResult::unsetinitialIssueDate()
{
    initialIssueDateIsSet_ = false;
}

std::string MacaoIdCardResult::getHeight() const
{
    return height_;
}

void MacaoIdCardResult::setHeight(const std::string& value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool MacaoIdCardResult::heightIsSet() const
{
    return heightIsSet_;
}

void MacaoIdCardResult::unsetheight()
{
    heightIsSet_ = false;
}

std::string MacaoIdCardResult::getNumber() const
{
    return number_;
}

void MacaoIdCardResult::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool MacaoIdCardResult::numberIsSet() const
{
    return numberIsSet_;
}

void MacaoIdCardResult::unsetnumber()
{
    numberIsSet_ = false;
}

std::string MacaoIdCardResult::getSymbols() const
{
    return symbols_;
}

void MacaoIdCardResult::setSymbols(const std::string& value)
{
    symbols_ = value;
    symbolsIsSet_ = true;
}

bool MacaoIdCardResult::symbolsIsSet() const
{
    return symbolsIsSet_;
}

void MacaoIdCardResult::unsetsymbols()
{
    symbolsIsSet_ = false;
}

std::string MacaoIdCardResult::getMachineCode1() const
{
    return machineCode1_;
}

void MacaoIdCardResult::setMachineCode1(const std::string& value)
{
    machineCode1_ = value;
    machineCode1IsSet_ = true;
}

bool MacaoIdCardResult::machineCode1IsSet() const
{
    return machineCode1IsSet_;
}

void MacaoIdCardResult::unsetmachineCode1()
{
    machineCode1IsSet_ = false;
}

std::string MacaoIdCardResult::getMachineCode2() const
{
    return machineCode2_;
}

void MacaoIdCardResult::setMachineCode2(const std::string& value)
{
    machineCode2_ = value;
    machineCode2IsSet_ = true;
}

bool MacaoIdCardResult::machineCode2IsSet() const
{
    return machineCode2IsSet_;
}

void MacaoIdCardResult::unsetmachineCode2()
{
    machineCode2IsSet_ = false;
}

std::string MacaoIdCardResult::getMachineCode3() const
{
    return machineCode3_;
}

void MacaoIdCardResult::setMachineCode3(const std::string& value)
{
    machineCode3_ = value;
    machineCode3IsSet_ = true;
}

bool MacaoIdCardResult::machineCode3IsSet() const
{
    return machineCode3IsSet_;
}

void MacaoIdCardResult::unsetmachineCode3()
{
    machineCode3IsSet_ = false;
}

std::string MacaoIdCardResult::getPortraitImage() const
{
    return portraitImage_;
}

void MacaoIdCardResult::setPortraitImage(const std::string& value)
{
    portraitImage_ = value;
    portraitImageIsSet_ = true;
}

bool MacaoIdCardResult::portraitImageIsSet() const
{
    return portraitImageIsSet_;
}

void MacaoIdCardResult::unsetportraitImage()
{
    portraitImageIsSet_ = false;
}

Object MacaoIdCardResult::getConfidence() const
{
    return confidence_;
}

void MacaoIdCardResult::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool MacaoIdCardResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void MacaoIdCardResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


