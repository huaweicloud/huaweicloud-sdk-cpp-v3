

#include "huaweicloud/ocr/v1/model/GeneralTextWordsBlockList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




GeneralTextWordsBlockList::GeneralTextWordsBlockList()
{
    words_ = "";
    wordsIsSet_ = false;
    locationIsSet_ = false;
    confidence_ = 0.0f;
    confidenceIsSet_ = false;
    charListIsSet_ = false;
}

GeneralTextWordsBlockList::~GeneralTextWordsBlockList() = default;

void GeneralTextWordsBlockList::validate()
{
}

web::json::value GeneralTextWordsBlockList::toJson() const
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

bool GeneralTextWordsBlockList::fromJson(const web::json::value& val)
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
            std::vector<GeneralTextCharList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCharList(refVal);
        }
    }
    return ok;
}

std::string GeneralTextWordsBlockList::getWords() const
{
    return words_;
}

void GeneralTextWordsBlockList::setWords(const std::string& value)
{
    words_ = value;
    wordsIsSet_ = true;
}

bool GeneralTextWordsBlockList::wordsIsSet() const
{
    return wordsIsSet_;
}

void GeneralTextWordsBlockList::unsetwords()
{
    wordsIsSet_ = false;
}

std::vector<std::vector<int32_t>>& GeneralTextWordsBlockList::getLocation()
{
    return location_;
}

void GeneralTextWordsBlockList::setLocation(const std::vector<std::vector<int32_t>>& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool GeneralTextWordsBlockList::locationIsSet() const
{
    return locationIsSet_;
}

void GeneralTextWordsBlockList::unsetlocation()
{
    locationIsSet_ = false;
}

float GeneralTextWordsBlockList::getConfidence() const
{
    return confidence_;
}

void GeneralTextWordsBlockList::setConfidence(float value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool GeneralTextWordsBlockList::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void GeneralTextWordsBlockList::unsetconfidence()
{
    confidenceIsSet_ = false;
}

std::vector<GeneralTextCharList>& GeneralTextWordsBlockList::getCharList()
{
    return charList_;
}

void GeneralTextWordsBlockList::setCharList(const std::vector<GeneralTextCharList>& value)
{
    charList_ = value;
    charListIsSet_ = true;
}

bool GeneralTextWordsBlockList::charListIsSet() const
{
    return charListIsSet_;
}

void GeneralTextWordsBlockList::unsetcharList()
{
    charListIsSet_ = false;
}

}
}
}
}
}


