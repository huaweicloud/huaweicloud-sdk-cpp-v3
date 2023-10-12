

#include "huaweicloud/csms/v1/model/ListSecretEventsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ListSecretEventsResponse::ListSecretEventsResponse()
{
    eventsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListSecretEventsResponse::~ListSecretEventsResponse() = default;

void ListSecretEventsResponse::validate()
{
}

web::json::value ListSecretEventsResponse::toJson() const
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
bool ListSecretEventsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("events"));
        if(!fieldValue.is_null())
        {
            std::vector<Event> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<Event>& ListSecretEventsResponse::getEvents()
{
    return events_;
}

void ListSecretEventsResponse::setEvents(const std::vector<Event>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool ListSecretEventsResponse::eventsIsSet() const
{
    return eventsIsSet_;
}

void ListSecretEventsResponse::unsetevents()
{
    eventsIsSet_ = false;
}

PageInfo ListSecretEventsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListSecretEventsResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListSecretEventsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListSecretEventsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


