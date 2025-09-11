

#include "huaweicloud/smn/v2/model/UnsubscribeSubscriptionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UnsubscribeSubscriptionRequest::UnsubscribeSubscriptionRequest()
{
    subscriptionUrn_ = "";
    subscriptionUrnIsSet_ = false;
}

UnsubscribeSubscriptionRequest::~UnsubscribeSubscriptionRequest() = default;

void UnsubscribeSubscriptionRequest::validate()
{
}

web::json::value UnsubscribeSubscriptionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionUrnIsSet_) {
        val[utility::conversions::to_string_t("subscription_urn")] = ModelBase::toJson(subscriptionUrn_);
    }

    return val;
}
bool UnsubscribeSubscriptionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string UnsubscribeSubscriptionRequest::getSubscriptionUrn() const
{
    return subscriptionUrn_;
}

void UnsubscribeSubscriptionRequest::setSubscriptionUrn(const std::string& value)
{
    subscriptionUrn_ = value;
    subscriptionUrnIsSet_ = true;
}

bool UnsubscribeSubscriptionRequest::subscriptionUrnIsSet() const
{
    return subscriptionUrnIsSet_;
}

void UnsubscribeSubscriptionRequest::unsetsubscriptionUrn()
{
    subscriptionUrnIsSet_ = false;
}

}
}
}
}
}


