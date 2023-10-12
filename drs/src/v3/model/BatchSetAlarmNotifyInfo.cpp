

#include "huaweicloud/drs/v3/model/BatchSetAlarmNotifyInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchSetAlarmNotifyInfo::BatchSetAlarmNotifyInfo()
{
    subscriptionsIsSet_ = false;
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    delayTime_ = 0L;
    delayTimeIsSet_ = false;
    rtoDelay_ = 0L;
    rtoDelayIsSet_ = false;
    rpoDelay_ = 0L;
    rpoDelayIsSet_ = false;
    alarmToUser_ = false;
    alarmToUserIsSet_ = false;
}

BatchSetAlarmNotifyInfo::~BatchSetAlarmNotifyInfo() = default;

void BatchSetAlarmNotifyInfo::validate()
{
}

web::json::value BatchSetAlarmNotifyInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionsIsSet_) {
        val[utility::conversions::to_string_t("subscriptions")] = ModelBase::toJson(subscriptions_);
    }
    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
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

    return val;
}
bool BatchSetAlarmNotifyInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subscriptions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriptions"));
        if(!fieldValue.is_null())
        {
            std::vector<SubscriptionInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicUrn(refVal);
        }
    }
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
    return ok;
}


std::vector<SubscriptionInfo>& BatchSetAlarmNotifyInfo::getSubscriptions()
{
    return subscriptions_;
}

void BatchSetAlarmNotifyInfo::setSubscriptions(const std::vector<SubscriptionInfo>& value)
{
    subscriptions_ = value;
    subscriptionsIsSet_ = true;
}

bool BatchSetAlarmNotifyInfo::subscriptionsIsSet() const
{
    return subscriptionsIsSet_;
}

void BatchSetAlarmNotifyInfo::unsetsubscriptions()
{
    subscriptionsIsSet_ = false;
}

std::string BatchSetAlarmNotifyInfo::getTopicUrn() const
{
    return topicUrn_;
}

void BatchSetAlarmNotifyInfo::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool BatchSetAlarmNotifyInfo::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void BatchSetAlarmNotifyInfo::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

int64_t BatchSetAlarmNotifyInfo::getDelayTime() const
{
    return delayTime_;
}

void BatchSetAlarmNotifyInfo::setDelayTime(int64_t value)
{
    delayTime_ = value;
    delayTimeIsSet_ = true;
}

bool BatchSetAlarmNotifyInfo::delayTimeIsSet() const
{
    return delayTimeIsSet_;
}

void BatchSetAlarmNotifyInfo::unsetdelayTime()
{
    delayTimeIsSet_ = false;
}

int64_t BatchSetAlarmNotifyInfo::getRtoDelay() const
{
    return rtoDelay_;
}

void BatchSetAlarmNotifyInfo::setRtoDelay(int64_t value)
{
    rtoDelay_ = value;
    rtoDelayIsSet_ = true;
}

bool BatchSetAlarmNotifyInfo::rtoDelayIsSet() const
{
    return rtoDelayIsSet_;
}

void BatchSetAlarmNotifyInfo::unsetrtoDelay()
{
    rtoDelayIsSet_ = false;
}

int64_t BatchSetAlarmNotifyInfo::getRpoDelay() const
{
    return rpoDelay_;
}

void BatchSetAlarmNotifyInfo::setRpoDelay(int64_t value)
{
    rpoDelay_ = value;
    rpoDelayIsSet_ = true;
}

bool BatchSetAlarmNotifyInfo::rpoDelayIsSet() const
{
    return rpoDelayIsSet_;
}

void BatchSetAlarmNotifyInfo::unsetrpoDelay()
{
    rpoDelayIsSet_ = false;
}

bool BatchSetAlarmNotifyInfo::isAlarmToUser() const
{
    return alarmToUser_;
}

void BatchSetAlarmNotifyInfo::setAlarmToUser(bool value)
{
    alarmToUser_ = value;
    alarmToUserIsSet_ = true;
}

bool BatchSetAlarmNotifyInfo::alarmToUserIsSet() const
{
    return alarmToUserIsSet_;
}

void BatchSetAlarmNotifyInfo::unsetalarmToUser()
{
    alarmToUserIsSet_ = false;
}

}
}
}
}
}


