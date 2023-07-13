

#include "huaweicloud/ocr/v1/model/PcrTestRecordWordsBlockList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




PcrTestRecordWordsBlockList::PcrTestRecordWordsBlockList()
{
    words_ = "";
    wordsIsSet_ = false;
    locationIsSet_ = false;
    confidence_ = 0.0f;
    confidenceIsSet_ = false;
}

PcrTestRecordWordsBlockList::~PcrTestRecordWordsBlockList() = default;

void PcrTestRecordWordsBlockList::validate()
{
}

web::json::value PcrTestRecordWordsBlockList::toJson() const
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

    return val;
}

bool PcrTestRecordWordsBlockList::fromJson(const web::json::value& val)
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
    return ok;
}

std::string PcrTestRecordWordsBlockList::getWords() const
{
    return words_;
}

void PcrTestRecordWordsBlockList::setWords(const std::string& value)
{
    words_ = value;
    wordsIsSet_ = true;
}

bool PcrTestRecordWordsBlockList::wordsIsSet() const
{
    return wordsIsSet_;
}

void PcrTestRecordWordsBlockList::unsetwords()
{
    wordsIsSet_ = false;
}

std::vector<std::vector<int32_t>>& PcrTestRecordWordsBlockList::getLocation()
{
    return location_;
}

void PcrTestRecordWordsBlockList::setLocation(const std::vector<std::vector<int32_t>>& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool PcrTestRecordWordsBlockList::locationIsSet() const
{
    return locationIsSet_;
}

void PcrTestRecordWordsBlockList::unsetlocation()
{
    locationIsSet_ = false;
}

float PcrTestRecordWordsBlockList::getConfidence() const
{
    return confidence_;
}

void PcrTestRecordWordsBlockList::setConfidence(float value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool PcrTestRecordWordsBlockList::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void PcrTestRecordWordsBlockList::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


