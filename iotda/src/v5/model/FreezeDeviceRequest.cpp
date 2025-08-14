

#include "huaweicloud/iotda/v5/model/FreezeDeviceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




FreezeDeviceRequest::FreezeDeviceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
}

FreezeDeviceRequest::~FreezeDeviceRequest() = default;

void FreezeDeviceRequest::validate()
{
}

web::json::value FreezeDeviceRequest::toJson() const
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
bool FreezeDeviceRequest::fromJson(const web::json::value& val)
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


std::string FreezeDeviceRequest::getInstanceId() const
{
    return instanceId_;
}

void FreezeDeviceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool FreezeDeviceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void FreezeDeviceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string FreezeDeviceRequest::getDeviceId() const
{
    return deviceId_;
}

void FreezeDeviceRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool FreezeDeviceRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void FreezeDeviceRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

}
}
}
}
}


