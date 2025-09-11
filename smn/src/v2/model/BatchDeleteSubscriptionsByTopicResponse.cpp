

#include "huaweicloud/smn/v2/model/BatchDeleteSubscriptionsByTopicResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




BatchDeleteSubscriptionsByTopicResponse::BatchDeleteSubscriptionsByTopicResponse()
{
    subscriptionsResultIsSet_ = false;
}

BatchDeleteSubscriptionsByTopicResponse::~BatchDeleteSubscriptionsByTopicResponse() = default;

void BatchDeleteSubscriptionsByTopicResponse::validate()
{
}

web::json::value BatchDeleteSubscriptionsByTopicResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionsResultIsSet_) {
        val[utility::conversions::to_string_t("subscriptions_result")] = ModelBase::toJson(subscriptionsResult_);
    }

    return val;
}
bool BatchDeleteSubscriptionsByTopicResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subscriptions_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriptions_result"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchDeleteSubscriptionsResponseItemInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionsResult(refVal);
        }
    }
    return ok;
}


std::vector<BatchDeleteSubscriptionsResponseItemInfo>& BatchDeleteSubscriptionsByTopicResponse::getSubscriptionsResult()
{
    return subscriptionsResult_;
}

void BatchDeleteSubscriptionsByTopicResponse::setSubscriptionsResult(const std::vector<BatchDeleteSubscriptionsResponseItemInfo>& value)
{
    subscriptionsResult_ = value;
    subscriptionsResultIsSet_ = true;
}

bool BatchDeleteSubscriptionsByTopicResponse::subscriptionsResultIsSet() const
{
    return subscriptionsResultIsSet_;
}

void BatchDeleteSubscriptionsByTopicResponse::unsetsubscriptionsResult()
{
    subscriptionsResultIsSet_ = false;
}

}
}
}
}
}


