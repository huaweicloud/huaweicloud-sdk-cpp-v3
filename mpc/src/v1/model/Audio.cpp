

#include "huaweicloud/mpc/v1/model/Audio.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




Audio::Audio()
{
    outputPolicy_ = "";
    outputPolicyIsSet_ = false;
    codec_ = 0;
    codecIsSet_ = false;
    sampleRate_ = 0;
    sampleRateIsSet_ = false;
    bitrate_ = 0;
    bitrateIsSet_ = false;
    channels_ = 0;
    channelsIsSet_ = false;
}

Audio::~Audio() = default;

void Audio::validate()
{
}

web::json::value Audio::toJson() const
{
    web::json::value val = web::json::value::object();

    if(outputPolicyIsSet_) {
        val[utility::conversions::to_string_t("output_policy")] = ModelBase::toJson(outputPolicy_);
    }
    if(codecIsSet_) {
        val[utility::conversions::to_string_t("codec")] = ModelBase::toJson(codec_);
    }
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

bool Audio::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("output_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codec"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodec(refVal);
        }
    }
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


std::string Audio::getOutputPolicy() const
{
    return outputPolicy_;
}

void Audio::setOutputPolicy(const std::string& value)
{
    outputPolicy_ = value;
    outputPolicyIsSet_ = true;
}

bool Audio::outputPolicyIsSet() const
{
    return outputPolicyIsSet_;
}

void Audio::unsetoutputPolicy()
{
    outputPolicyIsSet_ = false;
}

int32_t Audio::getCodec() const
{
    return codec_;
}

void Audio::setCodec(int32_t value)
{
    codec_ = value;
    codecIsSet_ = true;
}

bool Audio::codecIsSet() const
{
    return codecIsSet_;
}

void Audio::unsetcodec()
{
    codecIsSet_ = false;
}

int32_t Audio::getSampleRate() const
{
    return sampleRate_;
}

void Audio::setSampleRate(int32_t value)
{
    sampleRate_ = value;
    sampleRateIsSet_ = true;
}

bool Audio::sampleRateIsSet() const
{
    return sampleRateIsSet_;
}

void Audio::unsetsampleRate()
{
    sampleRateIsSet_ = false;
}

int32_t Audio::getBitrate() const
{
    return bitrate_;
}

void Audio::setBitrate(int32_t value)
{
    bitrate_ = value;
    bitrateIsSet_ = true;
}

bool Audio::bitrateIsSet() const
{
    return bitrateIsSet_;
}

void Audio::unsetbitrate()
{
    bitrateIsSet_ = false;
}

int32_t Audio::getChannels() const
{
    return channels_;
}

void Audio::setChannels(int32_t value)
{
    channels_ = value;
    channelsIsSet_ = true;
}

bool Audio::channelsIsSet() const
{
    return channelsIsSet_;
}

void Audio::unsetchannels()
{
    channelsIsSet_ = false;
}

}
}
}
}
}


