

#include "huaweicloud/cbr/v1/model/ShowOrganizationPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowOrganizationPolicyRequest::ShowOrganizationPolicyRequest()
{
    organizationPolicyId_ = "";
    organizationPolicyIdIsSet_ = false;
}

ShowOrganizationPolicyRequest::~ShowOrganizationPolicyRequest() = default;

void ShowOrganizationPolicyRequest::validate()
{
}

web::json::value ShowOrganizationPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(organizationPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("organization_policy_id")] = ModelBase::toJson(organizationPolicyId_);
    }

    return val;
}
bool ShowOrganizationPolicyRequest::fromJson(const web::json::value& val)
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


std::string ShowOrganizationPolicyRequest::getOrganizationPolicyId() const
{
    return organizationPolicyId_;
}

void ShowOrganizationPolicyRequest::setOrganizationPolicyId(const std::string& value)
{
    organizationPolicyId_ = value;
    organizationPolicyIdIsSet_ = true;
}

bool ShowOrganizationPolicyRequest::organizationPolicyIdIsSet() const
{
    return organizationPolicyIdIsSet_;
}

void ShowOrganizationPolicyRequest::unsetorganizationPolicyId()
{
    organizationPolicyIdIsSet_ = false;
}

}
}
}
}
}


