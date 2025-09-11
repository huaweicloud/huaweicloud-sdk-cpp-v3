

#include "huaweicloud/smn/v2/model/DeleteSubscriptionsByTopicRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteSubscriptionsByTopicRequest::DeleteSubscriptionsByTopicRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    subscriptionUrn_ = "";
    subscriptionUrnIsSet_ = false;
}

DeleteSubscriptionsByTopicRequest::~DeleteSubscriptionsByTopicRequest() = default;

void DeleteSubscriptionsByTopicRequest::validate()
{
}

web::json::value DeleteSubscriptionsByTopicRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(subscriptionUrnIsSet_) {
        val[utility::conversions::to_string_t("subscription_urn")] = ModelBase::toJson(subscriptionUrn_);
    }

    return val;
}
bool DeleteSubscriptionsByTopicRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteSubscriptionsByTopicRequest::getTopicUrn() const
{
    return topicUrn_;
}

void DeleteSubscriptionsByTopicRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool DeleteSubscriptionsByTopicRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void DeleteSubscriptionsByTopicRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string DeleteSubscriptionsByTopicRequest::getSubscriptionUrn() const
{
    return subscriptionUrn_;
}

void DeleteSubscriptionsByTopicRequest::setSubscriptionUrn(const std::string& value)
{
    subscriptionUrn_ = value;
    subscriptionUrnIsSet_ = true;
}

bool DeleteSubscriptionsByTopicRequest::subscriptionUrnIsSet() const
{
    return subscriptionUrnIsSet_;
}

void DeleteSubscriptionsByTopicRequest::unsetsubscriptionUrn()
{
    subscriptionUrnIsSet_ = false;
}

}
}
}
}
}


