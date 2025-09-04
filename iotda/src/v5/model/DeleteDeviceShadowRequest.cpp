

#include "huaweicloud/iotda/v5/model/DeleteDeviceShadowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteDeviceShadowRequest::DeleteDeviceShadowRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
}

DeleteDeviceShadowRequest::~DeleteDeviceShadowRequest() = default;

void DeleteDeviceShadowRequest::validate()
{
}

web::json::value DeleteDeviceShadowRequest::toJson() const
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
bool DeleteDeviceShadowRequest::fromJson(const web::json::value& val)
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


std::string DeleteDeviceShadowRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteDeviceShadowRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteDeviceShadowRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteDeviceShadowRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteDeviceShadowRequest::getDeviceId() const
{
    return deviceId_;
}

void DeleteDeviceShadowRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool DeleteDeviceShadowRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void DeleteDeviceShadowRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

}
}
}
}
}


