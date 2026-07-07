

#include "huaweicloud/gaussdbforopengauss/v3/model/ListEventsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListEventsResponse::ListEventsResponse()
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

ListEventsResponse::~ListEventsResponse() = default;

void ListEventsResponse::validate()
{
}

web::json::value ListEventsResponse::toJson() const
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
bool ListEventsResponse::fromJson(const web::json::value& val)
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
            std::vector<ScheduleEventInfoResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvents(refVal);
        }
    }
    return ok;
}


int32_t ListEventsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListEventsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListEventsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListEventsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

int32_t ListEventsResponse::getInquiringCount() const
{
    return inquiringCount_;
}

void ListEventsResponse::setInquiringCount(int32_t value)
{
    inquiringCount_ = value;
    inquiringCountIsSet_ = true;
}

bool ListEventsResponse::inquiringCountIsSet() const
{
    return inquiringCountIsSet_;
}

void ListEventsResponse::unsetinquiringCount()
{
    inquiringCountIsSet_ = false;
}

int32_t ListEventsResponse::getScheduleCount() const
{
    return scheduleCount_;
}

void ListEventsResponse::setScheduleCount(int32_t value)
{
    scheduleCount_ = value;
    scheduleCountIsSet_ = true;
}

bool ListEventsResponse::scheduleCountIsSet() const
{
    return scheduleCountIsSet_;
}

void ListEventsResponse::unsetscheduleCount()
{
    scheduleCountIsSet_ = false;
}

int32_t ListEventsResponse::getExecutingCount() const
{
    return executingCount_;
}

void ListEventsResponse::setExecutingCount(int32_t value)
{
    executingCount_ = value;
    executingCountIsSet_ = true;
}

bool ListEventsResponse::executingCountIsSet() const
{
    return executingCountIsSet_;
}

void ListEventsResponse::unsetexecutingCount()
{
    executingCountIsSet_ = false;
}

int32_t ListEventsResponse::getFailedCount() const
{
    return failedCount_;
}

void ListEventsResponse::setFailedCount(int32_t value)
{
    failedCount_ = value;
    failedCountIsSet_ = true;
}

bool ListEventsResponse::failedCountIsSet() const
{
    return failedCountIsSet_;
}

void ListEventsResponse::unsetfailedCount()
{
    failedCountIsSet_ = false;
}

std::vector<ScheduleEventInfoResult>& ListEventsResponse::getEvents()
{
    return events_;
}

void ListEventsResponse::setEvents(const std::vector<ScheduleEventInfoResult>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool ListEventsResponse::eventsIsSet() const
{
    return eventsIsSet_;
}

void ListEventsResponse::unsetevents()
{
    eventsIsSet_ = false;
}

}
}
}
}
}


