

#include "huaweicloud/iotda/v5/model/ShowRoutingBacklogPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowRoutingBacklogPolicyRequest::ShowRoutingBacklogPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
}

ShowRoutingBacklogPolicyRequest::~ShowRoutingBacklogPolicyRequest() = default;

void ShowRoutingBacklogPolicyRequest::validate()
{
}

web::json::value ShowRoutingBacklogPolicyRequest::toJson() const
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
bool ShowRoutingBacklogPolicyRequest::fromJson(const web::json::value& val)
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


std::string ShowRoutingBacklogPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowRoutingBacklogPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowRoutingBacklogPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowRoutingBacklogPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowRoutingBacklogPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void ShowRoutingBacklogPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool ShowRoutingBacklogPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void ShowRoutingBacklogPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

}
}
}
}
}


