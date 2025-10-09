

#include "huaweicloud/cce/v3/model/GetAccessPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




GetAccessPolicyRequest::GetAccessPolicyRequest()
{
    policyId_ = "";
    policyIdIsSet_ = false;
}

GetAccessPolicyRequest::~GetAccessPolicyRequest() = default;

void GetAccessPolicyRequest::validate()
{
}

web::json::value GetAccessPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }

    return val;
}
bool GetAccessPolicyRequest::fromJson(const web::json::value& val)
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


std::string GetAccessPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void GetAccessPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool GetAccessPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void GetAccessPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

}
}
}
}
}


