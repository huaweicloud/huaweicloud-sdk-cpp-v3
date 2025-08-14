

#include "huaweicloud/iotda/v5/model/ShowDevicePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowDevicePolicyRequest::ShowDevicePolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
}

ShowDevicePolicyRequest::~ShowDevicePolicyRequest() = default;

void ShowDevicePolicyRequest::validate()
{
}

web::json::value ShowDevicePolicyRequest::toJson() const
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
bool ShowDevicePolicyRequest::fromJson(const web::json::value& val)
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


std::string ShowDevicePolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowDevicePolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDevicePolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDevicePolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowDevicePolicyRequest::getPolicyId() const
{
    return policyId_;
}

void ShowDevicePolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool ShowDevicePolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void ShowDevicePolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

}
}
}
}
}


