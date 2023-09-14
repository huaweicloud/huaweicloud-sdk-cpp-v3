

#include "huaweicloud/csms/v1/model/Event.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




Event::Event()
{
    name_ = "";
    nameIsSet_ = false;
    eventId_ = "";
    eventIdIsSet_ = false;
    eventTypesIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    notificationIsSet_ = false;
}

Event::~Event() = default;

void Event::validate()
{
}

web::json::value Event::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(eventIdIsSet_) {
        val[utility::conversions::to_string_t("event_id")] = ModelBase::toJson(eventId_);
    }
    if(eventTypesIsSet_) {
        val[utility::conversions::to_string_t("event_types")] = ModelBase::toJson(eventTypes_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(notificationIsSet_) {
        val[utility::conversions::to_string_t("notification")] = ModelBase::toJson(notification_);
    }

    return val;
}

bool Event::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("event_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notification"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notification"));
        if(!fieldValue.is_null())
        {
            Notification refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotification(refVal);
        }
    }
    return ok;
}

std::string Event::getName() const
{
    return name_;
}

void Event::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Event::nameIsSet() const
{
    return nameIsSet_;
}

void Event::unsetname()
{
    nameIsSet_ = false;
}

std::string Event::getEventId() const
{
    return eventId_;
}

void Event::setEventId(const std::string& value)
{
    eventId_ = value;
    eventIdIsSet_ = true;
}

bool Event::eventIdIsSet() const
{
    return eventIdIsSet_;
}

void Event::unseteventId()
{
    eventIdIsSet_ = false;
}

std::vector<std::string>& Event::getEventTypes()
{
    return eventTypes_;
}

void Event::setEventTypes(const std::vector<std::string>& value)
{
    eventTypes_ = value;
    eventTypesIsSet_ = true;
}

bool Event::eventTypesIsSet() const
{
    return eventTypesIsSet_;
}

void Event::unseteventTypes()
{
    eventTypesIsSet_ = false;
}

std::string Event::getState() const
{
    return state_;
}

void Event::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool Event::stateIsSet() const
{
    return stateIsSet_;
}

void Event::unsetstate()
{
    stateIsSet_ = false;
}

int64_t Event::getCreateTime() const
{
    return createTime_;
}

void Event::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool Event::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void Event::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t Event::getUpdateTime() const
{
    return updateTime_;
}

void Event::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool Event::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void Event::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

Notification Event::getNotification() const
{
    return notification_;
}

void Event::setNotification(const Notification& value)
{
    notification_ = value;
    notificationIsSet_ = true;
}

bool Event::notificationIsSet() const
{
    return notificationIsSet_;
}

void Event::unsetnotification()
{
    notificationIsSet_ = false;
}

}
}
}
}
}


