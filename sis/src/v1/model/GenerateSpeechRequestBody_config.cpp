

#include "huaweicloud/sis/v1/model/GenerateSpeechRequestBody_config.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




GenerateSpeechRequestBody_config::GenerateSpeechRequestBody_config()
{
    audioFormat_ = "";
    audioFormatIsSet_ = false;
    sampleRate_ = "";
    sampleRateIsSet_ = false;
    voiceName_ = "";
    voiceNameIsSet_ = false;
    speed_ = 0;
    speedIsSet_ = false;
    pitch_ = 0;
    pitchIsSet_ = false;
    volume_ = 0;
    volumeIsSet_ = false;
}

GenerateSpeechRequestBody_config::~GenerateSpeechRequestBody_config() = default;

void GenerateSpeechRequestBody_config::validate()
{
}

web::json::value GenerateSpeechRequestBody_config::toJson() const
{
    web::json::value val = web::json::value::object();

    if(audioFormatIsSet_) {
        val[utility::conversions::to_string_t("audio_format")] = ModelBase::toJson(audioFormat_);
    }
    if(sampleRateIsSet_) {
        val[utility::conversions::to_string_t("sample_rate")] = ModelBase::toJson(sampleRate_);
    }
    if(voiceNameIsSet_) {
        val[utility::conversions::to_string_t("voice_name")] = ModelBase::toJson(voiceName_);
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
bool GenerateSpeechRequestBody_config::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("voice_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceName(refVal);
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


std::string GenerateSpeechRequestBody_config::getAudioFormat() const
{
    return audioFormat_;
}

void GenerateSpeechRequestBody_config::setAudioFormat(const std::string& value)
{
    audioFormat_ = value;
    audioFormatIsSet_ = true;
}

bool GenerateSpeechRequestBody_config::audioFormatIsSet() const
{
    return audioFormatIsSet_;
}

void GenerateSpeechRequestBody_config::unsetaudioFormat()
{
    audioFormatIsSet_ = false;
}

std::string GenerateSpeechRequestBody_config::getSampleRate() const
{
    return sampleRate_;
}

void GenerateSpeechRequestBody_config::setSampleRate(const std::string& value)
{
    sampleRate_ = value;
    sampleRateIsSet_ = true;
}

bool GenerateSpeechRequestBody_config::sampleRateIsSet() const
{
    return sampleRateIsSet_;
}

void GenerateSpeechRequestBody_config::unsetsampleRate()
{
    sampleRateIsSet_ = false;
}

std::string GenerateSpeechRequestBody_config::getVoiceName() const
{
    return voiceName_;
}

void GenerateSpeechRequestBody_config::setVoiceName(const std::string& value)
{
    voiceName_ = value;
    voiceNameIsSet_ = true;
}

bool GenerateSpeechRequestBody_config::voiceNameIsSet() const
{
    return voiceNameIsSet_;
}

void GenerateSpeechRequestBody_config::unsetvoiceName()
{
    voiceNameIsSet_ = false;
}

int32_t GenerateSpeechRequestBody_config::getSpeed() const
{
    return speed_;
}

void GenerateSpeechRequestBody_config::setSpeed(int32_t value)
{
    speed_ = value;
    speedIsSet_ = true;
}

bool GenerateSpeechRequestBody_config::speedIsSet() const
{
    return speedIsSet_;
}

void GenerateSpeechRequestBody_config::unsetspeed()
{
    speedIsSet_ = false;
}

int32_t GenerateSpeechRequestBody_config::getPitch() const
{
    return pitch_;
}

void GenerateSpeechRequestBody_config::setPitch(int32_t value)
{
    pitch_ = value;
    pitchIsSet_ = true;
}

bool GenerateSpeechRequestBody_config::pitchIsSet() const
{
    return pitchIsSet_;
}

void GenerateSpeechRequestBody_config::unsetpitch()
{
    pitchIsSet_ = false;
}

int32_t GenerateSpeechRequestBody_config::getVolume() const
{
    return volume_;
}

void GenerateSpeechRequestBody_config::setVolume(int32_t value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool GenerateSpeechRequestBody_config::volumeIsSet() const
{
    return volumeIsSet_;
}

void GenerateSpeechRequestBody_config::unsetvolume()
{
    volumeIsSet_ = false;
}

}
}
}
}
}


