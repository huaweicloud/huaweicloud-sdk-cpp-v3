

#include "huaweicloud/iotda/v5/model/UpdateDeviceShadowDesiredDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDeviceShadowDesiredDataRequest::UpdateDeviceShadowDesiredDataRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDeviceShadowDesiredDataRequest::~UpdateDeviceShadowDesiredDataRequest() = default;

void UpdateDeviceShadowDesiredDataRequest::validate()
{
}

web::json::value UpdateDeviceShadowDesiredDataRequest::toJson() const
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
bool UpdateDeviceShadowDesiredDataRequest::fromJson(const web::json::value& val)
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
            UpdateDesireds refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDeviceShadowDesiredDataRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateDeviceShadowDesiredDataRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateDeviceShadowDesiredDataRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateDeviceShadowDesiredDataRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateDeviceShadowDesiredDataRequest::getDeviceId() const
{
    return deviceId_;
}

void UpdateDeviceShadowDesiredDataRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool UpdateDeviceShadowDesiredDataRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void UpdateDeviceShadowDesiredDataRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

UpdateDesireds UpdateDeviceShadowDesiredDataRequest::getBody() const
{
    return body_;
}

void UpdateDeviceShadowDesiredDataRequest::setBody(const UpdateDesireds& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDeviceShadowDesiredDataRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDeviceShadowDesiredDataRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


