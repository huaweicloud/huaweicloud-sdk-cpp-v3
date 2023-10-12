

#include "huaweicloud/ocr/v1/model/HealthCodeWordsBlockList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




HealthCodeWordsBlockList::HealthCodeWordsBlockList()
{
    words_ = "";
    wordsIsSet_ = false;
    locationIsSet_ = false;
    confidence_ = 0.0f;
    confidenceIsSet_ = false;
}

HealthCodeWordsBlockList::~HealthCodeWordsBlockList() = default;

void HealthCodeWordsBlockList::validate()
{
}

web::json::value HealthCodeWordsBlockList::toJson() const
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
bool HealthCodeWordsBlockList::fromJson(const web::json::value& val)
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


std::string HealthCodeWordsBlockList::getWords() const
{
    return words_;
}

void HealthCodeWordsBlockList::setWords(const std::string& value)
{
    words_ = value;
    wordsIsSet_ = true;
}

bool HealthCodeWordsBlockList::wordsIsSet() const
{
    return wordsIsSet_;
}

void HealthCodeWordsBlockList::unsetwords()
{
    wordsIsSet_ = false;
}

std::vector<std::vector<int32_t>>& HealthCodeWordsBlockList::getLocation()
{
    return location_;
}

void HealthCodeWordsBlockList::setLocation(const std::vector<std::vector<int32_t>>& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool HealthCodeWordsBlockList::locationIsSet() const
{
    return locationIsSet_;
}

void HealthCodeWordsBlockList::unsetlocation()
{
    locationIsSet_ = false;
}

float HealthCodeWordsBlockList::getConfidence() const
{
    return confidence_;
}

void HealthCodeWordsBlockList::setConfidence(float value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool HealthCodeWordsBlockList::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void HealthCodeWordsBlockList::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


