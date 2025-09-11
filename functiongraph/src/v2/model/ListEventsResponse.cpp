

#include "huaweicloud/functiongraph/v2/model/ListEventsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListEventsResponse::ListEventsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    eventsIsSet_ = false;
    nextMarker_ = 0L;
    nextMarkerIsSet_ = false;
}

ListEventsResponse::~ListEventsResponse() = default;

void ListEventsResponse::validate()
{
}

web::json::value ListEventsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(eventsIsSet_) {
        val[utility::conversions::to_string_t("events")] = ModelBase::toJson(events_);
    }
    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }

    return val;
}
bool ListEventsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("events"));
        if(!fieldValue.is_null())
        {
            std::vector<ListEventsResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next_marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_marker"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextMarker(refVal);
        }
    }
    return ok;
}


int32_t ListEventsResponse::getCount() const
{
    return count_;
}

void ListEventsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListEventsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListEventsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<ListEventsResult>& ListEventsResponse::getEvents()
{
    return events_;
}

void ListEventsResponse::setEvents(const std::vector<ListEventsResult>& value)
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

int64_t ListEventsResponse::getNextMarker() const
{
    return nextMarker_;
}

void ListEventsResponse::setNextMarker(int64_t value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ListEventsResponse::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ListEventsResponse::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

}
}
}
}
}


