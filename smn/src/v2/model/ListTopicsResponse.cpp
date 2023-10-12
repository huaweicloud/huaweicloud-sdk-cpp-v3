

#include "huaweicloud/smn/v2/model/ListTopicsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListTopicsResponse::ListTopicsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    topicCount_ = 0;
    topicCountIsSet_ = false;
    topicsIsSet_ = false;
}

ListTopicsResponse::~ListTopicsResponse() = default;

void ListTopicsResponse::validate()
{
}

web::json::value ListTopicsResponse::toJson() const
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
bool ListTopicsResponse::fromJson(const web::json::value& val)
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
            std::vector<ListTopicsItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopics(refVal);
        }
    }
    return ok;
}


std::string ListTopicsResponse::getRequestId() const
{
    return requestId_;
}

void ListTopicsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListTopicsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListTopicsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

int32_t ListTopicsResponse::getTopicCount() const
{
    return topicCount_;
}

void ListTopicsResponse::setTopicCount(int32_t value)
{
    topicCount_ = value;
    topicCountIsSet_ = true;
}

bool ListTopicsResponse::topicCountIsSet() const
{
    return topicCountIsSet_;
}

void ListTopicsResponse::unsettopicCount()
{
    topicCountIsSet_ = false;
}

std::vector<ListTopicsItem>& ListTopicsResponse::getTopics()
{
    return topics_;
}

void ListTopicsResponse::setTopics(const std::vector<ListTopicsItem>& value)
{
    topics_ = value;
    topicsIsSet_ = true;
}

bool ListTopicsResponse::topicsIsSet() const
{
    return topicsIsSet_;
}

void ListTopicsResponse::unsettopics()
{
    topicsIsSet_ = false;
}

}
}
}
}
}


