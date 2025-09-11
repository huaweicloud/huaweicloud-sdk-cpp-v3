

#include "huaweicloud/functiongraph/v2/model/UpdateTriggerRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateTriggerRequestBody::UpdateTriggerRequestBody()
{
    triggerStatus_ = "";
    triggerStatusIsSet_ = false;
    eventDataIsSet_ = false;
}

UpdateTriggerRequestBody::~UpdateTriggerRequestBody() = default;

void UpdateTriggerRequestBody::validate()
{
}

web::json::value UpdateTriggerRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(triggerStatusIsSet_) {
        val[utility::conversions::to_string_t("trigger_status")] = ModelBase::toJson(triggerStatus_);
    }
    if(eventDataIsSet_) {
        val[utility::conversions::to_string_t("event_data")] = ModelBase::toJson(eventData_);
    }

    return val;
}
bool UpdateTriggerRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            std::vector<UpdateriggerEventData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventData(refVal);
        }
    }
    return ok;
}


std::string UpdateTriggerRequestBody::getTriggerStatus() const
{
    return triggerStatus_;
}

void UpdateTriggerRequestBody::setTriggerStatus(const std::string& value)
{
    triggerStatus_ = value;
    triggerStatusIsSet_ = true;
}

bool UpdateTriggerRequestBody::triggerStatusIsSet() const
{
    return triggerStatusIsSet_;
}

void UpdateTriggerRequestBody::unsettriggerStatus()
{
    triggerStatusIsSet_ = false;
}

std::vector<UpdateriggerEventData>& UpdateTriggerRequestBody::getEventData()
{
    return eventData_;
}

void UpdateTriggerRequestBody::setEventData(const std::vector<UpdateriggerEventData>& value)
{
    eventData_ = value;
    eventDataIsSet_ = true;
}

bool UpdateTriggerRequestBody::eventDataIsSet() const
{
    return eventDataIsSet_;
}

void UpdateTriggerRequestBody::unseteventData()
{
    eventDataIsSet_ = false;
}

}
}
}
}
}


