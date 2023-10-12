

#include "huaweicloud/mpc/v1/model/AnimatedGraphicsOutputParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




AnimatedGraphicsOutputParam::AnimatedGraphicsOutputParam()
{
    format_ = "";
    formatIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    start_ = 0;
    startIsSet_ = false;
    end_ = 0;
    endIsSet_ = false;
    frameRate_ = 0;
    frameRateIsSet_ = false;
}

AnimatedGraphicsOutputParam::~AnimatedGraphicsOutputParam() = default;

void AnimatedGraphicsOutputParam::validate()
{
}

web::json::value AnimatedGraphicsOutputParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(startIsSet_) {
        val[utility::conversions::to_string_t("start")] = ModelBase::toJson(start_);
    }
    if(endIsSet_) {
        val[utility::conversions::to_string_t("end")] = ModelBase::toJson(end_);
    }
    if(frameRateIsSet_) {
        val[utility::conversions::to_string_t("frame_rate")] = ModelBase::toJson(frameRate_);
    }

    return val;
}
bool AnimatedGraphicsOutputParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnd(refVal);
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


std::string AnimatedGraphicsOutputParam::getFormat() const
{
    return format_;
}

void AnimatedGraphicsOutputParam::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool AnimatedGraphicsOutputParam::formatIsSet() const
{
    return formatIsSet_;
}

void AnimatedGraphicsOutputParam::unsetformat()
{
    formatIsSet_ = false;
}

int32_t AnimatedGraphicsOutputParam::getWidth() const
{
    return width_;
}

void AnimatedGraphicsOutputParam::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool AnimatedGraphicsOutputParam::widthIsSet() const
{
    return widthIsSet_;
}

void AnimatedGraphicsOutputParam::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t AnimatedGraphicsOutputParam::getHeight() const
{
    return height_;
}

void AnimatedGraphicsOutputParam::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool AnimatedGraphicsOutputParam::heightIsSet() const
{
    return heightIsSet_;
}

void AnimatedGraphicsOutputParam::unsetheight()
{
    heightIsSet_ = false;
}

int32_t AnimatedGraphicsOutputParam::getStart() const
{
    return start_;
}

void AnimatedGraphicsOutputParam::setStart(int32_t value)
{
    start_ = value;
    startIsSet_ = true;
}

bool AnimatedGraphicsOutputParam::startIsSet() const
{
    return startIsSet_;
}

void AnimatedGraphicsOutputParam::unsetstart()
{
    startIsSet_ = false;
}

int32_t AnimatedGraphicsOutputParam::getEnd() const
{
    return end_;
}

void AnimatedGraphicsOutputParam::setEnd(int32_t value)
{
    end_ = value;
    endIsSet_ = true;
}

bool AnimatedGraphicsOutputParam::endIsSet() const
{
    return endIsSet_;
}

void AnimatedGraphicsOutputParam::unsetend()
{
    endIsSet_ = false;
}

int32_t AnimatedGraphicsOutputParam::getFrameRate() const
{
    return frameRate_;
}

void AnimatedGraphicsOutputParam::setFrameRate(int32_t value)
{
    frameRate_ = value;
    frameRateIsSet_ = true;
}

bool AnimatedGraphicsOutputParam::frameRateIsSet() const
{
    return frameRateIsSet_;
}

void AnimatedGraphicsOutputParam::unsetframeRate()
{
    frameRateIsSet_ = false;
}

}
}
}
}
}


