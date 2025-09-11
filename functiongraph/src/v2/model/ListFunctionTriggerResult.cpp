

#include "huaweicloud/functiongraph/v2/model/ListFunctionTriggerResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionTriggerResult::ListFunctionTriggerResult()
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

ListFunctionTriggerResult::~ListFunctionTriggerResult() = default;

void ListFunctionTriggerResult::validate()
{
}

web::json::value ListFunctionTriggerResult::toJson() const
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
bool ListFunctionTriggerResult::fromJson(const web::json::value& val)
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


std::string ListFunctionTriggerResult::getTriggerId() const
{
    return triggerId_;
}

void ListFunctionTriggerResult::setTriggerId(const std::string& value)
{
    triggerId_ = value;
    triggerIdIsSet_ = true;
}

bool ListFunctionTriggerResult::triggerIdIsSet() const
{
    return triggerIdIsSet_;
}

void ListFunctionTriggerResult::unsettriggerId()
{
    triggerIdIsSet_ = false;
}

std::string ListFunctionTriggerResult::getTriggerTypeCode() const
{
    return triggerTypeCode_;
}

void ListFunctionTriggerResult::setTriggerTypeCode(const std::string& value)
{
    triggerTypeCode_ = value;
    triggerTypeCodeIsSet_ = true;
}

bool ListFunctionTriggerResult::triggerTypeCodeIsSet() const
{
    return triggerTypeCodeIsSet_;
}

void ListFunctionTriggerResult::unsettriggerTypeCode()
{
    triggerTypeCodeIsSet_ = false;
}

std::string ListFunctionTriggerResult::getTriggerStatus() const
{
    return triggerStatus_;
}

void ListFunctionTriggerResult::setTriggerStatus(const std::string& value)
{
    triggerStatus_ = value;
    triggerStatusIsSet_ = true;
}

bool ListFunctionTriggerResult::triggerStatusIsSet() const
{
    return triggerStatusIsSet_;
}

void ListFunctionTriggerResult::unsettriggerStatus()
{
    triggerStatusIsSet_ = false;
}

TriggerEventDataResponseBody ListFunctionTriggerResult::getEventData() const
{
    return eventData_;
}

void ListFunctionTriggerResult::setEventData(const TriggerEventDataResponseBody& value)
{
    eventData_ = value;
    eventDataIsSet_ = true;
}

bool ListFunctionTriggerResult::eventDataIsSet() const
{
    return eventDataIsSet_;
}

void ListFunctionTriggerResult::unseteventData()
{
    eventDataIsSet_ = false;
}

utility::datetime ListFunctionTriggerResult::getLastUpdatedTime() const
{
    return lastUpdatedTime_;
}

void ListFunctionTriggerResult::setLastUpdatedTime(const utility::datetime& value)
{
    lastUpdatedTime_ = value;
    lastUpdatedTimeIsSet_ = true;
}

bool ListFunctionTriggerResult::lastUpdatedTimeIsSet() const
{
    return lastUpdatedTimeIsSet_;
}

void ListFunctionTriggerResult::unsetlastUpdatedTime()
{
    lastUpdatedTimeIsSet_ = false;
}

utility::datetime ListFunctionTriggerResult::getCreatedTime() const
{
    return createdTime_;
}

void ListFunctionTriggerResult::setCreatedTime(const utility::datetime& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool ListFunctionTriggerResult::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void ListFunctionTriggerResult::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

}
}
}
}
}


