

#include "huaweicloud/mpc/v1/model/VideoObj.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




VideoObj::VideoObj()
{
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    bitrate_ = 0;
    bitrateIsSet_ = false;
}

VideoObj::~VideoObj() = default;

void VideoObj::validate()
{
}

web::json::value VideoObj::toJson() const
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

    return val;
}

bool VideoObj::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t VideoObj::getWidth() const
{
    return width_;
}

void VideoObj::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool VideoObj::widthIsSet() const
{
    return widthIsSet_;
}

void VideoObj::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t VideoObj::getHeight() const
{
    return height_;
}

void VideoObj::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool VideoObj::heightIsSet() const
{
    return heightIsSet_;
}

void VideoObj::unsetheight()
{
    heightIsSet_ = false;
}

int32_t VideoObj::getBitrate() const
{
    return bitrate_;
}

void VideoObj::setBitrate(int32_t value)
{
    bitrate_ = value;
    bitrateIsSet_ = true;
}

bool VideoObj::bitrateIsSet() const
{
    return bitrateIsSet_;
}

void VideoObj::unsetbitrate()
{
    bitrateIsSet_ = false;
}

}
}
}
}
}


