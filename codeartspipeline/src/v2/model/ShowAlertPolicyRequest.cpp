

#include "huaweicloud/codeartspipeline/v2/model/ShowAlertPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowAlertPolicyRequest::ShowAlertPolicyRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
}

ShowAlertPolicyRequest::~ShowAlertPolicyRequest() = default;

void ShowAlertPolicyRequest::validate()
{
}

web::json::value ShowAlertPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }

    return val;
}
bool ShowAlertPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
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


std::string ShowAlertPolicyRequest::getTenantId() const
{
    return tenantId_;
}

void ShowAlertPolicyRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ShowAlertPolicyRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ShowAlertPolicyRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ShowAlertPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void ShowAlertPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool ShowAlertPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void ShowAlertPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

}
}
}
}
}


