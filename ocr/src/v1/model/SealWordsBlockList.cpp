

#include "huaweicloud/ocr/v1/model/SealWordsBlockList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




SealWordsBlockList::SealWordsBlockList()
{
    words_ = "";
    wordsIsSet_ = false;
    wordsConfidence_ = 0.0f;
    wordsConfidenceIsSet_ = false;
}

SealWordsBlockList::~SealWordsBlockList() = default;

void SealWordsBlockList::validate()
{
}

web::json::value SealWordsBlockList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(wordsIsSet_) {
        val[utility::conversions::to_string_t("words")] = ModelBase::toJson(words_);
    }
    if(wordsConfidenceIsSet_) {
        val[utility::conversions::to_string_t("words_confidence")] = ModelBase::toJson(wordsConfidence_);
    }

    return val;
}
bool SealWordsBlockList::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("words_confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("words_confidence"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsConfidence(refVal);
        }
    }
    return ok;
}


std::string SealWordsBlockList::getWords() const
{
    return words_;
}

void SealWordsBlockList::setWords(const std::string& value)
{
    words_ = value;
    wordsIsSet_ = true;
}

bool SealWordsBlockList::wordsIsSet() const
{
    return wordsIsSet_;
}

void SealWordsBlockList::unsetwords()
{
    wordsIsSet_ = false;
}

float SealWordsBlockList::getWordsConfidence() const
{
    return wordsConfidence_;
}

void SealWordsBlockList::setWordsConfidence(float value)
{
    wordsConfidence_ = value;
    wordsConfidenceIsSet_ = true;
}

bool SealWordsBlockList::wordsConfidenceIsSet() const
{
    return wordsConfidenceIsSet_;
}

void SealWordsBlockList::unsetwordsConfidence()
{
    wordsConfidenceIsSet_ = false;
}

}
}
}
}
}


