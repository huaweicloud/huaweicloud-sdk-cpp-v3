

#include "huaweicloud/metastudio/v1/model/ImageAssetMeta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ImageAssetMeta::ImageAssetMeta()
{
    codec_ = "";
    codecIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    frameRate_ = "";
    frameRateIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
    errorInfoIsSet_ = false;
}

ImageAssetMeta::~ImageAssetMeta() = default;

void ImageAssetMeta::validate()
{
}

web::json::value ImageAssetMeta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codecIsSet_) {
        val[utility::conversions::to_string_t("codec")] = ModelBase::toJson(codec_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(frameRateIsSet_) {
        val[utility::conversions::to_string_t("frame_rate")] = ModelBase::toJson(frameRate_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(errorInfoIsSet_) {
        val[utility::conversions::to_string_t("error_info")] = ModelBase::toJson(errorInfo_);
    }

    return val;
}
bool ImageAssetMeta::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frame_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frame_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrameRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_info"));
        if(!fieldValue.is_null())
        {
            ErrorResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorInfo(refVal);
        }
    }
    return ok;
}


std::string ImageAssetMeta::getCodec() const
{
    return codec_;
}

void ImageAssetMeta::setCodec(const std::string& value)
{
    codec_ = value;
    codecIsSet_ = true;
}

bool ImageAssetMeta::codecIsSet() const
{
    return codecIsSet_;
}

void ImageAssetMeta::unsetcodec()
{
    codecIsSet_ = false;
}

int32_t ImageAssetMeta::getWidth() const
{
    return width_;
}

void ImageAssetMeta::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool ImageAssetMeta::widthIsSet() const
{
    return widthIsSet_;
}

void ImageAssetMeta::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t ImageAssetMeta::getHeight() const
{
    return height_;
}

void ImageAssetMeta::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool ImageAssetMeta::heightIsSet() const
{
    return heightIsSet_;
}

void ImageAssetMeta::unsetheight()
{
    heightIsSet_ = false;
}

int64_t ImageAssetMeta::getSize() const
{
    return size_;
}

void ImageAssetMeta::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ImageAssetMeta::sizeIsSet() const
{
    return sizeIsSet_;
}

void ImageAssetMeta::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ImageAssetMeta::getMode() const
{
    return mode_;
}

void ImageAssetMeta::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ImageAssetMeta::modeIsSet() const
{
    return modeIsSet_;
}

void ImageAssetMeta::unsetmode()
{
    modeIsSet_ = false;
}

std::string ImageAssetMeta::getFrameRate() const
{
    return frameRate_;
}

void ImageAssetMeta::setFrameRate(const std::string& value)
{
    frameRate_ = value;
    frameRateIsSet_ = true;
}

bool ImageAssetMeta::frameRateIsSet() const
{
    return frameRateIsSet_;
}

void ImageAssetMeta::unsetframeRate()
{
    frameRateIsSet_ = false;
}

int32_t ImageAssetMeta::getDuration() const
{
    return duration_;
}

void ImageAssetMeta::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool ImageAssetMeta::durationIsSet() const
{
    return durationIsSet_;
}

void ImageAssetMeta::unsetduration()
{
    durationIsSet_ = false;
}

ErrorResponse ImageAssetMeta::getErrorInfo() const
{
    return errorInfo_;
}

void ImageAssetMeta::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool ImageAssetMeta::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void ImageAssetMeta::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

}
}
}
}
}


