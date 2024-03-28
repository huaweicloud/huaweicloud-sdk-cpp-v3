

#include "huaweicloud/cbr/v1/model/ListOrganizationPolicyDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListOrganizationPolicyDetailRequest::ListOrganizationPolicyDetailRequest()
{
    organizationPolicyId_ = "";
    organizationPolicyIdIsSet_ = false;
}

ListOrganizationPolicyDetailRequest::~ListOrganizationPolicyDetailRequest() = default;

void ListOrganizationPolicyDetailRequest::validate()
{
}

web::json::value ListOrganizationPolicyDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(organizationPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("organization_policy_id")] = ModelBase::toJson(organizationPolicyId_);
    }

    return val;
}
bool ListOrganizationPolicyDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("organization_policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organization_policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationPolicyId(refVal);
        }
    }
    return ok;
}


std::string ListOrganizationPolicyDetailRequest::getOrganizationPolicyId() const
{
    return organizationPolicyId_;
}

void ListOrganizationPolicyDetailRequest::setOrganizationPolicyId(const std::string& value)
{
    organizationPolicyId_ = value;
    organizationPolicyIdIsSet_ = true;
}

bool ListOrganizationPolicyDetailRequest::organizationPolicyIdIsSet() const
{
    return organizationPolicyIdIsSet_;
}

void ListOrganizationPolicyDetailRequest::unsetorganizationPolicyId()
{
    organizationPolicyIdIsSet_ = false;
}

}
}
}
}
}


