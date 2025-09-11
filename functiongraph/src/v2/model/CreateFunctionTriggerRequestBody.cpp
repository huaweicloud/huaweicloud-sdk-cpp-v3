

#include "huaweicloud/functiongraph/v2/model/CreateFunctionTriggerRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateFunctionTriggerRequestBody::CreateFunctionTriggerRequestBody()
{
    triggerTypeCode_ = "";
    triggerTypeCodeIsSet_ = false;
    triggerStatus_ = "";
    triggerStatusIsSet_ = false;
    eventTypeCode_ = "";
    eventTypeCodeIsSet_ = false;
    eventDataIsSet_ = false;
}

CreateFunctionTriggerRequestBody::~CreateFunctionTriggerRequestBody() = default;

void CreateFunctionTriggerRequestBody::validate()
{
}

web::json::value CreateFunctionTriggerRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(triggerTypeCodeIsSet_) {
        val[utility::conversions::to_string_t("trigger_type_code")] = ModelBase::toJson(triggerTypeCode_);
    }
    if(triggerStatusIsSet_) {
        val[utility::conversions::to_string_t("trigger_status")] = ModelBase::toJson(triggerStatus_);
    }
    if(eventTypeCodeIsSet_) {
        val[utility::conversions::to_string_t("event_type_code")] = ModelBase::toJson(eventTypeCode_);
    }
    if(eventDataIsSet_) {
        val[utility::conversions::to_string_t("event_data")] = ModelBase::toJson(eventData_);
    }

    return val;
}
bool CreateFunctionTriggerRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("trigger_type_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_type_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerTypeCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_type_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_type_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventTypeCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_data"));
        if(!fieldValue.is_null())
        {
            TriggerEventDataRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventData(refVal);
        }
    }
    return ok;
}


std::string CreateFunctionTriggerRequestBody::getTriggerTypeCode() const
{
    return triggerTypeCode_;
}

void CreateFunctionTriggerRequestBody::setTriggerTypeCode(const std::string& value)
{
    triggerTypeCode_ = value;
    triggerTypeCodeIsSet_ = true;
}

bool CreateFunctionTriggerRequestBody::triggerTypeCodeIsSet() const
{
    return triggerTypeCodeIsSet_;
}

void CreateFunctionTriggerRequestBody::unsettriggerTypeCode()
{
    triggerTypeCodeIsSet_ = false;
}

std::string CreateFunctionTriggerRequestBody::getTriggerStatus() const
{
    return triggerStatus_;
}

void CreateFunctionTriggerRequestBody::setTriggerStatus(const std::string& value)
{
    triggerStatus_ = value;
    triggerStatusIsSet_ = true;
}

bool CreateFunctionTriggerRequestBody::triggerStatusIsSet() const
{
    return triggerStatusIsSet_;
}

void CreateFunctionTriggerRequestBody::unsettriggerStatus()
{
    triggerStatusIsSet_ = false;
}

std::string CreateFunctionTriggerRequestBody::getEventTypeCode() const
{
    return eventTypeCode_;
}

void CreateFunctionTriggerRequestBody::setEventTypeCode(const std::string& value)
{
    eventTypeCode_ = value;
    eventTypeCodeIsSet_ = true;
}

bool CreateFunctionTriggerRequestBody::eventTypeCodeIsSet() const
{
    return eventTypeCodeIsSet_;
}

void CreateFunctionTriggerRequestBody::unseteventTypeCode()
{
    eventTypeCodeIsSet_ = false;
}

TriggerEventDataRequestBody CreateFunctionTriggerRequestBody::getEventData() const
{
    return eventData_;
}

void CreateFunctionTriggerRequestBody::setEventData(const TriggerEventDataRequestBody& value)
{
    eventData_ = value;
    eventDataIsSet_ = true;
}

bool CreateFunctionTriggerRequestBody::eventDataIsSet() const
{
    return eventDataIsSet_;
}

void CreateFunctionTriggerRequestBody::unseteventData()
{
    eventDataIsSet_ = false;
}

}
}
}
}
}


