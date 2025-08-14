

#include "huaweicloud/iotda/v5/model/DeleteRoutingBacklogPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteRoutingBacklogPolicyRequest::DeleteRoutingBacklogPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
}

DeleteRoutingBacklogPolicyRequest::~DeleteRoutingBacklogPolicyRequest() = default;

void DeleteRoutingBacklogPolicyRequest::validate()
{
}

web::json::value DeleteRoutingBacklogPolicyRequest::toJson() const
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
bool DeleteRoutingBacklogPolicyRequest::fromJson(const web::json::value& val)
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


std::string DeleteRoutingBacklogPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteRoutingBacklogPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteRoutingBacklogPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteRoutingBacklogPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteRoutingBacklogPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void DeleteRoutingBacklogPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool DeleteRoutingBacklogPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void DeleteRoutingBacklogPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

}
}
}
}
}


