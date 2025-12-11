

#include "huaweicloud/ocr/v1/model/SmartDocumentRecognizerWordsBlockList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




SmartDocumentRecognizerWordsBlockList::SmartDocumentRecognizerWordsBlockList()
{
    words_ = "";
    wordsIsSet_ = false;
    locationIsSet_ = false;
    confidence_ = 0.0f;
    confidenceIsSet_ = false;
    charListIsSet_ = false;
}

SmartDocumentRecognizerWordsBlockList::~SmartDocumentRecognizerWordsBlockList() = default;

void SmartDocumentRecognizerWordsBlockList::validate()
{
}

web::json::value SmartDocumentRecognizerWordsBlockList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(wordsIsSet_) {
        val[utility::conversions::to_string_t("words")] = ModelBase::toJson(words_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }
    if(charListIsSet_) {
        val[utility::conversions::to_string_t("char_list")] = ModelBase::toJson(charList_);
    }

    return val;
}
bool SmartDocumentRecognizerWordsBlockList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("words"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("words"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("char_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("char_list"));
        if(!fieldValue.is_null())
        {
            std::vector<SmartDocumentRecognizerCharList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCharList(refVal);
        }
    }
    return ok;
}


std::string SmartDocumentRecognizerWordsBlockList::getWords() const
{
    return words_;
}

void SmartDocumentRecognizerWordsBlockList::setWords(const std::string& value)
{
    words_ = value;
    wordsIsSet_ = true;
}

bool SmartDocumentRecognizerWordsBlockList::wordsIsSet() const
{
    return wordsIsSet_;
}

void SmartDocumentRecognizerWordsBlockList::unsetwords()
{
    wordsIsSet_ = false;
}

std::vector<std::vector<int32_t>>& SmartDocumentRecognizerWordsBlockList::getLocation()
{
    return location_;
}

void SmartDocumentRecognizerWordsBlockList::setLocation(const std::vector<std::vector<int32_t>>& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool SmartDocumentRecognizerWordsBlockList::locationIsSet() const
{
    return locationIsSet_;
}

void SmartDocumentRecognizerWordsBlockList::unsetlocation()
{
    locationIsSet_ = false;
}

float SmartDocumentRecognizerWordsBlockList::getConfidence() const
{
    return confidence_;
}

void SmartDocumentRecognizerWordsBlockList::setConfidence(float value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool SmartDocumentRecognizerWordsBlockList::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void SmartDocumentRecognizerWordsBlockList::unsetconfidence()
{
    confidenceIsSet_ = false;
}

std::vector<SmartDocumentRecognizerCharList>& SmartDocumentRecognizerWordsBlockList::getCharList()
{
    return charList_;
}

void SmartDocumentRecognizerWordsBlockList::setCharList(const std::vector<SmartDocumentRecognizerCharList>& value)
{
    charList_ = value;
    charListIsSet_ = true;
}

bool SmartDocumentRecognizerWordsBlockList::charListIsSet() const
{
    return charListIsSet_;
}

void SmartDocumentRecognizerWordsBlockList::unsetcharList()
{
    charListIsSet_ = false;
}

}
}
}
}
}


