

#include "huaweicloud/iotda/v5/model/UpdateDeviceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDeviceRequest::UpdateDeviceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDeviceRequest::~UpdateDeviceRequest() = default;

void UpdateDeviceRequest::validate()
{
}

web::json::value UpdateDeviceRequest::toJson() const
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
bool UpdateDeviceRequest::fromJson(const web::json::value& val)
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
            UpdateDevice refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDeviceRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateDeviceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateDeviceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateDeviceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateDeviceRequest::getDeviceId() const
{
    return deviceId_;
}

void UpdateDeviceRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool UpdateDeviceRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void UpdateDeviceRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

UpdateDevice UpdateDeviceRequest::getBody() const
{
    return body_;
}

void UpdateDeviceRequest::setBody(const UpdateDevice& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDeviceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDeviceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


