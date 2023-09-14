

#include "huaweicloud/smn/v2/model/UpdateSubscriptionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateSubscriptionRequest::UpdateSubscriptionRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    subscriptionUrn_ = "";
    subscriptionUrnIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSubscriptionRequest::~UpdateSubscriptionRequest() = default;

void UpdateSubscriptionRequest::validate()
{
}

web::json::value UpdateSubscriptionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(subscriptionUrnIsSet_) {
        val[utility::conversions::to_string_t("subscription_urn")] = ModelBase::toJson(subscriptionUrn_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateSubscriptionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("subscription_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateSubscriptionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateSubscriptionRequest::getTopicUrn() const
{
    return topicUrn_;
}

void UpdateSubscriptionRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool UpdateSubscriptionRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void UpdateSubscriptionRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string UpdateSubscriptionRequest::getSubscriptionUrn() const
{
    return subscriptionUrn_;
}

void UpdateSubscriptionRequest::setSubscriptionUrn(const std::string& value)
{
    subscriptionUrn_ = value;
    subscriptionUrnIsSet_ = true;
}

bool UpdateSubscriptionRequest::subscriptionUrnIsSet() const
{
    return subscriptionUrnIsSet_;
}

void UpdateSubscriptionRequest::unsetsubscriptionUrn()
{
    subscriptionUrnIsSet_ = false;
}

UpdateSubscriptionRequestBody UpdateSubscriptionRequest::getBody() const
{
    return body_;
}

void UpdateSubscriptionRequest::setBody(const UpdateSubscriptionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSubscriptionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSubscriptionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


