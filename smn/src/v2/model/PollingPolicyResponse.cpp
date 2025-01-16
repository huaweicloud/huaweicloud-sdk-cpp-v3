

#include "huaweicloud/smn/v2/model/PollingPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




PollingPolicyResponse::PollingPolicyResponse()
{
    order_ = 0;
    orderIsSet_ = false;
    subscriptionsIsSet_ = false;
}

PollingPolicyResponse::~PollingPolicyResponse() = default;

void PollingPolicyResponse::validate()
{
}

web::json::value PollingPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(subscriptionsIsSet_) {
        val[utility::conversions::to_string_t("subscriptions")] = ModelBase::toJson(subscriptions_);
    }

    return val;
}
bool PollingPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscriptions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriptions"));
        if(!fieldValue.is_null())
        {
            std::vector<PollingPolicySubscriptionDetails> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptions(refVal);
        }
    }
    return ok;
}


int32_t PollingPolicyResponse::getOrder() const
{
    return order_;
}

void PollingPolicyResponse::setOrder(int32_t value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool PollingPolicyResponse::orderIsSet() const
{
    return orderIsSet_;
}

void PollingPolicyResponse::unsetorder()
{
    orderIsSet_ = false;
}

std::vector<PollingPolicySubscriptionDetails>& PollingPolicyResponse::getSubscriptions()
{
    return subscriptions_;
}

void PollingPolicyResponse::setSubscriptions(const std::vector<PollingPolicySubscriptionDetails>& value)
{
    subscriptions_ = value;
    subscriptionsIsSet_ = true;
}

bool PollingPolicyResponse::subscriptionsIsSet() const
{
    return subscriptionsIsSet_;
}

void PollingPolicyResponse::unsetsubscriptions()
{
    subscriptionsIsSet_ = false;
}

}
}
}
}
}


