

#include "huaweicloud/ecs/v2/model/UpdateRecycleBinPolicyReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateRecycleBinPolicyReq::UpdateRecycleBinPolicyReq()
{
    policyIsSet_ = false;
}

UpdateRecycleBinPolicyReq::~UpdateRecycleBinPolicyReq() = default;

void UpdateRecycleBinPolicyReq::validate()
{
}

web::json::value UpdateRecycleBinPolicyReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}
bool UpdateRecycleBinPolicyReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            UpdateRecycleBinPolicyOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    return ok;
}


UpdateRecycleBinPolicyOption UpdateRecycleBinPolicyReq::getPolicy() const
{
    return policy_;
}

void UpdateRecycleBinPolicyReq::setPolicy(const UpdateRecycleBinPolicyOption& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool UpdateRecycleBinPolicyReq::policyIsSet() const
{
    return policyIsSet_;
}

void UpdateRecycleBinPolicyReq::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


