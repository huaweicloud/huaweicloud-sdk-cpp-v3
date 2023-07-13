

#include "huaweicloud/sis/v1/model/AudioConfig.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




AudioConfig::AudioConfig()
{
    audioFormat_ = "";
    audioFormatIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
}

AudioConfig::~AudioConfig() = default;

void AudioConfig::validate()
{
}

web::json::value AudioConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(audioFormatIsSet_) {
        val[utility::conversions::to_string_t("audio_format")] = ModelBase::toJson(audioFormat_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}

bool AudioConfig::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}

std::string AudioConfig::getAudioFormat() const
{
    return audioFormat_;
}

void AudioConfig::setAudioFormat(const std::string& value)
{
    audioFormat_ = value;
    audioFormatIsSet_ = true;
}

bool AudioConfig::audioFormatIsSet() const
{
    return audioFormatIsSet_;
}

void AudioConfig::unsetaudioFormat()
{
    audioFormatIsSet_ = false;
}

std::string AudioConfig::getLanguage() const
{
    return language_;
}

void AudioConfig::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool AudioConfig::languageIsSet() const
{
    return languageIsSet_;
}

void AudioConfig::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string AudioConfig::getMode() const
{
    return mode_;
}

void AudioConfig::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool AudioConfig::modeIsSet() const
{
    return modeIsSet_;
}

void AudioConfig::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


