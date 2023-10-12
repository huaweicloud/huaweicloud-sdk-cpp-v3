

#include "huaweicloud/cbr/v1/model/ListPoliciesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListPoliciesResponse::ListPoliciesResponse()
{
    policiesIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

ListPoliciesResponse::~ListPoliciesResponse() = default;

void ListPoliciesResponse::validate()
{
}

web::json::value ListPoliciesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policiesIsSet_) {
        val[utility::conversions::to_string_t("policies")] = ModelBase::toJson(policies_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ListPoliciesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policies"));
        if(!fieldValue.is_null())
        {
            std::vector<Policy> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicies(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::vector<Policy>& ListPoliciesResponse::getPolicies()
{
    return policies_;
}

void ListPoliciesResponse::setPolicies(const std::vector<Policy>& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool ListPoliciesResponse::policiesIsSet() const
{
    return policiesIsSet_;
}

void ListPoliciesResponse::unsetpolicies()
{
    policiesIsSet_ = false;
}

int32_t ListPoliciesResponse::getCount() const
{
    return count_;
}

void ListPoliciesResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListPoliciesResponse::countIsSet() const
{
    return countIsSet_;
}

void ListPoliciesResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


