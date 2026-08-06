

#include "huaweicloud/kms/v2/model/ShowKeyPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ShowKeyPolicyRequest::ShowKeyPolicyRequest()
{
    policyId_ = "";
    policyIdIsSet_ = false;
}

ShowKeyPolicyRequest::~ShowKeyPolicyRequest() = default;

void ShowKeyPolicyRequest::validate()
{
}

web::json::value ShowKeyPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }

    return val;
}
bool ShowKeyPolicyRequest::fromJson(const web::json::value& val)
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


std::string ShowKeyPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void ShowKeyPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool ShowKeyPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void ShowKeyPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

}
}
}
}
}


