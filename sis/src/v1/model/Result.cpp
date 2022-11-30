

#include "huaweicloud/sis/v1/model/Result.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




Result::Result()
{
    text_ = "";
    textIsSet_ = false;
    score_ = 0.0f;
    scoreIsSet_ = false;
    wordInfoIsSet_ = false;
}

Result::~Result() = default;

void Result::validate()
{
}

web::json::value Result::toJson() const
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

bool Result::fromJson(const web::json::value& val)
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
            float refVal;
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


std::string Result::getText() const
{
    return text_;
}

void Result::setText(const std::string& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool Result::textIsSet() const
{
    return textIsSet_;
}

void Result::unsettext()
{
    textIsSet_ = false;
}

float Result::getScore() const
{
    return score_;
}

void Result::setScore(float value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool Result::scoreIsSet() const
{
    return scoreIsSet_;
}

void Result::unsetscore()
{
    scoreIsSet_ = false;
}

std::vector<WordInfo>& Result::getWordInfo()
{
    return wordInfo_;
}

void Result::setWordInfo(const std::vector<WordInfo>& value)
{
    wordInfo_ = value;
    wordInfoIsSet_ = true;
}

bool Result::wordInfoIsSet() const
{
    return wordInfoIsSet_;
}

void Result::unsetwordInfo()
{
    wordInfoIsSet_ = false;
}

}
}
}
}
}


