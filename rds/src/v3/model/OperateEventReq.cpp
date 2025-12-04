

#include "huaweicloud/rds/v3/model/OperateEventReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




OperateEventReq::OperateEventReq()
{
    eventInstancesIsSet_ = false;
    operationType_ = "";
    operationTypeIsSet_ = false;
    eventScheduleWindowIsSet_ = false;
}

OperateEventReq::~OperateEventReq() = default;

void OperateEventReq::validate()
{
}

web::json::value OperateEventReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventInstancesIsSet_) {
        val[utility::conversions::to_string_t("event_instances")] = ModelBase::toJson(eventInstances_);
    }
    if(operationTypeIsSet_) {
        val[utility::conversions::to_string_t("operation_type")] = ModelBase::toJson(operationType_);
    }
    if(eventScheduleWindowIsSet_) {
        val[utility::conversions::to_string_t("event_schedule_window")] = ModelBase::toJson(eventScheduleWindow_);
    }

    return val;
}
bool OperateEventReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("event_instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_instances"));
        if(!fieldValue.is_null())
        {
            std::vector<EventInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventInstances(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_schedule_window"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_schedule_window"));
        if(!fieldValue.is_null())
        {
            EventScheduleWindow refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventScheduleWindow(refVal);
        }
    }
    return ok;
}


std::vector<EventInstance>& OperateEventReq::getEventInstances()
{
    return eventInstances_;
}

void OperateEventReq::setEventInstances(const std::vector<EventInstance>& value)
{
    eventInstances_ = value;
    eventInstancesIsSet_ = true;
}

bool OperateEventReq::eventInstancesIsSet() const
{
    return eventInstancesIsSet_;
}

void OperateEventReq::unseteventInstances()
{
    eventInstancesIsSet_ = false;
}

std::string OperateEventReq::getOperationType() const
{
    return operationType_;
}

void OperateEventReq::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool OperateEventReq::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void OperateEventReq::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

EventScheduleWindow OperateEventReq::getEventScheduleWindow() const
{
    return eventScheduleWindow_;
}

void OperateEventReq::setEventScheduleWindow(const EventScheduleWindow& value)
{
    eventScheduleWindow_ = value;
    eventScheduleWindowIsSet_ = true;
}

bool OperateEventReq::eventScheduleWindowIsSet() const
{
    return eventScheduleWindowIsSet_;
}

void OperateEventReq::unseteventScheduleWindow()
{
    eventScheduleWindowIsSet_ = false;
}

}
}
}
}
}


