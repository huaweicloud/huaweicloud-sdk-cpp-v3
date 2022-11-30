

#include "huaweicloud/ocr/v1/model/MyanmarDriverLicenseResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




MyanmarDriverLicenseResult::MyanmarDriverLicenseResult()
{
    cardNumber_ = "";
    cardNumberIsSet_ = false;
    cardNumberEn_ = "";
    cardNumberEnIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nameEn_ = "";
    nameEnIsSet_ = false;
    nrcId_ = "";
    nrcIdIsSet_ = false;
    nrcIdEn_ = "";
    nrcIdEnIsSet_ = false;
    birth_ = "";
    birthIsSet_ = false;
    birthEn_ = "";
    birthEnIsSet_ = false;
    bloodGroup_ = "";
    bloodGroupIsSet_ = false;
    bloodGroupEn_ = "";
    bloodGroupEnIsSet_ = false;
    expiriedDate_ = "";
    expiriedDateIsSet_ = false;
    expiriedDateEn_ = "";
    expiriedDateEnIsSet_ = false;
    confidenceIsSet_ = false;
}

MyanmarDriverLicenseResult::~MyanmarDriverLicenseResult() = default;

void MyanmarDriverLicenseResult::validate()
{
}

web::json::value MyanmarDriverLicenseResult::toJson() const
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
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}

bool MyanmarDriverLicenseResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("card_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("card_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCardNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("card_number_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("card_number_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCardNumberEn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("nrc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nrc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNrcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nrc_id_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nrc_id_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNrcIdEn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("birth_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("birth_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBirthEn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("blood_group_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blood_group_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBloodGroupEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiried_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiried_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiriedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiried_date_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiried_date_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiriedDateEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            MyanmarDriverLicenseConfidence refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    return ok;
}


std::string MyanmarDriverLicenseResult::getCardNumber() const
{
    return cardNumber_;
}

void MyanmarDriverLicenseResult::setCardNumber(const std::string& value)
{
    cardNumber_ = value;
    cardNumberIsSet_ = true;
}

bool MyanmarDriverLicenseResult::cardNumberIsSet() const
{
    return cardNumberIsSet_;
}

void MyanmarDriverLicenseResult::unsetcardNumber()
{
    cardNumberIsSet_ = false;
}

std::string MyanmarDriverLicenseResult::getCardNumberEn() const
{
    return cardNumberEn_;
}

void MyanmarDriverLicenseResult::setCardNumberEn(const std::string& value)
{
    cardNumberEn_ = value;
    cardNumberEnIsSet_ = true;
}

bool MyanmarDriverLicenseResult::cardNumberEnIsSet() const
{
    return cardNumberEnIsSet_;
}

void MyanmarDriverLicenseResult::unsetcardNumberEn()
{
    cardNumberEnIsSet_ = false;
}

std::string MyanmarDriverLicenseResult::getName() const
{
    return name_;
}

void MyanmarDriverLicenseResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MyanmarDriverLicenseResult::nameIsSet() const
{
    return nameIsSet_;
}

void MyanmarDriverLicenseResult::unsetname()
{
    nameIsSet_ = false;
}

std::string MyanmarDriverLicenseResult::getNameEn() const
{
    return nameEn_;
}

void MyanmarDriverLicenseResult::setNameEn(const std::string& value)
{
    nameEn_ = value;
    nameEnIsSet_ = true;
}

bool MyanmarDriverLicenseResult::nameEnIsSet() const
{
    return nameEnIsSet_;
}

void MyanmarDriverLicenseResult::unsetnameEn()
{
    nameEnIsSet_ = false;
}

std::string MyanmarDriverLicenseResult::getNrcId() const
{
    return nrcId_;
}

void MyanmarDriverLicenseResult::setNrcId(const std::string& value)
{
    nrcId_ = value;
    nrcIdIsSet_ = true;
}

bool MyanmarDriverLicenseResult::nrcIdIsSet() const
{
    return nrcIdIsSet_;
}

void MyanmarDriverLicenseResult::unsetnrcId()
{
    nrcIdIsSet_ = false;
}

std::string MyanmarDriverLicenseResult::getNrcIdEn() const
{
    return nrcIdEn_;
}

void MyanmarDriverLicenseResult::setNrcIdEn(const std::string& value)
{
    nrcIdEn_ = value;
    nrcIdEnIsSet_ = true;
}

bool MyanmarDriverLicenseResult::nrcIdEnIsSet() const
{
    return nrcIdEnIsSet_;
}

void MyanmarDriverLicenseResult::unsetnrcIdEn()
{
    nrcIdEnIsSet_ = false;
}

std::string MyanmarDriverLicenseResult::getBirth() const
{
    return birth_;
}

void MyanmarDriverLicenseResult::setBirth(const std::string& value)
{
    birth_ = value;
    birthIsSet_ = true;
}

bool MyanmarDriverLicenseResult::birthIsSet() const
{
    return birthIsSet_;
}

void MyanmarDriverLicenseResult::unsetbirth()
{
    birthIsSet_ = false;
}

std::string MyanmarDriverLicenseResult::getBirthEn() const
{
    return birthEn_;
}

void MyanmarDriverLicenseResult::setBirthEn(const std::string& value)
{
    birthEn_ = value;
    birthEnIsSet_ = true;
}

bool MyanmarDriverLicenseResult::birthEnIsSet() const
{
    return birthEnIsSet_;
}

void MyanmarDriverLicenseResult::unsetbirthEn()
{
    birthEnIsSet_ = false;
}

std::string MyanmarDriverLicenseResult::getBloodGroup() const
{
    return bloodGroup_;
}

void MyanmarDriverLicenseResult::setBloodGroup(const std::string& value)
{
    bloodGroup_ = value;
    bloodGroupIsSet_ = true;
}

bool MyanmarDriverLicenseResult::bloodGroupIsSet() const
{
    return bloodGroupIsSet_;
}

void MyanmarDriverLicenseResult::unsetbloodGroup()
{
    bloodGroupIsSet_ = false;
}

std::string MyanmarDriverLicenseResult::getBloodGroupEn() const
{
    return bloodGroupEn_;
}

void MyanmarDriverLicenseResult::setBloodGroupEn(const std::string& value)
{
    bloodGroupEn_ = value;
    bloodGroupEnIsSet_ = true;
}

bool MyanmarDriverLicenseResult::bloodGroupEnIsSet() const
{
    return bloodGroupEnIsSet_;
}

void MyanmarDriverLicenseResult::unsetbloodGroupEn()
{
    bloodGroupEnIsSet_ = false;
}

std::string MyanmarDriverLicenseResult::getExpiriedDate() const
{
    return expiriedDate_;
}

void MyanmarDriverLicenseResult::setExpiriedDate(const std::string& value)
{
    expiriedDate_ = value;
    expiriedDateIsSet_ = true;
}

bool MyanmarDriverLicenseResult::expiriedDateIsSet() const
{
    return expiriedDateIsSet_;
}

void MyanmarDriverLicenseResult::unsetexpiriedDate()
{
    expiriedDateIsSet_ = false;
}

std::string MyanmarDriverLicenseResult::getExpiriedDateEn() const
{
    return expiriedDateEn_;
}

void MyanmarDriverLicenseResult::setExpiriedDateEn(const std::string& value)
{
    expiriedDateEn_ = value;
    expiriedDateEnIsSet_ = true;
}

bool MyanmarDriverLicenseResult::expiriedDateEnIsSet() const
{
    return expiriedDateEnIsSet_;
}

void MyanmarDriverLicenseResult::unsetexpiriedDateEn()
{
    expiriedDateEnIsSet_ = false;
}

MyanmarDriverLicenseConfidence MyanmarDriverLicenseResult::getConfidence() const
{
    return confidence_;
}

void MyanmarDriverLicenseResult::setConfidence(const MyanmarDriverLicenseConfidence& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool MyanmarDriverLicenseResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void MyanmarDriverLicenseResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


