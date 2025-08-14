

#include "huaweicloud/iotda/v5/model/UpdatePropertiesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdatePropertiesRequest::UpdatePropertiesRequest()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePropertiesRequest::~UpdatePropertiesRequest() = default;

void UpdatePropertiesRequest::validate()
{
}

web::json::value UpdatePropertiesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdatePropertiesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("device_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DevicePropertiesRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePropertiesRequest::getDeviceId() const
{
    return deviceId_;
}

void UpdatePropertiesRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool UpdatePropertiesRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void UpdatePropertiesRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string UpdatePropertiesRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdatePropertiesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdatePropertiesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdatePropertiesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DevicePropertiesRequest UpdatePropertiesRequest::getBody() const
{
    return body_;
}

void UpdatePropertiesRequest::setBody(const DevicePropertiesRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePropertiesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePropertiesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


