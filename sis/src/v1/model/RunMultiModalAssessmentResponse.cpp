

#include "huaweicloud/sis/v1/model/RunMultiModalAssessmentResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




RunMultiModalAssessmentResponse::RunMultiModalAssessmentResponse()
{
    score_ = 0.0f;
    scoreIsSet_ = false;
    completeness_ = 0.0f;
    completenessIsSet_ = false;
    duration_ = 0.0f;
    durationIsSet_ = false;
    pronunciationIsSet_ = false;
    fluencyIsSet_ = false;
    wordsIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
}

RunMultiModalAssessmentResponse::~RunMultiModalAssessmentResponse() = default;

void RunMultiModalAssessmentResponse::validate()
{
}

web::json::value RunMultiModalAssessmentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scoreIsSet_) {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(score_);
    }
    if(completenessIsSet_) {
        val[utility::conversions::to_string_t("completeness")] = ModelBase::toJson(completeness_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(pronunciationIsSet_) {
        val[utility::conversions::to_string_t("pronunciation")] = ModelBase::toJson(pronunciation_);
    }
    if(fluencyIsSet_) {
        val[utility::conversions::to_string_t("fluency")] = ModelBase::toJson(fluency_);
    }
    if(wordsIsSet_) {
        val[utility::conversions::to_string_t("words")] = ModelBase::toJson(words_);
    }
    if(traceIdIsSet_) {
        val[utility::conversions::to_string_t("traceId")] = ModelBase::toJson(traceId_);
    }

    return val;
}

bool RunMultiModalAssessmentResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("score"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("completeness"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("completeness"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompleteness(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pronunciation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pronunciation"));
        if(!fieldValue.is_null())
        {
            Pronunciation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPronunciation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fluency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fluency"));
        if(!fieldValue.is_null())
        {
            Fluency refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFluency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("words"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("words"));
        if(!fieldValue.is_null())
        {
            std::vector<Word> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traceId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traceId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraceId(refVal);
        }
    }
    return ok;
}


float RunMultiModalAssessmentResponse::getScore() const
{
    return score_;
}

void RunMultiModalAssessmentResponse::setScore(float value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool RunMultiModalAssessmentResponse::scoreIsSet() const
{
    return scoreIsSet_;
}

void RunMultiModalAssessmentResponse::unsetscore()
{
    scoreIsSet_ = false;
}

float RunMultiModalAssessmentResponse::getCompleteness() const
{
    return completeness_;
}

void RunMultiModalAssessmentResponse::setCompleteness(float value)
{
    completeness_ = value;
    completenessIsSet_ = true;
}

bool RunMultiModalAssessmentResponse::completenessIsSet() const
{
    return completenessIsSet_;
}

void RunMultiModalAssessmentResponse::unsetcompleteness()
{
    completenessIsSet_ = false;
}

float RunMultiModalAssessmentResponse::getDuration() const
{
    return duration_;
}

void RunMultiModalAssessmentResponse::setDuration(float value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool RunMultiModalAssessmentResponse::durationIsSet() const
{
    return durationIsSet_;
}

void RunMultiModalAssessmentResponse::unsetduration()
{
    durationIsSet_ = false;
}

Pronunciation RunMultiModalAssessmentResponse::getPronunciation() const
{
    return pronunciation_;
}

void RunMultiModalAssessmentResponse::setPronunciation(const Pronunciation& value)
{
    pronunciation_ = value;
    pronunciationIsSet_ = true;
}

bool RunMultiModalAssessmentResponse::pronunciationIsSet() const
{
    return pronunciationIsSet_;
}

void RunMultiModalAssessmentResponse::unsetpronunciation()
{
    pronunciationIsSet_ = false;
}

Fluency RunMultiModalAssessmentResponse::getFluency() const
{
    return fluency_;
}

void RunMultiModalAssessmentResponse::setFluency(const Fluency& value)
{
    fluency_ = value;
    fluencyIsSet_ = true;
}

bool RunMultiModalAssessmentResponse::fluencyIsSet() const
{
    return fluencyIsSet_;
}

void RunMultiModalAssessmentResponse::unsetfluency()
{
    fluencyIsSet_ = false;
}

std::vector<Word>& RunMultiModalAssessmentResponse::getWords()
{
    return words_;
}

void RunMultiModalAssessmentResponse::setWords(const std::vector<Word>& value)
{
    words_ = value;
    wordsIsSet_ = true;
}

bool RunMultiModalAssessmentResponse::wordsIsSet() const
{
    return wordsIsSet_;
}

void RunMultiModalAssessmentResponse::unsetwords()
{
    wordsIsSet_ = false;
}

std::string RunMultiModalAssessmentResponse::getTraceId() const
{
    return traceId_;
}

void RunMultiModalAssessmentResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool RunMultiModalAssessmentResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void RunMultiModalAssessmentResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

}
}
}
}
}


