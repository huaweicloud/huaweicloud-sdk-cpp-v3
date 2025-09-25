

#include "huaweicloud/codehub/v4/model/MemberAccess.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




MemberAccess::MemberAccess()
{
    accessLevel_ = 0;
    accessLevelIsSet_ = false;
    notificationLevel_ = 0;
    notificationLevelIsSet_ = false;
}

MemberAccess::~MemberAccess() = default;

void MemberAccess::validate()
{
}

web::json::value MemberAccess::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessLevelIsSet_) {
        val[utility::conversions::to_string_t("access_level")] = ModelBase::toJson(accessLevel_);
    }
    if(notificationLevelIsSet_) {
        val[utility::conversions::to_string_t("notification_level")] = ModelBase::toJson(notificationLevel_);
    }

    return val;
}
bool MemberAccess::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notification_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notification_level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotificationLevel(refVal);
        }
    }
    return ok;
}


int32_t MemberAccess::getAccessLevel() const
{
    return accessLevel_;
}

void MemberAccess::setAccessLevel(int32_t value)
{
    accessLevel_ = value;
    accessLevelIsSet_ = true;
}

bool MemberAccess::accessLevelIsSet() const
{
    return accessLevelIsSet_;
}

void MemberAccess::unsetaccessLevel()
{
    accessLevelIsSet_ = false;
}

int32_t MemberAccess::getNotificationLevel() const
{
    return notificationLevel_;
}

void MemberAccess::setNotificationLevel(int32_t value)
{
    notificationLevel_ = value;
    notificationLevelIsSet_ = true;
}

bool MemberAccess::notificationLevelIsSet() const
{
    return notificationLevelIsSet_;
}

void MemberAccess::unsetnotificationLevel()
{
    notificationLevelIsSet_ = false;
}

}
}
}
}
}


