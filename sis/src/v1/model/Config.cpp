

#include "huaweicloud/sis/v1/model/Config.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




Config::Config()
{
    audioFormat_ = "";
    audioFormatIsSet_ = false;
    property_ = "";
    propertyIsSet_ = false;
    addPunc_ = "";
    addPuncIsSet_ = false;
    vocabularyId_ = "";
    vocabularyIdIsSet_ = false;
    digitNorm_ = "";
    digitNormIsSet_ = false;
    needWordInfo_ = "";
    needWordInfoIsSet_ = false;
}

Config::~Config() = default;

void Config::validate()
{
}

web::json::value Config::toJson() const
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
    if(vocabularyIdIsSet_) {
        val[utility::conversions::to_string_t("vocabulary_id")] = ModelBase::toJson(vocabularyId_);
    }
    if(digitNormIsSet_) {
        val[utility::conversions::to_string_t("digit_norm")] = ModelBase::toJson(digitNorm_);
    }
    if(needWordInfoIsSet_) {
        val[utility::conversions::to_string_t("need_word_info")] = ModelBase::toJson(needWordInfo_);
    }

    return val;
}

bool Config::fromJson(const web::json::value& val)
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

std::string Config::getAudioFormat() const
{
    return audioFormat_;
}

void Config::setAudioFormat(const std::string& value)
{
    audioFormat_ = value;
    audioFormatIsSet_ = true;
}

bool Config::audioFormatIsSet() const
{
    return audioFormatIsSet_;
}

void Config::unsetaudioFormat()
{
    audioFormatIsSet_ = false;
}

std::string Config::getProperty() const
{
    return property_;
}

void Config::setProperty(const std::string& value)
{
    property_ = value;
    propertyIsSet_ = true;
}

bool Config::propertyIsSet() const
{
    return propertyIsSet_;
}

void Config::unsetproperty()
{
    propertyIsSet_ = false;
}

std::string Config::getAddPunc() const
{
    return addPunc_;
}

void Config::setAddPunc(const std::string& value)
{
    addPunc_ = value;
    addPuncIsSet_ = true;
}

bool Config::addPuncIsSet() const
{
    return addPuncIsSet_;
}

void Config::unsetaddPunc()
{
    addPuncIsSet_ = false;
}

std::string Config::getVocabularyId() const
{
    return vocabularyId_;
}

void Config::setVocabularyId(const std::string& value)
{
    vocabularyId_ = value;
    vocabularyIdIsSet_ = true;
}

bool Config::vocabularyIdIsSet() const
{
    return vocabularyIdIsSet_;
}

void Config::unsetvocabularyId()
{
    vocabularyIdIsSet_ = false;
}

std::string Config::getDigitNorm() const
{
    return digitNorm_;
}

void Config::setDigitNorm(const std::string& value)
{
    digitNorm_ = value;
    digitNormIsSet_ = true;
}

bool Config::digitNormIsSet() const
{
    return digitNormIsSet_;
}

void Config::unsetdigitNorm()
{
    digitNormIsSet_ = false;
}

std::string Config::getNeedWordInfo() const
{
    return needWordInfo_;
}

void Config::setNeedWordInfo(const std::string& value)
{
    needWordInfo_ = value;
    needWordInfoIsSet_ = true;
}

bool Config::needWordInfoIsSet() const
{
    return needWordInfoIsSet_;
}

void Config::unsetneedWordInfo()
{
    needWordInfoIsSet_ = false;
}

}
}
}
}
}


