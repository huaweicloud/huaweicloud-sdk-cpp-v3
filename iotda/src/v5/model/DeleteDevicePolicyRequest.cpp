

#include "huaweicloud/iotda/v5/model/DeleteDevicePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteDevicePolicyRequest::DeleteDevicePolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
}

DeleteDevicePolicyRequest::~DeleteDevicePolicyRequest() = default;

void DeleteDevicePolicyRequest::validate()
{
}

web::json::value DeleteDevicePolicyRequest::toJson() const
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
bool DeleteDevicePolicyRequest::fromJson(const web::json::value& val)
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


std::string DeleteDevicePolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteDevicePolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteDevicePolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteDevicePolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteDevicePolicyRequest::getPolicyId() const
{
    return policyId_;
}

void DeleteDevicePolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool DeleteDevicePolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void DeleteDevicePolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

}
}
}
}
}


