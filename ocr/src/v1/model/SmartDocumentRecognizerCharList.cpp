

#include "huaweicloud/ocr/v1/model/SmartDocumentRecognizerCharList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




SmartDocumentRecognizerCharList::SmartDocumentRecognizerCharList()
{
    char_ = "";
    charIsSet_ = false;
    charConfidence_ = 0.0f;
    charConfidenceIsSet_ = false;
    charLocationIsSet_ = false;
}

SmartDocumentRecognizerCharList::~SmartDocumentRecognizerCharList() = default;

void SmartDocumentRecognizerCharList::validate()
{
}

web::json::value SmartDocumentRecognizerCharList::toJson() const
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
bool SmartDocumentRecognizerCharList::fromJson(const web::json::value& val)
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


std::string SmartDocumentRecognizerCharList::getChar() const
{
    return char_;
}

void SmartDocumentRecognizerCharList::setChar(const std::string& value)
{
    char_ = value;
    charIsSet_ = true;
}

bool SmartDocumentRecognizerCharList::charIsSet() const
{
    return charIsSet_;
}

void SmartDocumentRecognizerCharList::unsetchar()
{
    charIsSet_ = false;
}

float SmartDocumentRecognizerCharList::getCharConfidence() const
{
    return charConfidence_;
}

void SmartDocumentRecognizerCharList::setCharConfidence(float value)
{
    charConfidence_ = value;
    charConfidenceIsSet_ = true;
}

bool SmartDocumentRecognizerCharList::charConfidenceIsSet() const
{
    return charConfidenceIsSet_;
}

void SmartDocumentRecognizerCharList::unsetcharConfidence()
{
    charConfidenceIsSet_ = false;
}

std::vector<std::vector<int32_t>>& SmartDocumentRecognizerCharList::getCharLocation()
{
    return charLocation_;
}

void SmartDocumentRecognizerCharList::setCharLocation(const std::vector<std::vector<int32_t>>& value)
{
    charLocation_ = value;
    charLocationIsSet_ = true;
}

bool SmartDocumentRecognizerCharList::charLocationIsSet() const
{
    return charLocationIsSet_;
}

void SmartDocumentRecognizerCharList::unsetcharLocation()
{
    charLocationIsSet_ = false;
}

}
}
}
}
}


