

#include "huaweicloud/cbr/v1/model/ListOrganizationPoliciesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListOrganizationPoliciesResponse::ListOrganizationPoliciesResponse()
{
    policiesIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListOrganizationPoliciesResponse::~ListOrganizationPoliciesResponse() = default;

void ListOrganizationPoliciesResponse::validate()
{
}

web::json::value ListOrganizationPoliciesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policiesIsSet_) {
        val[utility::conversions::to_string_t("policies")] = ModelBase::toJson(policies_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListOrganizationPoliciesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policies"));
        if(!fieldValue.is_null())
        {
            std::vector<OrganizationPolicy> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::vector<OrganizationPolicy>& ListOrganizationPoliciesResponse::getPolicies()
{
    return policies_;
}

void ListOrganizationPoliciesResponse::setPolicies(const std::vector<OrganizationPolicy>& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool ListOrganizationPoliciesResponse::policiesIsSet() const
{
    return policiesIsSet_;
}

void ListOrganizationPoliciesResponse::unsetpolicies()
{
    policiesIsSet_ = false;
}

int32_t ListOrganizationPoliciesResponse::getCount() const
{
    return count_;
}

void ListOrganizationPoliciesResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListOrganizationPoliciesResponse::countIsSet() const
{
    return countIsSet_;
}

void ListOrganizationPoliciesResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t ListOrganizationPoliciesResponse::getLimit() const
{
    return limit_;
}

void ListOrganizationPoliciesResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListOrganizationPoliciesResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListOrganizationPoliciesResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListOrganizationPoliciesResponse::getOffset() const
{
    return offset_;
}

void ListOrganizationPoliciesResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListOrganizationPoliciesResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListOrganizationPoliciesResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


