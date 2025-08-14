

#include "huaweicloud/iotda/v5/model/ListDevicePoliciesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDevicePoliciesResponse::ListDevicePoliciesResponse()
{
    policiesIsSet_ = false;
    pageIsSet_ = false;
}

ListDevicePoliciesResponse::~ListDevicePoliciesResponse() = default;

void ListDevicePoliciesResponse::validate()
{
}

web::json::value ListDevicePoliciesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policiesIsSet_) {
        val[utility::conversions::to_string_t("policies")] = ModelBase::toJson(policies_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ListDevicePoliciesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policies"));
        if(!fieldValue.is_null())
        {
            std::vector<ListDevicePolicyBase> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicies(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            Page refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


std::vector<ListDevicePolicyBase>& ListDevicePoliciesResponse::getPolicies()
{
    return policies_;
}

void ListDevicePoliciesResponse::setPolicies(const std::vector<ListDevicePolicyBase>& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool ListDevicePoliciesResponse::policiesIsSet() const
{
    return policiesIsSet_;
}

void ListDevicePoliciesResponse::unsetpolicies()
{
    policiesIsSet_ = false;
}

Page ListDevicePoliciesResponse::getPage() const
{
    return page_;
}

void ListDevicePoliciesResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListDevicePoliciesResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListDevicePoliciesResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


