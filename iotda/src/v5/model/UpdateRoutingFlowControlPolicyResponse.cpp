

#include "huaweicloud/iotda/v5/model/UpdateRoutingFlowControlPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateRoutingFlowControlPolicyResponse::UpdateRoutingFlowControlPolicyResponse()
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

UpdateRoutingFlowControlPolicyResponse::~UpdateRoutingFlowControlPolicyResponse() = default;

void UpdateRoutingFlowControlPolicyResponse::validate()
{
}

web::json::value UpdateRoutingFlowControlPolicyResponse::toJson() const
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
bool UpdateRoutingFlowControlPolicyResponse::fromJson(const web::json::value& val)
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


std::string UpdateRoutingFlowControlPolicyResponse::getPolicyId() const
{
    return policyId_;
}

void UpdateRoutingFlowControlPolicyResponse::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool UpdateRoutingFlowControlPolicyResponse::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void UpdateRoutingFlowControlPolicyResponse::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string UpdateRoutingFlowControlPolicyResponse::getPolicyName() const
{
    return policyName_;
}

void UpdateRoutingFlowControlPolicyResponse::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool UpdateRoutingFlowControlPolicyResponse::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void UpdateRoutingFlowControlPolicyResponse::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

std::string UpdateRoutingFlowControlPolicyResponse::getDescription() const
{
    return description_;
}

void UpdateRoutingFlowControlPolicyResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateRoutingFlowControlPolicyResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateRoutingFlowControlPolicyResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateRoutingFlowControlPolicyResponse::getScope() const
{
    return scope_;
}

void UpdateRoutingFlowControlPolicyResponse::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool UpdateRoutingFlowControlPolicyResponse::scopeIsSet() const
{
    return scopeIsSet_;
}

void UpdateRoutingFlowControlPolicyResponse::unsetscope()
{
    scopeIsSet_ = false;
}

std::string UpdateRoutingFlowControlPolicyResponse::getScopeValue() const
{
    return scopeValue_;
}

void UpdateRoutingFlowControlPolicyResponse::setScopeValue(const std::string& value)
{
    scopeValue_ = value;
    scopeValueIsSet_ = true;
}

bool UpdateRoutingFlowControlPolicyResponse::scopeValueIsSet() const
{
    return scopeValueIsSet_;
}

void UpdateRoutingFlowControlPolicyResponse::unsetscopeValue()
{
    scopeValueIsSet_ = false;
}

int32_t UpdateRoutingFlowControlPolicyResponse::getLimit() const
{
    return limit_;
}

void UpdateRoutingFlowControlPolicyResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool UpdateRoutingFlowControlPolicyResponse::limitIsSet() const
{
    return limitIsSet_;
}

void UpdateRoutingFlowControlPolicyResponse::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


