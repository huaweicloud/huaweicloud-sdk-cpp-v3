

#include "huaweicloud/aad/v1/model/ShowPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ShowPolicyRequest::ShowPolicyRequest()
{
    policyId_ = "";
    policyIdIsSet_ = false;
}

ShowPolicyRequest::~ShowPolicyRequest() = default;

void ShowPolicyRequest::validate()
{
}

web::json::value ShowPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }

    return val;
}
bool ShowPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyId(refVal);
        }
    }
    return ok;
}


std::string ShowPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void ShowPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool ShowPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void ShowPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

}
}
}
}
}


