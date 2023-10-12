

#include "huaweicloud/vod/v1/model/MetaData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




MetaData::MetaData()
{
    packType_ = "";
    packTypeIsSet_ = false;
    codec_ = "";
    codecIsSet_ = false;
    duration_ = 0L;
    durationIsSet_ = false;
    videoSize_ = 0L;
    videoSizeIsSet_ = false;
    width_ = 0L;
    widthIsSet_ = false;
    hight_ = 0L;
    hightIsSet_ = false;
    bitRate_ = 0L;
    bitRateIsSet_ = false;
    frameRate_ = 0L;
    frameRateIsSet_ = false;
    quality_ = "";
    qualityIsSet_ = false;
    audioChannels_ = 0;
    audioChannelsIsSet_ = false;
}

MetaData::~MetaData() = default;

void MetaData::validate()
{
}

web::json::value MetaData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(packTypeIsSet_) {
        val[utility::conversions::to_string_t("pack_type")] = ModelBase::toJson(packType_);
    }
    if(codecIsSet_) {
        val[utility::conversions::to_string_t("codec")] = ModelBase::toJson(codec_);
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
    if(hightIsSet_) {
        val[utility::conversions::to_string_t("hight")] = ModelBase::toJson(hight_);
    }
    if(bitRateIsSet_) {
        val[utility::conversions::to_string_t("bit_rate")] = ModelBase::toJson(bitRate_);
    }
    if(frameRateIsSet_) {
        val[utility::conversions::to_string_t("frame_rate")] = ModelBase::toJson(frameRate_);
    }
    if(qualityIsSet_) {
        val[utility::conversions::to_string_t("quality")] = ModelBase::toJson(quality_);
    }
    if(audioChannelsIsSet_) {
        val[utility::conversions::to_string_t("audio_channels")] = ModelBase::toJson(audioChannels_);
    }

    return val;
}
bool MetaData::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("codec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codec"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
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
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hight"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bit_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bit_rate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBitRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frame_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frame_rate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrameRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quality"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quality"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuality(refVal);
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
    return ok;
}


std::string MetaData::getPackType() const
{
    return packType_;
}

void MetaData::setPackType(const std::string& value)
{
    packType_ = value;
    packTypeIsSet_ = true;
}

bool MetaData::packTypeIsSet() const
{
    return packTypeIsSet_;
}

void MetaData::unsetpackType()
{
    packTypeIsSet_ = false;
}

std::string MetaData::getCodec() const
{
    return codec_;
}

void MetaData::setCodec(const std::string& value)
{
    codec_ = value;
    codecIsSet_ = true;
}

bool MetaData::codecIsSet() const
{
    return codecIsSet_;
}

void MetaData::unsetcodec()
{
    codecIsSet_ = false;
}

int64_t MetaData::getDuration() const
{
    return duration_;
}

void MetaData::setDuration(int64_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool MetaData::durationIsSet() const
{
    return durationIsSet_;
}

void MetaData::unsetduration()
{
    durationIsSet_ = false;
}

int64_t MetaData::getVideoSize() const
{
    return videoSize_;
}

void MetaData::setVideoSize(int64_t value)
{
    videoSize_ = value;
    videoSizeIsSet_ = true;
}

bool MetaData::videoSizeIsSet() const
{
    return videoSizeIsSet_;
}

void MetaData::unsetvideoSize()
{
    videoSizeIsSet_ = false;
}

int64_t MetaData::getWidth() const
{
    return width_;
}

void MetaData::setWidth(int64_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool MetaData::widthIsSet() const
{
    return widthIsSet_;
}

void MetaData::unsetwidth()
{
    widthIsSet_ = false;
}

int64_t MetaData::getHight() const
{
    return hight_;
}

void MetaData::setHight(int64_t value)
{
    hight_ = value;
    hightIsSet_ = true;
}

bool MetaData::hightIsSet() const
{
    return hightIsSet_;
}

void MetaData::unsethight()
{
    hightIsSet_ = false;
}

int64_t MetaData::getBitRate() const
{
    return bitRate_;
}

void MetaData::setBitRate(int64_t value)
{
    bitRate_ = value;
    bitRateIsSet_ = true;
}

bool MetaData::bitRateIsSet() const
{
    return bitRateIsSet_;
}

void MetaData::unsetbitRate()
{
    bitRateIsSet_ = false;
}

int64_t MetaData::getFrameRate() const
{
    return frameRate_;
}

void MetaData::setFrameRate(int64_t value)
{
    frameRate_ = value;
    frameRateIsSet_ = true;
}

bool MetaData::frameRateIsSet() const
{
    return frameRateIsSet_;
}

void MetaData::unsetframeRate()
{
    frameRateIsSet_ = false;
}

std::string MetaData::getQuality() const
{
    return quality_;
}

void MetaData::setQuality(const std::string& value)
{
    quality_ = value;
    qualityIsSet_ = true;
}

bool MetaData::qualityIsSet() const
{
    return qualityIsSet_;
}

void MetaData::unsetquality()
{
    qualityIsSet_ = false;
}

int32_t MetaData::getAudioChannels() const
{
    return audioChannels_;
}

void MetaData::setAudioChannels(int32_t value)
{
    audioChannels_ = value;
    audioChannelsIsSet_ = true;
}

bool MetaData::audioChannelsIsSet() const
{
    return audioChannelsIsSet_;
}

void MetaData::unsetaudioChannels()
{
    audioChannelsIsSet_ = false;
}

}
}
}
}
}


