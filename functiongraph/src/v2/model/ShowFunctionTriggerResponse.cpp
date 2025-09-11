

#include "huaweicloud/functiongraph/v2/model/ShowFunctionTriggerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowFunctionTriggerResponse::ShowFunctionTriggerResponse()
{
    triggerId_ = "";
    triggerIdIsSet_ = false;
    triggerTypeCode_ = "";
    triggerTypeCodeIsSet_ = false;
    triggerStatus_ = "";
    triggerStatusIsSet_ = false;
    eventDataIsSet_ = false;
    lastUpdatedTime_ = utility::datetime();
    lastUpdatedTimeIsSet_ = false;
    createdTime_ = utility::datetime();
    createdTimeIsSet_ = false;
}

ShowFunctionTriggerResponse::~ShowFunctionTriggerResponse() = default;

void ShowFunctionTriggerResponse::validate()
{
}

web::json::value ShowFunctionTriggerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(triggerIdIsSet_) {
        val[utility::conversions::to_string_t("trigger_id")] = ModelBase::toJson(triggerId_);
    }
    if(triggerTypeCodeIsSet_) {
        val[utility::conversions::to_string_t("trigger_type_code")] = ModelBase::toJson(triggerTypeCode_);
    }
    if(triggerStatusIsSet_) {
        val[utility::conversions::to_string_t("trigger_status")] = ModelBase::toJson(triggerStatus_);
    }
    if(eventDataIsSet_) {
        val[utility::conversions::to_string_t("event_data")] = ModelBase::toJson(eventData_);
    }
    if(lastUpdatedTimeIsSet_) {
        val[utility::conversions::to_string_t("last_updated_time")] = ModelBase::toJson(lastUpdatedTime_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }

    return val;
}
bool ShowFunctionTriggerResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("trigger_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("event_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_data"));
        if(!fieldValue.is_null())
        {
            TriggerEventDataResponseBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_updated_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_updated_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    return ok;
}


std::string ShowFunctionTriggerResponse::getTriggerId() const
{
    return triggerId_;
}

void ShowFunctionTriggerResponse::setTriggerId(const std::string& value)
{
    triggerId_ = value;
    triggerIdIsSet_ = true;
}

bool ShowFunctionTriggerResponse::triggerIdIsSet() const
{
    return triggerIdIsSet_;
}

void ShowFunctionTriggerResponse::unsettriggerId()
{
    triggerIdIsSet_ = false;
}

std::string ShowFunctionTriggerResponse::getTriggerTypeCode() const
{
    return triggerTypeCode_;
}

void ShowFunctionTriggerResponse::setTriggerTypeCode(const std::string& value)
{
    triggerTypeCode_ = value;
    triggerTypeCodeIsSet_ = true;
}

bool ShowFunctionTriggerResponse::triggerTypeCodeIsSet() const
{
    return triggerTypeCodeIsSet_;
}

void ShowFunctionTriggerResponse::unsettriggerTypeCode()
{
    triggerTypeCodeIsSet_ = false;
}

std::string ShowFunctionTriggerResponse::getTriggerStatus() const
{
    return triggerStatus_;
}

void ShowFunctionTriggerResponse::setTriggerStatus(const std::string& value)
{
    triggerStatus_ = value;
    triggerStatusIsSet_ = true;
}

bool ShowFunctionTriggerResponse::triggerStatusIsSet() const
{
    return triggerStatusIsSet_;
}

void ShowFunctionTriggerResponse::unsettriggerStatus()
{
    triggerStatusIsSet_ = false;
}

TriggerEventDataResponseBody ShowFunctionTriggerResponse::getEventData() const
{
    return eventData_;
}

void ShowFunctionTriggerResponse::setEventData(const TriggerEventDataResponseBody& value)
{
    eventData_ = value;
    eventDataIsSet_ = true;
}

bool ShowFunctionTriggerResponse::eventDataIsSet() const
{
    return eventDataIsSet_;
}

void ShowFunctionTriggerResponse::unseteventData()
{
    eventDataIsSet_ = false;
}

utility::datetime ShowFunctionTriggerResponse::getLastUpdatedTime() const
{
    return lastUpdatedTime_;
}

void ShowFunctionTriggerResponse::setLastUpdatedTime(const utility::datetime& value)
{
    lastUpdatedTime_ = value;
    lastUpdatedTimeIsSet_ = true;
}

bool ShowFunctionTriggerResponse::lastUpdatedTimeIsSet() const
{
    return lastUpdatedTimeIsSet_;
}

void ShowFunctionTriggerResponse::unsetlastUpdatedTime()
{
    lastUpdatedTimeIsSet_ = false;
}

utility::datetime ShowFunctionTriggerResponse::getCreatedTime() const
{
    return createdTime_;
}

void ShowFunctionTriggerResponse::setCreatedTime(const utility::datetime& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool ShowFunctionTriggerResponse::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void ShowFunctionTriggerResponse::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

}
}
}
}
}


