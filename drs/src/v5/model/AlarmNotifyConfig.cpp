

#include "huaweicloud/drs/v5/model/AlarmNotifyConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




AlarmNotifyConfig::AlarmNotifyConfig()
{
    alarmToUser_ = false;
    alarmToUserIsSet_ = false;
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    delayTime_ = 0L;
    delayTimeIsSet_ = false;
    rpoDelay_ = 0L;
    rpoDelayIsSet_ = false;
    rtoDelay_ = 0L;
    rtoDelayIsSet_ = false;
}

AlarmNotifyConfig::~AlarmNotifyConfig() = default;

void AlarmNotifyConfig::validate()
{
}

web::json::value AlarmNotifyConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alarmToUserIsSet_) {
        val[utility::conversions::to_string_t("alarm_to_user")] = ModelBase::toJson(alarmToUser_);
    }
    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(delayTimeIsSet_) {
        val[utility::conversions::to_string_t("delay_time")] = ModelBase::toJson(delayTime_);
    }
    if(rpoDelayIsSet_) {
        val[utility::conversions::to_string_t("rpo_delay")] = ModelBase::toJson(rpoDelay_);
    }
    if(rtoDelayIsSet_) {
        val[utility::conversions::to_string_t("rto_delay")] = ModelBase::toJson(rtoDelay_);
    }

    return val;
}
bool AlarmNotifyConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alarm_to_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_to_user"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmToUser(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("rpo_delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rpo_delay"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRpoDelay(refVal);
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
    return ok;
}


bool AlarmNotifyConfig::isAlarmToUser() const
{
    return alarmToUser_;
}

void AlarmNotifyConfig::setAlarmToUser(bool value)
{
    alarmToUser_ = value;
    alarmToUserIsSet_ = true;
}

bool AlarmNotifyConfig::alarmToUserIsSet() const
{
    return alarmToUserIsSet_;
}

void AlarmNotifyConfig::unsetalarmToUser()
{
    alarmToUserIsSet_ = false;
}

std::string AlarmNotifyConfig::getTopicUrn() const
{
    return topicUrn_;
}

void AlarmNotifyConfig::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool AlarmNotifyConfig::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void AlarmNotifyConfig::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

int64_t AlarmNotifyConfig::getDelayTime() const
{
    return delayTime_;
}

void AlarmNotifyConfig::setDelayTime(int64_t value)
{
    delayTime_ = value;
    delayTimeIsSet_ = true;
}

bool AlarmNotifyConfig::delayTimeIsSet() const
{
    return delayTimeIsSet_;
}

void AlarmNotifyConfig::unsetdelayTime()
{
    delayTimeIsSet_ = false;
}

int64_t AlarmNotifyConfig::getRpoDelay() const
{
    return rpoDelay_;
}

void AlarmNotifyConfig::setRpoDelay(int64_t value)
{
    rpoDelay_ = value;
    rpoDelayIsSet_ = true;
}

bool AlarmNotifyConfig::rpoDelayIsSet() const
{
    return rpoDelayIsSet_;
}

void AlarmNotifyConfig::unsetrpoDelay()
{
    rpoDelayIsSet_ = false;
}

int64_t AlarmNotifyConfig::getRtoDelay() const
{
    return rtoDelay_;
}

void AlarmNotifyConfig::setRtoDelay(int64_t value)
{
    rtoDelay_ = value;
    rtoDelayIsSet_ = true;
}

bool AlarmNotifyConfig::rtoDelayIsSet() const
{
    return rtoDelayIsSet_;
}

void AlarmNotifyConfig::unsetrtoDelay()
{
    rtoDelayIsSet_ = false;
}

}
}
}
}
}


