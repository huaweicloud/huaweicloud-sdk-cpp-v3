

#include "huaweicloud/csms/v1/model/Record.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




Record::Record()
{
    eventName_ = "";
    eventNameIsSet_ = false;
    triggerEventType_ = "";
    triggerEventTypeIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    secretName_ = "";
    secretNameIsSet_ = false;
    secretType_ = "";
    secretTypeIsSet_ = false;
    notificationTargetName_ = "";
    notificationTargetNameIsSet_ = false;
    notificationTargetId_ = "";
    notificationTargetIdIsSet_ = false;
    notificationContent_ = "";
    notificationContentIsSet_ = false;
    notificationStatus_ = "";
    notificationStatusIsSet_ = false;
}

Record::~Record() = default;

void Record::validate()
{
}

web::json::value Record::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventNameIsSet_) {
        val[utility::conversions::to_string_t("event_name")] = ModelBase::toJson(eventName_);
    }
    if(triggerEventTypeIsSet_) {
        val[utility::conversions::to_string_t("trigger_event_type")] = ModelBase::toJson(triggerEventType_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }
    if(secretTypeIsSet_) {
        val[utility::conversions::to_string_t("secret_type")] = ModelBase::toJson(secretType_);
    }
    if(notificationTargetNameIsSet_) {
        val[utility::conversions::to_string_t("notification_target_name")] = ModelBase::toJson(notificationTargetName_);
    }
    if(notificationTargetIdIsSet_) {
        val[utility::conversions::to_string_t("notification_target_id")] = ModelBase::toJson(notificationTargetId_);
    }
    if(notificationContentIsSet_) {
        val[utility::conversions::to_string_t("notification_content")] = ModelBase::toJson(notificationContent_);
    }
    if(notificationStatusIsSet_) {
        val[utility::conversions::to_string_t("notification_status")] = ModelBase::toJson(notificationStatus_);
    }

    return val;
}

bool Record::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("event_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_event_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_event_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerEventType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notification_target_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notification_target_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotificationTargetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notification_target_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notification_target_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotificationTargetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notification_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notification_content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotificationContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notification_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notification_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotificationStatus(refVal);
        }
    }
    return ok;
}

std::string Record::getEventName() const
{
    return eventName_;
}

void Record::setEventName(const std::string& value)
{
    eventName_ = value;
    eventNameIsSet_ = true;
}

bool Record::eventNameIsSet() const
{
    return eventNameIsSet_;
}

void Record::unseteventName()
{
    eventNameIsSet_ = false;
}

std::string Record::getTriggerEventType() const
{
    return triggerEventType_;
}

void Record::setTriggerEventType(const std::string& value)
{
    triggerEventType_ = value;
    triggerEventTypeIsSet_ = true;
}

bool Record::triggerEventTypeIsSet() const
{
    return triggerEventTypeIsSet_;
}

void Record::unsettriggerEventType()
{
    triggerEventTypeIsSet_ = false;
}

int64_t Record::getCreateTime() const
{
    return createTime_;
}

void Record::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool Record::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void Record::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string Record::getSecretName() const
{
    return secretName_;
}

void Record::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool Record::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void Record::unsetsecretName()
{
    secretNameIsSet_ = false;
}

std::string Record::getSecretType() const
{
    return secretType_;
}

void Record::setSecretType(const std::string& value)
{
    secretType_ = value;
    secretTypeIsSet_ = true;
}

bool Record::secretTypeIsSet() const
{
    return secretTypeIsSet_;
}

void Record::unsetsecretType()
{
    secretTypeIsSet_ = false;
}

std::string Record::getNotificationTargetName() const
{
    return notificationTargetName_;
}

void Record::setNotificationTargetName(const std::string& value)
{
    notificationTargetName_ = value;
    notificationTargetNameIsSet_ = true;
}

bool Record::notificationTargetNameIsSet() const
{
    return notificationTargetNameIsSet_;
}

void Record::unsetnotificationTargetName()
{
    notificationTargetNameIsSet_ = false;
}

std::string Record::getNotificationTargetId() const
{
    return notificationTargetId_;
}

void Record::setNotificationTargetId(const std::string& value)
{
    notificationTargetId_ = value;
    notificationTargetIdIsSet_ = true;
}

bool Record::notificationTargetIdIsSet() const
{
    return notificationTargetIdIsSet_;
}

void Record::unsetnotificationTargetId()
{
    notificationTargetIdIsSet_ = false;
}

std::string Record::getNotificationContent() const
{
    return notificationContent_;
}

void Record::setNotificationContent(const std::string& value)
{
    notificationContent_ = value;
    notificationContentIsSet_ = true;
}

bool Record::notificationContentIsSet() const
{
    return notificationContentIsSet_;
}

void Record::unsetnotificationContent()
{
    notificationContentIsSet_ = false;
}

std::string Record::getNotificationStatus() const
{
    return notificationStatus_;
}

void Record::setNotificationStatus(const std::string& value)
{
    notificationStatus_ = value;
    notificationStatusIsSet_ = true;
}

bool Record::notificationStatusIsSet() const
{
    return notificationStatusIsSet_;
}

void Record::unsetnotificationStatus()
{
    notificationStatusIsSet_ = false;
}

}
}
}
}
}


