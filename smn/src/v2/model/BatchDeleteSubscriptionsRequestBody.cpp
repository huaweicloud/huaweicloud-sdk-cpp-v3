

#include "huaweicloud/smn/v2/model/BatchDeleteSubscriptionsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




BatchDeleteSubscriptionsRequestBody::BatchDeleteSubscriptionsRequestBody()
{
    subscriptionUrnsIsSet_ = false;
}

BatchDeleteSubscriptionsRequestBody::~BatchDeleteSubscriptionsRequestBody() = default;

void BatchDeleteSubscriptionsRequestBody::validate()
{
}

web::json::value BatchDeleteSubscriptionsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionUrnsIsSet_) {
        val[utility::conversions::to_string_t("subscription_urns")] = ModelBase::toJson(subscriptionUrns_);
    }

    return val;
}
bool BatchDeleteSubscriptionsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subscription_urns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_urns"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchDeleteSubscriptionsRequestItemInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionUrns(refVal);
        }
    }
    return ok;
}


std::vector<BatchDeleteSubscriptionsRequestItemInfo>& BatchDeleteSubscriptionsRequestBody::getSubscriptionUrns()
{
    return subscriptionUrns_;
}

void BatchDeleteSubscriptionsRequestBody::setSubscriptionUrns(const std::vector<BatchDeleteSubscriptionsRequestItemInfo>& value)
{
    subscriptionUrns_ = value;
    subscriptionUrnsIsSet_ = true;
}

bool BatchDeleteSubscriptionsRequestBody::subscriptionUrnsIsSet() const
{
    return subscriptionUrnsIsSet_;
}

void BatchDeleteSubscriptionsRequestBody::unsetsubscriptionUrns()
{
    subscriptionUrnsIsSet_ = false;
}

}
}
}
}
}


