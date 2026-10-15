

#include "huaweicloud/drs/v5/model/AssociateSmnTopicReqV5.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




AssociateSmnTopicReqV5::AssociateSmnTopicReqV5()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    incrementDelayThreshold_ = 0L;
    incrementDelayThresholdIsSet_ = false;
    rtoDelayThreshold_ = 0L;
    rtoDelayThresholdIsSet_ = false;
    rpoDelayThreshold_ = 0L;
    rpoDelayThresholdIsSet_ = false;
    isAlarmToUser_ = false;
    isAlarmToUserIsSet_ = false;
}

AssociateSmnTopicReqV5::~AssociateSmnTopicReqV5() = default;

void AssociateSmnTopicReqV5::validate()
{
}

web::json::value AssociateSmnTopicReqV5::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(incrementDelayThresholdIsSet_) {
        val[utility::conversions::to_string_t("increment_delay_threshold")] = ModelBase::toJson(incrementDelayThreshold_);
    }
    if(rtoDelayThresholdIsSet_) {
        val[utility::conversions::to_string_t("rto_delay_threshold")] = ModelBase::toJson(rtoDelayThreshold_);
    }
    if(rpoDelayThresholdIsSet_) {
        val[utility::conversions::to_string_t("rpo_delay_threshold")] = ModelBase::toJson(rpoDelayThreshold_);
    }
    if(isAlarmToUserIsSet_) {
        val[utility::conversions::to_string_t("is_alarm_to_user")] = ModelBase::toJson(isAlarmToUser_);
    }

    return val;
}
bool AssociateSmnTopicReqV5::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("topic_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("increment_delay_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("increment_delay_threshold"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncrementDelayThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rto_delay_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rto_delay_threshold"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRtoDelayThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rpo_delay_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rpo_delay_threshold"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRpoDelayThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_alarm_to_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_alarm_to_user"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAlarmToUser(refVal);
        }
    }
    return ok;
}


std::string AssociateSmnTopicReqV5::getTopicUrn() const
{
    return topicUrn_;
}

void AssociateSmnTopicReqV5::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool AssociateSmnTopicReqV5::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void AssociateSmnTopicReqV5::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

int64_t AssociateSmnTopicReqV5::getIncrementDelayThreshold() const
{
    return incrementDelayThreshold_;
}

void AssociateSmnTopicReqV5::setIncrementDelayThreshold(int64_t value)
{
    incrementDelayThreshold_ = value;
    incrementDelayThresholdIsSet_ = true;
}

bool AssociateSmnTopicReqV5::incrementDelayThresholdIsSet() const
{
    return incrementDelayThresholdIsSet_;
}

void AssociateSmnTopicReqV5::unsetincrementDelayThreshold()
{
    incrementDelayThresholdIsSet_ = false;
}

int64_t AssociateSmnTopicReqV5::getRtoDelayThreshold() const
{
    return rtoDelayThreshold_;
}

void AssociateSmnTopicReqV5::setRtoDelayThreshold(int64_t value)
{
    rtoDelayThreshold_ = value;
    rtoDelayThresholdIsSet_ = true;
}

bool AssociateSmnTopicReqV5::rtoDelayThresholdIsSet() const
{
    return rtoDelayThresholdIsSet_;
}

void AssociateSmnTopicReqV5::unsetrtoDelayThreshold()
{
    rtoDelayThresholdIsSet_ = false;
}

int64_t AssociateSmnTopicReqV5::getRpoDelayThreshold() const
{
    return rpoDelayThreshold_;
}

void AssociateSmnTopicReqV5::setRpoDelayThreshold(int64_t value)
{
    rpoDelayThreshold_ = value;
    rpoDelayThresholdIsSet_ = true;
}

bool AssociateSmnTopicReqV5::rpoDelayThresholdIsSet() const
{
    return rpoDelayThresholdIsSet_;
}

void AssociateSmnTopicReqV5::unsetrpoDelayThreshold()
{
    rpoDelayThresholdIsSet_ = false;
}

bool AssociateSmnTopicReqV5::isIsAlarmToUser() const
{
    return isAlarmToUser_;
}

void AssociateSmnTopicReqV5::setIsAlarmToUser(bool value)
{
    isAlarmToUser_ = value;
    isAlarmToUserIsSet_ = true;
}

bool AssociateSmnTopicReqV5::isAlarmToUserIsSet() const
{
    return isAlarmToUserIsSet_;
}

void AssociateSmnTopicReqV5::unsetisAlarmToUser()
{
    isAlarmToUserIsSet_ = false;
}

}
}
}
}
}


