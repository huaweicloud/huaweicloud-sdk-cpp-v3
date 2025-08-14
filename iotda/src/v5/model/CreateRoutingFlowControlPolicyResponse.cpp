

#include "huaweicloud/iotda/v5/model/CreateRoutingFlowControlPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateRoutingFlowControlPolicyResponse::CreateRoutingFlowControlPolicyResponse()
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

CreateRoutingFlowControlPolicyResponse::~CreateRoutingFlowControlPolicyResponse() = default;

void CreateRoutingFlowControlPolicyResponse::validate()
{
}

web::json::value CreateRoutingFlowControlPolicyResponse::toJson() const
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
bool CreateRoutingFlowControlPolicyResponse::fromJson(const web::json::value& val)
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


std::string CreateRoutingFlowControlPolicyResponse::getPolicyId() const
{
    return policyId_;
}

void CreateRoutingFlowControlPolicyResponse::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool CreateRoutingFlowControlPolicyResponse::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void CreateRoutingFlowControlPolicyResponse::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string CreateRoutingFlowControlPolicyResponse::getPolicyName() const
{
    return policyName_;
}

void CreateRoutingFlowControlPolicyResponse::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool CreateRoutingFlowControlPolicyResponse::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void CreateRoutingFlowControlPolicyResponse::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

std::string CreateRoutingFlowControlPolicyResponse::getDescription() const
{
    return description_;
}

void CreateRoutingFlowControlPolicyResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateRoutingFlowControlPolicyResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateRoutingFlowControlPolicyResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateRoutingFlowControlPolicyResponse::getScope() const
{
    return scope_;
}

void CreateRoutingFlowControlPolicyResponse::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool CreateRoutingFlowControlPolicyResponse::scopeIsSet() const
{
    return scopeIsSet_;
}

void CreateRoutingFlowControlPolicyResponse::unsetscope()
{
    scopeIsSet_ = false;
}

std::string CreateRoutingFlowControlPolicyResponse::getScopeValue() const
{
    return scopeValue_;
}

void CreateRoutingFlowControlPolicyResponse::setScopeValue(const std::string& value)
{
    scopeValue_ = value;
    scopeValueIsSet_ = true;
}

bool CreateRoutingFlowControlPolicyResponse::scopeValueIsSet() const
{
    return scopeValueIsSet_;
}

void CreateRoutingFlowControlPolicyResponse::unsetscopeValue()
{
    scopeValueIsSet_ = false;
}

int32_t CreateRoutingFlowControlPolicyResponse::getLimit() const
{
    return limit_;
}

void CreateRoutingFlowControlPolicyResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool CreateRoutingFlowControlPolicyResponse::limitIsSet() const
{
    return limitIsSet_;
}

void CreateRoutingFlowControlPolicyResponse::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


