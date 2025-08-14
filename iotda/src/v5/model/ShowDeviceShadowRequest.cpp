

#include "huaweicloud/iotda/v5/model/ShowDeviceShadowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowDeviceShadowRequest::ShowDeviceShadowRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
}

ShowDeviceShadowRequest::~ShowDeviceShadowRequest() = default;

void ShowDeviceShadowRequest::validate()
{
}

web::json::value ShowDeviceShadowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }

    return val;
}
bool ShowDeviceShadowRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowDeviceShadowRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowDeviceShadowRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDeviceShadowRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDeviceShadowRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowDeviceShadowRequest::getDeviceId() const
{
    return deviceId_;
}

void ShowDeviceShadowRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool ShowDeviceShadowRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void ShowDeviceShadowRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

}
}
}
}
}


