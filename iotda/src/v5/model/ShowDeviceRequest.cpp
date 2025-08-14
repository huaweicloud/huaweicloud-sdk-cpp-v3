

#include "huaweicloud/iotda/v5/model/ShowDeviceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowDeviceRequest::ShowDeviceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
}

ShowDeviceRequest::~ShowDeviceRequest() = default;

void ShowDeviceRequest::validate()
{
}

web::json::value ShowDeviceRequest::toJson() const
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
bool ShowDeviceRequest::fromJson(const web::json::value& val)
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


std::string ShowDeviceRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowDeviceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDeviceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDeviceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowDeviceRequest::getDeviceId() const
{
    return deviceId_;
}

void ShowDeviceRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool ShowDeviceRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void ShowDeviceRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

}
}
}
}
}


