

#include "huaweicloud/mpc/v1/model/EditVideoInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




EditVideoInfo::EditVideoInfo()
{
    reference_ = "";
    referenceIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    codec_ = "";
    codecIsSet_ = false;
    bitrate_ = 0;
    bitrateIsSet_ = false;
    frameRate_ = 0;
    frameRateIsSet_ = false;
}

EditVideoInfo::~EditVideoInfo() = default;

void EditVideoInfo::validate()
{
}

web::json::value EditVideoInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(referenceIsSet_) {
        val[utility::conversions::to_string_t("reference")] = ModelBase::toJson(reference_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(codecIsSet_) {
        val[utility::conversions::to_string_t("codec")] = ModelBase::toJson(codec_);
    }
    if(bitrateIsSet_) {
        val[utility::conversions::to_string_t("bitrate")] = ModelBase::toJson(bitrate_);
    }
    if(frameRateIsSet_) {
        val[utility::conversions::to_string_t("frame_rate")] = ModelBase::toJson(frameRate_);
    }

    return val;
}

bool EditVideoInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("reference"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reference"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReference(refVal);
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


std::string EditVideoInfo::getReference() const
{
    return reference_;
}

void EditVideoInfo::setReference(const std::string& value)
{
    reference_ = value;
    referenceIsSet_ = true;
}

bool EditVideoInfo::referenceIsSet() const
{
    return referenceIsSet_;
}

void EditVideoInfo::unsetreference()
{
    referenceIsSet_ = false;
}

int32_t EditVideoInfo::getWidth() const
{
    return width_;
}

void EditVideoInfo::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool EditVideoInfo::widthIsSet() const
{
    return widthIsSet_;
}

void EditVideoInfo::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t EditVideoInfo::getHeight() const
{
    return height_;
}

void EditVideoInfo::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool EditVideoInfo::heightIsSet() const
{
    return heightIsSet_;
}

void EditVideoInfo::unsetheight()
{
    heightIsSet_ = false;
}

std::string EditVideoInfo::getCodec() const
{
    return codec_;
}

void EditVideoInfo::setCodec(const std::string& value)
{
    codec_ = value;
    codecIsSet_ = true;
}

bool EditVideoInfo::codecIsSet() const
{
    return codecIsSet_;
}

void EditVideoInfo::unsetcodec()
{
    codecIsSet_ = false;
}

int32_t EditVideoInfo::getBitrate() const
{
    return bitrate_;
}

void EditVideoInfo::setBitrate(int32_t value)
{
    bitrate_ = value;
    bitrateIsSet_ = true;
}

bool EditVideoInfo::bitrateIsSet() const
{
    return bitrateIsSet_;
}

void EditVideoInfo::unsetbitrate()
{
    bitrateIsSet_ = false;
}

int32_t EditVideoInfo::getFrameRate() const
{
    return frameRate_;
}

void EditVideoInfo::setFrameRate(int32_t value)
{
    frameRate_ = value;
    frameRateIsSet_ = true;
}

bool EditVideoInfo::frameRateIsSet() const
{
    return frameRateIsSet_;
}

void EditVideoInfo::unsetframeRate()
{
    frameRateIsSet_ = false;
}

}
}
}
}
}


