

#include "huaweicloud/identitycenter/v1/model/AttachedManagedPolicyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




AttachedManagedPolicyDto::AttachedManagedPolicyDto()
{
    policyId_ = "";
    policyIdIsSet_ = false;
    policyName_ = "";
    policyNameIsSet_ = false;
}

AttachedManagedPolicyDto::~AttachedManagedPolicyDto() = default;

void AttachedManagedPolicyDto::validate()
{
}

web::json::value AttachedManagedPolicyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(policyNameIsSet_) {
        val[utility::conversions::to_string_t("policy_name")] = ModelBase::toJson(policyName_);
    }

    return val;
}
bool AttachedManagedPolicyDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("policy_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyName(refVal);
        }
    }
    return ok;
}


std::string AttachedManagedPolicyDto::getPolicyId() const
{
    return policyId_;
}

void AttachedManagedPolicyDto::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool AttachedManagedPolicyDto::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void AttachedManagedPolicyDto::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string AttachedManagedPolicyDto::getPolicyName() const
{
    return policyName_;
}

void AttachedManagedPolicyDto::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool AttachedManagedPolicyDto::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void AttachedManagedPolicyDto::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

}
}
}
}
}


