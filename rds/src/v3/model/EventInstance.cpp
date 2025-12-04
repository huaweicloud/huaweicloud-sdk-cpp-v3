

#include "huaweicloud/rds/v3/model/EventInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




EventInstance::EventInstance()
{
    eventId_ = "";
    eventIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

EventInstance::~EventInstance() = default;

void EventInstance::validate()
{
}

web::json::value EventInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventIdIsSet_) {
        val[utility::conversions::to_string_t("event_id")] = ModelBase::toJson(eventId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool EventInstance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("event_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string EventInstance::getEventId() const
{
    return eventId_;
}

void EventInstance::setEventId(const std::string& value)
{
    eventId_ = value;
    eventIdIsSet_ = true;
}

bool EventInstance::eventIdIsSet() const
{
    return eventIdIsSet_;
}

void EventInstance::unseteventId()
{
    eventIdIsSet_ = false;
}

std::string EventInstance::getInstanceId() const
{
    return instanceId_;
}

void EventInstance::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool EventInstance::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void EventInstance::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


