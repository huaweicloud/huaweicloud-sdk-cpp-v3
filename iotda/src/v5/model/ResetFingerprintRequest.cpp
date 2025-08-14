

#include "huaweicloud/iotda/v5/model/ResetFingerprintRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ResetFingerprintRequest::ResetFingerprintRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResetFingerprintRequest::~ResetFingerprintRequest() = default;

void ResetFingerprintRequest::validate()
{
}

web::json::value ResetFingerprintRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ResetFingerprintRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ResetFingerprint refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResetFingerprintRequest::getInstanceId() const
{
    return instanceId_;
}

void ResetFingerprintRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResetFingerprintRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResetFingerprintRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ResetFingerprintRequest::getDeviceId() const
{
    return deviceId_;
}

void ResetFingerprintRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool ResetFingerprintRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void ResetFingerprintRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

ResetFingerprint ResetFingerprintRequest::getBody() const
{
    return body_;
}

void ResetFingerprintRequest::setBody(const ResetFingerprint& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResetFingerprintRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResetFingerprintRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


