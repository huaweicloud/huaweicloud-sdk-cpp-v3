

#include "huaweicloud/rds/v3/model/BatchModifySubscriptionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchModifySubscriptionResponse::BatchModifySubscriptionResponse()
{
    subscriptionsIsSet_ = false;
}

BatchModifySubscriptionResponse::~BatchModifySubscriptionResponse() = default;

void BatchModifySubscriptionResponse::validate()
{
}

web::json::value BatchModifySubscriptionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionsIsSet_) {
        val[utility::conversions::to_string_t("subscriptions")] = ModelBase::toJson(subscriptions_);
    }

    return val;
}
bool BatchModifySubscriptionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subscriptions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriptions"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchOperateResponseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptions(refVal);
        }
    }
    return ok;
}


std::vector<BatchOperateResponseInfo>& BatchModifySubscriptionResponse::getSubscriptions()
{
    return subscriptions_;
}

void BatchModifySubscriptionResponse::setSubscriptions(const std::vector<BatchOperateResponseInfo>& value)
{
    subscriptions_ = value;
    subscriptionsIsSet_ = true;
}

bool BatchModifySubscriptionResponse::subscriptionsIsSet() const
{
    return subscriptionsIsSet_;
}

void BatchModifySubscriptionResponse::unsetsubscriptions()
{
    subscriptionsIsSet_ = false;
}

}
}
}
}
}


