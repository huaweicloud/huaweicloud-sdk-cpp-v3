

#include "huaweicloud/cfw/v1/model/UpdateReportProfileDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateReportProfileDto::UpdateReportProfileDto()
{
    description_ = "";
    descriptionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    sendPeriod_ = 0;
    sendPeriodIsSet_ = false;
    sendWeekDay_ = 0;
    sendWeekDayIsSet_ = false;
    statisticPeriodIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    subscriptionType_ = 0;
    subscriptionTypeIsSet_ = false;
}

UpdateReportProfileDto::~UpdateReportProfileDto() = default;

void UpdateReportProfileDto::validate()
{
}

web::json::value UpdateReportProfileDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sendPeriodIsSet_) {
        val[utility::conversions::to_string_t("send_period")] = ModelBase::toJson(sendPeriod_);
    }
    if(sendWeekDayIsSet_) {
        val[utility::conversions::to_string_t("send_week_day")] = ModelBase::toJson(sendWeekDay_);
    }
    if(statisticPeriodIsSet_) {
        val[utility::conversions::to_string_t("statistic_period")] = ModelBase::toJson(statisticPeriod_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(subscriptionTypeIsSet_) {
        val[utility::conversions::to_string_t("subscription_type")] = ModelBase::toJson(subscriptionType_);
    }

    return val;
}
bool UpdateReportProfileDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("send_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("send_period"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSendPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("send_week_day"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("send_week_day"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSendWeekDay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("statistic_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statistic_period"));
        if(!fieldValue.is_null())
        {
            StatisticPeriod refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatisticPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("subscription_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionType(refVal);
        }
    }
    return ok;
}


std::string UpdateReportProfileDto::getDescription() const
{
    return description_;
}

void UpdateReportProfileDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateReportProfileDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateReportProfileDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateReportProfileDto::getName() const
{
    return name_;
}

void UpdateReportProfileDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateReportProfileDto::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateReportProfileDto::unsetname()
{
    nameIsSet_ = false;
}

int32_t UpdateReportProfileDto::getSendPeriod() const
{
    return sendPeriod_;
}

void UpdateReportProfileDto::setSendPeriod(int32_t value)
{
    sendPeriod_ = value;
    sendPeriodIsSet_ = true;
}

bool UpdateReportProfileDto::sendPeriodIsSet() const
{
    return sendPeriodIsSet_;
}

void UpdateReportProfileDto::unsetsendPeriod()
{
    sendPeriodIsSet_ = false;
}

int32_t UpdateReportProfileDto::getSendWeekDay() const
{
    return sendWeekDay_;
}

void UpdateReportProfileDto::setSendWeekDay(int32_t value)
{
    sendWeekDay_ = value;
    sendWeekDayIsSet_ = true;
}

bool UpdateReportProfileDto::sendWeekDayIsSet() const
{
    return sendWeekDayIsSet_;
}

void UpdateReportProfileDto::unsetsendWeekDay()
{
    sendWeekDayIsSet_ = false;
}

StatisticPeriod UpdateReportProfileDto::getStatisticPeriod() const
{
    return statisticPeriod_;
}

void UpdateReportProfileDto::setStatisticPeriod(const StatisticPeriod& value)
{
    statisticPeriod_ = value;
    statisticPeriodIsSet_ = true;
}

bool UpdateReportProfileDto::statisticPeriodIsSet() const
{
    return statisticPeriodIsSet_;
}

void UpdateReportProfileDto::unsetstatisticPeriod()
{
    statisticPeriodIsSet_ = false;
}

int32_t UpdateReportProfileDto::getStatus() const
{
    return status_;
}

void UpdateReportProfileDto::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateReportProfileDto::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateReportProfileDto::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateReportProfileDto::getTopicUrn() const
{
    return topicUrn_;
}

void UpdateReportProfileDto::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool UpdateReportProfileDto::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void UpdateReportProfileDto::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

int32_t UpdateReportProfileDto::getSubscriptionType() const
{
    return subscriptionType_;
}

void UpdateReportProfileDto::setSubscriptionType(int32_t value)
{
    subscriptionType_ = value;
    subscriptionTypeIsSet_ = true;
}

bool UpdateReportProfileDto::subscriptionTypeIsSet() const
{
    return subscriptionTypeIsSet_;
}

void UpdateReportProfileDto::unsetsubscriptionType()
{
    subscriptionTypeIsSet_ = false;
}

}
}
}
}
}


