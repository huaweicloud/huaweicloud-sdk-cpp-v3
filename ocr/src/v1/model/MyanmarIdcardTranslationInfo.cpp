

#include "huaweicloud/ocr/v1/model/MyanmarIdcardTranslationInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




MyanmarIdcardTranslationInfo::MyanmarIdcardTranslationInfo()
{
    nameTranslation_ = "";
    nameTranslationIsSet_ = false;
    fatherNameTranslation_ = "";
    fatherNameTranslationIsSet_ = false;
    nrcIdTranslation_ = "";
    nrcIdTranslationIsSet_ = false;
    birthTranslation_ = "";
    birthTranslationIsSet_ = false;
}

MyanmarIdcardTranslationInfo::~MyanmarIdcardTranslationInfo() = default;

void MyanmarIdcardTranslationInfo::validate()
{
}

web::json::value MyanmarIdcardTranslationInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameTranslationIsSet_) {
        val[utility::conversions::to_string_t("name_translation")] = ModelBase::toJson(nameTranslation_);
    }
    if(fatherNameTranslationIsSet_) {
        val[utility::conversions::to_string_t("father_name_translation")] = ModelBase::toJson(fatherNameTranslation_);
    }
    if(nrcIdTranslationIsSet_) {
        val[utility::conversions::to_string_t("nrc_id_translation")] = ModelBase::toJson(nrcIdTranslation_);
    }
    if(birthTranslationIsSet_) {
        val[utility::conversions::to_string_t("birth_translation")] = ModelBase::toJson(birthTranslation_);
    }

    return val;
}

bool MyanmarIdcardTranslationInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name_translation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_translation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameTranslation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("father_name_translation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("father_name_translation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFatherNameTranslation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nrc_id_translation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nrc_id_translation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNrcIdTranslation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("birth_translation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("birth_translation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBirthTranslation(refVal);
        }
    }
    return ok;
}

std::string MyanmarIdcardTranslationInfo::getNameTranslation() const
{
    return nameTranslation_;
}

void MyanmarIdcardTranslationInfo::setNameTranslation(const std::string& value)
{
    nameTranslation_ = value;
    nameTranslationIsSet_ = true;
}

bool MyanmarIdcardTranslationInfo::nameTranslationIsSet() const
{
    return nameTranslationIsSet_;
}

void MyanmarIdcardTranslationInfo::unsetnameTranslation()
{
    nameTranslationIsSet_ = false;
}

std::string MyanmarIdcardTranslationInfo::getFatherNameTranslation() const
{
    return fatherNameTranslation_;
}

void MyanmarIdcardTranslationInfo::setFatherNameTranslation(const std::string& value)
{
    fatherNameTranslation_ = value;
    fatherNameTranslationIsSet_ = true;
}

bool MyanmarIdcardTranslationInfo::fatherNameTranslationIsSet() const
{
    return fatherNameTranslationIsSet_;
}

void MyanmarIdcardTranslationInfo::unsetfatherNameTranslation()
{
    fatherNameTranslationIsSet_ = false;
}

std::string MyanmarIdcardTranslationInfo::getNrcIdTranslation() const
{
    return nrcIdTranslation_;
}

void MyanmarIdcardTranslationInfo::setNrcIdTranslation(const std::string& value)
{
    nrcIdTranslation_ = value;
    nrcIdTranslationIsSet_ = true;
}

bool MyanmarIdcardTranslationInfo::nrcIdTranslationIsSet() const
{
    return nrcIdTranslationIsSet_;
}

void MyanmarIdcardTranslationInfo::unsetnrcIdTranslation()
{
    nrcIdTranslationIsSet_ = false;
}

std::string MyanmarIdcardTranslationInfo::getBirthTranslation() const
{
    return birthTranslation_;
}

void MyanmarIdcardTranslationInfo::setBirthTranslation(const std::string& value)
{
    birthTranslation_ = value;
    birthTranslationIsSet_ = true;
}

bool MyanmarIdcardTranslationInfo::birthTranslationIsSet() const
{
    return birthTranslationIsSet_;
}

void MyanmarIdcardTranslationInfo::unsetbirthTranslation()
{
    birthTranslationIsSet_ = false;
}

}
}
}
}
}


