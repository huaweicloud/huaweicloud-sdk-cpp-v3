

#include "huaweicloud/ecs/v2/model/EventResponse_source.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




EventResponse_source::EventResponse_source()
{
    type_ = "";
    typeIsSet_ = false;
    hostScheduledEventId_ = "";
    hostScheduledEventIdIsSet_ = false;
}

EventResponse_source::~EventResponse_source() = default;

void EventResponse_source::validate()
{
}

web::json::value EventResponse_source::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(hostScheduledEventIdIsSet_) {
        val[utility::conversions::to_string_t("host_scheduled_event_id")] = ModelBase::toJson(hostScheduledEventId_);
    }

    return val;
}
bool EventResponse_source::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_scheduled_event_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_scheduled_event_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostScheduledEventId(refVal);
        }
    }
    return ok;
}


std::string EventResponse_source::getType() const
{
    return type_;
}

void EventResponse_source::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool EventResponse_source::typeIsSet() const
{
    return typeIsSet_;
}

void EventResponse_source::unsettype()
{
    typeIsSet_ = false;
}

std::string EventResponse_source::getHostScheduledEventId() const
{
    return hostScheduledEventId_;
}

void EventResponse_source::setHostScheduledEventId(const std::string& value)
{
    hostScheduledEventId_ = value;
    hostScheduledEventIdIsSet_ = true;
}

bool EventResponse_source::hostScheduledEventIdIsSet() const
{
    return hostScheduledEventIdIsSet_;
}

void EventResponse_source::unsethostScheduledEventId()
{
    hostScheduledEventIdIsSet_ = false;
}

}
}
}
}
}


