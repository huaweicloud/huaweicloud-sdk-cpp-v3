

#include "huaweicloud/cbr/v1/model/OrganizationPolicyUpdateReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




OrganizationPolicyUpdateReq::OrganizationPolicyUpdateReq()
{
    policyIsSet_ = false;
}

OrganizationPolicyUpdateReq::~OrganizationPolicyUpdateReq() = default;

void OrganizationPolicyUpdateReq::validate()
{
}

web::json::value OrganizationPolicyUpdateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}
bool OrganizationPolicyUpdateReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            OrganizationPolicyUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    return ok;
}


OrganizationPolicyUpdate OrganizationPolicyUpdateReq::getPolicy() const
{
    return policy_;
}

void OrganizationPolicyUpdateReq::setPolicy(const OrganizationPolicyUpdate& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool OrganizationPolicyUpdateReq::policyIsSet() const
{
    return policyIsSet_;
}

void OrganizationPolicyUpdateReq::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


