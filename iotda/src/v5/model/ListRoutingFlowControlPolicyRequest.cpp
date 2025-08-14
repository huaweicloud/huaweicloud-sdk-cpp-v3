

#include "huaweicloud/iotda/v5/model/ListRoutingFlowControlPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListRoutingFlowControlPolicyRequest::ListRoutingFlowControlPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    scope_ = "";
    scopeIsSet_ = false;
    scopeValue_ = "";
    scopeValueIsSet_ = false;
    policyName_ = "";
    policyNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListRoutingFlowControlPolicyRequest::~ListRoutingFlowControlPolicyRequest() = default;

void ListRoutingFlowControlPolicyRequest::validate()
{
}

web::json::value ListRoutingFlowControlPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(scopeIsSet_) {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(scope_);
    }
    if(scopeValueIsSet_) {
        val[utility::conversions::to_string_t("scope_value")] = ModelBase::toJson(scopeValue_);
    }
    if(policyNameIsSet_) {
        val[utility::conversions::to_string_t("policy_name")] = ModelBase::toJson(policyName_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListRoutingFlowControlPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("policy_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListRoutingFlowControlPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ListRoutingFlowControlPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListRoutingFlowControlPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListRoutingFlowControlPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListRoutingFlowControlPolicyRequest::getScope() const
{
    return scope_;
}

void ListRoutingFlowControlPolicyRequest::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool ListRoutingFlowControlPolicyRequest::scopeIsSet() const
{
    return scopeIsSet_;
}

void ListRoutingFlowControlPolicyRequest::unsetscope()
{
    scopeIsSet_ = false;
}

std::string ListRoutingFlowControlPolicyRequest::getScopeValue() const
{
    return scopeValue_;
}

void ListRoutingFlowControlPolicyRequest::setScopeValue(const std::string& value)
{
    scopeValue_ = value;
    scopeValueIsSet_ = true;
}

bool ListRoutingFlowControlPolicyRequest::scopeValueIsSet() const
{
    return scopeValueIsSet_;
}

void ListRoutingFlowControlPolicyRequest::unsetscopeValue()
{
    scopeValueIsSet_ = false;
}

std::string ListRoutingFlowControlPolicyRequest::getPolicyName() const
{
    return policyName_;
}

void ListRoutingFlowControlPolicyRequest::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool ListRoutingFlowControlPolicyRequest::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void ListRoutingFlowControlPolicyRequest::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

int32_t ListRoutingFlowControlPolicyRequest::getLimit() const
{
    return limit_;
}

void ListRoutingFlowControlPolicyRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRoutingFlowControlPolicyRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRoutingFlowControlPolicyRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListRoutingFlowControlPolicyRequest::getMarker() const
{
    return marker_;
}

void ListRoutingFlowControlPolicyRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListRoutingFlowControlPolicyRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListRoutingFlowControlPolicyRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListRoutingFlowControlPolicyRequest::getOffset() const
{
    return offset_;
}

void ListRoutingFlowControlPolicyRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRoutingFlowControlPolicyRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRoutingFlowControlPolicyRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


