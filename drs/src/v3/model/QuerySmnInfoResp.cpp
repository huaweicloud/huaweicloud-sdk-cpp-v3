

#include "huaweicloud/drs/v3/model/QuerySmnInfoResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QuerySmnInfoResp::QuerySmnInfoResp()
{
    subscriptionsIsSet_ = false;
    topicName_ = "";
    topicNameIsSet_ = false;
    delayTime_ = 0L;
    delayTimeIsSet_ = false;
    rtoDelay_ = 0L;
    rtoDelayIsSet_ = false;
    rpoDelay_ = 0L;
    rpoDelayIsSet_ = false;
    alarmToUser_ = false;
    alarmToUserIsSet_ = false;
}

QuerySmnInfoResp::~QuerySmnInfoResp() = default;

void QuerySmnInfoResp::validate()
{
}

web::json::value QuerySmnInfoResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionsIsSet_) {
        val[utility::conversions::to_string_t("subscriptions")] = ModelBase::toJson(subscriptions_);
    }
    if(topicNameIsSet_) {
        val[utility::conversions::to_string_t("topic_name")] = ModelBase::toJson(topicName_);
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
bool QuerySmnInfoResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("topic_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicName(refVal);
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


std::vector<SubscriptionInfo>& QuerySmnInfoResp::getSubscriptions()
{
    return subscriptions_;
}

void QuerySmnInfoResp::setSubscriptions(const std::vector<SubscriptionInfo>& value)
{
    subscriptions_ = value;
    subscriptionsIsSet_ = true;
}

bool QuerySmnInfoResp::subscriptionsIsSet() const
{
    return subscriptionsIsSet_;
}

void QuerySmnInfoResp::unsetsubscriptions()
{
    subscriptionsIsSet_ = false;
}

std::string QuerySmnInfoResp::getTopicName() const
{
    return topicName_;
}

void QuerySmnInfoResp::setTopicName(const std::string& value)
{
    topicName_ = value;
    topicNameIsSet_ = true;
}

bool QuerySmnInfoResp::topicNameIsSet() const
{
    return topicNameIsSet_;
}

void QuerySmnInfoResp::unsettopicName()
{
    topicNameIsSet_ = false;
}

int64_t QuerySmnInfoResp::getDelayTime() const
{
    return delayTime_;
}

void QuerySmnInfoResp::setDelayTime(int64_t value)
{
    delayTime_ = value;
    delayTimeIsSet_ = true;
}

bool QuerySmnInfoResp::delayTimeIsSet() const
{
    return delayTimeIsSet_;
}

void QuerySmnInfoResp::unsetdelayTime()
{
    delayTimeIsSet_ = false;
}

int64_t QuerySmnInfoResp::getRtoDelay() const
{
    return rtoDelay_;
}

void QuerySmnInfoResp::setRtoDelay(int64_t value)
{
    rtoDelay_ = value;
    rtoDelayIsSet_ = true;
}

bool QuerySmnInfoResp::rtoDelayIsSet() const
{
    return rtoDelayIsSet_;
}

void QuerySmnInfoResp::unsetrtoDelay()
{
    rtoDelayIsSet_ = false;
}

int64_t QuerySmnInfoResp::getRpoDelay() const
{
    return rpoDelay_;
}

void QuerySmnInfoResp::setRpoDelay(int64_t value)
{
    rpoDelay_ = value;
    rpoDelayIsSet_ = true;
}

bool QuerySmnInfoResp::rpoDelayIsSet() const
{
    return rpoDelayIsSet_;
}

void QuerySmnInfoResp::unsetrpoDelay()
{
    rpoDelayIsSet_ = false;
}

bool QuerySmnInfoResp::isAlarmToUser() const
{
    return alarmToUser_;
}

void QuerySmnInfoResp::setAlarmToUser(bool value)
{
    alarmToUser_ = value;
    alarmToUserIsSet_ = true;
}

bool QuerySmnInfoResp::alarmToUserIsSet() const
{
    return alarmToUserIsSet_;
}

void QuerySmnInfoResp::unsetalarmToUser()
{
    alarmToUserIsSet_ = false;
}

}
}
}
}
}


