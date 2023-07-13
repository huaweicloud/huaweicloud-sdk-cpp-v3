

#include "huaweicloud/sis/v1/model/FlashScoreResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




FlashScoreResult::FlashScoreResult()
{
    text_ = "";
    textIsSet_ = false;
    score_ = 0.0;
    scoreIsSet_ = false;
    wordInfoIsSet_ = false;
}

FlashScoreResult::~FlashScoreResult() = default;

void FlashScoreResult::validate()
{
}

web::json::value FlashScoreResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(textIsSet_) {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(text_);
    }
    if(scoreIsSet_) {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(score_);
    }
    if(wordInfoIsSet_) {
        val[utility::conversions::to_string_t("word_info")] = ModelBase::toJson(wordInfo_);
    }

    return val;
}

bool FlashScoreResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("score"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("word_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("word_info"));
        if(!fieldValue.is_null())
        {
            std::vector<WordInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordInfo(refVal);
        }
    }
    return ok;
}

std::string FlashScoreResult::getText() const
{
    return text_;
}

void FlashScoreResult::setText(const std::string& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool FlashScoreResult::textIsSet() const
{
    return textIsSet_;
}

void FlashScoreResult::unsettext()
{
    textIsSet_ = false;
}

double FlashScoreResult::getScore() const
{
    return score_;
}

void FlashScoreResult::setScore(double value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool FlashScoreResult::scoreIsSet() const
{
    return scoreIsSet_;
}

void FlashScoreResult::unsetscore()
{
    scoreIsSet_ = false;
}

std::vector<WordInfo>& FlashScoreResult::getWordInfo()
{
    return wordInfo_;
}

void FlashScoreResult::setWordInfo(const std::vector<WordInfo>& value)
{
    wordInfo_ = value;
    wordInfoIsSet_ = true;
}

bool FlashScoreResult::wordInfoIsSet() const
{
    return wordInfoIsSet_;
}

void FlashScoreResult::unsetwordInfo()
{
    wordInfoIsSet_ = false;
}

}
}
}
}
}


