

#include "huaweicloud/mpc/v1/model/ClipInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ClipInfo::ClipInfo()
{
    inputIsSet_ = false;
    timelineStart_ = "";
    timelineStartIsSet_ = false;
    timelineEnd_ = "";
    timelineEndIsSet_ = false;
}

ClipInfo::~ClipInfo() = default;

void ClipInfo::validate()
{
}

web::json::value ClipInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(timelineStartIsSet_) {
        val[utility::conversions::to_string_t("timeline_start")] = ModelBase::toJson(timelineStart_);
    }
    if(timelineEndIsSet_) {
        val[utility::conversions::to_string_t("timeline_end")] = ModelBase::toJson(timelineEnd_);
    }

    return val;
}

bool ClipInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("timeline_end"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeline_end"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimelineEnd(refVal);
        }
    }
    return ok;
}


ObsObjInfo ClipInfo::getInput() const
{
    return input_;
}

void ClipInfo::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool ClipInfo::inputIsSet() const
{
    return inputIsSet_;
}

void ClipInfo::unsetinput()
{
    inputIsSet_ = false;
}

std::string ClipInfo::getTimelineStart() const
{
    return timelineStart_;
}

void ClipInfo::setTimelineStart(const std::string& value)
{
    timelineStart_ = value;
    timelineStartIsSet_ = true;
}

bool ClipInfo::timelineStartIsSet() const
{
    return timelineStartIsSet_;
}

void ClipInfo::unsettimelineStart()
{
    timelineStartIsSet_ = false;
}

std::string ClipInfo::getTimelineEnd() const
{
    return timelineEnd_;
}

void ClipInfo::setTimelineEnd(const std::string& value)
{
    timelineEnd_ = value;
    timelineEndIsSet_ = true;
}

bool ClipInfo::timelineEndIsSet() const
{
    return timelineEndIsSet_;
}

void ClipInfo::unsettimelineEnd()
{
    timelineEndIsSet_ = false;
}

}
}
}
}
}


