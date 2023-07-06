

#include "huaweicloud/mpc/v1/model/BasicWatermark.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




BasicWatermark::BasicWatermark()
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
}

BasicWatermark::~BasicWatermark() = default;

void BasicWatermark::validate()
{
}

web::json::value BasicWatermark::toJson() const
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

    return val;
}

bool BasicWatermark::fromJson(const web::json::value& val)
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
    return ok;
}

std::string BasicWatermark::getDx() const
{
    return dx_;
}

void BasicWatermark::setDx(const std::string& value)
{
    dx_ = value;
    dxIsSet_ = true;
}

bool BasicWatermark::dxIsSet() const
{
    return dxIsSet_;
}

void BasicWatermark::unsetdx()
{
    dxIsSet_ = false;
}

std::string BasicWatermark::getDy() const
{
    return dy_;
}

void BasicWatermark::setDy(const std::string& value)
{
    dy_ = value;
    dyIsSet_ = true;
}

bool BasicWatermark::dyIsSet() const
{
    return dyIsSet_;
}

void BasicWatermark::unsetdy()
{
    dyIsSet_ = false;
}

std::string BasicWatermark::getReferpos() const
{
    return referpos_;
}

void BasicWatermark::setReferpos(const std::string& value)
{
    referpos_ = value;
    referposIsSet_ = true;
}

bool BasicWatermark::referposIsSet() const
{
    return referposIsSet_;
}

void BasicWatermark::unsetreferpos()
{
    referposIsSet_ = false;
}

std::string BasicWatermark::getTimelineStart() const
{
    return timelineStart_;
}

void BasicWatermark::setTimelineStart(const std::string& value)
{
    timelineStart_ = value;
    timelineStartIsSet_ = true;
}

bool BasicWatermark::timelineStartIsSet() const
{
    return timelineStartIsSet_;
}

void BasicWatermark::unsettimelineStart()
{
    timelineStartIsSet_ = false;
}

std::string BasicWatermark::getTimelineDuration() const
{
    return timelineDuration_;
}

void BasicWatermark::setTimelineDuration(const std::string& value)
{
    timelineDuration_ = value;
    timelineDurationIsSet_ = true;
}

bool BasicWatermark::timelineDurationIsSet() const
{
    return timelineDurationIsSet_;
}

void BasicWatermark::unsettimelineDuration()
{
    timelineDurationIsSet_ = false;
}

}
}
}
}
}


