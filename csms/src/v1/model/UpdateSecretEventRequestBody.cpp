

#include "huaweicloud/csms/v1/model/UpdateSecretEventRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UpdateSecretEventRequestBody::UpdateSecretEventRequestBody()
{
    state_ = "";
    stateIsSet_ = false;
    eventTypesIsSet_ = false;
    notificationIsSet_ = false;
}

UpdateSecretEventRequestBody::~UpdateSecretEventRequestBody() = default;

void UpdateSecretEventRequestBody::validate()
{
}

web::json::value UpdateSecretEventRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(eventTypesIsSet_) {
        val[utility::conversions::to_string_t("event_types")] = ModelBase::toJson(eventTypes_);
    }
    if(notificationIsSet_) {
        val[utility::conversions::to_string_t("notification")] = ModelBase::toJson(notification_);
    }

    return val;
}
bool UpdateSecretEventRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
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


std::string UpdateSecretEventRequestBody::getState() const
{
    return state_;
}

void UpdateSecretEventRequestBody::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool UpdateSecretEventRequestBody::stateIsSet() const
{
    return stateIsSet_;
}

void UpdateSecretEventRequestBody::unsetstate()
{
    stateIsSet_ = false;
}

std::vector<std::string>& UpdateSecretEventRequestBody::getEventTypes()
{
    return eventTypes_;
}

void UpdateSecretEventRequestBody::setEventTypes(const std::vector<std::string>& value)
{
    eventTypes_ = value;
    eventTypesIsSet_ = true;
}

bool UpdateSecretEventRequestBody::eventTypesIsSet() const
{
    return eventTypesIsSet_;
}

void UpdateSecretEventRequestBody::unseteventTypes()
{
    eventTypesIsSet_ = false;
}

Notification UpdateSecretEventRequestBody::getNotification() const
{
    return notification_;
}

void UpdateSecretEventRequestBody::setNotification(const Notification& value)
{
    notification_ = value;
    notificationIsSet_ = true;
}

bool UpdateSecretEventRequestBody::notificationIsSet() const
{
    return notificationIsSet_;
}

void UpdateSecretEventRequestBody::unsetnotification()
{
    notificationIsSet_ = false;
}

}
}
}
}
}


