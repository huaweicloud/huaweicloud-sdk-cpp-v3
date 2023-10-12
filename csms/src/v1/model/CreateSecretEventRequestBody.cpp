

#include "huaweicloud/csms/v1/model/CreateSecretEventRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




CreateSecretEventRequestBody::CreateSecretEventRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    eventTypesIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    notificationIsSet_ = false;
}

CreateSecretEventRequestBody::~CreateSecretEventRequestBody() = default;

void CreateSecretEventRequestBody::validate()
{
}

web::json::value CreateSecretEventRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(eventTypesIsSet_) {
        val[utility::conversions::to_string_t("event_types")] = ModelBase::toJson(eventTypes_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(notificationIsSet_) {
        val[utility::conversions::to_string_t("notification")] = ModelBase::toJson(notification_);
    }

    return val;
}
bool CreateSecretEventRequestBody::fromJson(const web::json::value& val)
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


std::string CreateSecretEventRequestBody::getName() const
{
    return name_;
}

void CreateSecretEventRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateSecretEventRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateSecretEventRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& CreateSecretEventRequestBody::getEventTypes()
{
    return eventTypes_;
}

void CreateSecretEventRequestBody::setEventTypes(const std::vector<std::string>& value)
{
    eventTypes_ = value;
    eventTypesIsSet_ = true;
}

bool CreateSecretEventRequestBody::eventTypesIsSet() const
{
    return eventTypesIsSet_;
}

void CreateSecretEventRequestBody::unseteventTypes()
{
    eventTypesIsSet_ = false;
}

std::string CreateSecretEventRequestBody::getState() const
{
    return state_;
}

void CreateSecretEventRequestBody::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool CreateSecretEventRequestBody::stateIsSet() const
{
    return stateIsSet_;
}

void CreateSecretEventRequestBody::unsetstate()
{
    stateIsSet_ = false;
}

Notification CreateSecretEventRequestBody::getNotification() const
{
    return notification_;
}

void CreateSecretEventRequestBody::setNotification(const Notification& value)
{
    notification_ = value;
    notificationIsSet_ = true;
}

bool CreateSecretEventRequestBody::notificationIsSet() const
{
    return notificationIsSet_;
}

void CreateSecretEventRequestBody::unsetnotification()
{
    notificationIsSet_ = false;
}

}
}
}
}
}


