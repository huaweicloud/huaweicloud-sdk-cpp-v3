

#include "huaweicloud/smn/v2/model/ListSubscriptionsByTopicResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListSubscriptionsByTopicResponse::ListSubscriptionsByTopicResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    subscriptionCount_ = 0;
    subscriptionCountIsSet_ = false;
    subscriptionsIsSet_ = false;
}

ListSubscriptionsByTopicResponse::~ListSubscriptionsByTopicResponse() = default;

void ListSubscriptionsByTopicResponse::validate()
{
}

web::json::value ListSubscriptionsByTopicResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(subscriptionCountIsSet_) {
        val[utility::conversions::to_string_t("subscription_count")] = ModelBase::toJson(subscriptionCount_);
    }
    if(subscriptionsIsSet_) {
        val[utility::conversions::to_string_t("subscriptions")] = ModelBase::toJson(subscriptions_);
    }

    return val;
}

bool ListSubscriptionsByTopicResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("subscription_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscriptions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriptions"));
        if(!fieldValue.is_null())
        {
            std::vector<ListSubscriptionsItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptions(refVal);
        }
    }
    return ok;
}

std::string ListSubscriptionsByTopicResponse::getRequestId() const
{
    return requestId_;
}

void ListSubscriptionsByTopicResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListSubscriptionsByTopicResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListSubscriptionsByTopicResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

int32_t ListSubscriptionsByTopicResponse::getSubscriptionCount() const
{
    return subscriptionCount_;
}

void ListSubscriptionsByTopicResponse::setSubscriptionCount(int32_t value)
{
    subscriptionCount_ = value;
    subscriptionCountIsSet_ = true;
}

bool ListSubscriptionsByTopicResponse::subscriptionCountIsSet() const
{
    return subscriptionCountIsSet_;
}

void ListSubscriptionsByTopicResponse::unsetsubscriptionCount()
{
    subscriptionCountIsSet_ = false;
}

std::vector<ListSubscriptionsItem>& ListSubscriptionsByTopicResponse::getSubscriptions()
{
    return subscriptions_;
}

void ListSubscriptionsByTopicResponse::setSubscriptions(const std::vector<ListSubscriptionsItem>& value)
{
    subscriptions_ = value;
    subscriptionsIsSet_ = true;
}

bool ListSubscriptionsByTopicResponse::subscriptionsIsSet() const
{
    return subscriptionsIsSet_;
}

void ListSubscriptionsByTopicResponse::unsetsubscriptions()
{
    subscriptionsIsSet_ = false;
}

}
}
}
}
}


