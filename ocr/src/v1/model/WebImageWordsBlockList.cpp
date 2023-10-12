

#include "huaweicloud/ocr/v1/model/WebImageWordsBlockList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




WebImageWordsBlockList::WebImageWordsBlockList()
{
    words_ = "";
    wordsIsSet_ = false;
    confidence_ = 0.0f;
    confidenceIsSet_ = false;
    locationIsSet_ = false;
    fontListIsSet_ = false;
    fontScoresIsSet_ = false;
}

WebImageWordsBlockList::~WebImageWordsBlockList() = default;

void WebImageWordsBlockList::validate()
{
}

web::json::value WebImageWordsBlockList::toJson() const
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
    if(fontListIsSet_) {
        val[utility::conversions::to_string_t("font_list")] = ModelBase::toJson(fontList_);
    }
    if(fontScoresIsSet_) {
        val[utility::conversions::to_string_t("font_scores")] = ModelBase::toJson(fontScores_);
    }

    return val;
}
bool WebImageWordsBlockList::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("font_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("font_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFontList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("font_scores"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("font_scores"));
        if(!fieldValue.is_null())
        {
            std::vector<float> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFontScores(refVal);
        }
    }
    return ok;
}


std::string WebImageWordsBlockList::getWords() const
{
    return words_;
}

void WebImageWordsBlockList::setWords(const std::string& value)
{
    words_ = value;
    wordsIsSet_ = true;
}

bool WebImageWordsBlockList::wordsIsSet() const
{
    return wordsIsSet_;
}

void WebImageWordsBlockList::unsetwords()
{
    wordsIsSet_ = false;
}

float WebImageWordsBlockList::getConfidence() const
{
    return confidence_;
}

void WebImageWordsBlockList::setConfidence(float value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool WebImageWordsBlockList::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void WebImageWordsBlockList::unsetconfidence()
{
    confidenceIsSet_ = false;
}

std::vector<std::vector<int32_t>>& WebImageWordsBlockList::getLocation()
{
    return location_;
}

void WebImageWordsBlockList::setLocation(const std::vector<std::vector<int32_t>>& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool WebImageWordsBlockList::locationIsSet() const
{
    return locationIsSet_;
}

void WebImageWordsBlockList::unsetlocation()
{
    locationIsSet_ = false;
}

std::vector<std::string>& WebImageWordsBlockList::getFontList()
{
    return fontList_;
}

void WebImageWordsBlockList::setFontList(const std::vector<std::string>& value)
{
    fontList_ = value;
    fontListIsSet_ = true;
}

bool WebImageWordsBlockList::fontListIsSet() const
{
    return fontListIsSet_;
}

void WebImageWordsBlockList::unsetfontList()
{
    fontListIsSet_ = false;
}

std::vector<float>& WebImageWordsBlockList::getFontScores()
{
    return fontScores_;
}

void WebImageWordsBlockList::setFontScores(std::vector<float> value)
{
    fontScores_ = value;
    fontScoresIsSet_ = true;
}

bool WebImageWordsBlockList::fontScoresIsSet() const
{
    return fontScoresIsSet_;
}

void WebImageWordsBlockList::unsetfontScores()
{
    fontScoresIsSet_ = false;
}

}
}
}
}
}


