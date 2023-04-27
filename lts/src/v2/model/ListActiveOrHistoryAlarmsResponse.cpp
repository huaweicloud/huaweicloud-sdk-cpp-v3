

#include "huaweicloud/lts/v2/model/ListActiveOrHistoryAlarmsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListActiveOrHistoryAlarmsResponse::ListActiveOrHistoryAlarmsResponse()
{
    eventsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListActiveOrHistoryAlarmsResponse::~ListActiveOrHistoryAlarmsResponse() = default;

void ListActiveOrHistoryAlarmsResponse::validate()
{
}

web::json::value ListActiveOrHistoryAlarmsResponse::toJson() const
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

bool ListActiveOrHistoryAlarmsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("events"));
        if(!fieldValue.is_null())
        {
            std::vector<Events> refVal;
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


std::vector<Events>& ListActiveOrHistoryAlarmsResponse::getEvents()
{
    return events_;
}

void ListActiveOrHistoryAlarmsResponse::setEvents(const std::vector<Events>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool ListActiveOrHistoryAlarmsResponse::eventsIsSet() const
{
    return eventsIsSet_;
}

void ListActiveOrHistoryAlarmsResponse::unsetevents()
{
    eventsIsSet_ = false;
}

PageInfo ListActiveOrHistoryAlarmsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListActiveOrHistoryAlarmsResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListActiveOrHistoryAlarmsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListActiveOrHistoryAlarmsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


