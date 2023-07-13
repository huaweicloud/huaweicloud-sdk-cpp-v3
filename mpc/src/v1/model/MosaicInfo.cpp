

#include "huaweicloud/mpc/v1/model/MosaicInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




MosaicInfo::MosaicInfo()
{
    timelineStart_ = "";
    timelineStartIsSet_ = false;
    timelineDuration_ = "";
    timelineDurationIsSet_ = false;
    dx_ = "";
    dxIsSet_ = false;
    dy_ = "";
    dyIsSet_ = false;
    width_ = "";
    widthIsSet_ = false;
    height_ = "";
    heightIsSet_ = false;
}

MosaicInfo::~MosaicInfo() = default;

void MosaicInfo::validate()
{
}

web::json::value MosaicInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timelineStartIsSet_) {
        val[utility::conversions::to_string_t("timeline_start")] = ModelBase::toJson(timelineStart_);
    }
    if(timelineDurationIsSet_) {
        val[utility::conversions::to_string_t("timeline_duration")] = ModelBase::toJson(timelineDuration_);
    }
    if(dxIsSet_) {
        val[utility::conversions::to_string_t("dx")] = ModelBase::toJson(dx_);
    }
    if(dyIsSet_) {
        val[utility::conversions::to_string_t("dy")] = ModelBase::toJson(dy_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }

    return val;
}

bool MosaicInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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

std::string MosaicInfo::getTimelineStart() const
{
    return timelineStart_;
}

void MosaicInfo::setTimelineStart(const std::string& value)
{
    timelineStart_ = value;
    timelineStartIsSet_ = true;
}

bool MosaicInfo::timelineStartIsSet() const
{
    return timelineStartIsSet_;
}

void MosaicInfo::unsettimelineStart()
{
    timelineStartIsSet_ = false;
}

std::string MosaicInfo::getTimelineDuration() const
{
    return timelineDuration_;
}

void MosaicInfo::setTimelineDuration(const std::string& value)
{
    timelineDuration_ = value;
    timelineDurationIsSet_ = true;
}

bool MosaicInfo::timelineDurationIsSet() const
{
    return timelineDurationIsSet_;
}

void MosaicInfo::unsettimelineDuration()
{
    timelineDurationIsSet_ = false;
}

std::string MosaicInfo::getDx() const
{
    return dx_;
}

void MosaicInfo::setDx(const std::string& value)
{
    dx_ = value;
    dxIsSet_ = true;
}

bool MosaicInfo::dxIsSet() const
{
    return dxIsSet_;
}

void MosaicInfo::unsetdx()
{
    dxIsSet_ = false;
}

std::string MosaicInfo::getDy() const
{
    return dy_;
}

void MosaicInfo::setDy(const std::string& value)
{
    dy_ = value;
    dyIsSet_ = true;
}

bool MosaicInfo::dyIsSet() const
{
    return dyIsSet_;
}

void MosaicInfo::unsetdy()
{
    dyIsSet_ = false;
}

std::string MosaicInfo::getWidth() const
{
    return width_;
}

void MosaicInfo::setWidth(const std::string& value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool MosaicInfo::widthIsSet() const
{
    return widthIsSet_;
}

void MosaicInfo::unsetwidth()
{
    widthIsSet_ = false;
}

std::string MosaicInfo::getHeight() const
{
    return height_;
}

void MosaicInfo::setHeight(const std::string& value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool MosaicInfo::heightIsSet() const
{
    return heightIsSet_;
}

void MosaicInfo::unsetheight()
{
    heightIsSet_ = false;
}

}
}
}
}
}


