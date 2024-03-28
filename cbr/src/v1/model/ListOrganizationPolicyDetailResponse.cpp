

#include "huaweicloud/cbr/v1/model/ListOrganizationPolicyDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListOrganizationPolicyDetailResponse::ListOrganizationPolicyDetailResponse()
{
    policiesIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListOrganizationPolicyDetailResponse::~ListOrganizationPolicyDetailResponse() = default;

void ListOrganizationPolicyDetailResponse::validate()
{
}

web::json::value ListOrganizationPolicyDetailResponse::toJson() const
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
bool ListOrganizationPolicyDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policies"));
        if(!fieldValue.is_null())
        {
            std::vector<OrganizationPolicyStatus> refVal;
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


std::vector<OrganizationPolicyStatus>& ListOrganizationPolicyDetailResponse::getPolicies()
{
    return policies_;
}

void ListOrganizationPolicyDetailResponse::setPolicies(const std::vector<OrganizationPolicyStatus>& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool ListOrganizationPolicyDetailResponse::policiesIsSet() const
{
    return policiesIsSet_;
}

void ListOrganizationPolicyDetailResponse::unsetpolicies()
{
    policiesIsSet_ = false;
}

int32_t ListOrganizationPolicyDetailResponse::getCount() const
{
    return count_;
}

void ListOrganizationPolicyDetailResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListOrganizationPolicyDetailResponse::countIsSet() const
{
    return countIsSet_;
}

void ListOrganizationPolicyDetailResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t ListOrganizationPolicyDetailResponse::getLimit() const
{
    return limit_;
}

void ListOrganizationPolicyDetailResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListOrganizationPolicyDetailResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListOrganizationPolicyDetailResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListOrganizationPolicyDetailResponse::getOffset() const
{
    return offset_;
}

void ListOrganizationPolicyDetailResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListOrganizationPolicyDetailResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListOrganizationPolicyDetailResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


