

#include "huaweicloud/vod/v1/model/VideoInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




VideoInfo::VideoInfo()
{
    quality_ = "";
    qualityIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    bitrate_ = 0;
    bitrateIsSet_ = false;
    frameRate_ = 0;
    frameRateIsSet_ = false;
}

VideoInfo::~VideoInfo() = default;

void VideoInfo::validate()
{
}

web::json::value VideoInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(qualityIsSet_) {
        val[utility::conversions::to_string_t("quality")] = ModelBase::toJson(quality_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(bitrateIsSet_) {
        val[utility::conversions::to_string_t("bitrate")] = ModelBase::toJson(bitrate_);
    }
    if(frameRateIsSet_) {
        val[utility::conversions::to_string_t("frame_rate")] = ModelBase::toJson(frameRate_);
    }

    return val;
}
bool VideoInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quality"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quality"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuality(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("bitrate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bitrate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBitrate(refVal);
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
    return ok;
}


std::string VideoInfo::getQuality() const
{
    return quality_;
}

void VideoInfo::setQuality(const std::string& value)
{
    quality_ = value;
    qualityIsSet_ = true;
}

bool VideoInfo::qualityIsSet() const
{
    return qualityIsSet_;
}

void VideoInfo::unsetquality()
{
    qualityIsSet_ = false;
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

}
}
}
}
}


