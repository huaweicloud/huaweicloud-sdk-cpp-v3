

#include "huaweicloud/ocr/v1/model/MyanmarDriverLicenseConfidence.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




MyanmarDriverLicenseConfidence::MyanmarDriverLicenseConfidence()
{
    cardNumber_ = 0.0f;
    cardNumberIsSet_ = false;
    cardNumberEn_ = 0.0f;
    cardNumberEnIsSet_ = false;
    name_ = 0.0f;
    nameIsSet_ = false;
    nameEn_ = 0.0f;
    nameEnIsSet_ = false;
    nrcId_ = 0.0f;
    nrcIdIsSet_ = false;
    nrcIdEn_ = 0.0f;
    nrcIdEnIsSet_ = false;
    birth_ = 0.0f;
    birthIsSet_ = false;
    birthEn_ = 0.0f;
    birthEnIsSet_ = false;
    bloodGroup_ = 0.0f;
    bloodGroupIsSet_ = false;
    bloodGroupEn_ = 0.0f;
    bloodGroupEnIsSet_ = false;
    expiriedDate_ = 0.0f;
    expiriedDateIsSet_ = false;
    expiriedDateEn_ = 0.0f;
    expiriedDateEnIsSet_ = false;
}

MyanmarDriverLicenseConfidence::~MyanmarDriverLicenseConfidence() = default;

void MyanmarDriverLicenseConfidence::validate()
{
}

web::json::value MyanmarDriverLicenseConfidence::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cardNumberIsSet_) {
        val[utility::conversions::to_string_t("card_number")] = ModelBase::toJson(cardNumber_);
    }
    if(cardNumberEnIsSet_) {
        val[utility::conversions::to_string_t("card_number_en")] = ModelBase::toJson(cardNumberEn_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nameEnIsSet_) {
        val[utility::conversions::to_string_t("name_en")] = ModelBase::toJson(nameEn_);
    }
    if(nrcIdIsSet_) {
        val[utility::conversions::to_string_t("nrc_id")] = ModelBase::toJson(nrcId_);
    }
    if(nrcIdEnIsSet_) {
        val[utility::conversions::to_string_t("nrc_id_en")] = ModelBase::toJson(nrcIdEn_);
    }
    if(birthIsSet_) {
        val[utility::conversions::to_string_t("birth")] = ModelBase::toJson(birth_);
    }
    if(birthEnIsSet_) {
        val[utility::conversions::to_string_t("birth_en")] = ModelBase::toJson(birthEn_);
    }
    if(bloodGroupIsSet_) {
        val[utility::conversions::to_string_t("blood_group")] = ModelBase::toJson(bloodGroup_);
    }
    if(bloodGroupEnIsSet_) {
        val[utility::conversions::to_string_t("blood_group_en")] = ModelBase::toJson(bloodGroupEn_);
    }
    if(expiriedDateIsSet_) {
        val[utility::conversions::to_string_t("expiried_date")] = ModelBase::toJson(expiriedDate_);
    }
    if(expiriedDateEnIsSet_) {
        val[utility::conversions::to_string_t("expiried_date_en")] = ModelBase::toJson(expiriedDateEn_);
    }

    return val;
}

bool MyanmarDriverLicenseConfidence::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("card_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("card_number"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCardNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("card_number_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("card_number_en"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCardNumberEn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_en"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nrc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nrc_id"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNrcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nrc_id_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nrc_id_en"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNrcIdEn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("birth_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("birth_en"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBirthEn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("blood_group_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blood_group_en"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBloodGroupEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiried_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiried_date"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiriedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiried_date_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiried_date_en"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiriedDateEn(refVal);
        }
    }
    return ok;
}


float MyanmarDriverLicenseConfidence::getCardNumber() const
{
    return cardNumber_;
}

void MyanmarDriverLicenseConfidence::setCardNumber(float value)
{
    cardNumber_ = value;
    cardNumberIsSet_ = true;
}

bool MyanmarDriverLicenseConfidence::cardNumberIsSet() const
{
    return cardNumberIsSet_;
}

void MyanmarDriverLicenseConfidence::unsetcardNumber()
{
    cardNumberIsSet_ = false;
}

float MyanmarDriverLicenseConfidence::getCardNumberEn() const
{
    return cardNumberEn_;
}

void MyanmarDriverLicenseConfidence::setCardNumberEn(float value)
{
    cardNumberEn_ = value;
    cardNumberEnIsSet_ = true;
}

bool MyanmarDriverLicenseConfidence::cardNumberEnIsSet() const
{
    return cardNumberEnIsSet_;
}

void MyanmarDriverLicenseConfidence::unsetcardNumberEn()
{
    cardNumberEnIsSet_ = false;
}

float MyanmarDriverLicenseConfidence::getName() const
{
    return name_;
}

void MyanmarDriverLicenseConfidence::setName(float value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MyanmarDriverLicenseConfidence::nameIsSet() const
{
    return nameIsSet_;
}

void MyanmarDriverLicenseConfidence::unsetname()
{
    nameIsSet_ = false;
}

float MyanmarDriverLicenseConfidence::getNameEn() const
{
    return nameEn_;
}

void MyanmarDriverLicenseConfidence::setNameEn(float value)
{
    nameEn_ = value;
    nameEnIsSet_ = true;
}

bool MyanmarDriverLicenseConfidence::nameEnIsSet() const
{
    return nameEnIsSet_;
}

void MyanmarDriverLicenseConfidence::unsetnameEn()
{
    nameEnIsSet_ = false;
}

float MyanmarDriverLicenseConfidence::getNrcId() const
{
    return nrcId_;
}

void MyanmarDriverLicenseConfidence::setNrcId(float value)
{
    nrcId_ = value;
    nrcIdIsSet_ = true;
}

bool MyanmarDriverLicenseConfidence::nrcIdIsSet() const
{
    return nrcIdIsSet_;
}

void MyanmarDriverLicenseConfidence::unsetnrcId()
{
    nrcIdIsSet_ = false;
}

float MyanmarDriverLicenseConfidence::getNrcIdEn() const
{
    return nrcIdEn_;
}

void MyanmarDriverLicenseConfidence::setNrcIdEn(float value)
{
    nrcIdEn_ = value;
    nrcIdEnIsSet_ = true;
}

bool MyanmarDriverLicenseConfidence::nrcIdEnIsSet() const
{
    return nrcIdEnIsSet_;
}

void MyanmarDriverLicenseConfidence::unsetnrcIdEn()
{
    nrcIdEnIsSet_ = false;
}

float MyanmarDriverLicenseConfidence::getBirth() const
{
    return birth_;
}

void MyanmarDriverLicenseConfidence::setBirth(float value)
{
    birth_ = value;
    birthIsSet_ = true;
}

bool MyanmarDriverLicenseConfidence::birthIsSet() const
{
    return birthIsSet_;
}

void MyanmarDriverLicenseConfidence::unsetbirth()
{
    birthIsSet_ = false;
}

float MyanmarDriverLicenseConfidence::getBirthEn() const
{
    return birthEn_;
}

void MyanmarDriverLicenseConfidence::setBirthEn(float value)
{
    birthEn_ = value;
    birthEnIsSet_ = true;
}

bool MyanmarDriverLicenseConfidence::birthEnIsSet() const
{
    return birthEnIsSet_;
}

void MyanmarDriverLicenseConfidence::unsetbirthEn()
{
    birthEnIsSet_ = false;
}

float MyanmarDriverLicenseConfidence::getBloodGroup() const
{
    return bloodGroup_;
}

void MyanmarDriverLicenseConfidence::setBloodGroup(float value)
{
    bloodGroup_ = value;
    bloodGroupIsSet_ = true;
}

bool MyanmarDriverLicenseConfidence::bloodGroupIsSet() const
{
    return bloodGroupIsSet_;
}

void MyanmarDriverLicenseConfidence::unsetbloodGroup()
{
    bloodGroupIsSet_ = false;
}

float MyanmarDriverLicenseConfidence::getBloodGroupEn() const
{
    return bloodGroupEn_;
}

void MyanmarDriverLicenseConfidence::setBloodGroupEn(float value)
{
    bloodGroupEn_ = value;
    bloodGroupEnIsSet_ = true;
}

bool MyanmarDriverLicenseConfidence::bloodGroupEnIsSet() const
{
    return bloodGroupEnIsSet_;
}

void MyanmarDriverLicenseConfidence::unsetbloodGroupEn()
{
    bloodGroupEnIsSet_ = false;
}

float MyanmarDriverLicenseConfidence::getExpiriedDate() const
{
    return expiriedDate_;
}

void MyanmarDriverLicenseConfidence::setExpiriedDate(float value)
{
    expiriedDate_ = value;
    expiriedDateIsSet_ = true;
}

bool MyanmarDriverLicenseConfidence::expiriedDateIsSet() const
{
    return expiriedDateIsSet_;
}

void MyanmarDriverLicenseConfidence::unsetexpiriedDate()
{
    expiriedDateIsSet_ = false;
}

float MyanmarDriverLicenseConfidence::getExpiriedDateEn() const
{
    return expiriedDateEn_;
}

void MyanmarDriverLicenseConfidence::setExpiriedDateEn(float value)
{
    expiriedDateEn_ = value;
    expiriedDateEnIsSet_ = true;
}

bool MyanmarDriverLicenseConfidence::expiriedDateEnIsSet() const
{
    return expiriedDateEnIsSet_;
}

void MyanmarDriverLicenseConfidence::unsetexpiriedDateEn()
{
    expiriedDateEnIsSet_ = false;
}

}
}
}
}
}


