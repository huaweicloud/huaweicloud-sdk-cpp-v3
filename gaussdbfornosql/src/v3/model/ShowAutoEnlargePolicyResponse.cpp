

#include "huaweicloud/gaussdbfornosql/v3/model/ShowAutoEnlargePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowAutoEnlargePolicyResponse::ShowAutoEnlargePolicyResponse()
{
    policyIsSet_ = false;
}

ShowAutoEnlargePolicyResponse::~ShowAutoEnlargePolicyResponse() = default;

void ShowAutoEnlargePolicyResponse::validate()
{
}

web::json::value ShowAutoEnlargePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}
bool ShowAutoEnlargePolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            DiskAutoExpansionPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    return ok;
}


DiskAutoExpansionPolicy ShowAutoEnlargePolicyResponse::getPolicy() const
{
    return policy_;
}

void ShowAutoEnlargePolicyResponse::setPolicy(const DiskAutoExpansionPolicy& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool ShowAutoEnlargePolicyResponse::policyIsSet() const
{
    return policyIsSet_;
}

void ShowAutoEnlargePolicyResponse::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


