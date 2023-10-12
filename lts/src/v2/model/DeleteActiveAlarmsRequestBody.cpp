

#include "huaweicloud/lts/v2/model/DeleteActiveAlarmsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteActiveAlarmsRequestBody::DeleteActiveAlarmsRequestBody()
{
    eventsIsSet_ = false;
}

DeleteActiveAlarmsRequestBody::~DeleteActiveAlarmsRequestBody() = default;

void DeleteActiveAlarmsRequestBody::validate()
{
}

web::json::value DeleteActiveAlarmsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventsIsSet_) {
        val[utility::conversions::to_string_t("events")] = ModelBase::toJson(events_);
    }

    return val;
}
bool DeleteActiveAlarmsRequestBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::vector<Event>& DeleteActiveAlarmsRequestBody::getEvents()
{
    return events_;
}

void DeleteActiveAlarmsRequestBody::setEvents(const std::vector<Event>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool DeleteActiveAlarmsRequestBody::eventsIsSet() const
{
    return eventsIsSet_;
}

void DeleteActiveAlarmsRequestBody::unsetevents()
{
    eventsIsSet_ = false;
}

}
}
}
}
}


