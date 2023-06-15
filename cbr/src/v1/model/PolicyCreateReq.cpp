

#include "huaweicloud/cbr/v1/model/PolicyCreateReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




PolicyCreateReq::PolicyCreateReq()
{
    policyIsSet_ = false;
}

PolicyCreateReq::~PolicyCreateReq() = default;

void PolicyCreateReq::validate()
{
}

web::json::value PolicyCreateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}

bool PolicyCreateReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            PolicyCreate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    return ok;
}


PolicyCreate PolicyCreateReq::getPolicy() const
{
    return policy_;
}

void PolicyCreateReq::setPolicy(const PolicyCreate& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool PolicyCreateReq::policyIsSet() const
{
    return policyIsSet_;
}

void PolicyCreateReq::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


