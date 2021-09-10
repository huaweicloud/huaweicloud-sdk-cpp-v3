

#include "huaweicloud/ocr/v1/model/AnswerBlockList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




AnswerBlockList::AnswerBlockList()
{
    words_ = "";
    wordsIsSet_ = false;
    confidence_ = 0.0f;
    confidenceIsSet_ = false;
    locationIsSet_ = false;
}

AnswerBlockList::~AnswerBlockList() = default;

void AnswerBlockList::validate()
{
}

web::json::value AnswerBlockList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(wordsIsSet_) {
        val[utility::conversions::to_string_t("words")] = ModelBase::toJson(words_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }

    return val;
}

bool AnswerBlockList::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    return ok;
}


std::string AnswerBlockList::getWords() const
{
    return words_;
}

void AnswerBlockList::setWords(const std::string& value)
{
    words_ = value;
    wordsIsSet_ = true;
}

bool AnswerBlockList::wordsIsSet() const
{
    return wordsIsSet_;
}

void AnswerBlockList::unsetwords()
{
    wordsIsSet_ = false;
}

float AnswerBlockList::getConfidence() const
{
    return confidence_;
}

void AnswerBlockList::setConfidence(float value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool AnswerBlockList::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void AnswerBlockList::unsetconfidence()
{
    confidenceIsSet_ = false;
}

std::vector<int32_t>& AnswerBlockList::getLocation()
{
    return location_;
}

void AnswerBlockList::setLocation(std::vector<int32_t> value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool AnswerBlockList::locationIsSet() const
{
    return locationIsSet_;
}

void AnswerBlockList::unsetlocation()
{
    locationIsSet_ = false;
}

}
}
}
}
}


