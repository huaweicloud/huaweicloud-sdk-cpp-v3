

#include "huaweicloud/cce/v3/model/DeleteAccessPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteAccessPolicyRequest::DeleteAccessPolicyRequest()
{
    policyId_ = "";
    policyIdIsSet_ = false;
}

DeleteAccessPolicyRequest::~DeleteAccessPolicyRequest() = default;

void DeleteAccessPolicyRequest::validate()
{
}

web::json::value DeleteAccessPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }

    return val;
}
bool DeleteAccessPolicyRequest::fromJson(const web::json::value& val)
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


std::string DeleteAccessPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void DeleteAccessPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool DeleteAccessPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void DeleteAccessPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

}
}
}
}
}


