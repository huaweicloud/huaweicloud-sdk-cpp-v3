

#include "huaweicloud/mpc/v1/model/AudioInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




AudioInfo::AudioInfo()
{
    codec_ = "";
    codecIsSet_ = false;
    sample_ = 0;
    sampleIsSet_ = false;
    channels_ = 0;
    channelsIsSet_ = false;
    bitrate_ = 0;
    bitrateIsSet_ = false;
    bitrateBps_ = 0L;
    bitrateBpsIsSet_ = false;
}

AudioInfo::~AudioInfo() = default;

void AudioInfo::validate()
{
}

web::json::value AudioInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codecIsSet_) {
        val[utility::conversions::to_string_t("codec")] = ModelBase::toJson(codec_);
    }
    if(sampleIsSet_) {
        val[utility::conversions::to_string_t("sample")] = ModelBase::toJson(sample_);
    }
    if(channelsIsSet_) {
        val[utility::conversions::to_string_t("channels")] = ModelBase::toJson(channels_);
    }
    if(bitrateIsSet_) {
        val[utility::conversions::to_string_t("bitrate")] = ModelBase::toJson(bitrate_);
    }
    if(bitrateBpsIsSet_) {
        val[utility::conversions::to_string_t("bitrate_bps")] = ModelBase::toJson(bitrateBps_);
    }

    return val;
}
bool AudioInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("codec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codec"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodec(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("channels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("channels"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChannels(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("bitrate_bps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bitrate_bps"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBitrateBps(refVal);
        }
    }
    return ok;
}


std::string AudioInfo::getCodec() const
{
    return codec_;
}

void AudioInfo::setCodec(const std::string& value)
{
    codec_ = value;
    codecIsSet_ = true;
}

bool AudioInfo::codecIsSet() const
{
    return codecIsSet_;
}

void AudioInfo::unsetcodec()
{
    codecIsSet_ = false;
}

int32_t AudioInfo::getSample() const
{
    return sample_;
}

void AudioInfo::setSample(int32_t value)
{
    sample_ = value;
    sampleIsSet_ = true;
}

bool AudioInfo::sampleIsSet() const
{
    return sampleIsSet_;
}

void AudioInfo::unsetsample()
{
    sampleIsSet_ = false;
}

int32_t AudioInfo::getChannels() const
{
    return channels_;
}

void AudioInfo::setChannels(int32_t value)
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

int64_t AudioInfo::getBitrateBps() const
{
    return bitrateBps_;
}

void AudioInfo::setBitrateBps(int64_t value)
{
    bitrateBps_ = value;
    bitrateBpsIsSet_ = true;
}

bool AudioInfo::bitrateBpsIsSet() const
{
    return bitrateBpsIsSet_;
}

void AudioInfo::unsetbitrateBps()
{
    bitrateBpsIsSet_ = false;
}

}
}
}
}
}


