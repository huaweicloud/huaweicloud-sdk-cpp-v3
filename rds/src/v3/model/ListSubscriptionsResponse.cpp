

#include "huaweicloud/rds/v3/model/ListSubscriptionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSubscriptionsResponse::ListSubscriptionsResponse()
{
    subscriptionsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListSubscriptionsResponse::~ListSubscriptionsResponse() = default;

void ListSubscriptionsResponse::validate()
{
}

web::json::value ListSubscriptionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionsIsSet_) {
        val[utility::conversions::to_string_t("subscriptions")] = ModelBase::toJson(subscriptions_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListSubscriptionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subscriptions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriptions"));
        if(!fieldValue.is_null())
        {
            std::vector<ListSubscriptionInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<ListSubscriptionInfo>& ListSubscriptionsResponse::getSubscriptions()
{
    return subscriptions_;
}

void ListSubscriptionsResponse::setSubscriptions(const std::vector<ListSubscriptionInfo>& value)
{
    subscriptions_ = value;
    subscriptionsIsSet_ = true;
}

bool ListSubscriptionsResponse::subscriptionsIsSet() const
{
    return subscriptionsIsSet_;
}

void ListSubscriptionsResponse::unsetsubscriptions()
{
    subscriptionsIsSet_ = false;
}

int32_t ListSubscriptionsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListSubscriptionsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListSubscriptionsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListSubscriptionsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


