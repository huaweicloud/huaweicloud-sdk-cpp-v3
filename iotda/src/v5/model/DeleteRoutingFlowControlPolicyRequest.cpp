

#include "huaweicloud/iotda/v5/model/DeleteRoutingFlowControlPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteRoutingFlowControlPolicyRequest::DeleteRoutingFlowControlPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
}

DeleteRoutingFlowControlPolicyRequest::~DeleteRoutingFlowControlPolicyRequest() = default;

void DeleteRoutingFlowControlPolicyRequest::validate()
{
}

web::json::value DeleteRoutingFlowControlPolicyRequest::toJson() const
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
bool DeleteRoutingFlowControlPolicyRequest::fromJson(const web::json::value& val)
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


std::string DeleteRoutingFlowControlPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteRoutingFlowControlPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteRoutingFlowControlPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteRoutingFlowControlPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteRoutingFlowControlPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void DeleteRoutingFlowControlPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool DeleteRoutingFlowControlPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void DeleteRoutingFlowControlPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

}
}
}
}
}


