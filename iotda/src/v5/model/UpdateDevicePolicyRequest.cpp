

#include "huaweicloud/iotda/v5/model/UpdateDevicePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDevicePolicyRequest::UpdateDevicePolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDevicePolicyRequest::~UpdateDevicePolicyRequest() = default;

void UpdateDevicePolicyRequest::validate()
{
}

web::json::value UpdateDevicePolicyRequest::toJson() const
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
bool UpdateDevicePolicyRequest::fromJson(const web::json::value& val)
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
            UpdateDevicePolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDevicePolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateDevicePolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateDevicePolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateDevicePolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateDevicePolicyRequest::getPolicyId() const
{
    return policyId_;
}

void UpdateDevicePolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool UpdateDevicePolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void UpdateDevicePolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

UpdateDevicePolicy UpdateDevicePolicyRequest::getBody() const
{
    return body_;
}

void UpdateDevicePolicyRequest::setBody(const UpdateDevicePolicy& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDevicePolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDevicePolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


