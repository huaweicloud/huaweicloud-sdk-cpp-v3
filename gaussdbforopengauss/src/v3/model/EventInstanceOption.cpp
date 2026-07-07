

#include "huaweicloud/gaussdbforopengauss/v3/model/EventInstanceOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




EventInstanceOption::EventInstanceOption()
{
    eventId_ = "";
    eventIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

EventInstanceOption::~EventInstanceOption() = default;

void EventInstanceOption::validate()
{
}

web::json::value EventInstanceOption::toJson() const
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
bool EventInstanceOption::fromJson(const web::json::value& val)
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


std::string EventInstanceOption::getEventId() const
{
    return eventId_;
}

void EventInstanceOption::setEventId(const std::string& value)
{
    eventId_ = value;
    eventIdIsSet_ = true;
}

bool EventInstanceOption::eventIdIsSet() const
{
    return eventIdIsSet_;
}

void EventInstanceOption::unseteventId()
{
    eventIdIsSet_ = false;
}

std::string EventInstanceOption::getInstanceId() const
{
    return instanceId_;
}

void EventInstanceOption::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool EventInstanceOption::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void EventInstanceOption::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


