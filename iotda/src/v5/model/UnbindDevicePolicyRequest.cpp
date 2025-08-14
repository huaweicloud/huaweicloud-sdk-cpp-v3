

#include "huaweicloud/iotda/v5/model/UnbindDevicePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UnbindDevicePolicyRequest::UnbindDevicePolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    bodyIsSet_ = false;
}

UnbindDevicePolicyRequest::~UnbindDevicePolicyRequest() = default;

void UnbindDevicePolicyRequest::validate()
{
}

web::json::value UnbindDevicePolicyRequest::toJson() const
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
bool UnbindDevicePolicyRequest::fromJson(const web::json::value& val)
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
            UnBindDevicePolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UnbindDevicePolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void UnbindDevicePolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UnbindDevicePolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UnbindDevicePolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UnbindDevicePolicyRequest::getPolicyId() const
{
    return policyId_;
}

void UnbindDevicePolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool UnbindDevicePolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void UnbindDevicePolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

UnBindDevicePolicy UnbindDevicePolicyRequest::getBody() const
{
    return body_;
}

void UnbindDevicePolicyRequest::setBody(const UnBindDevicePolicy& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UnbindDevicePolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UnbindDevicePolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


