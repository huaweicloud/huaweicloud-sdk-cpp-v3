

#include "huaweicloud/ocr/v1/model/CharListIem.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




CharListIem::CharListIem()
{
    char_ = "";
    charIsSet_ = false;
    charConfidence_ = 0.0f;
    charConfidenceIsSet_ = false;
    charLocationIsSet_ = false;
}

CharListIem::~CharListIem() = default;

void CharListIem::validate()
{
}

web::json::value CharListIem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(charIsSet_) {
        val[utility::conversions::to_string_t("char")] = ModelBase::toJson(char_);
    }
    if(charConfidenceIsSet_) {
        val[utility::conversions::to_string_t("char_confidence")] = ModelBase::toJson(charConfidence_);
    }
    if(charLocationIsSet_) {
        val[utility::conversions::to_string_t("char_location")] = ModelBase::toJson(charLocation_);
    }

    return val;
}

bool CharListIem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("char"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("char"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChar(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("char_confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("char_confidence"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCharConfidence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("char_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("char_location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCharLocation(refVal);
        }
    }
    return ok;
}

std::string CharListIem::getChar() const
{
    return char_;
}

void CharListIem::setChar(const std::string& value)
{
    char_ = value;
    charIsSet_ = true;
}

bool CharListIem::charIsSet() const
{
    return charIsSet_;
}

void CharListIem::unsetchar()
{
    charIsSet_ = false;
}

float CharListIem::getCharConfidence() const
{
    return charConfidence_;
}

void CharListIem::setCharConfidence(float value)
{
    charConfidence_ = value;
    charConfidenceIsSet_ = true;
}

bool CharListIem::charConfidenceIsSet() const
{
    return charConfidenceIsSet_;
}

void CharListIem::unsetcharConfidence()
{
    charConfidenceIsSet_ = false;
}

std::vector<std::vector<int32_t>>& CharListIem::getCharLocation()
{
    return charLocation_;
}

void CharListIem::setCharLocation(const std::vector<std::vector<int32_t>>& value)
{
    charLocation_ = value;
    charLocationIsSet_ = true;
}

bool CharListIem::charLocationIsSet() const
{
    return charLocationIsSet_;
}

void CharListIem::unsetcharLocation()
{
    charLocationIsSet_ = false;
}

}
}
}
}
}


