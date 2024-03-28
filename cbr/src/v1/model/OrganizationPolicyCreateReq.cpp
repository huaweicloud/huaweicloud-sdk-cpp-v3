

#include "huaweicloud/cbr/v1/model/OrganizationPolicyCreateReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




OrganizationPolicyCreateReq::OrganizationPolicyCreateReq()
{
    policyIsSet_ = false;
}

OrganizationPolicyCreateReq::~OrganizationPolicyCreateReq() = default;

void OrganizationPolicyCreateReq::validate()
{
}

web::json::value OrganizationPolicyCreateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}
bool OrganizationPolicyCreateReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            OrganizationPolicyCreate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    return ok;
}


OrganizationPolicyCreate OrganizationPolicyCreateReq::getPolicy() const
{
    return policy_;
}

void OrganizationPolicyCreateReq::setPolicy(const OrganizationPolicyCreate& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool OrganizationPolicyCreateReq::policyIsSet() const
{
    return policyIsSet_;
}

void OrganizationPolicyCreateReq::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


