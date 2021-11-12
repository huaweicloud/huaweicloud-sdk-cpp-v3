

#include "huaweicloud/ocr/v1/model/WordsListIem.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




WordsListIem::WordsListIem()
{
    words_ = "";
    wordsIsSet_ = false;
    confidence_ = 0.0f;
    confidenceIsSet_ = false;
    locationIsSet_ = false;
}

WordsListIem::~WordsListIem() = default;

void WordsListIem::validate()
{
}

web::json::value WordsListIem::toJson() const
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

bool WordsListIem::fromJson(const web::json::value& val)
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
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    return ok;
}


std::string WordsListIem::getWords() const
{
    return words_;
}

void WordsListIem::setWords(const std::string& value)
{
    words_ = value;
    wordsIsSet_ = true;
}

bool WordsListIem::wordsIsSet() const
{
    return wordsIsSet_;
}

void WordsListIem::unsetwords()
{
    wordsIsSet_ = false;
}

float WordsListIem::getConfidence() const
{
    return confidence_;
}

void WordsListIem::setConfidence(float value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool WordsListIem::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void WordsListIem::unsetconfidence()
{
    confidenceIsSet_ = false;
}

std::vector<std::vector<int32_t>>& WordsListIem::getLocation()
{
    return location_;
}

void WordsListIem::setLocation(const std::vector<std::vector<int32_t>>& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool WordsListIem::locationIsSet() const
{
    return locationIsSet_;
}

void WordsListIem::unsetlocation()
{
    locationIsSet_ = false;
}

}
}
}
}
}


