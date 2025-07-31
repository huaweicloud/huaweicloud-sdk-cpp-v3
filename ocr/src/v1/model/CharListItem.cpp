

#include "huaweicloud/ocr/v1/model/CharListItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




CharListItem::CharListItem()
{
    char_ = "";
    charIsSet_ = false;
    charConfidence_ = 0.0f;
    charConfidenceIsSet_ = false;
    charLocationIsSet_ = false;
}

CharListItem::~CharListItem() = default;

void CharListItem::validate()
{
}

web::json::value CharListItem::toJson() const
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
bool CharListItem::fromJson(const web::json::value& val)
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


std::string CharListItem::getChar() const
{
    return char_;
}

void CharListItem::setChar(const std::string& value)
{
    char_ = value;
    charIsSet_ = true;
}

bool CharListItem::charIsSet() const
{
    return charIsSet_;
}

void CharListItem::unsetchar()
{
    charIsSet_ = false;
}

float CharListItem::getCharConfidence() const
{
    return charConfidence_;
}

void CharListItem::setCharConfidence(float value)
{
    charConfidence_ = value;
    charConfidenceIsSet_ = true;
}

bool CharListItem::charConfidenceIsSet() const
{
    return charConfidenceIsSet_;
}

void CharListItem::unsetcharConfidence()
{
    charConfidenceIsSet_ = false;
}

std::vector<std::vector<int32_t>>& CharListItem::getCharLocation()
{
    return charLocation_;
}

void CharListItem::setCharLocation(const std::vector<std::vector<int32_t>>& value)
{
    charLocation_ = value;
    charLocationIsSet_ = true;
}

bool CharListItem::charLocationIsSet() const
{
    return charLocationIsSet_;
}

void CharListItem::unsetcharLocation()
{
    charLocationIsSet_ = false;
}

}
}
}
}
}


