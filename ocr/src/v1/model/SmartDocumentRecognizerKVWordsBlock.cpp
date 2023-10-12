

#include "huaweicloud/ocr/v1/model/SmartDocumentRecognizerKVWordsBlock.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




SmartDocumentRecognizerKVWordsBlock::SmartDocumentRecognizerKVWordsBlock()
{
    words_ = "";
    wordsIsSet_ = false;
    locationIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

SmartDocumentRecognizerKVWordsBlock::~SmartDocumentRecognizerKVWordsBlock() = default;

void SmartDocumentRecognizerKVWordsBlock::validate()
{
}

web::json::value SmartDocumentRecognizerKVWordsBlock::toJson() const
{
    web::json::value val = web::json::value::object();

    if(wordsIsSet_) {
        val[utility::conversions::to_string_t("words")] = ModelBase::toJson(words_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool SmartDocumentRecognizerKVWordsBlock::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string SmartDocumentRecognizerKVWordsBlock::getWords() const
{
    return words_;
}

void SmartDocumentRecognizerKVWordsBlock::setWords(const std::string& value)
{
    words_ = value;
    wordsIsSet_ = true;
}

bool SmartDocumentRecognizerKVWordsBlock::wordsIsSet() const
{
    return wordsIsSet_;
}

void SmartDocumentRecognizerKVWordsBlock::unsetwords()
{
    wordsIsSet_ = false;
}

std::vector<std::vector<int32_t>>& SmartDocumentRecognizerKVWordsBlock::getLocation()
{
    return location_;
}

void SmartDocumentRecognizerKVWordsBlock::setLocation(const std::vector<std::vector<int32_t>>& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool SmartDocumentRecognizerKVWordsBlock::locationIsSet() const
{
    return locationIsSet_;
}

void SmartDocumentRecognizerKVWordsBlock::unsetlocation()
{
    locationIsSet_ = false;
}

std::string SmartDocumentRecognizerKVWordsBlock::getType() const
{
    return type_;
}

void SmartDocumentRecognizerKVWordsBlock::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SmartDocumentRecognizerKVWordsBlock::typeIsSet() const
{
    return typeIsSet_;
}

void SmartDocumentRecognizerKVWordsBlock::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


