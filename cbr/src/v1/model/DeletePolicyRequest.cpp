

#include "huaweicloud/cbr/v1/model/DeletePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




DeletePolicyRequest::DeletePolicyRequest()
{
    policyId_ = "";
    policyIdIsSet_ = false;
}

DeletePolicyRequest::~DeletePolicyRequest() = default;

void DeletePolicyRequest::validate()
{
}

web::json::value DeletePolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }

    return val;
}
bool DeletePolicyRequest::fromJson(const web::json::value& val)
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


std::string DeletePolicyRequest::getPolicyId() const
{
    return policyId_;
}

void DeletePolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool DeletePolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void DeletePolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

}
}
}
}
}


