

#include "huaweicloud/smn/v2/model/AddSubscriptionFromSubscriptionUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




AddSubscriptionFromSubscriptionUserResponse::AddSubscriptionFromSubscriptionUserResponse()
{
    subscriptionsResultIsSet_ = false;
}

AddSubscriptionFromSubscriptionUserResponse::~AddSubscriptionFromSubscriptionUserResponse() = default;

void AddSubscriptionFromSubscriptionUserResponse::validate()
{
}

web::json::value AddSubscriptionFromSubscriptionUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionsResultIsSet_) {
        val[utility::conversions::to_string_t("subscriptions_result")] = ModelBase::toJson(subscriptionsResult_);
    }

    return val;
}
bool AddSubscriptionFromSubscriptionUserResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subscriptions_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriptions_result"));
        if(!fieldValue.is_null())
        {
            std::vector<AddSubscriptionFromSubscriptionUserResponseItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionsResult(refVal);
        }
    }
    return ok;
}


std::vector<AddSubscriptionFromSubscriptionUserResponseItem>& AddSubscriptionFromSubscriptionUserResponse::getSubscriptionsResult()
{
    return subscriptionsResult_;
}

void AddSubscriptionFromSubscriptionUserResponse::setSubscriptionsResult(const std::vector<AddSubscriptionFromSubscriptionUserResponseItem>& value)
{
    subscriptionsResult_ = value;
    subscriptionsResultIsSet_ = true;
}

bool AddSubscriptionFromSubscriptionUserResponse::subscriptionsResultIsSet() const
{
    return subscriptionsResultIsSet_;
}

void AddSubscriptionFromSubscriptionUserResponse::unsetsubscriptionsResult()
{
    subscriptionsResultIsSet_ = false;
}

}
}
}
}
}


