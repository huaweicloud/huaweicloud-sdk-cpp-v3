

#include "huaweicloud/vod/v1/model/AudioTemplateInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




AudioTemplateInfo::AudioTemplateInfo()
{
    sampleRate_ = 0;
    sampleRateIsSet_ = false;
    bitrate_ = 0;
    bitrateIsSet_ = false;
    channels_ = 0;
    channelsIsSet_ = false;
}

AudioTemplateInfo::~AudioTemplateInfo() = default;

void AudioTemplateInfo::validate()
{
}

web::json::value AudioTemplateInfo::toJson() const
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

bool AudioTemplateInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sample_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sample_rate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChannels(refVal);
        }
    }
    return ok;
}

int32_t AudioTemplateInfo::getSampleRate() const
{
    return sampleRate_;
}

void AudioTemplateInfo::setSampleRate(int32_t value)
{
    sampleRate_ = value;
    sampleRateIsSet_ = true;
}

bool AudioTemplateInfo::sampleRateIsSet() const
{
    return sampleRateIsSet_;
}

void AudioTemplateInfo::unsetsampleRate()
{
    sampleRateIsSet_ = false;
}

int32_t AudioTemplateInfo::getBitrate() const
{
    return bitrate_;
}

void AudioTemplateInfo::setBitrate(int32_t value)
{
    bitrate_ = value;
    bitrateIsSet_ = true;
}

bool AudioTemplateInfo::bitrateIsSet() const
{
    return bitrateIsSet_;
}

void AudioTemplateInfo::unsetbitrate()
{
    bitrateIsSet_ = false;
}

int32_t AudioTemplateInfo::getChannels() const
{
    return channels_;
}

void AudioTemplateInfo::setChannels(int32_t value)
{
    channels_ = value;
    channelsIsSet_ = true;
}

bool AudioTemplateInfo::channelsIsSet() const
{
    return channelsIsSet_;
}

void AudioTemplateInfo::unsetchannels()
{
    channelsIsSet_ = false;
}

}
}
}
}
}


