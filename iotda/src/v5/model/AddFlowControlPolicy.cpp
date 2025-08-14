

#include "huaweicloud/iotda/v5/model/AddFlowControlPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddFlowControlPolicy::AddFlowControlPolicy()
{
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

AddFlowControlPolicy::~AddFlowControlPolicy() = default;

void AddFlowControlPolicy::validate()
{
}

web::json::value AddFlowControlPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool AddFlowControlPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string AddFlowControlPolicy::getPolicyName() const
{
    return policyName_;
}

void AddFlowControlPolicy::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool AddFlowControlPolicy::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void AddFlowControlPolicy::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

std::string AddFlowControlPolicy::getDescription() const
{
    return description_;
}

void AddFlowControlPolicy::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddFlowControlPolicy::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddFlowControlPolicy::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string AddFlowControlPolicy::getScope() const
{
    return scope_;
}

void AddFlowControlPolicy::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool AddFlowControlPolicy::scopeIsSet() const
{
    return scopeIsSet_;
}

void AddFlowControlPolicy::unsetscope()
{
    scopeIsSet_ = false;
}

std::string AddFlowControlPolicy::getScopeValue() const
{
    return scopeValue_;
}

void AddFlowControlPolicy::setScopeValue(const std::string& value)
{
    scopeValue_ = value;
    scopeValueIsSet_ = true;
}

bool AddFlowControlPolicy::scopeValueIsSet() const
{
    return scopeValueIsSet_;
}

void AddFlowControlPolicy::unsetscopeValue()
{
    scopeValueIsSet_ = false;
}

int32_t AddFlowControlPolicy::getLimit() const
{
    return limit_;
}

void AddFlowControlPolicy::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool AddFlowControlPolicy::limitIsSet() const
{
    return limitIsSet_;
}

void AddFlowControlPolicy::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


