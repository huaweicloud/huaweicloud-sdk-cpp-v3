

#include "huaweicloud/gaussdbforopengauss/v3/model/EventTimeInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




EventTimeInfo::EventTimeInfo()
{
    eventsIsSet_ = false;
    leftTime_ = 0L;
    leftTimeIsSet_ = false;
    otherTime_ = 0L;
    otherTimeIsSet_ = false;
}

EventTimeInfo::~EventTimeInfo() = default;

void EventTimeInfo::validate()
{
}

web::json::value EventTimeInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventsIsSet_) {
        val[utility::conversions::to_string_t("events")] = ModelBase::toJson(events_);
    }
    if(leftTimeIsSet_) {
        val[utility::conversions::to_string_t("left_time")] = ModelBase::toJson(leftTime_);
    }
    if(otherTimeIsSet_) {
        val[utility::conversions::to_string_t("other_time")] = ModelBase::toJson(otherTime_);
    }

    return val;
}
bool EventTimeInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("events"));
        if(!fieldValue.is_null())
        {
            std::vector<TopEventInfoResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("left_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("left_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeftTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("other_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("other_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOtherTime(refVal);
        }
    }
    return ok;
}


std::vector<TopEventInfoResult>& EventTimeInfo::getEvents()
{
    return events_;
}

void EventTimeInfo::setEvents(const std::vector<TopEventInfoResult>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool EventTimeInfo::eventsIsSet() const
{
    return eventsIsSet_;
}

void EventTimeInfo::unsetevents()
{
    eventsIsSet_ = false;
}

int64_t EventTimeInfo::getLeftTime() const
{
    return leftTime_;
}

void EventTimeInfo::setLeftTime(int64_t value)
{
    leftTime_ = value;
    leftTimeIsSet_ = true;
}

bool EventTimeInfo::leftTimeIsSet() const
{
    return leftTimeIsSet_;
}

void EventTimeInfo::unsetleftTime()
{
    leftTimeIsSet_ = false;
}

int64_t EventTimeInfo::getOtherTime() const
{
    return otherTime_;
}

void EventTimeInfo::setOtherTime(int64_t value)
{
    otherTime_ = value;
    otherTimeIsSet_ = true;
}

bool EventTimeInfo::otherTimeIsSet() const
{
    return otherTimeIsSet_;
}

void EventTimeInfo::unsetotherTime()
{
    otherTimeIsSet_ = false;
}

}
}
}
}
}


