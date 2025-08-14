

#include "huaweicloud/iotda/v5/model/UpdateRoutingBacklogPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateRoutingBacklogPolicyRequest::UpdateRoutingBacklogPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRoutingBacklogPolicyRequest::~UpdateRoutingBacklogPolicyRequest() = default;

void UpdateRoutingBacklogPolicyRequest::validate()
{
}

web::json::value UpdateRoutingBacklogPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateRoutingBacklogPolicyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateBacklogPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateRoutingBacklogPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateRoutingBacklogPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateRoutingBacklogPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateRoutingBacklogPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateRoutingBacklogPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void UpdateRoutingBacklogPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool UpdateRoutingBacklogPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void UpdateRoutingBacklogPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

UpdateBacklogPolicy UpdateRoutingBacklogPolicyRequest::getBody() const
{
    return body_;
}

void UpdateRoutingBacklogPolicyRequest::setBody(const UpdateBacklogPolicy& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRoutingBacklogPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRoutingBacklogPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


