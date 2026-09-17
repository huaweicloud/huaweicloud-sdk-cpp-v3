

#include "huaweicloud/codeartspipeline/v2/model/DeleteAlertPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeleteAlertPolicyRequest::DeleteAlertPolicyRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
}

DeleteAlertPolicyRequest::~DeleteAlertPolicyRequest() = default;

void DeleteAlertPolicyRequest::validate()
{
}

web::json::value DeleteAlertPolicyRequest::toJson() const
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
bool DeleteAlertPolicyRequest::fromJson(const web::json::value& val)
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


std::string DeleteAlertPolicyRequest::getTenantId() const
{
    return tenantId_;
}

void DeleteAlertPolicyRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool DeleteAlertPolicyRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void DeleteAlertPolicyRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string DeleteAlertPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void DeleteAlertPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool DeleteAlertPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void DeleteAlertPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

}
}
}
}
}


