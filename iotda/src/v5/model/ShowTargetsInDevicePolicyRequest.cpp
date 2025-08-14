

#include "huaweicloud/iotda/v5/model/ShowTargetsInDevicePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowTargetsInDevicePolicyRequest::ShowTargetsInDevicePolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowTargetsInDevicePolicyRequest::~ShowTargetsInDevicePolicyRequest() = default;

void ShowTargetsInDevicePolicyRequest::validate()
{
}

web::json::value ShowTargetsInDevicePolicyRequest::toJson() const
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
bool ShowTargetsInDevicePolicyRequest::fromJson(const web::json::value& val)
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
            ShowTargetsInDevicePolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowTargetsInDevicePolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowTargetsInDevicePolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowTargetsInDevicePolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowTargetsInDevicePolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowTargetsInDevicePolicyRequest::getPolicyId() const
{
    return policyId_;
}

void ShowTargetsInDevicePolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool ShowTargetsInDevicePolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void ShowTargetsInDevicePolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

ShowTargetsInDevicePolicyRequestBody ShowTargetsInDevicePolicyRequest::getBody() const
{
    return body_;
}

void ShowTargetsInDevicePolicyRequest::setBody(const ShowTargetsInDevicePolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowTargetsInDevicePolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowTargetsInDevicePolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


