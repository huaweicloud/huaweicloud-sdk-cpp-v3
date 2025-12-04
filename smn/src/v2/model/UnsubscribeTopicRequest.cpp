

#include "huaweicloud/smn/v2/model/UnsubscribeTopicRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UnsubscribeTopicRequest::UnsubscribeTopicRequest()
{
    subscriptionUrn_ = "";
    subscriptionUrnIsSet_ = false;
}

UnsubscribeTopicRequest::~UnsubscribeTopicRequest() = default;

void UnsubscribeTopicRequest::validate()
{
}

web::json::value UnsubscribeTopicRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionUrnIsSet_) {
        val[utility::conversions::to_string_t("subscription_urn")] = ModelBase::toJson(subscriptionUrn_);
    }

    return val;
}
bool UnsubscribeTopicRequest::fromJson(const web::json::value& val)
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


std::string UnsubscribeTopicRequest::getSubscriptionUrn() const
{
    return subscriptionUrn_;
}

void UnsubscribeTopicRequest::setSubscriptionUrn(const std::string& value)
{
    subscriptionUrn_ = value;
    subscriptionUrnIsSet_ = true;
}

bool UnsubscribeTopicRequest::subscriptionUrnIsSet() const
{
    return subscriptionUrnIsSet_;
}

void UnsubscribeTopicRequest::unsetsubscriptionUrn()
{
    subscriptionUrnIsSet_ = false;
}

}
}
}
}
}


