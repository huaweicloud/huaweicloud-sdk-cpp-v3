

#include "huaweicloud/vod/v1/model/SVGWatermark.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




SVGWatermark::SVGWatermark()
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
    randomTimeMin_ = 0.0f;
    randomTimeMinIsSet_ = false;
    randomTimeMax_ = 0.0f;
    randomTimeMaxIsSet_ = false;
    width_ = "";
    widthIsSet_ = false;
    height_ = "";
    heightIsSet_ = false;
}

SVGWatermark::~SVGWatermark() = default;

void SVGWatermark::validate()
{
}

web::json::value SVGWatermark::toJson() const
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
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }

    return val;
}
bool SVGWatermark::fromJson(const web::json::value& val)
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
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRandomTimeMin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("random_time_max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("random_time_max"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRandomTimeMax(refVal);
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
    return ok;
}


std::string SVGWatermark::getDx() const
{
    return dx_;
}

void SVGWatermark::setDx(const std::string& value)
{
    dx_ = value;
    dxIsSet_ = true;
}

bool SVGWatermark::dxIsSet() const
{
    return dxIsSet_;
}

void SVGWatermark::unsetdx()
{
    dxIsSet_ = false;
}

std::string SVGWatermark::getDy() const
{
    return dy_;
}

void SVGWatermark::setDy(const std::string& value)
{
    dy_ = value;
    dyIsSet_ = true;
}

bool SVGWatermark::dyIsSet() const
{
    return dyIsSet_;
}

void SVGWatermark::unsetdy()
{
    dyIsSet_ = false;
}

std::string SVGWatermark::getReferpos() const
{
    return referpos_;
}

void SVGWatermark::setReferpos(const std::string& value)
{
    referpos_ = value;
    referposIsSet_ = true;
}

bool SVGWatermark::referposIsSet() const
{
    return referposIsSet_;
}

void SVGWatermark::unsetreferpos()
{
    referposIsSet_ = false;
}

std::string SVGWatermark::getTimelineStart() const
{
    return timelineStart_;
}

void SVGWatermark::setTimelineStart(const std::string& value)
{
    timelineStart_ = value;
    timelineStartIsSet_ = true;
}

bool SVGWatermark::timelineStartIsSet() const
{
    return timelineStartIsSet_;
}

void SVGWatermark::unsettimelineStart()
{
    timelineStartIsSet_ = false;
}

std::string SVGWatermark::getTimelineDuration() const
{
    return timelineDuration_;
}

void SVGWatermark::setTimelineDuration(const std::string& value)
{
    timelineDuration_ = value;
    timelineDurationIsSet_ = true;
}

bool SVGWatermark::timelineDurationIsSet() const
{
    return timelineDurationIsSet_;
}

void SVGWatermark::unsettimelineDuration()
{
    timelineDurationIsSet_ = false;
}

float SVGWatermark::getRandomTimeMin() const
{
    return randomTimeMin_;
}

void SVGWatermark::setRandomTimeMin(float value)
{
    randomTimeMin_ = value;
    randomTimeMinIsSet_ = true;
}

bool SVGWatermark::randomTimeMinIsSet() const
{
    return randomTimeMinIsSet_;
}

void SVGWatermark::unsetrandomTimeMin()
{
    randomTimeMinIsSet_ = false;
}

float SVGWatermark::getRandomTimeMax() const
{
    return randomTimeMax_;
}

void SVGWatermark::setRandomTimeMax(float value)
{
    randomTimeMax_ = value;
    randomTimeMaxIsSet_ = true;
}

bool SVGWatermark::randomTimeMaxIsSet() const
{
    return randomTimeMaxIsSet_;
}

void SVGWatermark::unsetrandomTimeMax()
{
    randomTimeMaxIsSet_ = false;
}

std::string SVGWatermark::getWidth() const
{
    return width_;
}

void SVGWatermark::setWidth(const std::string& value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool SVGWatermark::widthIsSet() const
{
    return widthIsSet_;
}

void SVGWatermark::unsetwidth()
{
    widthIsSet_ = false;
}

std::string SVGWatermark::getHeight() const
{
    return height_;
}

void SVGWatermark::setHeight(const std::string& value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool SVGWatermark::heightIsSet() const
{
    return heightIsSet_;
}

void SVGWatermark::unsetheight()
{
    heightIsSet_ = false;
}

}
}
}
}
}


