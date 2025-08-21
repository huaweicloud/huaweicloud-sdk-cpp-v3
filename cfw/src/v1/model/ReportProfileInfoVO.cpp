

#include "huaweicloud/cfw/v1/model/ReportProfileInfoVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ReportProfileInfoVO::ReportProfileInfoVO()
{
    category_ = "";
    categoryIsSet_ = false;
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
    topicName_ = "";
    topicNameIsSet_ = false;
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    subscriptionType_ = 0;
    subscriptionTypeIsSet_ = false;
}

ReportProfileInfoVO::~ReportProfileInfoVO() = default;

void ReportProfileInfoVO::validate()
{
}

web::json::value ReportProfileInfoVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
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
    if(topicNameIsSet_) {
        val[utility::conversions::to_string_t("topic_name")] = ModelBase::toJson(topicName_);
    }
    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(subscriptionTypeIsSet_) {
        val[utility::conversions::to_string_t("subscription_type")] = ModelBase::toJson(subscriptionType_);
    }

    return val;
}
bool ReportProfileInfoVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
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


std::string ReportProfileInfoVO::getCategory() const
{
    return category_;
}

void ReportProfileInfoVO::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ReportProfileInfoVO::categoryIsSet() const
{
    return categoryIsSet_;
}

void ReportProfileInfoVO::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string ReportProfileInfoVO::getDescription() const
{
    return description_;
}

void ReportProfileInfoVO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ReportProfileInfoVO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ReportProfileInfoVO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ReportProfileInfoVO::getName() const
{
    return name_;
}

void ReportProfileInfoVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ReportProfileInfoVO::nameIsSet() const
{
    return nameIsSet_;
}

void ReportProfileInfoVO::unsetname()
{
    nameIsSet_ = false;
}

int32_t ReportProfileInfoVO::getSendPeriod() const
{
    return sendPeriod_;
}

void ReportProfileInfoVO::setSendPeriod(int32_t value)
{
    sendPeriod_ = value;
    sendPeriodIsSet_ = true;
}

bool ReportProfileInfoVO::sendPeriodIsSet() const
{
    return sendPeriodIsSet_;
}

void ReportProfileInfoVO::unsetsendPeriod()
{
    sendPeriodIsSet_ = false;
}

int32_t ReportProfileInfoVO::getSendWeekDay() const
{
    return sendWeekDay_;
}

void ReportProfileInfoVO::setSendWeekDay(int32_t value)
{
    sendWeekDay_ = value;
    sendWeekDayIsSet_ = true;
}

bool ReportProfileInfoVO::sendWeekDayIsSet() const
{
    return sendWeekDayIsSet_;
}

void ReportProfileInfoVO::unsetsendWeekDay()
{
    sendWeekDayIsSet_ = false;
}

StatisticPeriod ReportProfileInfoVO::getStatisticPeriod() const
{
    return statisticPeriod_;
}

void ReportProfileInfoVO::setStatisticPeriod(const StatisticPeriod& value)
{
    statisticPeriod_ = value;
    statisticPeriodIsSet_ = true;
}

bool ReportProfileInfoVO::statisticPeriodIsSet() const
{
    return statisticPeriodIsSet_;
}

void ReportProfileInfoVO::unsetstatisticPeriod()
{
    statisticPeriodIsSet_ = false;
}

int32_t ReportProfileInfoVO::getStatus() const
{
    return status_;
}

void ReportProfileInfoVO::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ReportProfileInfoVO::statusIsSet() const
{
    return statusIsSet_;
}

void ReportProfileInfoVO::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ReportProfileInfoVO::getTopicName() const
{
    return topicName_;
}

void ReportProfileInfoVO::setTopicName(const std::string& value)
{
    topicName_ = value;
    topicNameIsSet_ = true;
}

bool ReportProfileInfoVO::topicNameIsSet() const
{
    return topicNameIsSet_;
}

void ReportProfileInfoVO::unsettopicName()
{
    topicNameIsSet_ = false;
}

std::string ReportProfileInfoVO::getTopicUrn() const
{
    return topicUrn_;
}

void ReportProfileInfoVO::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool ReportProfileInfoVO::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void ReportProfileInfoVO::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

int32_t ReportProfileInfoVO::getSubscriptionType() const
{
    return subscriptionType_;
}

void ReportProfileInfoVO::setSubscriptionType(int32_t value)
{
    subscriptionType_ = value;
    subscriptionTypeIsSet_ = true;
}

bool ReportProfileInfoVO::subscriptionTypeIsSet() const
{
    return subscriptionTypeIsSet_;
}

void ReportProfileInfoVO::unsetsubscriptionType()
{
    subscriptionTypeIsSet_ = false;
}

}
}
}
}
}


