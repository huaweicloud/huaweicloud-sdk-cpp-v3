

#include "huaweicloud/cts/v3/model/DeleteNotificationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




DeleteNotificationRequest::DeleteNotificationRequest()
{
    notificationId_ = "";
    notificationIdIsSet_ = false;
}

DeleteNotificationRequest::~DeleteNotificationRequest() = default;

void DeleteNotificationRequest::validate()
{
}

web::json::value DeleteNotificationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(notificationIdIsSet_) {
        val[utility::conversions::to_string_t("notification_id")] = ModelBase::toJson(notificationId_);
    }

    return val;
}

bool DeleteNotificationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("notification_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notification_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotificationId(refVal);
        }
    }
    return ok;
}


std::string DeleteNotificationRequest::getNotificationId() const
{
    return notificationId_;
}

void DeleteNotificationRequest::setNotificationId(const std::string& value)
{
    notificationId_ = value;
    notificationIdIsSet_ = true;
}

bool DeleteNotificationRequest::notificationIdIsSet() const
{
    return notificationIdIsSet_;
}

void DeleteNotificationRequest::unsetnotificationId()
{
    notificationIdIsSet_ = false;
}

}
}
}
}
}


