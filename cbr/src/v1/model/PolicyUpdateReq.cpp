

#include "huaweicloud/cbr/v1/model/PolicyUpdateReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




PolicyUpdateReq::PolicyUpdateReq()
{
    policyIsSet_ = false;
}

PolicyUpdateReq::~PolicyUpdateReq() = default;

void PolicyUpdateReq::validate()
{
}

web::json::value PolicyUpdateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}

bool PolicyUpdateReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            PolicyUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    return ok;
}


PolicyUpdate PolicyUpdateReq::getPolicy() const
{
    return policy_;
}

void PolicyUpdateReq::setPolicy(const PolicyUpdate& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool PolicyUpdateReq::policyIsSet() const
{
    return policyIsSet_;
}

void PolicyUpdateReq::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


