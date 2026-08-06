

#include "huaweicloud/kms/v2/model/DeleteKeyPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DeleteKeyPolicyRequest::DeleteKeyPolicyRequest()
{
    policyId_ = "";
    policyIdIsSet_ = false;
}

DeleteKeyPolicyRequest::~DeleteKeyPolicyRequest() = default;

void DeleteKeyPolicyRequest::validate()
{
}

web::json::value DeleteKeyPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }

    return val;
}
bool DeleteKeyPolicyRequest::fromJson(const web::json::value& val)
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


std::string DeleteKeyPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void DeleteKeyPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool DeleteKeyPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void DeleteKeyPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

}
}
}
}
}


