

#include "huaweicloud/mpc/v1/model/NotificationConfigReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




NotificationConfigReq::NotificationConfigReq()
{
    notificationsIsSet_ = false;
}

NotificationConfigReq::~NotificationConfigReq() = default;

void NotificationConfigReq::validate()
{
}

web::json::value NotificationConfigReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(notificationsIsSet_) {
        val[utility::conversions::to_string_t("notifications")] = ModelBase::toJson(notifications_);
    }

    return val;
}

bool NotificationConfigReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("notifications"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notifications"));
        if(!fieldValue.is_null())
        {
            std::vector<Notification> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotifications(refVal);
        }
    }
    return ok;
}


std::vector<Notification>& NotificationConfigReq::getNotifications()
{
    return notifications_;
}

void NotificationConfigReq::setNotifications(const std::vector<Notification>& value)
{
    notifications_ = value;
    notificationsIsSet_ = true;
}

bool NotificationConfigReq::notificationsIsSet() const
{
    return notificationsIsSet_;
}

void NotificationConfigReq::unsetnotifications()
{
    notificationsIsSet_ = false;
}

}
}
}
}
}


