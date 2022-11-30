

#include "huaweicloud/sis/v1/model/TtsConfig.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




TtsConfig::TtsConfig()
{
    audioFormat_ = "";
    audioFormatIsSet_ = false;
    sampleRate_ = "";
    sampleRateIsSet_ = false;
    property_ = "";
    propertyIsSet_ = false;
    speed_ = 0;
    speedIsSet_ = false;
    pitch_ = 0;
    pitchIsSet_ = false;
    volume_ = 0;
    volumeIsSet_ = false;
}

TtsConfig::~TtsConfig() = default;

void TtsConfig::validate()
{
}

web::json::value TtsConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(audioFormatIsSet_) {
        val[utility::conversions::to_string_t("audio_format")] = ModelBase::toJson(audioFormat_);
    }
    if(sampleRateIsSet_) {
        val[utility::conversions::to_string_t("sample_rate")] = ModelBase::toJson(sampleRate_);
    }
    if(propertyIsSet_) {
        val[utility::conversions::to_string_t("property")] = ModelBase::toJson(property_);
    }
    if(speedIsSet_) {
        val[utility::conversions::to_string_t("speed")] = ModelBase::toJson(speed_);
    }
    if(pitchIsSet_) {
        val[utility::conversions::to_string_t("pitch")] = ModelBase::toJson(pitch_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }

    return val;
}

bool TtsConfig::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sample_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sample_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSampleRate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("speed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("speed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpeed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pitch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pitch"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
        }
    }
    return ok;
}


std::string TtsConfig::getAudioFormat() const
{
    return audioFormat_;
}

void TtsConfig::setAudioFormat(const std::string& value)
{
    audioFormat_ = value;
    audioFormatIsSet_ = true;
}

bool TtsConfig::audioFormatIsSet() const
{
    return audioFormatIsSet_;
}

void TtsConfig::unsetaudioFormat()
{
    audioFormatIsSet_ = false;
}

std::string TtsConfig::getSampleRate() const
{
    return sampleRate_;
}

void TtsConfig::setSampleRate(const std::string& value)
{
    sampleRate_ = value;
    sampleRateIsSet_ = true;
}

bool TtsConfig::sampleRateIsSet() const
{
    return sampleRateIsSet_;
}

void TtsConfig::unsetsampleRate()
{
    sampleRateIsSet_ = false;
}

std::string TtsConfig::getProperty() const
{
    return property_;
}

void TtsConfig::setProperty(const std::string& value)
{
    property_ = value;
    propertyIsSet_ = true;
}

bool TtsConfig::propertyIsSet() const
{
    return propertyIsSet_;
}

void TtsConfig::unsetproperty()
{
    propertyIsSet_ = false;
}

int32_t TtsConfig::getSpeed() const
{
    return speed_;
}

void TtsConfig::setSpeed(int32_t value)
{
    speed_ = value;
    speedIsSet_ = true;
}

bool TtsConfig::speedIsSet() const
{
    return speedIsSet_;
}

void TtsConfig::unsetspeed()
{
    speedIsSet_ = false;
}

int32_t TtsConfig::getPitch() const
{
    return pitch_;
}

void TtsConfig::setPitch(int32_t value)
{
    pitch_ = value;
    pitchIsSet_ = true;
}

bool TtsConfig::pitchIsSet() const
{
    return pitchIsSet_;
}

void TtsConfig::unsetpitch()
{
    pitchIsSet_ = false;
}

int32_t TtsConfig::getVolume() const
{
    return volume_;
}

void TtsConfig::setVolume(int32_t value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool TtsConfig::volumeIsSet() const
{
    return volumeIsSet_;
}

void TtsConfig::unsetvolume()
{
    volumeIsSet_ = false;
}

}
}
}
}
}


