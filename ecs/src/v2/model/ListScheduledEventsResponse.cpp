

#include "huaweicloud/ecs/v2/model/ListScheduledEventsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListScheduledEventsResponse::ListScheduledEventsResponse()
{
    eventsIsSet_ = false;
    pageInfoIsSet_ = false;
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
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
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
            std::vector<EventResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            ListEventsResponsePageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<EventResponse>& ListScheduledEventsResponse::getEvents()
{
    return events_;
}

void ListScheduledEventsResponse::setEvents(const std::vector<EventResponse>& value)
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

ListEventsResponsePageInfo ListScheduledEventsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListScheduledEventsResponse::setPageInfo(const ListEventsResponsePageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListScheduledEventsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListScheduledEventsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


