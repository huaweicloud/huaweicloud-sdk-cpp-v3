

#include "huaweicloud/lts/v2/model/Metadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




Metadata::Metadata()
{
    eventType_ = "";
    eventTypeIsSet_ = false;
    eventId_ = "";
    eventIdIsSet_ = false;
    eventSeverity_ = "";
    eventSeverityIsSet_ = false;
    eventName_ = "";
    eventNameIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceProvider_ = "";
    resourceProviderIsSet_ = false;
    ltsAlarmType_ = "";
    ltsAlarmTypeIsSet_ = false;
    logGroupName_ = "";
    logGroupNameIsSet_ = false;
    logStreamName_ = "";
    logStreamNameIsSet_ = false;
    eventSubtype_ = "";
    eventSubtypeIsSet_ = false;
}

Metadata::~Metadata() = default;

void Metadata::validate()
{
}

web::json::value Metadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventTypeIsSet_) {
        val[utility::conversions::to_string_t("event_type")] = ModelBase::toJson(eventType_);
    }
    if(eventIdIsSet_) {
        val[utility::conversions::to_string_t("event_id")] = ModelBase::toJson(eventId_);
    }
    if(eventSeverityIsSet_) {
        val[utility::conversions::to_string_t("event_severity")] = ModelBase::toJson(eventSeverity_);
    }
    if(eventNameIsSet_) {
        val[utility::conversions::to_string_t("event_name")] = ModelBase::toJson(eventName_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceProviderIsSet_) {
        val[utility::conversions::to_string_t("resource_provider")] = ModelBase::toJson(resourceProvider_);
    }
    if(ltsAlarmTypeIsSet_) {
        val[utility::conversions::to_string_t("lts_alarm_type")] = ModelBase::toJson(ltsAlarmType_);
    }
    if(logGroupNameIsSet_) {
        val[utility::conversions::to_string_t("log_group_name")] = ModelBase::toJson(logGroupName_);
    }
    if(logStreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name")] = ModelBase::toJson(logStreamName_);
    }
    if(eventSubtypeIsSet_) {
        val[utility::conversions::to_string_t("event_subtype")] = ModelBase::toJson(eventSubtype_);
    }

    return val;
}
bool Metadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("event_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_severity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_provider"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_provider"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceProvider(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_alarm_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_alarm_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsAlarmType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_subtype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_subtype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventSubtype(refVal);
        }
    }
    return ok;
}


std::string Metadata::getEventType() const
{
    return eventType_;
}

void Metadata::setEventType(const std::string& value)
{
    eventType_ = value;
    eventTypeIsSet_ = true;
}

bool Metadata::eventTypeIsSet() const
{
    return eventTypeIsSet_;
}

void Metadata::unseteventType()
{
    eventTypeIsSet_ = false;
}

std::string Metadata::getEventId() const
{
    return eventId_;
}

void Metadata::setEventId(const std::string& value)
{
    eventId_ = value;
    eventIdIsSet_ = true;
}

bool Metadata::eventIdIsSet() const
{
    return eventIdIsSet_;
}

void Metadata::unseteventId()
{
    eventIdIsSet_ = false;
}

std::string Metadata::getEventSeverity() const
{
    return eventSeverity_;
}

void Metadata::setEventSeverity(const std::string& value)
{
    eventSeverity_ = value;
    eventSeverityIsSet_ = true;
}

bool Metadata::eventSeverityIsSet() const
{
    return eventSeverityIsSet_;
}

void Metadata::unseteventSeverity()
{
    eventSeverityIsSet_ = false;
}

std::string Metadata::getEventName() const
{
    return eventName_;
}

void Metadata::setEventName(const std::string& value)
{
    eventName_ = value;
    eventNameIsSet_ = true;
}

bool Metadata::eventNameIsSet() const
{
    return eventNameIsSet_;
}

void Metadata::unseteventName()
{
    eventNameIsSet_ = false;
}

std::string Metadata::getResourceType() const
{
    return resourceType_;
}

void Metadata::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool Metadata::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void Metadata::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string Metadata::getResourceId() const
{
    return resourceId_;
}

void Metadata::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool Metadata::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void Metadata::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string Metadata::getResourceProvider() const
{
    return resourceProvider_;
}

void Metadata::setResourceProvider(const std::string& value)
{
    resourceProvider_ = value;
    resourceProviderIsSet_ = true;
}

bool Metadata::resourceProviderIsSet() const
{
    return resourceProviderIsSet_;
}

void Metadata::unsetresourceProvider()
{
    resourceProviderIsSet_ = false;
}

std::string Metadata::getLtsAlarmType() const
{
    return ltsAlarmType_;
}

void Metadata::setLtsAlarmType(const std::string& value)
{
    ltsAlarmType_ = value;
    ltsAlarmTypeIsSet_ = true;
}

bool Metadata::ltsAlarmTypeIsSet() const
{
    return ltsAlarmTypeIsSet_;
}

void Metadata::unsetltsAlarmType()
{
    ltsAlarmTypeIsSet_ = false;
}

std::string Metadata::getLogGroupName() const
{
    return logGroupName_;
}

void Metadata::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool Metadata::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void Metadata::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::string Metadata::getLogStreamName() const
{
    return logStreamName_;
}

void Metadata::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool Metadata::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void Metadata::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

std::string Metadata::getEventSubtype() const
{
    return eventSubtype_;
}

void Metadata::setEventSubtype(const std::string& value)
{
    eventSubtype_ = value;
    eventSubtypeIsSet_ = true;
}

bool Metadata::eventSubtypeIsSet() const
{
    return eventSubtypeIsSet_;
}

void Metadata::unseteventSubtype()
{
    eventSubtypeIsSet_ = false;
}

}
}
}
}
}


