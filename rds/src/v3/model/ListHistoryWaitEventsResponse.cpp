

#include "huaweicloud/rds/v3/model/ListHistoryWaitEventsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListHistoryWaitEventsResponse::ListHistoryWaitEventsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    eventsIsSet_ = false;
}

ListHistoryWaitEventsResponse::~ListHistoryWaitEventsResponse() = default;

void ListHistoryWaitEventsResponse::validate()
{
}

web::json::value ListHistoryWaitEventsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(eventsIsSet_) {
        val[utility::conversions::to_string_t("events")] = ModelBase::toJson(events_);
    }

    return val;
}
bool ListHistoryWaitEventsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("events"));
        if(!fieldValue.is_null())
        {
            std::vector<Event> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvents(refVal);
        }
    }
    return ok;
}


int32_t ListHistoryWaitEventsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListHistoryWaitEventsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListHistoryWaitEventsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListHistoryWaitEventsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<Event>& ListHistoryWaitEventsResponse::getEvents()
{
    return events_;
}

void ListHistoryWaitEventsResponse::setEvents(const std::vector<Event>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool ListHistoryWaitEventsResponse::eventsIsSet() const
{
    return eventsIsSet_;
}

void ListHistoryWaitEventsResponse::unsetevents()
{
    eventsIsSet_ = false;
}

}
}
}
}
}


