

#include "huaweicloud/cbr/v1/model/ShowPolicyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowPolicyResponse::ShowPolicyResponse()
{
    policyIsSet_ = false;
}

ShowPolicyResponse::~ShowPolicyResponse() = default;

void ShowPolicyResponse::validate()
{
}

web::json::value ShowPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}

bool ShowPolicyResponse::fromJson(const web::json::value& val)
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


Policy ShowPolicyResponse::getPolicy() const
{
    return policy_;
}

void ShowPolicyResponse::setPolicy(const Policy& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool ShowPolicyResponse::policyIsSet() const
{
    return policyIsSet_;
}

void ShowPolicyResponse::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


