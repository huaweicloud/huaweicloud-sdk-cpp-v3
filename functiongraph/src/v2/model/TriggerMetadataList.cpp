

#include "huaweicloud/functiongraph/v2/model/TriggerMetadataList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




TriggerMetadataList::TriggerMetadataList()
{
    triggerName_ = "";
    triggerNameIsSet_ = false;
    triggerType_ = "";
    triggerTypeIsSet_ = false;
    eventType_ = "";
    eventTypeIsSet_ = false;
    eventData_ = "";
    eventDataIsSet_ = false;
}

TriggerMetadataList::~TriggerMetadataList() = default;

void TriggerMetadataList::validate()
{
}

web::json::value TriggerMetadataList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(triggerNameIsSet_) {
        val[utility::conversions::to_string_t("trigger_name")] = ModelBase::toJson(triggerName_);
    }
    if(triggerTypeIsSet_) {
        val[utility::conversions::to_string_t("trigger_type")] = ModelBase::toJson(triggerType_);
    }
    if(eventTypeIsSet_) {
        val[utility::conversions::to_string_t("event_type")] = ModelBase::toJson(eventType_);
    }
    if(eventDataIsSet_) {
        val[utility::conversions::to_string_t("event_data")] = ModelBase::toJson(eventData_);
    }

    return val;
}
bool TriggerMetadataList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("trigger_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventData(refVal);
        }
    }
    return ok;
}


std::string TriggerMetadataList::getTriggerName() const
{
    return triggerName_;
}

void TriggerMetadataList::setTriggerName(const std::string& value)
{
    triggerName_ = value;
    triggerNameIsSet_ = true;
}

bool TriggerMetadataList::triggerNameIsSet() const
{
    return triggerNameIsSet_;
}

void TriggerMetadataList::unsettriggerName()
{
    triggerNameIsSet_ = false;
}

std::string TriggerMetadataList::getTriggerType() const
{
    return triggerType_;
}

void TriggerMetadataList::setTriggerType(const std::string& value)
{
    triggerType_ = value;
    triggerTypeIsSet_ = true;
}

bool TriggerMetadataList::triggerTypeIsSet() const
{
    return triggerTypeIsSet_;
}

void TriggerMetadataList::unsettriggerType()
{
    triggerTypeIsSet_ = false;
}

std::string TriggerMetadataList::getEventType() const
{
    return eventType_;
}

void TriggerMetadataList::setEventType(const std::string& value)
{
    eventType_ = value;
    eventTypeIsSet_ = true;
}

bool TriggerMetadataList::eventTypeIsSet() const
{
    return eventTypeIsSet_;
}

void TriggerMetadataList::unseteventType()
{
    eventTypeIsSet_ = false;
}

std::string TriggerMetadataList::getEventData() const
{
    return eventData_;
}

void TriggerMetadataList::setEventData(const std::string& value)
{
    eventData_ = value;
    eventDataIsSet_ = true;
}

bool TriggerMetadataList::eventDataIsSet() const
{
    return eventDataIsSet_;
}

void TriggerMetadataList::unseteventData()
{
    eventDataIsSet_ = false;
}

}
}
}
}
}


