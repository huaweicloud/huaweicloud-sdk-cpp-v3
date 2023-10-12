

#include "huaweicloud/cts/v3/model/ListNotificationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




ListNotificationsResponse::ListNotificationsResponse()
{
    notificationsIsSet_ = false;
}

ListNotificationsResponse::~ListNotificationsResponse() = default;

void ListNotificationsResponse::validate()
{
}

web::json::value ListNotificationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(notificationsIsSet_) {
        val[utility::conversions::to_string_t("notifications")] = ModelBase::toJson(notifications_);
    }

    return val;
}
bool ListNotificationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("notifications"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notifications"));
        if(!fieldValue.is_null())
        {
            std::vector<NotificationsResponseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotifications(refVal);
        }
    }
    return ok;
}


std::vector<NotificationsResponseBody>& ListNotificationsResponse::getNotifications()
{
    return notifications_;
}

void ListNotificationsResponse::setNotifications(const std::vector<NotificationsResponseBody>& value)
{
    notifications_ = value;
    notificationsIsSet_ = true;
}

bool ListNotificationsResponse::notificationsIsSet() const
{
    return notificationsIsSet_;
}

void ListNotificationsResponse::unsetnotifications()
{
    notificationsIsSet_ = false;
}

}
}
}
}
}


