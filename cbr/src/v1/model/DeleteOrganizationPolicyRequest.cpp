

#include "huaweicloud/cbr/v1/model/DeleteOrganizationPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




DeleteOrganizationPolicyRequest::DeleteOrganizationPolicyRequest()
{
    organizationPolicyId_ = "";
    organizationPolicyIdIsSet_ = false;
}

DeleteOrganizationPolicyRequest::~DeleteOrganizationPolicyRequest() = default;

void DeleteOrganizationPolicyRequest::validate()
{
}

web::json::value DeleteOrganizationPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(organizationPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("organization_policy_id")] = ModelBase::toJson(organizationPolicyId_);
    }

    return val;
}
bool DeleteOrganizationPolicyRequest::fromJson(const web::json::value& val)
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


std::string DeleteOrganizationPolicyRequest::getOrganizationPolicyId() const
{
    return organizationPolicyId_;
}

void DeleteOrganizationPolicyRequest::setOrganizationPolicyId(const std::string& value)
{
    organizationPolicyId_ = value;
    organizationPolicyIdIsSet_ = true;
}

bool DeleteOrganizationPolicyRequest::organizationPolicyIdIsSet() const
{
    return organizationPolicyIdIsSet_;
}

void DeleteOrganizationPolicyRequest::unsetorganizationPolicyId()
{
    organizationPolicyIdIsSet_ = false;
}

}
}
}
}
}


