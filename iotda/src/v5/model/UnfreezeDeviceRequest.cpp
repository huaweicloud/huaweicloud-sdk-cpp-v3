

#include "huaweicloud/iotda/v5/model/UnfreezeDeviceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UnfreezeDeviceRequest::UnfreezeDeviceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
}

UnfreezeDeviceRequest::~UnfreezeDeviceRequest() = default;

void UnfreezeDeviceRequest::validate()
{
}

web::json::value UnfreezeDeviceRequest::toJson() const
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
bool UnfreezeDeviceRequest::fromJson(const web::json::value& val)
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


std::string UnfreezeDeviceRequest::getInstanceId() const
{
    return instanceId_;
}

void UnfreezeDeviceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UnfreezeDeviceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UnfreezeDeviceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UnfreezeDeviceRequest::getDeviceId() const
{
    return deviceId_;
}

void UnfreezeDeviceRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool UnfreezeDeviceRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void UnfreezeDeviceRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

}
}
}
}
}


