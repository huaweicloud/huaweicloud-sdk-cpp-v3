

#include "huaweicloud/cbr/v1/model/CreateOrganizationPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CreateOrganizationPolicyResponse::CreateOrganizationPolicyResponse()
{
    policyIsSet_ = false;
}

CreateOrganizationPolicyResponse::~CreateOrganizationPolicyResponse() = default;

void CreateOrganizationPolicyResponse::validate()
{
}

web::json::value CreateOrganizationPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}
bool CreateOrganizationPolicyResponse::fromJson(const web::json::value& val)
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


OrganizationPolicy CreateOrganizationPolicyResponse::getPolicy() const
{
    return policy_;
}

void CreateOrganizationPolicyResponse::setPolicy(const OrganizationPolicy& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool CreateOrganizationPolicyResponse::policyIsSet() const
{
    return policyIsSet_;
}

void CreateOrganizationPolicyResponse::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


