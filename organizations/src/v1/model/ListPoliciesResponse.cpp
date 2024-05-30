

#include "huaweicloud/organizations/v1/model/ListPoliciesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListPoliciesResponse::ListPoliciesResponse()
{
    policiesIsSet_ = false;
    pageInfoIsSet_ = false;
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
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
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


std::vector<PolicySummaryDto>& ListPoliciesResponse::getPolicies()
{
    return policies_;
}

void ListPoliciesResponse::setPolicies(const std::vector<PolicySummaryDto>& value)
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

PageInfoDto ListPoliciesResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListPoliciesResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListPoliciesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListPoliciesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


