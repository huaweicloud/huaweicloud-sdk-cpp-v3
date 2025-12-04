

#include "huaweicloud/smn/v2/model/ListTopicsWithAssociatedResourcesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListTopicsWithAssociatedResourcesResponse::ListTopicsWithAssociatedResourcesResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    topicCount_ = 0;
    topicCountIsSet_ = false;
    topicsIsSet_ = false;
}

ListTopicsWithAssociatedResourcesResponse::~ListTopicsWithAssociatedResourcesResponse() = default;

void ListTopicsWithAssociatedResourcesResponse::validate()
{
}

web::json::value ListTopicsWithAssociatedResourcesResponse::toJson() const
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
bool ListTopicsWithAssociatedResourcesResponse::fromJson(const web::json::value& val)
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
            std::vector<ListTopicsWithAssociatedResourcesItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopics(refVal);
        }
    }
    return ok;
}


std::string ListTopicsWithAssociatedResourcesResponse::getRequestId() const
{
    return requestId_;
}

void ListTopicsWithAssociatedResourcesResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListTopicsWithAssociatedResourcesResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListTopicsWithAssociatedResourcesResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

int32_t ListTopicsWithAssociatedResourcesResponse::getTopicCount() const
{
    return topicCount_;
}

void ListTopicsWithAssociatedResourcesResponse::setTopicCount(int32_t value)
{
    topicCount_ = value;
    topicCountIsSet_ = true;
}

bool ListTopicsWithAssociatedResourcesResponse::topicCountIsSet() const
{
    return topicCountIsSet_;
}

void ListTopicsWithAssociatedResourcesResponse::unsettopicCount()
{
    topicCountIsSet_ = false;
}

std::vector<ListTopicsWithAssociatedResourcesItem>& ListTopicsWithAssociatedResourcesResponse::getTopics()
{
    return topics_;
}

void ListTopicsWithAssociatedResourcesResponse::setTopics(const std::vector<ListTopicsWithAssociatedResourcesItem>& value)
{
    topics_ = value;
    topicsIsSet_ = true;
}

bool ListTopicsWithAssociatedResourcesResponse::topicsIsSet() const
{
    return topicsIsSet_;
}

void ListTopicsWithAssociatedResourcesResponse::unsettopics()
{
    topicsIsSet_ = false;
}

}
}
}
}
}


