

#include "huaweicloud/mpc/v1/model/MpeMetaData.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




MpeMetaData::MpeMetaData()
{
    packType_ = "";
    packTypeIsSet_ = false;
    duration_ = 0.0;
    durationIsSet_ = false;
    videoSize_ = 0L;
    videoSizeIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    bitRate_ = 0;
    bitRateIsSet_ = false;
    audioBitRate_ = 0;
    audioBitRateIsSet_ = false;
    frameRate_ = 0;
    frameRateIsSet_ = false;
    codecName_ = "";
    codecNameIsSet_ = false;
    audioCodecName_ = "";
    audioCodecNameIsSet_ = false;
    channels_ = 0;
    channelsIsSet_ = false;
    sample_ = 0;
    sampleIsSet_ = false;
    isAudio_ = false;
    isAudioIsSet_ = false;
}

MpeMetaData::~MpeMetaData() = default;

void MpeMetaData::validate()
{
}

web::json::value MpeMetaData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(packTypeIsSet_) {
        val[utility::conversions::to_string_t("pack_type")] = ModelBase::toJson(packType_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(videoSizeIsSet_) {
        val[utility::conversions::to_string_t("video_size")] = ModelBase::toJson(videoSize_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(bitRateIsSet_) {
        val[utility::conversions::to_string_t("bit_rate")] = ModelBase::toJson(bitRate_);
    }
    if(audioBitRateIsSet_) {
        val[utility::conversions::to_string_t("audio_bit_rate")] = ModelBase::toJson(audioBitRate_);
    }
    if(frameRateIsSet_) {
        val[utility::conversions::to_string_t("frame_rate")] = ModelBase::toJson(frameRate_);
    }
    if(codecNameIsSet_) {
        val[utility::conversions::to_string_t("codec_name")] = ModelBase::toJson(codecName_);
    }
    if(audioCodecNameIsSet_) {
        val[utility::conversions::to_string_t("audio_codec_name")] = ModelBase::toJson(audioCodecName_);
    }
    if(channelsIsSet_) {
        val[utility::conversions::to_string_t("channels")] = ModelBase::toJson(channels_);
    }
    if(sampleIsSet_) {
        val[utility::conversions::to_string_t("sample")] = ModelBase::toJson(sample_);
    }
    if(isAudioIsSet_) {
        val[utility::conversions::to_string_t("is_audio")] = ModelBase::toJson(isAudio_);
    }

    return val;
}

bool MpeMetaData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pack_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pack_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("width"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("width"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bit_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bit_rate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBitRate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("frame_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frame_rate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrameRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codec_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codec_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodecName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_codec_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_codec_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioCodecName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sample"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sample"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSample(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_audio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_audio"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAudio(refVal);
        }
    }
    return ok;
}

std::string MpeMetaData::getPackType() const
{
    return packType_;
}

void MpeMetaData::setPackType(const std::string& value)
{
    packType_ = value;
    packTypeIsSet_ = true;
}

bool MpeMetaData::packTypeIsSet() const
{
    return packTypeIsSet_;
}

void MpeMetaData::unsetpackType()
{
    packTypeIsSet_ = false;
}

double MpeMetaData::getDuration() const
{
    return duration_;
}

void MpeMetaData::setDuration(double value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool MpeMetaData::durationIsSet() const
{
    return durationIsSet_;
}

void MpeMetaData::unsetduration()
{
    durationIsSet_ = false;
}

int64_t MpeMetaData::getVideoSize() const
{
    return videoSize_;
}

void MpeMetaData::setVideoSize(int64_t value)
{
    videoSize_ = value;
    videoSizeIsSet_ = true;
}

bool MpeMetaData::videoSizeIsSet() const
{
    return videoSizeIsSet_;
}

void MpeMetaData::unsetvideoSize()
{
    videoSizeIsSet_ = false;
}

int32_t MpeMetaData::getWidth() const
{
    return width_;
}

void MpeMetaData::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool MpeMetaData::widthIsSet() const
{
    return widthIsSet_;
}

void MpeMetaData::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t MpeMetaData::getHeight() const
{
    return height_;
}

void MpeMetaData::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool MpeMetaData::heightIsSet() const
{
    return heightIsSet_;
}

void MpeMetaData::unsetheight()
{
    heightIsSet_ = false;
}

int32_t MpeMetaData::getBitRate() const
{
    return bitRate_;
}

void MpeMetaData::setBitRate(int32_t value)
{
    bitRate_ = value;
    bitRateIsSet_ = true;
}

bool MpeMetaData::bitRateIsSet() const
{
    return bitRateIsSet_;
}

void MpeMetaData::unsetbitRate()
{
    bitRateIsSet_ = false;
}

int32_t MpeMetaData::getAudioBitRate() const
{
    return audioBitRate_;
}

void MpeMetaData::setAudioBitRate(int32_t value)
{
    audioBitRate_ = value;
    audioBitRateIsSet_ = true;
}

bool MpeMetaData::audioBitRateIsSet() const
{
    return audioBitRateIsSet_;
}

void MpeMetaData::unsetaudioBitRate()
{
    audioBitRateIsSet_ = false;
}

int32_t MpeMetaData::getFrameRate() const
{
    return frameRate_;
}

void MpeMetaData::setFrameRate(int32_t value)
{
    frameRate_ = value;
    frameRateIsSet_ = true;
}

bool MpeMetaData::frameRateIsSet() const
{
    return frameRateIsSet_;
}

void MpeMetaData::unsetframeRate()
{
    frameRateIsSet_ = false;
}

std::string MpeMetaData::getCodecName() const
{
    return codecName_;
}

void MpeMetaData::setCodecName(const std::string& value)
{
    codecName_ = value;
    codecNameIsSet_ = true;
}

bool MpeMetaData::codecNameIsSet() const
{
    return codecNameIsSet_;
}

void MpeMetaData::unsetcodecName()
{
    codecNameIsSet_ = false;
}

std::string MpeMetaData::getAudioCodecName() const
{
    return audioCodecName_;
}

void MpeMetaData::setAudioCodecName(const std::string& value)
{
    audioCodecName_ = value;
    audioCodecNameIsSet_ = true;
}

bool MpeMetaData::audioCodecNameIsSet() const
{
    return audioCodecNameIsSet_;
}

void MpeMetaData::unsetaudioCodecName()
{
    audioCodecNameIsSet_ = false;
}

int32_t MpeMetaData::getChannels() const
{
    return channels_;
}

void MpeMetaData::setChannels(int32_t value)
{
    channels_ = value;
    channelsIsSet_ = true;
}

bool MpeMetaData::channelsIsSet() const
{
    return channelsIsSet_;
}

void MpeMetaData::unsetchannels()
{
    channelsIsSet_ = false;
}

int32_t MpeMetaData::getSample() const
{
    return sample_;
}

void MpeMetaData::setSample(int32_t value)
{
    sample_ = value;
    sampleIsSet_ = true;
}

bool MpeMetaData::sampleIsSet() const
{
    return sampleIsSet_;
}

void MpeMetaData::unsetsample()
{
    sampleIsSet_ = false;
}

bool MpeMetaData::isIsAudio() const
{
    return isAudio_;
}

void MpeMetaData::setIsAudio(bool value)
{
    isAudio_ = value;
    isAudioIsSet_ = true;
}

bool MpeMetaData::isAudioIsSet() const
{
    return isAudioIsSet_;
}

void MpeMetaData::unsetisAudio()
{
    isAudioIsSet_ = false;
}

}
}
}
}
}


