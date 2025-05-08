

#include "huaweicloud/vod/v1/model/EditMediaTaskInput.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




EditMediaTaskInput::EditMediaTaskInput()
{
    inputIsSet_ = false;
    timelineStart_ = "";
    timelineStartIsSet_ = false;
    timelineEnd_ = "";
    timelineEndIsSet_ = false;
}

EditMediaTaskInput::~EditMediaTaskInput() = default;

void EditMediaTaskInput::validate()
{
}

web::json::value EditMediaTaskInput::toJson() const
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
bool EditMediaTaskInput::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            ObsInfo refVal;
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


ObsInfo EditMediaTaskInput::getInput() const
{
    return input_;
}

void EditMediaTaskInput::setInput(const ObsInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool EditMediaTaskInput::inputIsSet() const
{
    return inputIsSet_;
}

void EditMediaTaskInput::unsetinput()
{
    inputIsSet_ = false;
}

std::string EditMediaTaskInput::getTimelineStart() const
{
    return timelineStart_;
}

void EditMediaTaskInput::setTimelineStart(const std::string& value)
{
    timelineStart_ = value;
    timelineStartIsSet_ = true;
}

bool EditMediaTaskInput::timelineStartIsSet() const
{
    return timelineStartIsSet_;
}

void EditMediaTaskInput::unsettimelineStart()
{
    timelineStartIsSet_ = false;
}

std::string EditMediaTaskInput::getTimelineEnd() const
{
    return timelineEnd_;
}

void EditMediaTaskInput::setTimelineEnd(const std::string& value)
{
    timelineEnd_ = value;
    timelineEndIsSet_ = true;
}

bool EditMediaTaskInput::timelineEndIsSet() const
{
    return timelineEndIsSet_;
}

void EditMediaTaskInput::unsettimelineEnd()
{
    timelineEndIsSet_ = false;
}

}
}
}
}
}


