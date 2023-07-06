

#include "huaweicloud/vod/v1/model/AudioInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




AudioInfo::AudioInfo()
{
    sampleRate_ = "";
    sampleRateIsSet_ = false;
    bitrate_ = 0;
    bitrateIsSet_ = false;
    channels_ = "";
    channelsIsSet_ = false;
}

AudioInfo::~AudioInfo() = default;

void AudioInfo::validate()
{
}

web::json::value AudioInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sampleRateIsSet_) {
        val[utility::conversions::to_string_t("sample_rate")] = ModelBase::toJson(sampleRate_);
    }
    if(bitrateIsSet_) {
        val[utility::conversions::to_string_t("bitrate")] = ModelBase::toJson(bitrate_);
    }
    if(channelsIsSet_) {
        val[utility::conversions::to_string_t("channels")] = ModelBase::toJson(channels_);
    }

    return val;
}

bool AudioInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sample_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sample_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSampleRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bitrate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bitrate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBitrate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("channels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("channels"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChannels(refVal);
        }
    }
    return ok;
}

std::string AudioInfo::getSampleRate() const
{
    return sampleRate_;
}

void AudioInfo::setSampleRate(const std::string& value)
{
    sampleRate_ = value;
    sampleRateIsSet_ = true;
}

bool AudioInfo::sampleRateIsSet() const
{
    return sampleRateIsSet_;
}

void AudioInfo::unsetsampleRate()
{
    sampleRateIsSet_ = false;
}

int32_t AudioInfo::getBitrate() const
{
    return bitrate_;
}

void AudioInfo::setBitrate(int32_t value)
{
    bitrate_ = value;
    bitrateIsSet_ = true;
}

bool AudioInfo::bitrateIsSet() const
{
    return bitrateIsSet_;
}

void AudioInfo::unsetbitrate()
{
    bitrateIsSet_ = false;
}

std::string AudioInfo::getChannels() const
{
    return channels_;
}

void AudioInfo::setChannels(const std::string& value)
{
    channels_ = value;
    channelsIsSet_ = true;
}

bool AudioInfo::channelsIsSet() const
{
    return channelsIsSet_;
}

void AudioInfo::unsetchannels()
{
    channelsIsSet_ = false;
}

}
}
}
}
}


