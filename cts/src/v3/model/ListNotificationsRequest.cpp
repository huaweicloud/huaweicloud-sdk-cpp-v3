

#include "huaweicloud/cts/v3/model/ListNotificationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




ListNotificationsRequest::ListNotificationsRequest()
{
    notificationType_ = "";
    notificationTypeIsSet_ = false;
    notificationName_ = "";
    notificationNameIsSet_ = false;
}

ListNotificationsRequest::~ListNotificationsRequest() = default;

void ListNotificationsRequest::validate()
{
}

web::json::value ListNotificationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(notificationTypeIsSet_) {
        val[utility::conversions::to_string_t("notification_type")] = ModelBase::toJson(notificationType_);
    }
    if(notificationNameIsSet_) {
        val[utility::conversions::to_string_t("notification_name")] = ModelBase::toJson(notificationName_);
    }

    return val;
}
bool ListNotificationsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("notification_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notification_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotificationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notification_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notification_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotificationName(refVal);
        }
    }
    return ok;
}


std::string ListNotificationsRequest::getNotificationType() const
{
    return notificationType_;
}

void ListNotificationsRequest::setNotificationType(const std::string& value)
{
    notificationType_ = value;
    notificationTypeIsSet_ = true;
}

bool ListNotificationsRequest::notificationTypeIsSet() const
{
    return notificationTypeIsSet_;
}

void ListNotificationsRequest::unsetnotificationType()
{
    notificationTypeIsSet_ = false;
}

std::string ListNotificationsRequest::getNotificationName() const
{
    return notificationName_;
}

void ListNotificationsRequest::setNotificationName(const std::string& value)
{
    notificationName_ = value;
    notificationNameIsSet_ = true;
}

bool ListNotificationsRequest::notificationNameIsSet() const
{
    return notificationNameIsSet_;
}

void ListNotificationsRequest::unsetnotificationName()
{
    notificationNameIsSet_ = false;
}

}
}
}
}
}


