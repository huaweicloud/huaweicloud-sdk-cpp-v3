

#include "huaweicloud/ecs/v2/model/ListFlavorSellPoliciesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListFlavorSellPoliciesResponse::ListFlavorSellPoliciesResponse()
{
    count_ = 0;
    countIsSet_ = false;
    sellPoliciesIsSet_ = false;
}

ListFlavorSellPoliciesResponse::~ListFlavorSellPoliciesResponse() = default;

void ListFlavorSellPoliciesResponse::validate()
{
}

web::json::value ListFlavorSellPoliciesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(sellPoliciesIsSet_) {
        val[utility::conversions::to_string_t("sell_policies")] = ModelBase::toJson(sellPolicies_);
    }

    return val;
}

bool ListFlavorSellPoliciesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sell_policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sell_policies"));
        if(!fieldValue.is_null())
        {
            std::vector<ListFlavorSellPoliciesResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSellPolicies(refVal);
        }
    }
    return ok;
}

int32_t ListFlavorSellPoliciesResponse::getCount() const
{
    return count_;
}

void ListFlavorSellPoliciesResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListFlavorSellPoliciesResponse::countIsSet() const
{
    return countIsSet_;
}

void ListFlavorSellPoliciesResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<ListFlavorSellPoliciesResult>& ListFlavorSellPoliciesResponse::getSellPolicies()
{
    return sellPolicies_;
}

void ListFlavorSellPoliciesResponse::setSellPolicies(const std::vector<ListFlavorSellPoliciesResult>& value)
{
    sellPolicies_ = value;
    sellPoliciesIsSet_ = true;
}

bool ListFlavorSellPoliciesResponse::sellPoliciesIsSet() const
{
    return sellPoliciesIsSet_;
}

void ListFlavorSellPoliciesResponse::unsetsellPolicies()
{
    sellPoliciesIsSet_ = false;
}

}
}
}
}
}


