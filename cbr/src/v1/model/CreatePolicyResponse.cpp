

#include "huaweicloud/cbr/v1/model/CreatePolicyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CreatePolicyResponse::CreatePolicyResponse()
{
    policyIsSet_ = false;
}

CreatePolicyResponse::~CreatePolicyResponse() = default;

void CreatePolicyResponse::validate()
{
}

web::json::value CreatePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}

bool CreatePolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            Policy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    return ok;
}

Policy CreatePolicyResponse::getPolicy() const
{
    return policy_;
}

void CreatePolicyResponse::setPolicy(const Policy& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool CreatePolicyResponse::policyIsSet() const
{
    return policyIsSet_;
}

void CreatePolicyResponse::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


