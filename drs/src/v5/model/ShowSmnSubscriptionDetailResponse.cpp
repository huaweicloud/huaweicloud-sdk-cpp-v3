

#include "huaweicloud/drs/v5/model/ShowSmnSubscriptionDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowSmnSubscriptionDetailResponse::ShowSmnSubscriptionDetailResponse()
{
    topicName_ = "";
    topicNameIsSet_ = false;
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    delayTime_ = 0;
    delayTimeIsSet_ = false;
    rpoDelay_ = 0;
    rpoDelayIsSet_ = false;
    rtoDelay_ = 0;
    rtoDelayIsSet_ = false;
    isAlarmUser_ = false;
    isAlarmUserIsSet_ = false;
}

ShowSmnSubscriptionDetailResponse::~ShowSmnSubscriptionDetailResponse() = default;

void ShowSmnSubscriptionDetailResponse::validate()
{
}

web::json::value ShowSmnSubscriptionDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicNameIsSet_) {
        val[utility::conversions::to_string_t("topic_name")] = ModelBase::toJson(topicName_);
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
    if(isAlarmUserIsSet_) {
        val[utility::conversions::to_string_t("is_alarm_user")] = ModelBase::toJson(isAlarmUser_);
    }

    return val;
}
bool ShowSmnSubscriptionDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("topic_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicName(refVal);
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelayTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rpo_delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rpo_delay"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRpoDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rto_delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rto_delay"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRtoDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_alarm_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_alarm_user"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAlarmUser(refVal);
        }
    }
    return ok;
}


std::string ShowSmnSubscriptionDetailResponse::getTopicName() const
{
    return topicName_;
}

void ShowSmnSubscriptionDetailResponse::setTopicName(const std::string& value)
{
    topicName_ = value;
    topicNameIsSet_ = true;
}

bool ShowSmnSubscriptionDetailResponse::topicNameIsSet() const
{
    return topicNameIsSet_;
}

void ShowSmnSubscriptionDetailResponse::unsettopicName()
{
    topicNameIsSet_ = false;
}

std::string ShowSmnSubscriptionDetailResponse::getTopicUrn() const
{
    return topicUrn_;
}

void ShowSmnSubscriptionDetailResponse::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool ShowSmnSubscriptionDetailResponse::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void ShowSmnSubscriptionDetailResponse::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

int32_t ShowSmnSubscriptionDetailResponse::getDelayTime() const
{
    return delayTime_;
}

void ShowSmnSubscriptionDetailResponse::setDelayTime(int32_t value)
{
    delayTime_ = value;
    delayTimeIsSet_ = true;
}

bool ShowSmnSubscriptionDetailResponse::delayTimeIsSet() const
{
    return delayTimeIsSet_;
}

void ShowSmnSubscriptionDetailResponse::unsetdelayTime()
{
    delayTimeIsSet_ = false;
}

int32_t ShowSmnSubscriptionDetailResponse::getRpoDelay() const
{
    return rpoDelay_;
}

void ShowSmnSubscriptionDetailResponse::setRpoDelay(int32_t value)
{
    rpoDelay_ = value;
    rpoDelayIsSet_ = true;
}

bool ShowSmnSubscriptionDetailResponse::rpoDelayIsSet() const
{
    return rpoDelayIsSet_;
}

void ShowSmnSubscriptionDetailResponse::unsetrpoDelay()
{
    rpoDelayIsSet_ = false;
}

int32_t ShowSmnSubscriptionDetailResponse::getRtoDelay() const
{
    return rtoDelay_;
}

void ShowSmnSubscriptionDetailResponse::setRtoDelay(int32_t value)
{
    rtoDelay_ = value;
    rtoDelayIsSet_ = true;
}

bool ShowSmnSubscriptionDetailResponse::rtoDelayIsSet() const
{
    return rtoDelayIsSet_;
}

void ShowSmnSubscriptionDetailResponse::unsetrtoDelay()
{
    rtoDelayIsSet_ = false;
}

bool ShowSmnSubscriptionDetailResponse::isIsAlarmUser() const
{
    return isAlarmUser_;
}

void ShowSmnSubscriptionDetailResponse::setIsAlarmUser(bool value)
{
    isAlarmUser_ = value;
    isAlarmUserIsSet_ = true;
}

bool ShowSmnSubscriptionDetailResponse::isAlarmUserIsSet() const
{
    return isAlarmUserIsSet_;
}

void ShowSmnSubscriptionDetailResponse::unsetisAlarmUser()
{
    isAlarmUserIsSet_ = false;
}

}
}
}
}
}


