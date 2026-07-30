

#include "huaweicloud/modelarts/v1/model/ListScheduledEventsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListScheduledEventsResponse::ListScheduledEventsResponse()
{
    eventsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListScheduledEventsResponse::~ListScheduledEventsResponse() = default;

void ListScheduledEventsResponse::validate()
{
}

web::json::value ListScheduledEventsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventsIsSet_) {
        val[utility::conversions::to_string_t("events")] = ModelBase::toJson(events_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListScheduledEventsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("events"));
        if(!fieldValue.is_null())
        {
            std::vector<ScheduledEvent> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<ScheduledEvent>& ListScheduledEventsResponse::getEvents()
{
    return events_;
}

void ListScheduledEventsResponse::setEvents(const std::vector<ScheduledEvent>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool ListScheduledEventsResponse::eventsIsSet() const
{
    return eventsIsSet_;
}

void ListScheduledEventsResponse::unsetevents()
{
    eventsIsSet_ = false;
}

int32_t ListScheduledEventsResponse::getCount() const
{
    return count_;
}

void ListScheduledEventsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListScheduledEventsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListScheduledEventsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::string ListScheduledEventsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListScheduledEventsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListScheduledEventsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListScheduledEventsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


