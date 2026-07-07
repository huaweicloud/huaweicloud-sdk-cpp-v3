

#include "huaweicloud/gaussdbforopengauss/v3/model/BatchExecuteEventsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BatchExecuteEventsRequestBody::BatchExecuteEventsRequestBody()
{
    eventInstancesIsSet_ = false;
    operationType_ = "";
    operationTypeIsSet_ = false;
    eventScheduleWindowIsSet_ = false;
}

BatchExecuteEventsRequestBody::~BatchExecuteEventsRequestBody() = default;

void BatchExecuteEventsRequestBody::validate()
{
}

web::json::value BatchExecuteEventsRequestBody::toJson() const
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
bool BatchExecuteEventsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("event_instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_instances"));
        if(!fieldValue.is_null())
        {
            std::vector<EventInstanceOption> refVal;
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
            EventScheduleWindowOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventScheduleWindow(refVal);
        }
    }
    return ok;
}


std::vector<EventInstanceOption>& BatchExecuteEventsRequestBody::getEventInstances()
{
    return eventInstances_;
}

void BatchExecuteEventsRequestBody::setEventInstances(const std::vector<EventInstanceOption>& value)
{
    eventInstances_ = value;
    eventInstancesIsSet_ = true;
}

bool BatchExecuteEventsRequestBody::eventInstancesIsSet() const
{
    return eventInstancesIsSet_;
}

void BatchExecuteEventsRequestBody::unseteventInstances()
{
    eventInstancesIsSet_ = false;
}

std::string BatchExecuteEventsRequestBody::getOperationType() const
{
    return operationType_;
}

void BatchExecuteEventsRequestBody::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool BatchExecuteEventsRequestBody::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void BatchExecuteEventsRequestBody::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

EventScheduleWindowOption BatchExecuteEventsRequestBody::getEventScheduleWindow() const
{
    return eventScheduleWindow_;
}

void BatchExecuteEventsRequestBody::setEventScheduleWindow(const EventScheduleWindowOption& value)
{
    eventScheduleWindow_ = value;
    eventScheduleWindowIsSet_ = true;
}

bool BatchExecuteEventsRequestBody::eventScheduleWindowIsSet() const
{
    return eventScheduleWindowIsSet_;
}

void BatchExecuteEventsRequestBody::unseteventScheduleWindow()
{
    eventScheduleWindowIsSet_ = false;
}

}
}
}
}
}


