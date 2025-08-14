

#include "huaweicloud/iotda/v5/model/ResetDeviceSecretRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ResetDeviceSecretRequest::ResetDeviceSecretRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
    actionId_ = "";
    actionIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResetDeviceSecretRequest::~ResetDeviceSecretRequest() = default;

void ResetDeviceSecretRequest::validate()
{
}

web::json::value ResetDeviceSecretRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(actionIdIsSet_) {
        val[utility::conversions::to_string_t("action_id")] = ModelBase::toJson(actionId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ResetDeviceSecretRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("device_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ResetDeviceSecret refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResetDeviceSecretRequest::getInstanceId() const
{
    return instanceId_;
}

void ResetDeviceSecretRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResetDeviceSecretRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResetDeviceSecretRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ResetDeviceSecretRequest::getDeviceId() const
{
    return deviceId_;
}

void ResetDeviceSecretRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool ResetDeviceSecretRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void ResetDeviceSecretRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string ResetDeviceSecretRequest::getActionId() const
{
    return actionId_;
}

void ResetDeviceSecretRequest::setActionId(const std::string& value)
{
    actionId_ = value;
    actionIdIsSet_ = true;
}

bool ResetDeviceSecretRequest::actionIdIsSet() const
{
    return actionIdIsSet_;
}

void ResetDeviceSecretRequest::unsetactionId()
{
    actionIdIsSet_ = false;
}

ResetDeviceSecret ResetDeviceSecretRequest::getBody() const
{
    return body_;
}

void ResetDeviceSecretRequest::setBody(const ResetDeviceSecret& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResetDeviceSecretRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResetDeviceSecretRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


