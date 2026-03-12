

#include "huaweicloud/organizations/v1/model/ListDryRunPoliciesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListDryRunPoliciesResponse::ListDryRunPoliciesResponse()
{
    policiesIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListDryRunPoliciesResponse::~ListDryRunPoliciesResponse() = default;

void ListDryRunPoliciesResponse::validate()
{
}

web::json::value ListDryRunPoliciesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policiesIsSet_) {
        val[utility::conversions::to_string_t("policies")] = ModelBase::toJson(policies_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListDryRunPoliciesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policies"));
        if(!fieldValue.is_null())
        {
            std::vector<PolicySummaryDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicies(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfoDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<PolicySummaryDto>& ListDryRunPoliciesResponse::getPolicies()
{
    return policies_;
}

void ListDryRunPoliciesResponse::setPolicies(const std::vector<PolicySummaryDto>& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool ListDryRunPoliciesResponse::policiesIsSet() const
{
    return policiesIsSet_;
}

void ListDryRunPoliciesResponse::unsetpolicies()
{
    policiesIsSet_ = false;
}

PageInfoDto ListDryRunPoliciesResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListDryRunPoliciesResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListDryRunPoliciesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListDryRunPoliciesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


