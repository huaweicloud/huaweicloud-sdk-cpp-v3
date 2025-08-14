

#include "huaweicloud/iotda/v5/model/ShowRoutingFlowControlPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowRoutingFlowControlPolicyRequest::ShowRoutingFlowControlPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
}

ShowRoutingFlowControlPolicyRequest::~ShowRoutingFlowControlPolicyRequest() = default;

void ShowRoutingFlowControlPolicyRequest::validate()
{
}

web::json::value ShowRoutingFlowControlPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }

    return val;
}
bool ShowRoutingFlowControlPolicyRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowRoutingFlowControlPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowRoutingFlowControlPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowRoutingFlowControlPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowRoutingFlowControlPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowRoutingFlowControlPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void ShowRoutingFlowControlPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool ShowRoutingFlowControlPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void ShowRoutingFlowControlPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

}
}
}
}
}


