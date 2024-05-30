

#include "huaweicloud/organizations/v1/model/UpdatePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




UpdatePolicyResponse::UpdatePolicyResponse()
{
    policyIsSet_ = false;
}

UpdatePolicyResponse::~UpdatePolicyResponse() = default;

void UpdatePolicyResponse::validate()
{
}

web::json::value UpdatePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}
bool UpdatePolicyResponse::fromJson(const web::json::value& val)
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


PolicyDto UpdatePolicyResponse::getPolicy() const
{
    return policy_;
}

void UpdatePolicyResponse::setPolicy(const PolicyDto& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool UpdatePolicyResponse::policyIsSet() const
{
    return policyIsSet_;
}

void UpdatePolicyResponse::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


