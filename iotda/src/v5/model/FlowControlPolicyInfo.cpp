

#include "huaweicloud/iotda/v5/model/FlowControlPolicyInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




FlowControlPolicyInfo::FlowControlPolicyInfo()
{
    policyId_ = "";
    policyIdIsSet_ = false;
    policyName_ = "";
    policyNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    scope_ = "";
    scopeIsSet_ = false;
    scopeValue_ = "";
    scopeValueIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

FlowControlPolicyInfo::~FlowControlPolicyInfo() = default;

void FlowControlPolicyInfo::validate()
{
}

web::json::value FlowControlPolicyInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(policyNameIsSet_) {
        val[utility::conversions::to_string_t("policy_name")] = ModelBase::toJson(policyName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(scopeIsSet_) {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(scope_);
    }
    if(scopeValueIsSet_) {
        val[utility::conversions::to_string_t("scope_value")] = ModelBase::toJson(scopeValue_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool FlowControlPolicyInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScope(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scope_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScopeValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string FlowControlPolicyInfo::getPolicyId() const
{
    return policyId_;
}

void FlowControlPolicyInfo::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool FlowControlPolicyInfo::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void FlowControlPolicyInfo::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string FlowControlPolicyInfo::getPolicyName() const
{
    return policyName_;
}

void FlowControlPolicyInfo::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool FlowControlPolicyInfo::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void FlowControlPolicyInfo::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

std::string FlowControlPolicyInfo::getDescription() const
{
    return description_;
}

void FlowControlPolicyInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool FlowControlPolicyInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void FlowControlPolicyInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string FlowControlPolicyInfo::getScope() const
{
    return scope_;
}

void FlowControlPolicyInfo::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool FlowControlPolicyInfo::scopeIsSet() const
{
    return scopeIsSet_;
}

void FlowControlPolicyInfo::unsetscope()
{
    scopeIsSet_ = false;
}

std::string FlowControlPolicyInfo::getScopeValue() const
{
    return scopeValue_;
}

void FlowControlPolicyInfo::setScopeValue(const std::string& value)
{
    scopeValue_ = value;
    scopeValueIsSet_ = true;
}

bool FlowControlPolicyInfo::scopeValueIsSet() const
{
    return scopeValueIsSet_;
}

void FlowControlPolicyInfo::unsetscopeValue()
{
    scopeValueIsSet_ = false;
}

int32_t FlowControlPolicyInfo::getLimit() const
{
    return limit_;
}

void FlowControlPolicyInfo::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool FlowControlPolicyInfo::limitIsSet() const
{
    return limitIsSet_;
}

void FlowControlPolicyInfo::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


