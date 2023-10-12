

#include "huaweicloud/ocr/v1/model/HandwritingWordsBlockList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




HandwritingWordsBlockList::HandwritingWordsBlockList()
{
    words_ = "";
    wordsIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    confidence_ = 0.0f;
    confidenceIsSet_ = false;
    locationIsSet_ = false;
}

HandwritingWordsBlockList::~HandwritingWordsBlockList() = default;

void HandwritingWordsBlockList::validate()
{
}

web::json::value HandwritingWordsBlockList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(wordsIsSet_) {
        val[utility::conversions::to_string_t("words")] = ModelBase::toJson(words_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }

    return val;
}
bool HandwritingWordsBlockList::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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


std::string HandwritingWordsBlockList::getWords() const
{
    return words_;
}

void HandwritingWordsBlockList::setWords(const std::string& value)
{
    words_ = value;
    wordsIsSet_ = true;
}

bool HandwritingWordsBlockList::wordsIsSet() const
{
    return wordsIsSet_;
}

void HandwritingWordsBlockList::unsetwords()
{
    wordsIsSet_ = false;
}

std::string HandwritingWordsBlockList::getType() const
{
    return type_;
}

void HandwritingWordsBlockList::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool HandwritingWordsBlockList::typeIsSet() const
{
    return typeIsSet_;
}

void HandwritingWordsBlockList::unsettype()
{
    typeIsSet_ = false;
}

float HandwritingWordsBlockList::getConfidence() const
{
    return confidence_;
}

void HandwritingWordsBlockList::setConfidence(float value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool HandwritingWordsBlockList::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void HandwritingWordsBlockList::unsetconfidence()
{
    confidenceIsSet_ = false;
}

std::vector<std::vector<int32_t>>& HandwritingWordsBlockList::getLocation()
{
    return location_;
}

void HandwritingWordsBlockList::setLocation(const std::vector<std::vector<int32_t>>& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool HandwritingWordsBlockList::locationIsSet() const
{
    return locationIsSet_;
}

void HandwritingWordsBlockList::unsetlocation()
{
    locationIsSet_ = false;
}

}
}
}
}
}


