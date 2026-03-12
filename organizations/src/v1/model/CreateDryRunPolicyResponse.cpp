

#include "huaweicloud/organizations/v1/model/CreateDryRunPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CreateDryRunPolicyResponse::CreateDryRunPolicyResponse()
{
    policyIsSet_ = false;
}

CreateDryRunPolicyResponse::~CreateDryRunPolicyResponse() = default;

void CreateDryRunPolicyResponse::validate()
{
}

web::json::value CreateDryRunPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}
bool CreateDryRunPolicyResponse::fromJson(const web::json::value& val)
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


PolicyDto CreateDryRunPolicyResponse::getPolicy() const
{
    return policy_;
}

void CreateDryRunPolicyResponse::setPolicy(const PolicyDto& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool CreateDryRunPolicyResponse::policyIsSet() const
{
    return policyIsSet_;
}

void CreateDryRunPolicyResponse::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


