

#include "huaweicloud/sis/v1/model/Word.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




Word::Word()
{
    text_ = "";
    textIsSet_ = false;
    textOriginal_ = "";
    textOriginalIsSet_ = false;
    textNormalisedIsSet_ = false;
    outOfVocabulary_ = false;
    outOfVocabularyIsSet_ = false;
    startTime_ = 0.0f;
    startTimeIsSet_ = false;
    endTime_ = 0.0f;
    endTimeIsSet_ = false;
    score_ = 0.0f;
    scoreIsSet_ = false;
    pronunciationIsSet_ = false;
    fluencyIsSet_ = false;
    phonemesIsSet_ = false;
}

Word::~Word() = default;

void Word::validate()
{
}

web::json::value Word::toJson() const
{
    web::json::value val = web::json::value::object();

    if(textIsSet_) {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(text_);
    }
    if(textOriginalIsSet_) {
        val[utility::conversions::to_string_t("text_original")] = ModelBase::toJson(textOriginal_);
    }
    if(textNormalisedIsSet_) {
        val[utility::conversions::to_string_t("text_normalised")] = ModelBase::toJson(textNormalised_);
    }
    if(outOfVocabularyIsSet_) {
        val[utility::conversions::to_string_t("out_of_vocabulary")] = ModelBase::toJson(outOfVocabulary_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(scoreIsSet_) {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(score_);
    }
    if(pronunciationIsSet_) {
        val[utility::conversions::to_string_t("pronunciation")] = ModelBase::toJson(pronunciation_);
    }
    if(fluencyIsSet_) {
        val[utility::conversions::to_string_t("fluency")] = ModelBase::toJson(fluency_);
    }
    if(phonemesIsSet_) {
        val[utility::conversions::to_string_t("phonemes")] = ModelBase::toJson(phonemes_);
    }

    return val;
}

bool Word::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("text_original"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_original"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextOriginal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text_normalised"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_normalised"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextNormalised(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("out_of_vocabulary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("out_of_vocabulary"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutOfVocabulary(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pronunciation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pronunciation"));
        if(!fieldValue.is_null())
        {
            WordPronunciation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPronunciation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fluency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fluency"));
        if(!fieldValue.is_null())
        {
            WordFluency refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFluency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phonemes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phonemes"));
        if(!fieldValue.is_null())
        {
            std::vector<Phoneme> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhonemes(refVal);
        }
    }
    return ok;
}

std::string Word::getText() const
{
    return text_;
}

void Word::setText(const std::string& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool Word::textIsSet() const
{
    return textIsSet_;
}

void Word::unsettext()
{
    textIsSet_ = false;
}

std::string Word::getTextOriginal() const
{
    return textOriginal_;
}

void Word::setTextOriginal(const std::string& value)
{
    textOriginal_ = value;
    textOriginalIsSet_ = true;
}

bool Word::textOriginalIsSet() const
{
    return textOriginalIsSet_;
}

void Word::unsettextOriginal()
{
    textOriginalIsSet_ = false;
}

std::vector<std::string>& Word::getTextNormalised()
{
    return textNormalised_;
}

void Word::setTextNormalised(const std::vector<std::string>& value)
{
    textNormalised_ = value;
    textNormalisedIsSet_ = true;
}

bool Word::textNormalisedIsSet() const
{
    return textNormalisedIsSet_;
}

void Word::unsettextNormalised()
{
    textNormalisedIsSet_ = false;
}

bool Word::isOutOfVocabulary() const
{
    return outOfVocabulary_;
}

void Word::setOutOfVocabulary(bool value)
{
    outOfVocabulary_ = value;
    outOfVocabularyIsSet_ = true;
}

bool Word::outOfVocabularyIsSet() const
{
    return outOfVocabularyIsSet_;
}

void Word::unsetoutOfVocabulary()
{
    outOfVocabularyIsSet_ = false;
}

float Word::getStartTime() const
{
    return startTime_;
}

void Word::setStartTime(float value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool Word::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void Word::unsetstartTime()
{
    startTimeIsSet_ = false;
}

float Word::getEndTime() const
{
    return endTime_;
}

void Word::setEndTime(float value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool Word::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void Word::unsetendTime()
{
    endTimeIsSet_ = false;
}

float Word::getScore() const
{
    return score_;
}

void Word::setScore(float value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool Word::scoreIsSet() const
{
    return scoreIsSet_;
}

void Word::unsetscore()
{
    scoreIsSet_ = false;
}

WordPronunciation Word::getPronunciation() const
{
    return pronunciation_;
}

void Word::setPronunciation(const WordPronunciation& value)
{
    pronunciation_ = value;
    pronunciationIsSet_ = true;
}

bool Word::pronunciationIsSet() const
{
    return pronunciationIsSet_;
}

void Word::unsetpronunciation()
{
    pronunciationIsSet_ = false;
}

WordFluency Word::getFluency() const
{
    return fluency_;
}

void Word::setFluency(const WordFluency& value)
{
    fluency_ = value;
    fluencyIsSet_ = true;
}

bool Word::fluencyIsSet() const
{
    return fluencyIsSet_;
}

void Word::unsetfluency()
{
    fluencyIsSet_ = false;
}

std::vector<Phoneme>& Word::getPhonemes()
{
    return phonemes_;
}

void Word::setPhonemes(const std::vector<Phoneme>& value)
{
    phonemes_ = value;
    phonemesIsSet_ = true;
}

bool Word::phonemesIsSet() const
{
    return phonemesIsSet_;
}

void Word::unsetphonemes()
{
    phonemesIsSet_ = false;
}

}
}
}
}
}


