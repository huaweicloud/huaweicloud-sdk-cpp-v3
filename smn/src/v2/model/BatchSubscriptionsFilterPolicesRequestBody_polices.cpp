

#include "huaweicloud/smn/v2/model/BatchSubscriptionsFilterPolicesRequestBody_polices.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




BatchSubscriptionsFilterPolicesRequestBody_polices::BatchSubscriptionsFilterPolicesRequestBody_polices()
{
    subscriptionUrn_ = "";
    subscriptionUrnIsSet_ = false;
    filterPolicesIsSet_ = false;
}

BatchSubscriptionsFilterPolicesRequestBody_polices::~BatchSubscriptionsFilterPolicesRequestBody_polices() = default;

void BatchSubscriptionsFilterPolicesRequestBody_polices::validate()
{
}

web::json::value BatchSubscriptionsFilterPolicesRequestBody_polices::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionUrnIsSet_) {
        val[utility::conversions::to_string_t("subscription_urn")] = ModelBase::toJson(subscriptionUrn_);
    }
    if(filterPolicesIsSet_) {
        val[utility::conversions::to_string_t("filter_polices")] = ModelBase::toJson(filterPolices_);
    }

    return val;
}
bool BatchSubscriptionsFilterPolicesRequestBody_polices::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("filter_polices"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_polices"));
        if(!fieldValue.is_null())
        {
            std::vector<SubscriptionsFilterPolicy> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterPolices(refVal);
        }
    }
    return ok;
}


std::string BatchSubscriptionsFilterPolicesRequestBody_polices::getSubscriptionUrn() const
{
    return subscriptionUrn_;
}

void BatchSubscriptionsFilterPolicesRequestBody_polices::setSubscriptionUrn(const std::string& value)
{
    subscriptionUrn_ = value;
    subscriptionUrnIsSet_ = true;
}

bool BatchSubscriptionsFilterPolicesRequestBody_polices::subscriptionUrnIsSet() const
{
    return subscriptionUrnIsSet_;
}

void BatchSubscriptionsFilterPolicesRequestBody_polices::unsetsubscriptionUrn()
{
    subscriptionUrnIsSet_ = false;
}

std::vector<SubscriptionsFilterPolicy>& BatchSubscriptionsFilterPolicesRequestBody_polices::getFilterPolices()
{
    return filterPolices_;
}

void BatchSubscriptionsFilterPolicesRequestBody_polices::setFilterPolices(const std::vector<SubscriptionsFilterPolicy>& value)
{
    filterPolices_ = value;
    filterPolicesIsSet_ = true;
}

bool BatchSubscriptionsFilterPolicesRequestBody_polices::filterPolicesIsSet() const
{
    return filterPolicesIsSet_;
}

void BatchSubscriptionsFilterPolicesRequestBody_polices::unsetfilterPolices()
{
    filterPolicesIsSet_ = false;
}

}
}
}
}
}


