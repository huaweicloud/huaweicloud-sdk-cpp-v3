

#include "huaweicloud/vod/v1/model/MetaVideoInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




MetaVideoInfo::MetaVideoInfo()
{
    bitrate_ = 0L;
    bitrateIsSet_ = false;
    codec_ = "";
    codecIsSet_ = false;
    fps_ = 0;
    fpsIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
}

MetaVideoInfo::~MetaVideoInfo() = default;

void MetaVideoInfo::validate()
{
}

web::json::value MetaVideoInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bitrateIsSet_) {
        val[utility::conversions::to_string_t("bitrate")] = ModelBase::toJson(bitrate_);
    }
    if(codecIsSet_) {
        val[utility::conversions::to_string_t("codec")] = ModelBase::toJson(codec_);
    }
    if(fpsIsSet_) {
        val[utility::conversions::to_string_t("fps")] = ModelBase::toJson(fps_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }

    return val;
}
bool MetaVideoInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bitrate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bitrate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBitrate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFps(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("width"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("width"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWidth(refVal);
        }
    }
    return ok;
}


int64_t MetaVideoInfo::getBitrate() const
{
    return bitrate_;
}

void MetaVideoInfo::setBitrate(int64_t value)
{
    bitrate_ = value;
    bitrateIsSet_ = true;
}

bool MetaVideoInfo::bitrateIsSet() const
{
    return bitrateIsSet_;
}

void MetaVideoInfo::unsetbitrate()
{
    bitrateIsSet_ = false;
}

std::string MetaVideoInfo::getCodec() const
{
    return codec_;
}

void MetaVideoInfo::setCodec(const std::string& value)
{
    codec_ = value;
    codecIsSet_ = true;
}

bool MetaVideoInfo::codecIsSet() const
{
    return codecIsSet_;
}

void MetaVideoInfo::unsetcodec()
{
    codecIsSet_ = false;
}

int32_t MetaVideoInfo::getFps() const
{
    return fps_;
}

void MetaVideoInfo::setFps(int32_t value)
{
    fps_ = value;
    fpsIsSet_ = true;
}

bool MetaVideoInfo::fpsIsSet() const
{
    return fpsIsSet_;
}

void MetaVideoInfo::unsetfps()
{
    fpsIsSet_ = false;
}

int32_t MetaVideoInfo::getHeight() const
{
    return height_;
}

void MetaVideoInfo::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool MetaVideoInfo::heightIsSet() const
{
    return heightIsSet_;
}

void MetaVideoInfo::unsetheight()
{
    heightIsSet_ = false;
}

int32_t MetaVideoInfo::getWidth() const
{
    return width_;
}

void MetaVideoInfo::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool MetaVideoInfo::widthIsSet() const
{
    return widthIsSet_;
}

void MetaVideoInfo::unsetwidth()
{
    widthIsSet_ = false;
}

}
}
}
}
}


