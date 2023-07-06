

#include "huaweicloud/sis/v1/model/TranscriberConfig.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




TranscriberConfig::TranscriberConfig()
{
    audioFormat_ = "";
    audioFormatIsSet_ = false;
    property_ = "";
    propertyIsSet_ = false;
    addPunc_ = "";
    addPuncIsSet_ = false;
    needAnalysisInfoIsSet_ = false;
    vocabularyId_ = "";
    vocabularyIdIsSet_ = false;
    digitNorm_ = "";
    digitNormIsSet_ = false;
    callbackUrl_ = "";
    callbackUrlIsSet_ = false;
    needWordInfo_ = "";
    needWordInfoIsSet_ = false;
}

TranscriberConfig::~TranscriberConfig() = default;

void TranscriberConfig::validate()
{
}

web::json::value TranscriberConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(audioFormatIsSet_) {
        val[utility::conversions::to_string_t("audio_format")] = ModelBase::toJson(audioFormat_);
    }
    if(propertyIsSet_) {
        val[utility::conversions::to_string_t("property")] = ModelBase::toJson(property_);
    }
    if(addPuncIsSet_) {
        val[utility::conversions::to_string_t("add_punc")] = ModelBase::toJson(addPunc_);
    }
    if(needAnalysisInfoIsSet_) {
        val[utility::conversions::to_string_t("need_analysis_info")] = ModelBase::toJson(needAnalysisInfo_);
    }
    if(vocabularyIdIsSet_) {
        val[utility::conversions::to_string_t("vocabulary_id")] = ModelBase::toJson(vocabularyId_);
    }
    if(digitNormIsSet_) {
        val[utility::conversions::to_string_t("digit_norm")] = ModelBase::toJson(digitNorm_);
    }
    if(callbackUrlIsSet_) {
        val[utility::conversions::to_string_t("callback_url")] = ModelBase::toJson(callbackUrl_);
    }
    if(needWordInfoIsSet_) {
        val[utility::conversions::to_string_t("need_word_info")] = ModelBase::toJson(needWordInfo_);
    }

    return val;
}

bool TranscriberConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("audio_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("property"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("property"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperty(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("add_punc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("add_punc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddPunc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_analysis_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_analysis_info"));
        if(!fieldValue.is_null())
        {
            AnalysisInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedAnalysisInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vocabulary_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vocabulary_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVocabularyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("digit_norm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("digit_norm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDigitNorm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callback_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callback_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallbackUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_word_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_word_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedWordInfo(refVal);
        }
    }
    return ok;
}

std::string TranscriberConfig::getAudioFormat() const
{
    return audioFormat_;
}

void TranscriberConfig::setAudioFormat(const std::string& value)
{
    audioFormat_ = value;
    audioFormatIsSet_ = true;
}

bool TranscriberConfig::audioFormatIsSet() const
{
    return audioFormatIsSet_;
}

void TranscriberConfig::unsetaudioFormat()
{
    audioFormatIsSet_ = false;
}

std::string TranscriberConfig::getProperty() const
{
    return property_;
}

void TranscriberConfig::setProperty(const std::string& value)
{
    property_ = value;
    propertyIsSet_ = true;
}

bool TranscriberConfig::propertyIsSet() const
{
    return propertyIsSet_;
}

void TranscriberConfig::unsetproperty()
{
    propertyIsSet_ = false;
}

std::string TranscriberConfig::getAddPunc() const
{
    return addPunc_;
}

void TranscriberConfig::setAddPunc(const std::string& value)
{
    addPunc_ = value;
    addPuncIsSet_ = true;
}

bool TranscriberConfig::addPuncIsSet() const
{
    return addPuncIsSet_;
}

void TranscriberConfig::unsetaddPunc()
{
    addPuncIsSet_ = false;
}

AnalysisInfo TranscriberConfig::getNeedAnalysisInfo() const
{
    return needAnalysisInfo_;
}

void TranscriberConfig::setNeedAnalysisInfo(const AnalysisInfo& value)
{
    needAnalysisInfo_ = value;
    needAnalysisInfoIsSet_ = true;
}

bool TranscriberConfig::needAnalysisInfoIsSet() const
{
    return needAnalysisInfoIsSet_;
}

void TranscriberConfig::unsetneedAnalysisInfo()
{
    needAnalysisInfoIsSet_ = false;
}

std::string TranscriberConfig::getVocabularyId() const
{
    return vocabularyId_;
}

void TranscriberConfig::setVocabularyId(const std::string& value)
{
    vocabularyId_ = value;
    vocabularyIdIsSet_ = true;
}

bool TranscriberConfig::vocabularyIdIsSet() const
{
    return vocabularyIdIsSet_;
}

void TranscriberConfig::unsetvocabularyId()
{
    vocabularyIdIsSet_ = false;
}

std::string TranscriberConfig::getDigitNorm() const
{
    return digitNorm_;
}

void TranscriberConfig::setDigitNorm(const std::string& value)
{
    digitNorm_ = value;
    digitNormIsSet_ = true;
}

bool TranscriberConfig::digitNormIsSet() const
{
    return digitNormIsSet_;
}

void TranscriberConfig::unsetdigitNorm()
{
    digitNormIsSet_ = false;
}

std::string TranscriberConfig::getCallbackUrl() const
{
    return callbackUrl_;
}

void TranscriberConfig::setCallbackUrl(const std::string& value)
{
    callbackUrl_ = value;
    callbackUrlIsSet_ = true;
}

bool TranscriberConfig::callbackUrlIsSet() const
{
    return callbackUrlIsSet_;
}

void TranscriberConfig::unsetcallbackUrl()
{
    callbackUrlIsSet_ = false;
}

std::string TranscriberConfig::getNeedWordInfo() const
{
    return needWordInfo_;
}

void TranscriberConfig::setNeedWordInfo(const std::string& value)
{
    needWordInfo_ = value;
    needWordInfoIsSet_ = true;
}

bool TranscriberConfig::needWordInfoIsSet() const
{
    return needWordInfoIsSet_;
}

void TranscriberConfig::unsetneedWordInfo()
{
    needWordInfoIsSet_ = false;
}

}
}
}
}
}


