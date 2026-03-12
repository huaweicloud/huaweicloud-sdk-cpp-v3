

#include "huaweicloud/organizations/v1/model/ShowDryRunPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ShowDryRunPolicyResponse::ShowDryRunPolicyResponse()
{
    policyIsSet_ = false;
}

ShowDryRunPolicyResponse::~ShowDryRunPolicyResponse() = default;

void ShowDryRunPolicyResponse::validate()
{
}

web::json::value ShowDryRunPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}
bool ShowDryRunPolicyResponse::fromJson(const web::json::value& val)
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


PolicyDto ShowDryRunPolicyResponse::getPolicy() const
{
    return policy_;
}

void ShowDryRunPolicyResponse::setPolicy(const PolicyDto& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool ShowDryRunPolicyResponse::policyIsSet() const
{
    return policyIsSet_;
}

void ShowDryRunPolicyResponse::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


