

#include "huaweicloud/rds/v3/model/DeleteSubscriptionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteSubscriptionRequestBody::DeleteSubscriptionRequestBody()
{
    subscriptionIdsIsSet_ = false;
    cleanSubscription_ = false;
    cleanSubscriptionIsSet_ = false;
}

DeleteSubscriptionRequestBody::~DeleteSubscriptionRequestBody() = default;

void DeleteSubscriptionRequestBody::validate()
{
}

web::json::value DeleteSubscriptionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionIdsIsSet_) {
        val[utility::conversions::to_string_t("subscription_ids")] = ModelBase::toJson(subscriptionIds_);
    }
    if(cleanSubscriptionIsSet_) {
        val[utility::conversions::to_string_t("clean_subscription")] = ModelBase::toJson(cleanSubscription_);
    }

    return val;
}
bool DeleteSubscriptionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subscription_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clean_subscription"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clean_subscription"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCleanSubscription(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DeleteSubscriptionRequestBody::getSubscriptionIds()
{
    return subscriptionIds_;
}

void DeleteSubscriptionRequestBody::setSubscriptionIds(const std::vector<std::string>& value)
{
    subscriptionIds_ = value;
    subscriptionIdsIsSet_ = true;
}

bool DeleteSubscriptionRequestBody::subscriptionIdsIsSet() const
{
    return subscriptionIdsIsSet_;
}

void DeleteSubscriptionRequestBody::unsetsubscriptionIds()
{
    subscriptionIdsIsSet_ = false;
}

bool DeleteSubscriptionRequestBody::isCleanSubscription() const
{
    return cleanSubscription_;
}

void DeleteSubscriptionRequestBody::setCleanSubscription(bool value)
{
    cleanSubscription_ = value;
    cleanSubscriptionIsSet_ = true;
}

bool DeleteSubscriptionRequestBody::cleanSubscriptionIsSet() const
{
    return cleanSubscriptionIsSet_;
}

void DeleteSubscriptionRequestBody::unsetcleanSubscription()
{
    cleanSubscriptionIsSet_ = false;
}

}
}
}
}
}


