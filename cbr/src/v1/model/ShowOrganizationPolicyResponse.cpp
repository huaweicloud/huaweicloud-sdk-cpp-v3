

#include "huaweicloud/cbr/v1/model/ShowOrganizationPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowOrganizationPolicyResponse::ShowOrganizationPolicyResponse()
{
    policyIsSet_ = false;
}

ShowOrganizationPolicyResponse::~ShowOrganizationPolicyResponse() = default;

void ShowOrganizationPolicyResponse::validate()
{
}

web::json::value ShowOrganizationPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}
bool ShowOrganizationPolicyResponse::fromJson(const web::json::value& val)
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


OrganizationPolicy ShowOrganizationPolicyResponse::getPolicy() const
{
    return policy_;
}

void ShowOrganizationPolicyResponse::setPolicy(const OrganizationPolicy& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool ShowOrganizationPolicyResponse::policyIsSet() const
{
    return policyIsSet_;
}

void ShowOrganizationPolicyResponse::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


