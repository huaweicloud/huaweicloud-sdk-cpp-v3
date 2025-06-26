

#include "huaweicloud/smn/v2/model/ListTopicMessageStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListTopicMessageStatisticsRequest::ListTopicMessageStatisticsRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListTopicMessageStatisticsRequest::~ListTopicMessageStatisticsRequest() = default;

void ListTopicMessageStatisticsRequest::validate()
{
}

web::json::value ListTopicMessageStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListTopicMessageStatisticsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string ListTopicMessageStatisticsRequest::getTopicUrn() const
{
    return topicUrn_;
}

void ListTopicMessageStatisticsRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool ListTopicMessageStatisticsRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void ListTopicMessageStatisticsRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string ListTopicMessageStatisticsRequest::getStartTime() const
{
    return startTime_;
}

void ListTopicMessageStatisticsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListTopicMessageStatisticsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListTopicMessageStatisticsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListTopicMessageStatisticsRequest::getEndTime() const
{
    return endTime_;
}

void ListTopicMessageStatisticsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListTopicMessageStatisticsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListTopicMessageStatisticsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


