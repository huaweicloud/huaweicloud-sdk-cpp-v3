

#include "huaweicloud/smn/v2/model/BatchDeleteSubscriptionsRequestItemInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




BatchDeleteSubscriptionsRequestItemInfo::BatchDeleteSubscriptionsRequestItemInfo()
{
    subscriptionUrn_ = "";
    subscriptionUrnIsSet_ = false;
}

BatchDeleteSubscriptionsRequestItemInfo::~BatchDeleteSubscriptionsRequestItemInfo() = default;

void BatchDeleteSubscriptionsRequestItemInfo::validate()
{
}

web::json::value BatchDeleteSubscriptionsRequestItemInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionUrnIsSet_) {
        val[utility::conversions::to_string_t("subscription_urn")] = ModelBase::toJson(subscriptionUrn_);
    }

    return val;
}
bool BatchDeleteSubscriptionsRequestItemInfo::fromJson(const web::json::value& val)
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


std::string BatchDeleteSubscriptionsRequestItemInfo::getSubscriptionUrn() const
{
    return subscriptionUrn_;
}

void BatchDeleteSubscriptionsRequestItemInfo::setSubscriptionUrn(const std::string& value)
{
    subscriptionUrn_ = value;
    subscriptionUrnIsSet_ = true;
}

bool BatchDeleteSubscriptionsRequestItemInfo::subscriptionUrnIsSet() const
{
    return subscriptionUrnIsSet_;
}

void BatchDeleteSubscriptionsRequestItemInfo::unsetsubscriptionUrn()
{
    subscriptionUrnIsSet_ = false;
}

}
}
}
}
}


