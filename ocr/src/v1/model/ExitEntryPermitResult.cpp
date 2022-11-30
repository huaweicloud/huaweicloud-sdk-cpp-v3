

#include "huaweicloud/ocr/v1/model/ExitEntryPermitResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




ExitEntryPermitResult::ExitEntryPermitResult()
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
    issuingAuthority_ = "";
    issuingAuthorityIsSet_ = false;
    issuePlace_ = "";
    issuePlaceIsSet_ = false;
    validPeriod_ = "";
    validPeriodIsSet_ = false;
    machineCode_ = "";
    machineCodeIsSet_ = false;
    portraitImage_ = "";
    portraitImageIsSet_ = false;
    portraitLocationIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    side_ = "";
    sideIsSet_ = false;
    endorsementInfoHkIsSet_ = false;
    endorsementInfoMoIsSet_ = false;
    endorsementInfoTwIsSet_ = false;
    confidenceIsSet_ = false;
}

ExitEntryPermitResult::~ExitEntryPermitResult() = default;

void ExitEntryPermitResult::validate()
{
}

web::json::value ExitEntryPermitResult::toJson() const
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
    if(issuingAuthorityIsSet_) {
        val[utility::conversions::to_string_t("issuing_authority")] = ModelBase::toJson(issuingAuthority_);
    }
    if(issuePlaceIsSet_) {
        val[utility::conversions::to_string_t("issue_place")] = ModelBase::toJson(issuePlace_);
    }
    if(validPeriodIsSet_) {
        val[utility::conversions::to_string_t("valid_period")] = ModelBase::toJson(validPeriod_);
    }
    if(machineCodeIsSet_) {
        val[utility::conversions::to_string_t("machine_code")] = ModelBase::toJson(machineCode_);
    }
    if(portraitImageIsSet_) {
        val[utility::conversions::to_string_t("portrait_image")] = ModelBase::toJson(portraitImage_);
    }
    if(portraitLocationIsSet_) {
        val[utility::conversions::to_string_t("portrait_location")] = ModelBase::toJson(portraitLocation_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(sideIsSet_) {
        val[utility::conversions::to_string_t("side")] = ModelBase::toJson(side_);
    }
    if(endorsementInfoHkIsSet_) {
        val[utility::conversions::to_string_t("endorsement_info_hk")] = ModelBase::toJson(endorsementInfoHk_);
    }
    if(endorsementInfoMoIsSet_) {
        val[utility::conversions::to_string_t("endorsement_info_mo")] = ModelBase::toJson(endorsementInfoMo_);
    }
    if(endorsementInfoTwIsSet_) {
        val[utility::conversions::to_string_t("endorsement_info_tw")] = ModelBase::toJson(endorsementInfoTw_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}

bool ExitEntryPermitResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("issuing_authority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuing_authority"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuingAuthority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_place"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_place"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuePlace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valid_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("machine_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("machine_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMachineCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("endorsement_info_hk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endorsement_info_hk"));
        if(!fieldValue.is_null())
        {
            ExitEntryPermitEndorsementInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndorsementInfoHk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endorsement_info_mo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endorsement_info_mo"));
        if(!fieldValue.is_null())
        {
            ExitEntryPermitEndorsementInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndorsementInfoMo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endorsement_info_tw"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endorsement_info_tw"));
        if(!fieldValue.is_null())
        {
            ExitEntryPermitEndorsementInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndorsementInfoTw(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            ExitEntryPermitConfidence refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    return ok;
}


std::string ExitEntryPermitResult::getName() const
{
    return name_;
}

void ExitEntryPermitResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ExitEntryPermitResult::nameIsSet() const
{
    return nameIsSet_;
}

void ExitEntryPermitResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ExitEntryPermitResult::getNameEn() const
{
    return nameEn_;
}

void ExitEntryPermitResult::setNameEn(const std::string& value)
{
    nameEn_ = value;
    nameEnIsSet_ = true;
}

bool ExitEntryPermitResult::nameEnIsSet() const
{
    return nameEnIsSet_;
}

void ExitEntryPermitResult::unsetnameEn()
{
    nameEnIsSet_ = false;
}

std::string ExitEntryPermitResult::getSex() const
{
    return sex_;
}

void ExitEntryPermitResult::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool ExitEntryPermitResult::sexIsSet() const
{
    return sexIsSet_;
}

void ExitEntryPermitResult::unsetsex()
{
    sexIsSet_ = false;
}

std::string ExitEntryPermitResult::getBirthDate() const
{
    return birthDate_;
}

void ExitEntryPermitResult::setBirthDate(const std::string& value)
{
    birthDate_ = value;
    birthDateIsSet_ = true;
}

bool ExitEntryPermitResult::birthDateIsSet() const
{
    return birthDateIsSet_;
}

void ExitEntryPermitResult::unsetbirthDate()
{
    birthDateIsSet_ = false;
}

std::string ExitEntryPermitResult::getNumber() const
{
    return number_;
}

void ExitEntryPermitResult::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool ExitEntryPermitResult::numberIsSet() const
{
    return numberIsSet_;
}

void ExitEntryPermitResult::unsetnumber()
{
    numberIsSet_ = false;
}

std::string ExitEntryPermitResult::getIssuingAuthority() const
{
    return issuingAuthority_;
}

void ExitEntryPermitResult::setIssuingAuthority(const std::string& value)
{
    issuingAuthority_ = value;
    issuingAuthorityIsSet_ = true;
}

bool ExitEntryPermitResult::issuingAuthorityIsSet() const
{
    return issuingAuthorityIsSet_;
}

void ExitEntryPermitResult::unsetissuingAuthority()
{
    issuingAuthorityIsSet_ = false;
}

std::string ExitEntryPermitResult::getIssuePlace() const
{
    return issuePlace_;
}

void ExitEntryPermitResult::setIssuePlace(const std::string& value)
{
    issuePlace_ = value;
    issuePlaceIsSet_ = true;
}

bool ExitEntryPermitResult::issuePlaceIsSet() const
{
    return issuePlaceIsSet_;
}

void ExitEntryPermitResult::unsetissuePlace()
{
    issuePlaceIsSet_ = false;
}

std::string ExitEntryPermitResult::getValidPeriod() const
{
    return validPeriod_;
}

void ExitEntryPermitResult::setValidPeriod(const std::string& value)
{
    validPeriod_ = value;
    validPeriodIsSet_ = true;
}

bool ExitEntryPermitResult::validPeriodIsSet() const
{
    return validPeriodIsSet_;
}

void ExitEntryPermitResult::unsetvalidPeriod()
{
    validPeriodIsSet_ = false;
}

std::string ExitEntryPermitResult::getMachineCode() const
{
    return machineCode_;
}

void ExitEntryPermitResult::setMachineCode(const std::string& value)
{
    machineCode_ = value;
    machineCodeIsSet_ = true;
}

bool ExitEntryPermitResult::machineCodeIsSet() const
{
    return machineCodeIsSet_;
}

void ExitEntryPermitResult::unsetmachineCode()
{
    machineCodeIsSet_ = false;
}

std::string ExitEntryPermitResult::getPortraitImage() const
{
    return portraitImage_;
}

void ExitEntryPermitResult::setPortraitImage(const std::string& value)
{
    portraitImage_ = value;
    portraitImageIsSet_ = true;
}

bool ExitEntryPermitResult::portraitImageIsSet() const
{
    return portraitImageIsSet_;
}

void ExitEntryPermitResult::unsetportraitImage()
{
    portraitImageIsSet_ = false;
}

std::vector<std::vector<int32_t>>& ExitEntryPermitResult::getPortraitLocation()
{
    return portraitLocation_;
}

void ExitEntryPermitResult::setPortraitLocation(const std::vector<std::vector<int32_t>>& value)
{
    portraitLocation_ = value;
    portraitLocationIsSet_ = true;
}

bool ExitEntryPermitResult::portraitLocationIsSet() const
{
    return portraitLocationIsSet_;
}

void ExitEntryPermitResult::unsetportraitLocation()
{
    portraitLocationIsSet_ = false;
}

std::string ExitEntryPermitResult::getType() const
{
    return type_;
}

void ExitEntryPermitResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ExitEntryPermitResult::typeIsSet() const
{
    return typeIsSet_;
}

void ExitEntryPermitResult::unsettype()
{
    typeIsSet_ = false;
}

std::string ExitEntryPermitResult::getSide() const
{
    return side_;
}

void ExitEntryPermitResult::setSide(const std::string& value)
{
    side_ = value;
    sideIsSet_ = true;
}

bool ExitEntryPermitResult::sideIsSet() const
{
    return sideIsSet_;
}

void ExitEntryPermitResult::unsetside()
{
    sideIsSet_ = false;
}

ExitEntryPermitEndorsementInfo ExitEntryPermitResult::getEndorsementInfoHk() const
{
    return endorsementInfoHk_;
}

void ExitEntryPermitResult::setEndorsementInfoHk(const ExitEntryPermitEndorsementInfo& value)
{
    endorsementInfoHk_ = value;
    endorsementInfoHkIsSet_ = true;
}

bool ExitEntryPermitResult::endorsementInfoHkIsSet() const
{
    return endorsementInfoHkIsSet_;
}

void ExitEntryPermitResult::unsetendorsementInfoHk()
{
    endorsementInfoHkIsSet_ = false;
}

ExitEntryPermitEndorsementInfo ExitEntryPermitResult::getEndorsementInfoMo() const
{
    return endorsementInfoMo_;
}

void ExitEntryPermitResult::setEndorsementInfoMo(const ExitEntryPermitEndorsementInfo& value)
{
    endorsementInfoMo_ = value;
    endorsementInfoMoIsSet_ = true;
}

bool ExitEntryPermitResult::endorsementInfoMoIsSet() const
{
    return endorsementInfoMoIsSet_;
}

void ExitEntryPermitResult::unsetendorsementInfoMo()
{
    endorsementInfoMoIsSet_ = false;
}

ExitEntryPermitEndorsementInfo ExitEntryPermitResult::getEndorsementInfoTw() const
{
    return endorsementInfoTw_;
}

void ExitEntryPermitResult::setEndorsementInfoTw(const ExitEntryPermitEndorsementInfo& value)
{
    endorsementInfoTw_ = value;
    endorsementInfoTwIsSet_ = true;
}

bool ExitEntryPermitResult::endorsementInfoTwIsSet() const
{
    return endorsementInfoTwIsSet_;
}

void ExitEntryPermitResult::unsetendorsementInfoTw()
{
    endorsementInfoTwIsSet_ = false;
}

ExitEntryPermitConfidence ExitEntryPermitResult::getConfidence() const
{
    return confidence_;
}

void ExitEntryPermitResult::setConfidence(const ExitEntryPermitConfidence& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool ExitEntryPermitResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void ExitEntryPermitResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


