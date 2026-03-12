

#include "huaweicloud/organizations/v1/model/UpdateDryRunPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




UpdateDryRunPolicyResponse::UpdateDryRunPolicyResponse()
{
    policyIsSet_ = false;
}

UpdateDryRunPolicyResponse::~UpdateDryRunPolicyResponse() = default;

void UpdateDryRunPolicyResponse::validate()
{
}

web::json::value UpdateDryRunPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}
bool UpdateDryRunPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            PolicyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    return ok;
}


PolicyDto UpdateDryRunPolicyResponse::getPolicy() const
{
    return policy_;
}

void UpdateDryRunPolicyResponse::setPolicy(const PolicyDto& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool UpdateDryRunPolicyResponse::policyIsSet() const
{
    return policyIsSet_;
}

void UpdateDryRunPolicyResponse::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


