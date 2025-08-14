

#include "huaweicloud/iotda/v5/model/DeleteDeviceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteDeviceRequest::DeleteDeviceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
}

DeleteDeviceRequest::~DeleteDeviceRequest() = default;

void DeleteDeviceRequest::validate()
{
}

web::json::value DeleteDeviceRequest::toJson() const
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
bool DeleteDeviceRequest::fromJson(const web::json::value& val)
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


std::string DeleteDeviceRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteDeviceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteDeviceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteDeviceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteDeviceRequest::getDeviceId() const
{
    return deviceId_;
}

void DeleteDeviceRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool DeleteDeviceRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void DeleteDeviceRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

}
}
}
}
}


