

#include "huaweicloud/iotda/v5/model/BindDevicePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




BindDevicePolicyRequest::BindDevicePolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    bodyIsSet_ = false;
}

BindDevicePolicyRequest::~BindDevicePolicyRequest() = default;

void BindDevicePolicyRequest::validate()
{
}

web::json::value BindDevicePolicyRequest::toJson() const
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
bool BindDevicePolicyRequest::fromJson(const web::json::value& val)
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
            BindDevicePolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BindDevicePolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void BindDevicePolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BindDevicePolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BindDevicePolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string BindDevicePolicyRequest::getPolicyId() const
{
    return policyId_;
}

void BindDevicePolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool BindDevicePolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void BindDevicePolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

BindDevicePolicy BindDevicePolicyRequest::getBody() const
{
    return body_;
}

void BindDevicePolicyRequest::setBody(const BindDevicePolicy& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BindDevicePolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BindDevicePolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


