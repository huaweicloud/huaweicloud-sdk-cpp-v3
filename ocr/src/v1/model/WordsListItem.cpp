

#include "huaweicloud/ocr/v1/model/WordsListItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




WordsListItem::WordsListItem()
{
    words_ = "";
    wordsIsSet_ = false;
    confidence_ = 0.0f;
    confidenceIsSet_ = false;
    locationIsSet_ = false;
    charListIsSet_ = false;
}

WordsListItem::~WordsListItem() = default;

void WordsListItem::validate()
{
}

web::json::value WordsListItem::toJson() const
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
    if(charListIsSet_) {
        val[utility::conversions::to_string_t("char_list")] = ModelBase::toJson(charList_);
    }

    return val;
}
bool WordsListItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("char_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("char_list"));
        if(!fieldValue.is_null())
        {
            std::vector<CharListItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCharList(refVal);
        }
    }
    return ok;
}


std::string WordsListItem::getWords() const
{
    return words_;
}

void WordsListItem::setWords(const std::string& value)
{
    words_ = value;
    wordsIsSet_ = true;
}

bool WordsListItem::wordsIsSet() const
{
    return wordsIsSet_;
}

void WordsListItem::unsetwords()
{
    wordsIsSet_ = false;
}

float WordsListItem::getConfidence() const
{
    return confidence_;
}

void WordsListItem::setConfidence(float value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool WordsListItem::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void WordsListItem::unsetconfidence()
{
    confidenceIsSet_ = false;
}

std::vector<std::vector<int32_t>>& WordsListItem::getLocation()
{
    return location_;
}

void WordsListItem::setLocation(const std::vector<std::vector<int32_t>>& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool WordsListItem::locationIsSet() const
{
    return locationIsSet_;
}

void WordsListItem::unsetlocation()
{
    locationIsSet_ = false;
}

std::vector<CharListItem>& WordsListItem::getCharList()
{
    return charList_;
}

void WordsListItem::setCharList(const std::vector<CharListItem>& value)
{
    charList_ = value;
    charListIsSet_ = true;
}

bool WordsListItem::charListIsSet() const
{
    return charListIsSet_;
}

void WordsListItem::unsetcharList()
{
    charListIsSet_ = false;
}

}
}
}
}
}


