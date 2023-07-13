

#include "huaweicloud/sis/v1/model/TranscriberResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




TranscriberResult::TranscriberResult()
{
    text_ = "";
    textIsSet_ = false;
    analysisInfoIsSet_ = false;
    wordInfoIsSet_ = false;
}

TranscriberResult::~TranscriberResult() = default;

void TranscriberResult::validate()
{
}

web::json::value TranscriberResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(textIsSet_) {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(text_);
    }
    if(analysisInfoIsSet_) {
        val[utility::conversions::to_string_t("analysis_info")] = ModelBase::toJson(analysisInfo_);
    }
    if(wordInfoIsSet_) {
        val[utility::conversions::to_string_t("word_info")] = ModelBase::toJson(wordInfo_);
    }

    return val;
}

bool TranscriberResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("analysis_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("analysis_info"));
        if(!fieldValue.is_null())
        {
            AnalysisInfoResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnalysisInfo(refVal);
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

std::string TranscriberResult::getText() const
{
    return text_;
}

void TranscriberResult::setText(const std::string& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool TranscriberResult::textIsSet() const
{
    return textIsSet_;
}

void TranscriberResult::unsettext()
{
    textIsSet_ = false;
}

AnalysisInfoResult TranscriberResult::getAnalysisInfo() const
{
    return analysisInfo_;
}

void TranscriberResult::setAnalysisInfo(const AnalysisInfoResult& value)
{
    analysisInfo_ = value;
    analysisInfoIsSet_ = true;
}

bool TranscriberResult::analysisInfoIsSet() const
{
    return analysisInfoIsSet_;
}

void TranscriberResult::unsetanalysisInfo()
{
    analysisInfoIsSet_ = false;
}

std::vector<WordInfo>& TranscriberResult::getWordInfo()
{
    return wordInfo_;
}

void TranscriberResult::setWordInfo(const std::vector<WordInfo>& value)
{
    wordInfo_ = value;
    wordInfoIsSet_ = true;
}

bool TranscriberResult::wordInfoIsSet() const
{
    return wordInfoIsSet_;
}

void TranscriberResult::unsetwordInfo()
{
    wordInfoIsSet_ = false;
}

}
}
}
}
}


