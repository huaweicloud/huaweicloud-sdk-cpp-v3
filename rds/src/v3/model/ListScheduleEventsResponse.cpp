

#include "huaweicloud/rds/v3/model/ListScheduleEventsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListScheduleEventsResponse::ListScheduleEventsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    inquiringCount_ = 0;
    inquiringCountIsSet_ = false;
    scheduleCount_ = 0;
    scheduleCountIsSet_ = false;
    executingCount_ = 0;
    executingCountIsSet_ = false;
    failedCount_ = 0;
    failedCountIsSet_ = false;
    eventsIsSet_ = false;
}

ListScheduleEventsResponse::~ListScheduleEventsResponse() = default;

void ListScheduleEventsResponse::validate()
{
}

web::json::value ListScheduleEventsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(inquiringCountIsSet_) {
        val[utility::conversions::to_string_t("inquiring_count")] = ModelBase::toJson(inquiringCount_);
    }
    if(scheduleCountIsSet_) {
        val[utility::conversions::to_string_t("schedule_count")] = ModelBase::toJson(scheduleCount_);
    }
    if(executingCountIsSet_) {
        val[utility::conversions::to_string_t("executing_count")] = ModelBase::toJson(executingCount_);
    }
    if(failedCountIsSet_) {
        val[utility::conversions::to_string_t("failed_count")] = ModelBase::toJson(failedCount_);
    }
    if(eventsIsSet_) {
        val[utility::conversions::to_string_t("events")] = ModelBase::toJson(events_);
    }

    return val;
}
bool ListScheduleEventsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inquiring_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inquiring_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInquiringCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schedule_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduleCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executing_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executing_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutingCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("events"));
        if(!fieldValue.is_null())
        {
            std::vector<ScheduleEventInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvents(refVal);
        }
    }
    return ok;
}


int32_t ListScheduleEventsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListScheduleEventsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListScheduleEventsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListScheduleEventsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

int32_t ListScheduleEventsResponse::getInquiringCount() const
{
    return inquiringCount_;
}

void ListScheduleEventsResponse::setInquiringCount(int32_t value)
{
    inquiringCount_ = value;
    inquiringCountIsSet_ = true;
}

bool ListScheduleEventsResponse::inquiringCountIsSet() const
{
    return inquiringCountIsSet_;
}

void ListScheduleEventsResponse::unsetinquiringCount()
{
    inquiringCountIsSet_ = false;
}

int32_t ListScheduleEventsResponse::getScheduleCount() const
{
    return scheduleCount_;
}

void ListScheduleEventsResponse::setScheduleCount(int32_t value)
{
    scheduleCount_ = value;
    scheduleCountIsSet_ = true;
}

bool ListScheduleEventsResponse::scheduleCountIsSet() const
{
    return scheduleCountIsSet_;
}

void ListScheduleEventsResponse::unsetscheduleCount()
{
    scheduleCountIsSet_ = false;
}

int32_t ListScheduleEventsResponse::getExecutingCount() const
{
    return executingCount_;
}

void ListScheduleEventsResponse::setExecutingCount(int32_t value)
{
    executingCount_ = value;
    executingCountIsSet_ = true;
}

bool ListScheduleEventsResponse::executingCountIsSet() const
{
    return executingCountIsSet_;
}

void ListScheduleEventsResponse::unsetexecutingCount()
{
    executingCountIsSet_ = false;
}

int32_t ListScheduleEventsResponse::getFailedCount() const
{
    return failedCount_;
}

void ListScheduleEventsResponse::setFailedCount(int32_t value)
{
    failedCount_ = value;
    failedCountIsSet_ = true;
}

bool ListScheduleEventsResponse::failedCountIsSet() const
{
    return failedCountIsSet_;
}

void ListScheduleEventsResponse::unsetfailedCount()
{
    failedCountIsSet_ = false;
}

std::vector<ScheduleEventInfo>& ListScheduleEventsResponse::getEvents()
{
    return events_;
}

void ListScheduleEventsResponse::setEvents(const std::vector<ScheduleEventInfo>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool ListScheduleEventsResponse::eventsIsSet() const
{
    return eventsIsSet_;
}

void ListScheduleEventsResponse::unsetevents()
{
    eventsIsSet_ = false;
}

}
}
}
}
}


