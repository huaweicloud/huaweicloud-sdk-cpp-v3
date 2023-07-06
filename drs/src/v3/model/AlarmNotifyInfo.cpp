

#include "huaweicloud/drs/v3/model/AlarmNotifyInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




AlarmNotifyInfo::AlarmNotifyInfo()
{
    delayTime_ = 0L;
    delayTimeIsSet_ = false;
    rtoDelay_ = 0L;
    rtoDelayIsSet_ = false;
    rpoDelay_ = 0L;
    rpoDelayIsSet_ = false;
    alarmToUser_ = false;
    alarmToUserIsSet_ = false;
    subscriptionsIsSet_ = false;
}

AlarmNotifyInfo::~AlarmNotifyInfo() = default;

void AlarmNotifyInfo::validate()
{
}

web::json::value AlarmNotifyInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(delayTimeIsSet_) {
        val[utility::conversions::to_string_t("delay_time")] = ModelBase::toJson(delayTime_);
    }
    if(rtoDelayIsSet_) {
        val[utility::conversions::to_string_t("rto_delay")] = ModelBase::toJson(rtoDelay_);
    }
    if(rpoDelayIsSet_) {
        val[utility::conversions::to_string_t("rpo_delay")] = ModelBase::toJson(rpoDelay_);
    }
    if(alarmToUserIsSet_) {
        val[utility::conversions::to_string_t("alarm_to_user")] = ModelBase::toJson(alarmToUser_);
    }
    if(subscriptionsIsSet_) {
        val[utility::conversions::to_string_t("subscriptions")] = ModelBase::toJson(subscriptions_);
    }

    return val;
}

bool AlarmNotifyInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delay_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelayTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rto_delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rto_delay"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRtoDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rpo_delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rpo_delay"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRpoDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_to_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_to_user"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmToUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscriptions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriptions"));
        if(!fieldValue.is_null())
        {
            std::vector<SubscriptionInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptions(refVal);
        }
    }
    return ok;
}

int64_t AlarmNotifyInfo::getDelayTime() const
{
    return delayTime_;
}

void AlarmNotifyInfo::setDelayTime(int64_t value)
{
    delayTime_ = value;
    delayTimeIsSet_ = true;
}

bool AlarmNotifyInfo::delayTimeIsSet() const
{
    return delayTimeIsSet_;
}

void AlarmNotifyInfo::unsetdelayTime()
{
    delayTimeIsSet_ = false;
}

int64_t AlarmNotifyInfo::getRtoDelay() const
{
    return rtoDelay_;
}

void AlarmNotifyInfo::setRtoDelay(int64_t value)
{
    rtoDelay_ = value;
    rtoDelayIsSet_ = true;
}

bool AlarmNotifyInfo::rtoDelayIsSet() const
{
    return rtoDelayIsSet_;
}

void AlarmNotifyInfo::unsetrtoDelay()
{
    rtoDelayIsSet_ = false;
}

int64_t AlarmNotifyInfo::getRpoDelay() const
{
    return rpoDelay_;
}

void AlarmNotifyInfo::setRpoDelay(int64_t value)
{
    rpoDelay_ = value;
    rpoDelayIsSet_ = true;
}

bool AlarmNotifyInfo::rpoDelayIsSet() const
{
    return rpoDelayIsSet_;
}

void AlarmNotifyInfo::unsetrpoDelay()
{
    rpoDelayIsSet_ = false;
}

bool AlarmNotifyInfo::isAlarmToUser() const
{
    return alarmToUser_;
}

void AlarmNotifyInfo::setAlarmToUser(bool value)
{
    alarmToUser_ = value;
    alarmToUserIsSet_ = true;
}

bool AlarmNotifyInfo::alarmToUserIsSet() const
{
    return alarmToUserIsSet_;
}

void AlarmNotifyInfo::unsetalarmToUser()
{
    alarmToUserIsSet_ = false;
}

std::vector<SubscriptionInfo>& AlarmNotifyInfo::getSubscriptions()
{
    return subscriptions_;
}

void AlarmNotifyInfo::setSubscriptions(const std::vector<SubscriptionInfo>& value)
{
    subscriptions_ = value;
    subscriptionsIsSet_ = true;
}

bool AlarmNotifyInfo::subscriptionsIsSet() const
{
    return subscriptionsIsSet_;
}

void AlarmNotifyInfo::unsetsubscriptions()
{
    subscriptionsIsSet_ = false;
}

}
}
}
}
}


