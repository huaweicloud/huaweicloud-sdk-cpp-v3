

#include "huaweicloud/ocr/v1/model/GeneralTextCharList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




GeneralTextCharList::GeneralTextCharList()
{
    char_ = "";
    charIsSet_ = false;
    charLocationIsSet_ = false;
    charConfidence_ = 0.0f;
    charConfidenceIsSet_ = false;
}

GeneralTextCharList::~GeneralTextCharList() = default;

void GeneralTextCharList::validate()
{
}

web::json::value GeneralTextCharList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(charIsSet_) {
        val[utility::conversions::to_string_t("char")] = ModelBase::toJson(char_);
    }
    if(charLocationIsSet_) {
        val[utility::conversions::to_string_t("char_location")] = ModelBase::toJson(charLocation_);
    }
    if(charConfidenceIsSet_) {
        val[utility::conversions::to_string_t("char_confidence")] = ModelBase::toJson(charConfidence_);
    }

    return val;
}

bool GeneralTextCharList::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("char_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("char_location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCharLocation(refVal);
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
    return ok;
}


std::string GeneralTextCharList::getChar() const
{
    return char_;
}

void GeneralTextCharList::setChar(const std::string& value)
{
    char_ = value;
    charIsSet_ = true;
}

bool GeneralTextCharList::charIsSet() const
{
    return charIsSet_;
}

void GeneralTextCharList::unsetchar()
{
    charIsSet_ = false;
}

std::vector<std::vector<int32_t>>& GeneralTextCharList::getCharLocation()
{
    return charLocation_;
}

void GeneralTextCharList::setCharLocation(const std::vector<std::vector<int32_t>>& value)
{
    charLocation_ = value;
    charLocationIsSet_ = true;
}

bool GeneralTextCharList::charLocationIsSet() const
{
    return charLocationIsSet_;
}

void GeneralTextCharList::unsetcharLocation()
{
    charLocationIsSet_ = false;
}

float GeneralTextCharList::getCharConfidence() const
{
    return charConfidence_;
}

void GeneralTextCharList::setCharConfidence(float value)
{
    charConfidence_ = value;
    charConfidenceIsSet_ = true;
}

bool GeneralTextCharList::charConfidenceIsSet() const
{
    return charConfidenceIsSet_;
}

void GeneralTextCharList::unsetcharConfidence()
{
    charConfidenceIsSet_ = false;
}

}
}
}
}
}


