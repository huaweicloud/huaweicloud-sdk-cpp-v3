

#include "huaweicloud/smn/v2/model/PollingPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




PollingPolicyRequest::PollingPolicyRequest()
{
    order_ = 0;
    orderIsSet_ = false;
    subscriptionUrnsIsSet_ = false;
}

PollingPolicyRequest::~PollingPolicyRequest() = default;

void PollingPolicyRequest::validate()
{
}

web::json::value PollingPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(subscriptionUrnsIsSet_) {
        val[utility::conversions::to_string_t("subscription_urns")] = ModelBase::toJson(subscriptionUrns_);
    }

    return val;
}
bool PollingPolicyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("subscription_urns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_urns"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionUrns(refVal);
        }
    }
    return ok;
}


int32_t PollingPolicyRequest::getOrder() const
{
    return order_;
}

void PollingPolicyRequest::setOrder(int32_t value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool PollingPolicyRequest::orderIsSet() const
{
    return orderIsSet_;
}

void PollingPolicyRequest::unsetorder()
{
    orderIsSet_ = false;
}

std::vector<std::string>& PollingPolicyRequest::getSubscriptionUrns()
{
    return subscriptionUrns_;
}

void PollingPolicyRequest::setSubscriptionUrns(const std::vector<std::string>& value)
{
    subscriptionUrns_ = value;
    subscriptionUrnsIsSet_ = true;
}

bool PollingPolicyRequest::subscriptionUrnsIsSet() const
{
    return subscriptionUrnsIsSet_;
}

void PollingPolicyRequest::unsetsubscriptionUrns()
{
    subscriptionUrnsIsSet_ = false;
}

}
}
}
}
}


