

#include "huaweicloud/mpc/v1/model/EditAudioInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




EditAudioInfo::EditAudioInfo()
{
    codec_ = "";
    codecIsSet_ = false;
    bitrate_ = 0;
    bitrateIsSet_ = false;
    sample_ = 0;
    sampleIsSet_ = false;
    channels_ = "";
    channelsIsSet_ = false;
}

EditAudioInfo::~EditAudioInfo() = default;

void EditAudioInfo::validate()
{
}

web::json::value EditAudioInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codecIsSet_) {
        val[utility::conversions::to_string_t("codec")] = ModelBase::toJson(codec_);
    }
    if(bitrateIsSet_) {
        val[utility::conversions::to_string_t("bitrate")] = ModelBase::toJson(bitrate_);
    }
    if(sampleIsSet_) {
        val[utility::conversions::to_string_t("sample")] = ModelBase::toJson(sample_);
    }
    if(channelsIsSet_) {
        val[utility::conversions::to_string_t("channels")] = ModelBase::toJson(channels_);
    }

    return val;
}

bool EditAudioInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("bitrate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bitrate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBitrate(refVal);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChannels(refVal);
        }
    }
    return ok;
}


std::string EditAudioInfo::getCodec() const
{
    return codec_;
}

void EditAudioInfo::setCodec(const std::string& value)
{
    codec_ = value;
    codecIsSet_ = true;
}

bool EditAudioInfo::codecIsSet() const
{
    return codecIsSet_;
}

void EditAudioInfo::unsetcodec()
{
    codecIsSet_ = false;
}

int32_t EditAudioInfo::getBitrate() const
{
    return bitrate_;
}

void EditAudioInfo::setBitrate(int32_t value)
{
    bitrate_ = value;
    bitrateIsSet_ = true;
}

bool EditAudioInfo::bitrateIsSet() const
{
    return bitrateIsSet_;
}

void EditAudioInfo::unsetbitrate()
{
    bitrateIsSet_ = false;
}

int32_t EditAudioInfo::getSample() const
{
    return sample_;
}

void EditAudioInfo::setSample(int32_t value)
{
    sample_ = value;
    sampleIsSet_ = true;
}

bool EditAudioInfo::sampleIsSet() const
{
    return sampleIsSet_;
}

void EditAudioInfo::unsetsample()
{
    sampleIsSet_ = false;
}

std::string EditAudioInfo::getChannels() const
{
    return channels_;
}

void EditAudioInfo::setChannels(const std::string& value)
{
    channels_ = value;
    channelsIsSet_ = true;
}

bool EditAudioInfo::channelsIsSet() const
{
    return channelsIsSet_;
}

void EditAudioInfo::unsetchannels()
{
    channelsIsSet_ = false;
}

}
}
}
}
}


