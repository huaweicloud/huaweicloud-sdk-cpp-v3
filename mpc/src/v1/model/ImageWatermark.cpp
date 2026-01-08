

#include "huaweicloud/mpc/v1/model/ImageWatermark.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ImageWatermark::ImageWatermark()
{
    dx_ = "";
    dxIsSet_ = false;
    dy_ = "";
    dyIsSet_ = false;
    referpos_ = "";
    referposIsSet_ = false;
    timelineStart_ = "";
    timelineStartIsSet_ = false;
    timelineDuration_ = "";
    timelineDurationIsSet_ = false;
    randomTimeMin_ = "";
    randomTimeMinIsSet_ = false;
    randomTimeMax_ = "";
    randomTimeMaxIsSet_ = false;
    imageProcess_ = "";
    imageProcessIsSet_ = false;
    width_ = "";
    widthIsSet_ = false;
    height_ = "";
    heightIsSet_ = false;
    base_ = "";
    baseIsSet_ = false;
}

ImageWatermark::~ImageWatermark() = default;

void ImageWatermark::validate()
{
}

web::json::value ImageWatermark::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dxIsSet_) {
        val[utility::conversions::to_string_t("dx")] = ModelBase::toJson(dx_);
    }
    if(dyIsSet_) {
        val[utility::conversions::to_string_t("dy")] = ModelBase::toJson(dy_);
    }
    if(referposIsSet_) {
        val[utility::conversions::to_string_t("referpos")] = ModelBase::toJson(referpos_);
    }
    if(timelineStartIsSet_) {
        val[utility::conversions::to_string_t("timeline_start")] = ModelBase::toJson(timelineStart_);
    }
    if(timelineDurationIsSet_) {
        val[utility::conversions::to_string_t("timeline_duration")] = ModelBase::toJson(timelineDuration_);
    }
    if(randomTimeMinIsSet_) {
        val[utility::conversions::to_string_t("random_time_min")] = ModelBase::toJson(randomTimeMin_);
    }
    if(randomTimeMaxIsSet_) {
        val[utility::conversions::to_string_t("random_time_max")] = ModelBase::toJson(randomTimeMax_);
    }
    if(imageProcessIsSet_) {
        val[utility::conversions::to_string_t("image_process")] = ModelBase::toJson(imageProcess_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(baseIsSet_) {
        val[utility::conversions::to_string_t("base")] = ModelBase::toJson(base_);
    }

    return val;
}
bool ImageWatermark::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dx"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dx"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDx(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("referpos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("referpos"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReferpos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeline_start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeline_start"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimelineStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeline_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeline_duration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimelineDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("random_time_min"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("random_time_min"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRandomTimeMin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("random_time_max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("random_time_max"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRandomTimeMax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_process"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageProcess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("width"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("width"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("base"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBase(refVal);
        }
    }
    return ok;
}


std::string ImageWatermark::getDx() const
{
    return dx_;
}

void ImageWatermark::setDx(const std::string& value)
{
    dx_ = value;
    dxIsSet_ = true;
}

bool ImageWatermark::dxIsSet() const
{
    return dxIsSet_;
}

void ImageWatermark::unsetdx()
{
    dxIsSet_ = false;
}

std::string ImageWatermark::getDy() const
{
    return dy_;
}

void ImageWatermark::setDy(const std::string& value)
{
    dy_ = value;
    dyIsSet_ = true;
}

bool ImageWatermark::dyIsSet() const
{
    return dyIsSet_;
}

void ImageWatermark::unsetdy()
{
    dyIsSet_ = false;
}

std::string ImageWatermark::getReferpos() const
{
    return referpos_;
}

void ImageWatermark::setReferpos(const std::string& value)
{
    referpos_ = value;
    referposIsSet_ = true;
}

bool ImageWatermark::referposIsSet() const
{
    return referposIsSet_;
}

void ImageWatermark::unsetreferpos()
{
    referposIsSet_ = false;
}

std::string ImageWatermark::getTimelineStart() const
{
    return timelineStart_;
}

void ImageWatermark::setTimelineStart(const std::string& value)
{
    timelineStart_ = value;
    timelineStartIsSet_ = true;
}

bool ImageWatermark::timelineStartIsSet() const
{
    return timelineStartIsSet_;
}

void ImageWatermark::unsettimelineStart()
{
    timelineStartIsSet_ = false;
}

std::string ImageWatermark::getTimelineDuration() const
{
    return timelineDuration_;
}

void ImageWatermark::setTimelineDuration(const std::string& value)
{
    timelineDuration_ = value;
    timelineDurationIsSet_ = true;
}

bool ImageWatermark::timelineDurationIsSet() const
{
    return timelineDurationIsSet_;
}

void ImageWatermark::unsettimelineDuration()
{
    timelineDurationIsSet_ = false;
}

std::string ImageWatermark::getRandomTimeMin() const
{
    return randomTimeMin_;
}

void ImageWatermark::setRandomTimeMin(const std::string& value)
{
    randomTimeMin_ = value;
    randomTimeMinIsSet_ = true;
}

bool ImageWatermark::randomTimeMinIsSet() const
{
    return randomTimeMinIsSet_;
}

void ImageWatermark::unsetrandomTimeMin()
{
    randomTimeMinIsSet_ = false;
}

std::string ImageWatermark::getRandomTimeMax() const
{
    return randomTimeMax_;
}

void ImageWatermark::setRandomTimeMax(const std::string& value)
{
    randomTimeMax_ = value;
    randomTimeMaxIsSet_ = true;
}

bool ImageWatermark::randomTimeMaxIsSet() const
{
    return randomTimeMaxIsSet_;
}

void ImageWatermark::unsetrandomTimeMax()
{
    randomTimeMaxIsSet_ = false;
}

std::string ImageWatermark::getImageProcess() const
{
    return imageProcess_;
}

void ImageWatermark::setImageProcess(const std::string& value)
{
    imageProcess_ = value;
    imageProcessIsSet_ = true;
}

bool ImageWatermark::imageProcessIsSet() const
{
    return imageProcessIsSet_;
}

void ImageWatermark::unsetimageProcess()
{
    imageProcessIsSet_ = false;
}

std::string ImageWatermark::getWidth() const
{
    return width_;
}

void ImageWatermark::setWidth(const std::string& value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool ImageWatermark::widthIsSet() const
{
    return widthIsSet_;
}

void ImageWatermark::unsetwidth()
{
    widthIsSet_ = false;
}

std::string ImageWatermark::getHeight() const
{
    return height_;
}

void ImageWatermark::setHeight(const std::string& value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool ImageWatermark::heightIsSet() const
{
    return heightIsSet_;
}

void ImageWatermark::unsetheight()
{
    heightIsSet_ = false;
}

std::string ImageWatermark::getBase() const
{
    return base_;
}

void ImageWatermark::setBase(const std::string& value)
{
    base_ = value;
    baseIsSet_ = true;
}

bool ImageWatermark::baseIsSet() const
{
    return baseIsSet_;
}

void ImageWatermark::unsetbase()
{
    baseIsSet_ = false;
}

}
}
}
}
}


