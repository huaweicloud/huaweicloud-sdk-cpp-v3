

#include "huaweicloud/ocr/v1/model/VietnamIdCardResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




VietnamIdCardResult::VietnamIdCardResult()
{
    side_ = "";
    sideIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    fullName_ = "";
    fullNameIsSet_ = false;
    birthDate_ = "";
    birthDateIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    nationality_ = "";
    nationalityIsSet_ = false;
    originPlace_ = "";
    originPlaceIsSet_ = false;
    residencePlace_ = "";
    residencePlaceIsSet_ = false;
    expiryDate_ = "";
    expiryDateIsSet_ = false;
    personalIdentification_ = "";
    personalIdentificationIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    machineCode1_ = "";
    machineCode1IsSet_ = false;
    machineCode2_ = "";
    machineCode2IsSet_ = false;
    machineCode3_ = "";
    machineCode3IsSet_ = false;
    confidenceIsSet_ = false;
    portraitImage_ = "";
    portraitImageIsSet_ = false;
    portraitLocationIsSet_ = false;
    idcardType_ = "";
    idcardTypeIsSet_ = false;
    textLocationIsSet_ = false;
}

VietnamIdCardResult::~VietnamIdCardResult() = default;

void VietnamIdCardResult::validate()
{
}

web::json::value VietnamIdCardResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sideIsSet_) {
        val[utility::conversions::to_string_t("side")] = ModelBase::toJson(side_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(fullNameIsSet_) {
        val[utility::conversions::to_string_t("full_name")] = ModelBase::toJson(fullName_);
    }
    if(birthDateIsSet_) {
        val[utility::conversions::to_string_t("birth_date")] = ModelBase::toJson(birthDate_);
    }
    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(nationalityIsSet_) {
        val[utility::conversions::to_string_t("nationality")] = ModelBase::toJson(nationality_);
    }
    if(originPlaceIsSet_) {
        val[utility::conversions::to_string_t("origin_place")] = ModelBase::toJson(originPlace_);
    }
    if(residencePlaceIsSet_) {
        val[utility::conversions::to_string_t("residence_place")] = ModelBase::toJson(residencePlace_);
    }
    if(expiryDateIsSet_) {
        val[utility::conversions::to_string_t("expiry_date")] = ModelBase::toJson(expiryDate_);
    }
    if(personalIdentificationIsSet_) {
        val[utility::conversions::to_string_t("personal_identification")] = ModelBase::toJson(personalIdentification_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
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

bool VietnamIdCardResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("full_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSex(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("origin_place"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_place"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginPlace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("residence_place"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("residence_place"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResidencePlace(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("personal_identification"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("personal_identification"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPersonalIdentification(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            Object refVal;
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

std::string VietnamIdCardResult::getSide() const
{
    return side_;
}

void VietnamIdCardResult::setSide(const std::string& value)
{
    side_ = value;
    sideIsSet_ = true;
}

bool VietnamIdCardResult::sideIsSet() const
{
    return sideIsSet_;
}

void VietnamIdCardResult::unsetside()
{
    sideIsSet_ = false;
}

std::string VietnamIdCardResult::getNumber() const
{
    return number_;
}

void VietnamIdCardResult::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool VietnamIdCardResult::numberIsSet() const
{
    return numberIsSet_;
}

void VietnamIdCardResult::unsetnumber()
{
    numberIsSet_ = false;
}

std::string VietnamIdCardResult::getFullName() const
{
    return fullName_;
}

void VietnamIdCardResult::setFullName(const std::string& value)
{
    fullName_ = value;
    fullNameIsSet_ = true;
}

bool VietnamIdCardResult::fullNameIsSet() const
{
    return fullNameIsSet_;
}

void VietnamIdCardResult::unsetfullName()
{
    fullNameIsSet_ = false;
}

std::string VietnamIdCardResult::getBirthDate() const
{
    return birthDate_;
}

void VietnamIdCardResult::setBirthDate(const std::string& value)
{
    birthDate_ = value;
    birthDateIsSet_ = true;
}

bool VietnamIdCardResult::birthDateIsSet() const
{
    return birthDateIsSet_;
}

void VietnamIdCardResult::unsetbirthDate()
{
    birthDateIsSet_ = false;
}

std::string VietnamIdCardResult::getSex() const
{
    return sex_;
}

void VietnamIdCardResult::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool VietnamIdCardResult::sexIsSet() const
{
    return sexIsSet_;
}

void VietnamIdCardResult::unsetsex()
{
    sexIsSet_ = false;
}

std::string VietnamIdCardResult::getNationality() const
{
    return nationality_;
}

void VietnamIdCardResult::setNationality(const std::string& value)
{
    nationality_ = value;
    nationalityIsSet_ = true;
}

bool VietnamIdCardResult::nationalityIsSet() const
{
    return nationalityIsSet_;
}

void VietnamIdCardResult::unsetnationality()
{
    nationalityIsSet_ = false;
}

std::string VietnamIdCardResult::getOriginPlace() const
{
    return originPlace_;
}

void VietnamIdCardResult::setOriginPlace(const std::string& value)
{
    originPlace_ = value;
    originPlaceIsSet_ = true;
}

bool VietnamIdCardResult::originPlaceIsSet() const
{
    return originPlaceIsSet_;
}

void VietnamIdCardResult::unsetoriginPlace()
{
    originPlaceIsSet_ = false;
}

std::string VietnamIdCardResult::getResidencePlace() const
{
    return residencePlace_;
}

void VietnamIdCardResult::setResidencePlace(const std::string& value)
{
    residencePlace_ = value;
    residencePlaceIsSet_ = true;
}

bool VietnamIdCardResult::residencePlaceIsSet() const
{
    return residencePlaceIsSet_;
}

void VietnamIdCardResult::unsetresidencePlace()
{
    residencePlaceIsSet_ = false;
}

std::string VietnamIdCardResult::getExpiryDate() const
{
    return expiryDate_;
}

void VietnamIdCardResult::setExpiryDate(const std::string& value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool VietnamIdCardResult::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void VietnamIdCardResult::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

std::string VietnamIdCardResult::getPersonalIdentification() const
{
    return personalIdentification_;
}

void VietnamIdCardResult::setPersonalIdentification(const std::string& value)
{
    personalIdentification_ = value;
    personalIdentificationIsSet_ = true;
}

bool VietnamIdCardResult::personalIdentificationIsSet() const
{
    return personalIdentificationIsSet_;
}

void VietnamIdCardResult::unsetpersonalIdentification()
{
    personalIdentificationIsSet_ = false;
}

std::string VietnamIdCardResult::getIssueDate() const
{
    return issueDate_;
}

void VietnamIdCardResult::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool VietnamIdCardResult::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void VietnamIdCardResult::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string VietnamIdCardResult::getMachineCode1() const
{
    return machineCode1_;
}

void VietnamIdCardResult::setMachineCode1(const std::string& value)
{
    machineCode1_ = value;
    machineCode1IsSet_ = true;
}

bool VietnamIdCardResult::machineCode1IsSet() const
{
    return machineCode1IsSet_;
}

void VietnamIdCardResult::unsetmachineCode1()
{
    machineCode1IsSet_ = false;
}

std::string VietnamIdCardResult::getMachineCode2() const
{
    return machineCode2_;
}

void VietnamIdCardResult::setMachineCode2(const std::string& value)
{
    machineCode2_ = value;
    machineCode2IsSet_ = true;
}

bool VietnamIdCardResult::machineCode2IsSet() const
{
    return machineCode2IsSet_;
}

void VietnamIdCardResult::unsetmachineCode2()
{
    machineCode2IsSet_ = false;
}

std::string VietnamIdCardResult::getMachineCode3() const
{
    return machineCode3_;
}

void VietnamIdCardResult::setMachineCode3(const std::string& value)
{
    machineCode3_ = value;
    machineCode3IsSet_ = true;
}

bool VietnamIdCardResult::machineCode3IsSet() const
{
    return machineCode3IsSet_;
}

void VietnamIdCardResult::unsetmachineCode3()
{
    machineCode3IsSet_ = false;
}

Object VietnamIdCardResult::getConfidence() const
{
    return confidence_;
}

void VietnamIdCardResult::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool VietnamIdCardResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void VietnamIdCardResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

std::string VietnamIdCardResult::getPortraitImage() const
{
    return portraitImage_;
}

void VietnamIdCardResult::setPortraitImage(const std::string& value)
{
    portraitImage_ = value;
    portraitImageIsSet_ = true;
}

bool VietnamIdCardResult::portraitImageIsSet() const
{
    return portraitImageIsSet_;
}

void VietnamIdCardResult::unsetportraitImage()
{
    portraitImageIsSet_ = false;
}

std::vector<std::vector<int32_t>>& VietnamIdCardResult::getPortraitLocation()
{
    return portraitLocation_;
}

void VietnamIdCardResult::setPortraitLocation(const std::vector<std::vector<int32_t>>& value)
{
    portraitLocation_ = value;
    portraitLocationIsSet_ = true;
}

bool VietnamIdCardResult::portraitLocationIsSet() const
{
    return portraitLocationIsSet_;
}

void VietnamIdCardResult::unsetportraitLocation()
{
    portraitLocationIsSet_ = false;
}

std::string VietnamIdCardResult::getIdcardType() const
{
    return idcardType_;
}

void VietnamIdCardResult::setIdcardType(const std::string& value)
{
    idcardType_ = value;
    idcardTypeIsSet_ = true;
}

bool VietnamIdCardResult::idcardTypeIsSet() const
{
    return idcardTypeIsSet_;
}

void VietnamIdCardResult::unsetidcardType()
{
    idcardTypeIsSet_ = false;
}

Object VietnamIdCardResult::getTextLocation() const
{
    return textLocation_;
}

void VietnamIdCardResult::setTextLocation(const Object& value)
{
    textLocation_ = value;
    textLocationIsSet_ = true;
}

bool VietnamIdCardResult::textLocationIsSet() const
{
    return textLocationIsSet_;
}

void VietnamIdCardResult::unsettextLocation()
{
    textLocationIsSet_ = false;
}

}
}
}
}
}


