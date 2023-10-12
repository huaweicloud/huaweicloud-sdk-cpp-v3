

#include "huaweicloud/smn/v2/model/ListSubscriptionsByTopicRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListSubscriptionsByTopicRequest::ListSubscriptionsByTopicRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListSubscriptionsByTopicRequest::~ListSubscriptionsByTopicRequest() = default;

void ListSubscriptionsByTopicRequest::validate()
{
}

web::json::value ListSubscriptionsByTopicRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListSubscriptionsByTopicRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListSubscriptionsByTopicRequest::getTopicUrn() const
{
    return topicUrn_;
}

void ListSubscriptionsByTopicRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool ListSubscriptionsByTopicRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void ListSubscriptionsByTopicRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

int32_t ListSubscriptionsByTopicRequest::getOffset() const
{
    return offset_;
}

void ListSubscriptionsByTopicRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSubscriptionsByTopicRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSubscriptionsByTopicRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSubscriptionsByTopicRequest::getLimit() const
{
    return limit_;
}

void ListSubscriptionsByTopicRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSubscriptionsByTopicRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSubscriptionsByTopicRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


