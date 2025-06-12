

#include "huaweicloud/metastudio/v1/model/AudioAssetMeta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




AudioAssetMeta::AudioAssetMeta()
{
    duration_ = 0;
    durationIsSet_ = false;
    audioCodec_ = "";
    audioCodecIsSet_ = false;
    audioBitRate_ = 0;
    audioBitRateIsSet_ = false;
    audioChannels_ = 0;
    audioChannelsIsSet_ = false;
    sample_ = 0;
    sampleIsSet_ = false;
    errorInfoIsSet_ = false;
}

AudioAssetMeta::~AudioAssetMeta() = default;

void AudioAssetMeta::validate()
{
}

web::json::value AudioAssetMeta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(audioCodecIsSet_) {
        val[utility::conversions::to_string_t("audio_codec")] = ModelBase::toJson(audioCodec_);
    }
    if(audioBitRateIsSet_) {
        val[utility::conversions::to_string_t("audio_bit_rate")] = ModelBase::toJson(audioBitRate_);
    }
    if(audioChannelsIsSet_) {
        val[utility::conversions::to_string_t("audio_channels")] = ModelBase::toJson(audioChannels_);
    }
    if(sampleIsSet_) {
        val[utility::conversions::to_string_t("sample")] = ModelBase::toJson(sample_);
    }
    if(errorInfoIsSet_) {
        val[utility::conversions::to_string_t("error_info")] = ModelBase::toJson(errorInfo_);
    }

    return val;
}
bool AudioAssetMeta::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_codec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_codec"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioCodec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_bit_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_bit_rate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioBitRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_channels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_channels"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioChannels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sample"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sample"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSample(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_info"));
        if(!fieldValue.is_null())
        {
            ErrorResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorInfo(refVal);
        }
    }
    return ok;
}


int32_t AudioAssetMeta::getDuration() const
{
    return duration_;
}

void AudioAssetMeta::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool AudioAssetMeta::durationIsSet() const
{
    return durationIsSet_;
}

void AudioAssetMeta::unsetduration()
{
    durationIsSet_ = false;
}

std::string AudioAssetMeta::getAudioCodec() const
{
    return audioCodec_;
}

void AudioAssetMeta::setAudioCodec(const std::string& value)
{
    audioCodec_ = value;
    audioCodecIsSet_ = true;
}

bool AudioAssetMeta::audioCodecIsSet() const
{
    return audioCodecIsSet_;
}

void AudioAssetMeta::unsetaudioCodec()
{
    audioCodecIsSet_ = false;
}

int32_t AudioAssetMeta::getAudioBitRate() const
{
    return audioBitRate_;
}

void AudioAssetMeta::setAudioBitRate(int32_t value)
{
    audioBitRate_ = value;
    audioBitRateIsSet_ = true;
}

bool AudioAssetMeta::audioBitRateIsSet() const
{
    return audioBitRateIsSet_;
}

void AudioAssetMeta::unsetaudioBitRate()
{
    audioBitRateIsSet_ = false;
}

int32_t AudioAssetMeta::getAudioChannels() const
{
    return audioChannels_;
}

void AudioAssetMeta::setAudioChannels(int32_t value)
{
    audioChannels_ = value;
    audioChannelsIsSet_ = true;
}

bool AudioAssetMeta::audioChannelsIsSet() const
{
    return audioChannelsIsSet_;
}

void AudioAssetMeta::unsetaudioChannels()
{
    audioChannelsIsSet_ = false;
}

int32_t AudioAssetMeta::getSample() const
{
    return sample_;
}

void AudioAssetMeta::setSample(int32_t value)
{
    sample_ = value;
    sampleIsSet_ = true;
}

bool AudioAssetMeta::sampleIsSet() const
{
    return sampleIsSet_;
}

void AudioAssetMeta::unsetsample()
{
    sampleIsSet_ = false;
}

ErrorResponse AudioAssetMeta::getErrorInfo() const
{
    return errorInfo_;
}

void AudioAssetMeta::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool AudioAssetMeta::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void AudioAssetMeta::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

}
}
}
}
}


