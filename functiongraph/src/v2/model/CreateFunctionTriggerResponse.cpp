

#include "huaweicloud/functiongraph/v2/model/CreateFunctionTriggerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateFunctionTriggerResponse::CreateFunctionTriggerResponse()
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

CreateFunctionTriggerResponse::~CreateFunctionTriggerResponse() = default;

void CreateFunctionTriggerResponse::validate()
{
}

web::json::value CreateFunctionTriggerResponse::toJson() const
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
bool CreateFunctionTriggerResponse::fromJson(const web::json::value& val)
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


std::string CreateFunctionTriggerResponse::getTriggerId() const
{
    return triggerId_;
}

void CreateFunctionTriggerResponse::setTriggerId(const std::string& value)
{
    triggerId_ = value;
    triggerIdIsSet_ = true;
}

bool CreateFunctionTriggerResponse::triggerIdIsSet() const
{
    return triggerIdIsSet_;
}

void CreateFunctionTriggerResponse::unsettriggerId()
{
    triggerIdIsSet_ = false;
}

std::string CreateFunctionTriggerResponse::getTriggerTypeCode() const
{
    return triggerTypeCode_;
}

void CreateFunctionTriggerResponse::setTriggerTypeCode(const std::string& value)
{
    triggerTypeCode_ = value;
    triggerTypeCodeIsSet_ = true;
}

bool CreateFunctionTriggerResponse::triggerTypeCodeIsSet() const
{
    return triggerTypeCodeIsSet_;
}

void CreateFunctionTriggerResponse::unsettriggerTypeCode()
{
    triggerTypeCodeIsSet_ = false;
}

std::string CreateFunctionTriggerResponse::getTriggerStatus() const
{
    return triggerStatus_;
}

void CreateFunctionTriggerResponse::setTriggerStatus(const std::string& value)
{
    triggerStatus_ = value;
    triggerStatusIsSet_ = true;
}

bool CreateFunctionTriggerResponse::triggerStatusIsSet() const
{
    return triggerStatusIsSet_;
}

void CreateFunctionTriggerResponse::unsettriggerStatus()
{
    triggerStatusIsSet_ = false;
}

TriggerEventDataResponseBody CreateFunctionTriggerResponse::getEventData() const
{
    return eventData_;
}

void CreateFunctionTriggerResponse::setEventData(const TriggerEventDataResponseBody& value)
{
    eventData_ = value;
    eventDataIsSet_ = true;
}

bool CreateFunctionTriggerResponse::eventDataIsSet() const
{
    return eventDataIsSet_;
}

void CreateFunctionTriggerResponse::unseteventData()
{
    eventDataIsSet_ = false;
}

utility::datetime CreateFunctionTriggerResponse::getLastUpdatedTime() const
{
    return lastUpdatedTime_;
}

void CreateFunctionTriggerResponse::setLastUpdatedTime(const utility::datetime& value)
{
    lastUpdatedTime_ = value;
    lastUpdatedTimeIsSet_ = true;
}

bool CreateFunctionTriggerResponse::lastUpdatedTimeIsSet() const
{
    return lastUpdatedTimeIsSet_;
}

void CreateFunctionTriggerResponse::unsetlastUpdatedTime()
{
    lastUpdatedTimeIsSet_ = false;
}

utility::datetime CreateFunctionTriggerResponse::getCreatedTime() const
{
    return createdTime_;
}

void CreateFunctionTriggerResponse::setCreatedTime(const utility::datetime& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool CreateFunctionTriggerResponse::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void CreateFunctionTriggerResponse::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

}
}
}
}
}


