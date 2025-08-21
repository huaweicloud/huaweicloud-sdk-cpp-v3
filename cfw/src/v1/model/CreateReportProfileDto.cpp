

#include "huaweicloud/cfw/v1/model/CreateReportProfileDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateReportProfileDto::CreateReportProfileDto()
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
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    subscriptionType_ = 0;
    subscriptionTypeIsSet_ = false;
}

CreateReportProfileDto::~CreateReportProfileDto() = default;

void CreateReportProfileDto::validate()
{
}

web::json::value CreateReportProfileDto::toJson() const
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
    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(subscriptionTypeIsSet_) {
        val[utility::conversions::to_string_t("subscription_type")] = ModelBase::toJson(subscriptionType_);
    }

    return val;
}
bool CreateReportProfileDto::fromJson(const web::json::value& val)
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


std::string CreateReportProfileDto::getCategory() const
{
    return category_;
}

void CreateReportProfileDto::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool CreateReportProfileDto::categoryIsSet() const
{
    return categoryIsSet_;
}

void CreateReportProfileDto::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string CreateReportProfileDto::getDescription() const
{
    return description_;
}

void CreateReportProfileDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateReportProfileDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateReportProfileDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateReportProfileDto::getName() const
{
    return name_;
}

void CreateReportProfileDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateReportProfileDto::nameIsSet() const
{
    return nameIsSet_;
}

void CreateReportProfileDto::unsetname()
{
    nameIsSet_ = false;
}

int32_t CreateReportProfileDto::getSendPeriod() const
{
    return sendPeriod_;
}

void CreateReportProfileDto::setSendPeriod(int32_t value)
{
    sendPeriod_ = value;
    sendPeriodIsSet_ = true;
}

bool CreateReportProfileDto::sendPeriodIsSet() const
{
    return sendPeriodIsSet_;
}

void CreateReportProfileDto::unsetsendPeriod()
{
    sendPeriodIsSet_ = false;
}

int32_t CreateReportProfileDto::getSendWeekDay() const
{
    return sendWeekDay_;
}

void CreateReportProfileDto::setSendWeekDay(int32_t value)
{
    sendWeekDay_ = value;
    sendWeekDayIsSet_ = true;
}

bool CreateReportProfileDto::sendWeekDayIsSet() const
{
    return sendWeekDayIsSet_;
}

void CreateReportProfileDto::unsetsendWeekDay()
{
    sendWeekDayIsSet_ = false;
}

StatisticPeriod CreateReportProfileDto::getStatisticPeriod() const
{
    return statisticPeriod_;
}

void CreateReportProfileDto::setStatisticPeriod(const StatisticPeriod& value)
{
    statisticPeriod_ = value;
    statisticPeriodIsSet_ = true;
}

bool CreateReportProfileDto::statisticPeriodIsSet() const
{
    return statisticPeriodIsSet_;
}

void CreateReportProfileDto::unsetstatisticPeriod()
{
    statisticPeriodIsSet_ = false;
}

int32_t CreateReportProfileDto::getStatus() const
{
    return status_;
}

void CreateReportProfileDto::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateReportProfileDto::statusIsSet() const
{
    return statusIsSet_;
}

void CreateReportProfileDto::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateReportProfileDto::getTopicUrn() const
{
    return topicUrn_;
}

void CreateReportProfileDto::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool CreateReportProfileDto::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void CreateReportProfileDto::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

int32_t CreateReportProfileDto::getSubscriptionType() const
{
    return subscriptionType_;
}

void CreateReportProfileDto::setSubscriptionType(int32_t value)
{
    subscriptionType_ = value;
    subscriptionTypeIsSet_ = true;
}

bool CreateReportProfileDto::subscriptionTypeIsSet() const
{
    return subscriptionTypeIsSet_;
}

void CreateReportProfileDto::unsetsubscriptionType()
{
    subscriptionTypeIsSet_ = false;
}

}
}
}
}
}


