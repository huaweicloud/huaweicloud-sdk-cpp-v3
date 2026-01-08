

#include "huaweicloud/mpc/v1/model/VideoInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




VideoInfo::VideoInfo()
{
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    bitrate_ = 0;
    bitrateIsSet_ = false;
    bitrateBps_ = 0L;
    bitrateBpsIsSet_ = false;
    frameRate_ = 0;
    frameRateIsSet_ = false;
    codec_ = "";
    codecIsSet_ = false;
    duration_ = "";
    durationIsSet_ = false;
    durationMs_ = "";
    durationMsIsSet_ = false;
    rotate_ = 0.0f;
    rotateIsSet_ = false;
}

VideoInfo::~VideoInfo() = default;

void VideoInfo::validate()
{
}

web::json::value VideoInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(bitrateIsSet_) {
        val[utility::conversions::to_string_t("bitrate")] = ModelBase::toJson(bitrate_);
    }
    if(bitrateBpsIsSet_) {
        val[utility::conversions::to_string_t("bitrate_bps")] = ModelBase::toJson(bitrateBps_);
    }
    if(frameRateIsSet_) {
        val[utility::conversions::to_string_t("frame_rate")] = ModelBase::toJson(frameRate_);
    }
    if(codecIsSet_) {
        val[utility::conversions::to_string_t("codec")] = ModelBase::toJson(codec_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(durationMsIsSet_) {
        val[utility::conversions::to_string_t("duration_ms")] = ModelBase::toJson(durationMs_);
    }
    if(rotateIsSet_) {
        val[utility::conversions::to_string_t("rotate")] = ModelBase::toJson(rotate_);
    }

    return val;
}
bool VideoInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("frame_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frame_rate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrameRate(refVal);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration_ms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration_ms"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDurationMs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rotate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rotate"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRotate(refVal);
        }
    }
    return ok;
}


int32_t VideoInfo::getWidth() const
{
    return width_;
}

void VideoInfo::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool VideoInfo::widthIsSet() const
{
    return widthIsSet_;
}

void VideoInfo::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t VideoInfo::getHeight() const
{
    return height_;
}

void VideoInfo::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool VideoInfo::heightIsSet() const
{
    return heightIsSet_;
}

void VideoInfo::unsetheight()
{
    heightIsSet_ = false;
}

int32_t VideoInfo::getBitrate() const
{
    return bitrate_;
}

void VideoInfo::setBitrate(int32_t value)
{
    bitrate_ = value;
    bitrateIsSet_ = true;
}

bool VideoInfo::bitrateIsSet() const
{
    return bitrateIsSet_;
}

void VideoInfo::unsetbitrate()
{
    bitrateIsSet_ = false;
}

int64_t VideoInfo::getBitrateBps() const
{
    return bitrateBps_;
}

void VideoInfo::setBitrateBps(int64_t value)
{
    bitrateBps_ = value;
    bitrateBpsIsSet_ = true;
}

bool VideoInfo::bitrateBpsIsSet() const
{
    return bitrateBpsIsSet_;
}

void VideoInfo::unsetbitrateBps()
{
    bitrateBpsIsSet_ = false;
}

int32_t VideoInfo::getFrameRate() const
{
    return frameRate_;
}

void VideoInfo::setFrameRate(int32_t value)
{
    frameRate_ = value;
    frameRateIsSet_ = true;
}

bool VideoInfo::frameRateIsSet() const
{
    return frameRateIsSet_;
}

void VideoInfo::unsetframeRate()
{
    frameRateIsSet_ = false;
}

std::string VideoInfo::getCodec() const
{
    return codec_;
}

void VideoInfo::setCodec(const std::string& value)
{
    codec_ = value;
    codecIsSet_ = true;
}

bool VideoInfo::codecIsSet() const
{
    return codecIsSet_;
}

void VideoInfo::unsetcodec()
{
    codecIsSet_ = false;
}

std::string VideoInfo::getDuration() const
{
    return duration_;
}

void VideoInfo::setDuration(const std::string& value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool VideoInfo::durationIsSet() const
{
    return durationIsSet_;
}

void VideoInfo::unsetduration()
{
    durationIsSet_ = false;
}

std::string VideoInfo::getDurationMs() const
{
    return durationMs_;
}

void VideoInfo::setDurationMs(const std::string& value)
{
    durationMs_ = value;
    durationMsIsSet_ = true;
}

bool VideoInfo::durationMsIsSet() const
{
    return durationMsIsSet_;
}

void VideoInfo::unsetdurationMs()
{
    durationMsIsSet_ = false;
}

float VideoInfo::getRotate() const
{
    return rotate_;
}

void VideoInfo::setRotate(float value)
{
    rotate_ = value;
    rotateIsSet_ = true;
}

bool VideoInfo::rotateIsSet() const
{
    return rotateIsSet_;
}

void VideoInfo::unsetrotate()
{
    rotateIsSet_ = false;
}

}
}
}
}
}


