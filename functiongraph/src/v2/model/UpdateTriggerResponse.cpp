

#include "huaweicloud/functiongraph/v2/model/UpdateTriggerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateTriggerResponse::UpdateTriggerResponse()
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

UpdateTriggerResponse::~UpdateTriggerResponse() = default;

void UpdateTriggerResponse::validate()
{
}

web::json::value UpdateTriggerResponse::toJson() const
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
bool UpdateTriggerResponse::fromJson(const web::json::value& val)
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


std::string UpdateTriggerResponse::getTriggerId() const
{
    return triggerId_;
}

void UpdateTriggerResponse::setTriggerId(const std::string& value)
{
    triggerId_ = value;
    triggerIdIsSet_ = true;
}

bool UpdateTriggerResponse::triggerIdIsSet() const
{
    return triggerIdIsSet_;
}

void UpdateTriggerResponse::unsettriggerId()
{
    triggerIdIsSet_ = false;
}

std::string UpdateTriggerResponse::getTriggerTypeCode() const
{
    return triggerTypeCode_;
}

void UpdateTriggerResponse::setTriggerTypeCode(const std::string& value)
{
    triggerTypeCode_ = value;
    triggerTypeCodeIsSet_ = true;
}

bool UpdateTriggerResponse::triggerTypeCodeIsSet() const
{
    return triggerTypeCodeIsSet_;
}

void UpdateTriggerResponse::unsettriggerTypeCode()
{
    triggerTypeCodeIsSet_ = false;
}

std::string UpdateTriggerResponse::getTriggerStatus() const
{
    return triggerStatus_;
}

void UpdateTriggerResponse::setTriggerStatus(const std::string& value)
{
    triggerStatus_ = value;
    triggerStatusIsSet_ = true;
}

bool UpdateTriggerResponse::triggerStatusIsSet() const
{
    return triggerStatusIsSet_;
}

void UpdateTriggerResponse::unsettriggerStatus()
{
    triggerStatusIsSet_ = false;
}

TriggerEventDataResponseBody UpdateTriggerResponse::getEventData() const
{
    return eventData_;
}

void UpdateTriggerResponse::setEventData(const TriggerEventDataResponseBody& value)
{
    eventData_ = value;
    eventDataIsSet_ = true;
}

bool UpdateTriggerResponse::eventDataIsSet() const
{
    return eventDataIsSet_;
}

void UpdateTriggerResponse::unseteventData()
{
    eventDataIsSet_ = false;
}

utility::datetime UpdateTriggerResponse::getLastUpdatedTime() const
{
    return lastUpdatedTime_;
}

void UpdateTriggerResponse::setLastUpdatedTime(const utility::datetime& value)
{
    lastUpdatedTime_ = value;
    lastUpdatedTimeIsSet_ = true;
}

bool UpdateTriggerResponse::lastUpdatedTimeIsSet() const
{
    return lastUpdatedTimeIsSet_;
}

void UpdateTriggerResponse::unsetlastUpdatedTime()
{
    lastUpdatedTimeIsSet_ = false;
}

utility::datetime UpdateTriggerResponse::getCreatedTime() const
{
    return createdTime_;
}

void UpdateTriggerResponse::setCreatedTime(const utility::datetime& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool UpdateTriggerResponse::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void UpdateTriggerResponse::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

}
}
}
}
}


