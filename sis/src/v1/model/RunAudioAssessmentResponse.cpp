

#include "huaweicloud/sis/v1/model/RunAudioAssessmentResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




RunAudioAssessmentResponse::RunAudioAssessmentResponse()
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

RunAudioAssessmentResponse::~RunAudioAssessmentResponse() = default;

void RunAudioAssessmentResponse::validate()
{
}

web::json::value RunAudioAssessmentResponse::toJson() const
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

bool RunAudioAssessmentResponse::fromJson(const web::json::value& val)
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

float RunAudioAssessmentResponse::getScore() const
{
    return score_;
}

void RunAudioAssessmentResponse::setScore(float value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool RunAudioAssessmentResponse::scoreIsSet() const
{
    return scoreIsSet_;
}

void RunAudioAssessmentResponse::unsetscore()
{
    scoreIsSet_ = false;
}

float RunAudioAssessmentResponse::getCompleteness() const
{
    return completeness_;
}

void RunAudioAssessmentResponse::setCompleteness(float value)
{
    completeness_ = value;
    completenessIsSet_ = true;
}

bool RunAudioAssessmentResponse::completenessIsSet() const
{
    return completenessIsSet_;
}

void RunAudioAssessmentResponse::unsetcompleteness()
{
    completenessIsSet_ = false;
}

float RunAudioAssessmentResponse::getDuration() const
{
    return duration_;
}

void RunAudioAssessmentResponse::setDuration(float value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool RunAudioAssessmentResponse::durationIsSet() const
{
    return durationIsSet_;
}

void RunAudioAssessmentResponse::unsetduration()
{
    durationIsSet_ = false;
}

Pronunciation RunAudioAssessmentResponse::getPronunciation() const
{
    return pronunciation_;
}

void RunAudioAssessmentResponse::setPronunciation(const Pronunciation& value)
{
    pronunciation_ = value;
    pronunciationIsSet_ = true;
}

bool RunAudioAssessmentResponse::pronunciationIsSet() const
{
    return pronunciationIsSet_;
}

void RunAudioAssessmentResponse::unsetpronunciation()
{
    pronunciationIsSet_ = false;
}

Fluency RunAudioAssessmentResponse::getFluency() const
{
    return fluency_;
}

void RunAudioAssessmentResponse::setFluency(const Fluency& value)
{
    fluency_ = value;
    fluencyIsSet_ = true;
}

bool RunAudioAssessmentResponse::fluencyIsSet() const
{
    return fluencyIsSet_;
}

void RunAudioAssessmentResponse::unsetfluency()
{
    fluencyIsSet_ = false;
}

std::vector<Word>& RunAudioAssessmentResponse::getWords()
{
    return words_;
}

void RunAudioAssessmentResponse::setWords(const std::vector<Word>& value)
{
    words_ = value;
    wordsIsSet_ = true;
}

bool RunAudioAssessmentResponse::wordsIsSet() const
{
    return wordsIsSet_;
}

void RunAudioAssessmentResponse::unsetwords()
{
    wordsIsSet_ = false;
}

std::string RunAudioAssessmentResponse::getTraceId() const
{
    return traceId_;
}

void RunAudioAssessmentResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool RunAudioAssessmentResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void RunAudioAssessmentResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

}
}
}
}
}


