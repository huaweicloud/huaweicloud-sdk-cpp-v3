

#include "huaweicloud/iotda/v5/model/ShowRoutingFlowControlPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowRoutingFlowControlPolicyResponse::ShowRoutingFlowControlPolicyResponse()
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

ShowRoutingFlowControlPolicyResponse::~ShowRoutingFlowControlPolicyResponse() = default;

void ShowRoutingFlowControlPolicyResponse::validate()
{
}

web::json::value ShowRoutingFlowControlPolicyResponse::toJson() const
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
bool ShowRoutingFlowControlPolicyResponse::fromJson(const web::json::value& val)
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


std::string ShowRoutingFlowControlPolicyResponse::getPolicyId() const
{
    return policyId_;
}

void ShowRoutingFlowControlPolicyResponse::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool ShowRoutingFlowControlPolicyResponse::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void ShowRoutingFlowControlPolicyResponse::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string ShowRoutingFlowControlPolicyResponse::getPolicyName() const
{
    return policyName_;
}

void ShowRoutingFlowControlPolicyResponse::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool ShowRoutingFlowControlPolicyResponse::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void ShowRoutingFlowControlPolicyResponse::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

std::string ShowRoutingFlowControlPolicyResponse::getDescription() const
{
    return description_;
}

void ShowRoutingFlowControlPolicyResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowRoutingFlowControlPolicyResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowRoutingFlowControlPolicyResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowRoutingFlowControlPolicyResponse::getScope() const
{
    return scope_;
}

void ShowRoutingFlowControlPolicyResponse::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool ShowRoutingFlowControlPolicyResponse::scopeIsSet() const
{
    return scopeIsSet_;
}

void ShowRoutingFlowControlPolicyResponse::unsetscope()
{
    scopeIsSet_ = false;
}

std::string ShowRoutingFlowControlPolicyResponse::getScopeValue() const
{
    return scopeValue_;
}

void ShowRoutingFlowControlPolicyResponse::setScopeValue(const std::string& value)
{
    scopeValue_ = value;
    scopeValueIsSet_ = true;
}

bool ShowRoutingFlowControlPolicyResponse::scopeValueIsSet() const
{
    return scopeValueIsSet_;
}

void ShowRoutingFlowControlPolicyResponse::unsetscopeValue()
{
    scopeValueIsSet_ = false;
}

int32_t ShowRoutingFlowControlPolicyResponse::getLimit() const
{
    return limit_;
}

void ShowRoutingFlowControlPolicyResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowRoutingFlowControlPolicyResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ShowRoutingFlowControlPolicyResponse::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


