

#include "huaweicloud/smn/v2/model/CancelSubscriptionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CancelSubscriptionRequest::CancelSubscriptionRequest()
{
    subscriptionUrn_ = "";
    subscriptionUrnIsSet_ = false;
}

CancelSubscriptionRequest::~CancelSubscriptionRequest() = default;

void CancelSubscriptionRequest::validate()
{
}

web::json::value CancelSubscriptionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionUrnIsSet_) {
        val[utility::conversions::to_string_t("subscription_urn")] = ModelBase::toJson(subscriptionUrn_);
    }

    return val;
}

bool CancelSubscriptionRequest::fromJson(const web::json::value& val)
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

std::string CancelSubscriptionRequest::getSubscriptionUrn() const
{
    return subscriptionUrn_;
}

void CancelSubscriptionRequest::setSubscriptionUrn(const std::string& value)
{
    subscriptionUrn_ = value;
    subscriptionUrnIsSet_ = true;
}

bool CancelSubscriptionRequest::subscriptionUrnIsSet() const
{
    return subscriptionUrnIsSet_;
}

void CancelSubscriptionRequest::unsetsubscriptionUrn()
{
    subscriptionUrnIsSet_ = false;
}

}
}
}
}
}


