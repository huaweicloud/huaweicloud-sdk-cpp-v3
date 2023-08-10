

#include "huaweicloud/ocr/v1/model/MyanmarIdcardResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




MyanmarIdcardResult::MyanmarIdcardResult()
{
    side_ = "";
    sideIsSet_ = false;
    class_ = "";
    classIsSet_ = false;
    nrcId_ = "";
    nrcIdIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    fatherName_ = "";
    fatherNameIsSet_ = false;
    birth_ = "";
    birthIsSet_ = false;
    bloodlinesReligion_ = "";
    bloodlinesReligionIsSet_ = false;
    height_ = "";
    heightIsSet_ = false;
    bloodGroup_ = "";
    bloodGroupIsSet_ = false;
    cardId_ = "";
    cardIdIsSet_ = false;
    nrcIdBack_ = "";
    nrcIdBackIsSet_ = false;
    profession_ = "";
    professionIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    confidenceIsSet_ = false;
    portraitImage_ = "";
    portraitImageIsSet_ = false;
    portraitLocationIsSet_ = false;
    idcardType_ = "";
    idcardTypeIsSet_ = false;
    translationInfoIsSet_ = false;
}

MyanmarIdcardResult::~MyanmarIdcardResult() = default;

void MyanmarIdcardResult::validate()
{
}

web::json::value MyanmarIdcardResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sideIsSet_) {
        val[utility::conversions::to_string_t("side")] = ModelBase::toJson(side_);
    }
    if(classIsSet_) {
        val[utility::conversions::to_string_t("class")] = ModelBase::toJson(class_);
    }
    if(nrcIdIsSet_) {
        val[utility::conversions::to_string_t("nrc_id")] = ModelBase::toJson(nrcId_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(fatherNameIsSet_) {
        val[utility::conversions::to_string_t("father_name")] = ModelBase::toJson(fatherName_);
    }
    if(birthIsSet_) {
        val[utility::conversions::to_string_t("birth")] = ModelBase::toJson(birth_);
    }
    if(bloodlinesReligionIsSet_) {
        val[utility::conversions::to_string_t("bloodlines_religion")] = ModelBase::toJson(bloodlinesReligion_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(bloodGroupIsSet_) {
        val[utility::conversions::to_string_t("blood_group")] = ModelBase::toJson(bloodGroup_);
    }
    if(cardIdIsSet_) {
        val[utility::conversions::to_string_t("card_id")] = ModelBase::toJson(cardId_);
    }
    if(nrcIdBackIsSet_) {
        val[utility::conversions::to_string_t("nrc_id_back")] = ModelBase::toJson(nrcIdBack_);
    }
    if(professionIsSet_) {
        val[utility::conversions::to_string_t("profession")] = ModelBase::toJson(profession_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
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
    if(translationInfoIsSet_) {
        val[utility::conversions::to_string_t("translation_info")] = ModelBase::toJson(translationInfo_);
    }

    return val;
}

bool MyanmarIdcardResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("class"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("class"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClass(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nrc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nrc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNrcId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("father_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("father_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFatherName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("bloodlines_religion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bloodlines_religion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBloodlinesReligion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("blood_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blood_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBloodGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("card_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("card_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCardId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nrc_id_back"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nrc_id_back"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNrcIdBack(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("profession"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profession"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProfession(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            MyanmarIdcardConfidence refVal;
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
    if(val.has_field(utility::conversions::to_string_t("translation_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("translation_info"));
        if(!fieldValue.is_null())
        {
            MyanmarIdcardTranslationInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTranslationInfo(refVal);
        }
    }
    return ok;
}

std::string MyanmarIdcardResult::getSide() const
{
    return side_;
}

void MyanmarIdcardResult::setSide(const std::string& value)
{
    side_ = value;
    sideIsSet_ = true;
}

bool MyanmarIdcardResult::sideIsSet() const
{
    return sideIsSet_;
}

void MyanmarIdcardResult::unsetside()
{
    sideIsSet_ = false;
}

std::string MyanmarIdcardResult::getClass() const
{
    return class_;
}

void MyanmarIdcardResult::setClass(const std::string& value)
{
    class_ = value;
    classIsSet_ = true;
}

bool MyanmarIdcardResult::classIsSet() const
{
    return classIsSet_;
}

void MyanmarIdcardResult::unsetclass()
{
    classIsSet_ = false;
}

std::string MyanmarIdcardResult::getNrcId() const
{
    return nrcId_;
}

void MyanmarIdcardResult::setNrcId(const std::string& value)
{
    nrcId_ = value;
    nrcIdIsSet_ = true;
}

bool MyanmarIdcardResult::nrcIdIsSet() const
{
    return nrcIdIsSet_;
}

void MyanmarIdcardResult::unsetnrcId()
{
    nrcIdIsSet_ = false;
}

std::string MyanmarIdcardResult::getIssueDate() const
{
    return issueDate_;
}

void MyanmarIdcardResult::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool MyanmarIdcardResult::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void MyanmarIdcardResult::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string MyanmarIdcardResult::getName() const
{
    return name_;
}

void MyanmarIdcardResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MyanmarIdcardResult::nameIsSet() const
{
    return nameIsSet_;
}

void MyanmarIdcardResult::unsetname()
{
    nameIsSet_ = false;
}

std::string MyanmarIdcardResult::getFatherName() const
{
    return fatherName_;
}

void MyanmarIdcardResult::setFatherName(const std::string& value)
{
    fatherName_ = value;
    fatherNameIsSet_ = true;
}

bool MyanmarIdcardResult::fatherNameIsSet() const
{
    return fatherNameIsSet_;
}

void MyanmarIdcardResult::unsetfatherName()
{
    fatherNameIsSet_ = false;
}

std::string MyanmarIdcardResult::getBirth() const
{
    return birth_;
}

void MyanmarIdcardResult::setBirth(const std::string& value)
{
    birth_ = value;
    birthIsSet_ = true;
}

bool MyanmarIdcardResult::birthIsSet() const
{
    return birthIsSet_;
}

void MyanmarIdcardResult::unsetbirth()
{
    birthIsSet_ = false;
}

std::string MyanmarIdcardResult::getBloodlinesReligion() const
{
    return bloodlinesReligion_;
}

void MyanmarIdcardResult::setBloodlinesReligion(const std::string& value)
{
    bloodlinesReligion_ = value;
    bloodlinesReligionIsSet_ = true;
}

bool MyanmarIdcardResult::bloodlinesReligionIsSet() const
{
    return bloodlinesReligionIsSet_;
}

void MyanmarIdcardResult::unsetbloodlinesReligion()
{
    bloodlinesReligionIsSet_ = false;
}

std::string MyanmarIdcardResult::getHeight() const
{
    return height_;
}

void MyanmarIdcardResult::setHeight(const std::string& value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool MyanmarIdcardResult::heightIsSet() const
{
    return heightIsSet_;
}

void MyanmarIdcardResult::unsetheight()
{
    heightIsSet_ = false;
}

std::string MyanmarIdcardResult::getBloodGroup() const
{
    return bloodGroup_;
}

void MyanmarIdcardResult::setBloodGroup(const std::string& value)
{
    bloodGroup_ = value;
    bloodGroupIsSet_ = true;
}

bool MyanmarIdcardResult::bloodGroupIsSet() const
{
    return bloodGroupIsSet_;
}

void MyanmarIdcardResult::unsetbloodGroup()
{
    bloodGroupIsSet_ = false;
}

std::string MyanmarIdcardResult::getCardId() const
{
    return cardId_;
}

void MyanmarIdcardResult::setCardId(const std::string& value)
{
    cardId_ = value;
    cardIdIsSet_ = true;
}

bool MyanmarIdcardResult::cardIdIsSet() const
{
    return cardIdIsSet_;
}

void MyanmarIdcardResult::unsetcardId()
{
    cardIdIsSet_ = false;
}

std::string MyanmarIdcardResult::getNrcIdBack() const
{
    return nrcIdBack_;
}

void MyanmarIdcardResult::setNrcIdBack(const std::string& value)
{
    nrcIdBack_ = value;
    nrcIdBackIsSet_ = true;
}

bool MyanmarIdcardResult::nrcIdBackIsSet() const
{
    return nrcIdBackIsSet_;
}

void MyanmarIdcardResult::unsetnrcIdBack()
{
    nrcIdBackIsSet_ = false;
}

std::string MyanmarIdcardResult::getProfession() const
{
    return profession_;
}

void MyanmarIdcardResult::setProfession(const std::string& value)
{
    profession_ = value;
    professionIsSet_ = true;
}

bool MyanmarIdcardResult::professionIsSet() const
{
    return professionIsSet_;
}

void MyanmarIdcardResult::unsetprofession()
{
    professionIsSet_ = false;
}

std::string MyanmarIdcardResult::getAddress() const
{
    return address_;
}

void MyanmarIdcardResult::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool MyanmarIdcardResult::addressIsSet() const
{
    return addressIsSet_;
}

void MyanmarIdcardResult::unsetaddress()
{
    addressIsSet_ = false;
}

MyanmarIdcardConfidence MyanmarIdcardResult::getConfidence() const
{
    return confidence_;
}

void MyanmarIdcardResult::setConfidence(const MyanmarIdcardConfidence& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool MyanmarIdcardResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void MyanmarIdcardResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

std::string MyanmarIdcardResult::getPortraitImage() const
{
    return portraitImage_;
}

void MyanmarIdcardResult::setPortraitImage(const std::string& value)
{
    portraitImage_ = value;
    portraitImageIsSet_ = true;
}

bool MyanmarIdcardResult::portraitImageIsSet() const
{
    return portraitImageIsSet_;
}

void MyanmarIdcardResult::unsetportraitImage()
{
    portraitImageIsSet_ = false;
}

std::vector<std::vector<int32_t>>& MyanmarIdcardResult::getPortraitLocation()
{
    return portraitLocation_;
}

void MyanmarIdcardResult::setPortraitLocation(const std::vector<std::vector<int32_t>>& value)
{
    portraitLocation_ = value;
    portraitLocationIsSet_ = true;
}

bool MyanmarIdcardResult::portraitLocationIsSet() const
{
    return portraitLocationIsSet_;
}

void MyanmarIdcardResult::unsetportraitLocation()
{
    portraitLocationIsSet_ = false;
}

std::string MyanmarIdcardResult::getIdcardType() const
{
    return idcardType_;
}

void MyanmarIdcardResult::setIdcardType(const std::string& value)
{
    idcardType_ = value;
    idcardTypeIsSet_ = true;
}

bool MyanmarIdcardResult::idcardTypeIsSet() const
{
    return idcardTypeIsSet_;
}

void MyanmarIdcardResult::unsetidcardType()
{
    idcardTypeIsSet_ = false;
}

MyanmarIdcardTranslationInfo MyanmarIdcardResult::getTranslationInfo() const
{
    return translationInfo_;
}

void MyanmarIdcardResult::setTranslationInfo(const MyanmarIdcardTranslationInfo& value)
{
    translationInfo_ = value;
    translationInfoIsSet_ = true;
}

bool MyanmarIdcardResult::translationInfoIsSet() const
{
    return translationInfoIsSet_;
}

void MyanmarIdcardResult::unsettranslationInfo()
{
    translationInfoIsSet_ = false;
}

}
}
}
}
}


