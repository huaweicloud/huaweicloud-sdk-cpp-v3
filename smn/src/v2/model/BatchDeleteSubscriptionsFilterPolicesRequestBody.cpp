

#include "huaweicloud/smn/v2/model/BatchDeleteSubscriptionsFilterPolicesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




BatchDeleteSubscriptionsFilterPolicesRequestBody::BatchDeleteSubscriptionsFilterPolicesRequestBody()
{
    subscriptionUrnsIsSet_ = false;
}

BatchDeleteSubscriptionsFilterPolicesRequestBody::~BatchDeleteSubscriptionsFilterPolicesRequestBody() = default;

void BatchDeleteSubscriptionsFilterPolicesRequestBody::validate()
{
}

web::json::value BatchDeleteSubscriptionsFilterPolicesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionUrnsIsSet_) {
        val[utility::conversions::to_string_t("subscription_urns")] = ModelBase::toJson(subscriptionUrns_);
    }

    return val;
}
bool BatchDeleteSubscriptionsFilterPolicesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::vector<std::string>& BatchDeleteSubscriptionsFilterPolicesRequestBody::getSubscriptionUrns()
{
    return subscriptionUrns_;
}

void BatchDeleteSubscriptionsFilterPolicesRequestBody::setSubscriptionUrns(const std::vector<std::string>& value)
{
    subscriptionUrns_ = value;
    subscriptionUrnsIsSet_ = true;
}

bool BatchDeleteSubscriptionsFilterPolicesRequestBody::subscriptionUrnsIsSet() const
{
    return subscriptionUrnsIsSet_;
}

void BatchDeleteSubscriptionsFilterPolicesRequestBody::unsetsubscriptionUrns()
{
    subscriptionUrnsIsSet_ = false;
}

}
}
}
}
}


