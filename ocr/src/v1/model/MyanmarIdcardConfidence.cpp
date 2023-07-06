

#include "huaweicloud/ocr/v1/model/MyanmarIdcardConfidence.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




MyanmarIdcardConfidence::MyanmarIdcardConfidence()
{
    nrcId_ = 0.0f;
    nrcIdIsSet_ = false;
    issueDate_ = 0.0f;
    issueDateIsSet_ = false;
    name_ = 0.0f;
    nameIsSet_ = false;
    birth_ = 0.0f;
    birthIsSet_ = false;
    bloodlinesReligion_ = 0.0f;
    bloodlinesReligionIsSet_ = false;
    height_ = 0.0f;
    heightIsSet_ = false;
    bloodGroup_ = 0.0f;
    bloodGroupIsSet_ = false;
    cardId_ = 0.0f;
    cardIdIsSet_ = false;
    nrcIdBack_ = 0.0f;
    nrcIdBackIsSet_ = false;
    profession_ = 0.0f;
    professionIsSet_ = false;
    address_ = 0.0f;
    addressIsSet_ = false;
}

MyanmarIdcardConfidence::~MyanmarIdcardConfidence() = default;

void MyanmarIdcardConfidence::validate()
{
}

web::json::value MyanmarIdcardConfidence::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nrcIdIsSet_) {
        val[utility::conversions::to_string_t("nrc_id")] = ModelBase::toJson(nrcId_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
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

    return val;
}

bool MyanmarIdcardConfidence::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nrc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nrc_id"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNrcId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("bloodlines_religion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bloodlines_religion"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBloodlinesReligion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blood_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blood_group"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBloodGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("card_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("card_id"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCardId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nrc_id_back"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nrc_id_back"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNrcIdBack(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("profession"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profession"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProfession(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    return ok;
}

float MyanmarIdcardConfidence::getNrcId() const
{
    return nrcId_;
}

void MyanmarIdcardConfidence::setNrcId(float value)
{
    nrcId_ = value;
    nrcIdIsSet_ = true;
}

bool MyanmarIdcardConfidence::nrcIdIsSet() const
{
    return nrcIdIsSet_;
}

void MyanmarIdcardConfidence::unsetnrcId()
{
    nrcIdIsSet_ = false;
}

float MyanmarIdcardConfidence::getIssueDate() const
{
    return issueDate_;
}

void MyanmarIdcardConfidence::setIssueDate(float value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool MyanmarIdcardConfidence::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void MyanmarIdcardConfidence::unsetissueDate()
{
    issueDateIsSet_ = false;
}

float MyanmarIdcardConfidence::getName() const
{
    return name_;
}

void MyanmarIdcardConfidence::setName(float value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MyanmarIdcardConfidence::nameIsSet() const
{
    return nameIsSet_;
}

void MyanmarIdcardConfidence::unsetname()
{
    nameIsSet_ = false;
}

float MyanmarIdcardConfidence::getBirth() const
{
    return birth_;
}

void MyanmarIdcardConfidence::setBirth(float value)
{
    birth_ = value;
    birthIsSet_ = true;
}

bool MyanmarIdcardConfidence::birthIsSet() const
{
    return birthIsSet_;
}

void MyanmarIdcardConfidence::unsetbirth()
{
    birthIsSet_ = false;
}

float MyanmarIdcardConfidence::getBloodlinesReligion() const
{
    return bloodlinesReligion_;
}

void MyanmarIdcardConfidence::setBloodlinesReligion(float value)
{
    bloodlinesReligion_ = value;
    bloodlinesReligionIsSet_ = true;
}

bool MyanmarIdcardConfidence::bloodlinesReligionIsSet() const
{
    return bloodlinesReligionIsSet_;
}

void MyanmarIdcardConfidence::unsetbloodlinesReligion()
{
    bloodlinesReligionIsSet_ = false;
}

float MyanmarIdcardConfidence::getHeight() const
{
    return height_;
}

void MyanmarIdcardConfidence::setHeight(float value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool MyanmarIdcardConfidence::heightIsSet() const
{
    return heightIsSet_;
}

void MyanmarIdcardConfidence::unsetheight()
{
    heightIsSet_ = false;
}

float MyanmarIdcardConfidence::getBloodGroup() const
{
    return bloodGroup_;
}

void MyanmarIdcardConfidence::setBloodGroup(float value)
{
    bloodGroup_ = value;
    bloodGroupIsSet_ = true;
}

bool MyanmarIdcardConfidence::bloodGroupIsSet() const
{
    return bloodGroupIsSet_;
}

void MyanmarIdcardConfidence::unsetbloodGroup()
{
    bloodGroupIsSet_ = false;
}

float MyanmarIdcardConfidence::getCardId() const
{
    return cardId_;
}

void MyanmarIdcardConfidence::setCardId(float value)
{
    cardId_ = value;
    cardIdIsSet_ = true;
}

bool MyanmarIdcardConfidence::cardIdIsSet() const
{
    return cardIdIsSet_;
}

void MyanmarIdcardConfidence::unsetcardId()
{
    cardIdIsSet_ = false;
}

float MyanmarIdcardConfidence::getNrcIdBack() const
{
    return nrcIdBack_;
}

void MyanmarIdcardConfidence::setNrcIdBack(float value)
{
    nrcIdBack_ = value;
    nrcIdBackIsSet_ = true;
}

bool MyanmarIdcardConfidence::nrcIdBackIsSet() const
{
    return nrcIdBackIsSet_;
}

void MyanmarIdcardConfidence::unsetnrcIdBack()
{
    nrcIdBackIsSet_ = false;
}

float MyanmarIdcardConfidence::getProfession() const
{
    return profession_;
}

void MyanmarIdcardConfidence::setProfession(float value)
{
    profession_ = value;
    professionIsSet_ = true;
}

bool MyanmarIdcardConfidence::professionIsSet() const
{
    return professionIsSet_;
}

void MyanmarIdcardConfidence::unsetprofession()
{
    professionIsSet_ = false;
}

float MyanmarIdcardConfidence::getAddress() const
{
    return address_;
}

void MyanmarIdcardConfidence::setAddress(float value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool MyanmarIdcardConfidence::addressIsSet() const
{
    return addressIsSet_;
}

void MyanmarIdcardConfidence::unsetaddress()
{
    addressIsSet_ = false;
}

}
}
}
}
}


