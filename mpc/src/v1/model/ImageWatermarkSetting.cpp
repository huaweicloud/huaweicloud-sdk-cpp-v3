

#include "huaweicloud/mpc/v1/model/ImageWatermarkSetting.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ImageWatermarkSetting::ImageWatermarkSetting()
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
    overlayInput_ = "";
    overlayInputIsSet_ = false;
    inputIsSet_ = false;
    base_ = "";
    baseIsSet_ = false;
}

ImageWatermarkSetting::~ImageWatermarkSetting() = default;

void ImageWatermarkSetting::validate()
{
}

web::json::value ImageWatermarkSetting::toJson() const
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
    if(overlayInputIsSet_) {
        val[utility::conversions::to_string_t("overlay_input")] = ModelBase::toJson(overlayInput_);
    }
    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(baseIsSet_) {
        val[utility::conversions::to_string_t("base")] = ModelBase::toJson(base_);
    }

    return val;
}
bool ImageWatermarkSetting::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("overlay_input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("overlay_input"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOverlayInput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
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


std::string ImageWatermarkSetting::getDx() const
{
    return dx_;
}

void ImageWatermarkSetting::setDx(const std::string& value)
{
    dx_ = value;
    dxIsSet_ = true;
}

bool ImageWatermarkSetting::dxIsSet() const
{
    return dxIsSet_;
}

void ImageWatermarkSetting::unsetdx()
{
    dxIsSet_ = false;
}

std::string ImageWatermarkSetting::getDy() const
{
    return dy_;
}

void ImageWatermarkSetting::setDy(const std::string& value)
{
    dy_ = value;
    dyIsSet_ = true;
}

bool ImageWatermarkSetting::dyIsSet() const
{
    return dyIsSet_;
}

void ImageWatermarkSetting::unsetdy()
{
    dyIsSet_ = false;
}

std::string ImageWatermarkSetting::getReferpos() const
{
    return referpos_;
}

void ImageWatermarkSetting::setReferpos(const std::string& value)
{
    referpos_ = value;
    referposIsSet_ = true;
}

bool ImageWatermarkSetting::referposIsSet() const
{
    return referposIsSet_;
}

void ImageWatermarkSetting::unsetreferpos()
{
    referposIsSet_ = false;
}

std::string ImageWatermarkSetting::getTimelineStart() const
{
    return timelineStart_;
}

void ImageWatermarkSetting::setTimelineStart(const std::string& value)
{
    timelineStart_ = value;
    timelineStartIsSet_ = true;
}

bool ImageWatermarkSetting::timelineStartIsSet() const
{
    return timelineStartIsSet_;
}

void ImageWatermarkSetting::unsettimelineStart()
{
    timelineStartIsSet_ = false;
}

std::string ImageWatermarkSetting::getTimelineDuration() const
{
    return timelineDuration_;
}

void ImageWatermarkSetting::setTimelineDuration(const std::string& value)
{
    timelineDuration_ = value;
    timelineDurationIsSet_ = true;
}

bool ImageWatermarkSetting::timelineDurationIsSet() const
{
    return timelineDurationIsSet_;
}

void ImageWatermarkSetting::unsettimelineDuration()
{
    timelineDurationIsSet_ = false;
}

std::string ImageWatermarkSetting::getOverlayInput() const
{
    return overlayInput_;
}

void ImageWatermarkSetting::setOverlayInput(const std::string& value)
{
    overlayInput_ = value;
    overlayInputIsSet_ = true;
}

bool ImageWatermarkSetting::overlayInputIsSet() const
{
    return overlayInputIsSet_;
}

void ImageWatermarkSetting::unsetoverlayInput()
{
    overlayInputIsSet_ = false;
}

ObsObjInfo ImageWatermarkSetting::getInput() const
{
    return input_;
}

void ImageWatermarkSetting::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool ImageWatermarkSetting::inputIsSet() const
{
    return inputIsSet_;
}

void ImageWatermarkSetting::unsetinput()
{
    inputIsSet_ = false;
}

std::string ImageWatermarkSetting::getBase() const
{
    return base_;
}

void ImageWatermarkSetting::setBase(const std::string& value)
{
    base_ = value;
    baseIsSet_ = true;
}

bool ImageWatermarkSetting::baseIsSet() const
{
    return baseIsSet_;
}

void ImageWatermarkSetting::unsetbase()
{
    baseIsSet_ = false;
}

}
}
}
}
}


