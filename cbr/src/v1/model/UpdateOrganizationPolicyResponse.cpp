

#include "huaweicloud/cbr/v1/model/UpdateOrganizationPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




UpdateOrganizationPolicyResponse::UpdateOrganizationPolicyResponse()
{
    policyIsSet_ = false;
}

UpdateOrganizationPolicyResponse::~UpdateOrganizationPolicyResponse() = default;

void UpdateOrganizationPolicyResponse::validate()
{
}

web::json::value UpdateOrganizationPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}
bool UpdateOrganizationPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            OrganizationPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    return ok;
}


OrganizationPolicy UpdateOrganizationPolicyResponse::getPolicy() const
{
    return policy_;
}

void UpdateOrganizationPolicyResponse::setPolicy(const OrganizationPolicy& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool UpdateOrganizationPolicyResponse::policyIsSet() const
{
    return policyIsSet_;
}

void UpdateOrganizationPolicyResponse::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


