

#include "huaweicloud/lts/v2/model/ListNotificationTopicsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListNotificationTopicsResponse::ListNotificationTopicsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    topicCount_ = 0;
    topicCountIsSet_ = false;
    topicsIsSet_ = false;
}

ListNotificationTopicsResponse::~ListNotificationTopicsResponse() = default;

void ListNotificationTopicsResponse::validate()
{
}

web::json::value ListNotificationTopicsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(topicCountIsSet_) {
        val[utility::conversions::to_string_t("topic_count")] = ModelBase::toJson(topicCount_);
    }
    if(topicsIsSet_) {
        val[utility::conversions::to_string_t("topics")] = ModelBase::toJson(topics_);
    }

    return val;
}

bool ListNotificationTopicsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topics"));
        if(!fieldValue.is_null())
        {
            std::vector<Topics> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopics(refVal);
        }
    }
    return ok;
}

std::string ListNotificationTopicsResponse::getRequestId() const
{
    return requestId_;
}

void ListNotificationTopicsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListNotificationTopicsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListNotificationTopicsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

int32_t ListNotificationTopicsResponse::getTopicCount() const
{
    return topicCount_;
}

void ListNotificationTopicsResponse::setTopicCount(int32_t value)
{
    topicCount_ = value;
    topicCountIsSet_ = true;
}

bool ListNotificationTopicsResponse::topicCountIsSet() const
{
    return topicCountIsSet_;
}

void ListNotificationTopicsResponse::unsettopicCount()
{
    topicCountIsSet_ = false;
}

std::vector<Topics>& ListNotificationTopicsResponse::getTopics()
{
    return topics_;
}

void ListNotificationTopicsResponse::setTopics(const std::vector<Topics>& value)
{
    topics_ = value;
    topicsIsSet_ = true;
}

bool ListNotificationTopicsResponse::topicsIsSet() const
{
    return topicsIsSet_;
}

void ListNotificationTopicsResponse::unsettopics()
{
    topicsIsSet_ = false;
}

}
}
}
}
}


