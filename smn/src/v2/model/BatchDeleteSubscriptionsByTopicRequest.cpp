

#include "huaweicloud/smn/v2/model/BatchDeleteSubscriptionsByTopicRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




BatchDeleteSubscriptionsByTopicRequest::BatchDeleteSubscriptionsByTopicRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteSubscriptionsByTopicRequest::~BatchDeleteSubscriptionsByTopicRequest() = default;

void BatchDeleteSubscriptionsByTopicRequest::validate()
{
}

web::json::value BatchDeleteSubscriptionsByTopicRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteSubscriptionsByTopicRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchDeleteSubscriptionsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteSubscriptionsByTopicRequest::getTopicUrn() const
{
    return topicUrn_;
}

void BatchDeleteSubscriptionsByTopicRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool BatchDeleteSubscriptionsByTopicRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void BatchDeleteSubscriptionsByTopicRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

BatchDeleteSubscriptionsRequestBody BatchDeleteSubscriptionsByTopicRequest::getBody() const
{
    return body_;
}

void BatchDeleteSubscriptionsByTopicRequest::setBody(const BatchDeleteSubscriptionsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteSubscriptionsByTopicRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteSubscriptionsByTopicRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


