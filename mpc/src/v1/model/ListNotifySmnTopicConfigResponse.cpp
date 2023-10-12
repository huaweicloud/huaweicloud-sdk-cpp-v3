

#include "huaweicloud/mpc/v1/model/ListNotifySmnTopicConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListNotifySmnTopicConfigResponse::ListNotifySmnTopicConfigResponse()
{
    notificationsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListNotifySmnTopicConfigResponse::~ListNotifySmnTopicConfigResponse() = default;

void ListNotifySmnTopicConfigResponse::validate()
{
}

web::json::value ListNotifySmnTopicConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(notificationsIsSet_) {
        val[utility::conversions::to_string_t("notifications")] = ModelBase::toJson(notifications_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListNotifySmnTopicConfigResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<Notification>& ListNotifySmnTopicConfigResponse::getNotifications()
{
    return notifications_;
}

void ListNotifySmnTopicConfigResponse::setNotifications(const std::vector<Notification>& value)
{
    notifications_ = value;
    notificationsIsSet_ = true;
}

bool ListNotifySmnTopicConfigResponse::notificationsIsSet() const
{
    return notificationsIsSet_;
}

void ListNotifySmnTopicConfigResponse::unsetnotifications()
{
    notificationsIsSet_ = false;
}

int32_t ListNotifySmnTopicConfigResponse::getTotal() const
{
    return total_;
}

void ListNotifySmnTopicConfigResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListNotifySmnTopicConfigResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListNotifySmnTopicConfigResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


