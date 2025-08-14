

#include "huaweicloud/iotda/v5/model/ListDeviceGroupsByDeviceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDeviceGroupsByDeviceRequest::ListDeviceGroupsByDeviceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
}

ListDeviceGroupsByDeviceRequest::~ListDeviceGroupsByDeviceRequest() = default;

void ListDeviceGroupsByDeviceRequest::validate()
{
}

web::json::value ListDeviceGroupsByDeviceRequest::toJson() const
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
bool ListDeviceGroupsByDeviceRequest::fromJson(const web::json::value& val)
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


std::string ListDeviceGroupsByDeviceRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDeviceGroupsByDeviceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDeviceGroupsByDeviceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDeviceGroupsByDeviceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDeviceGroupsByDeviceRequest::getDeviceId() const
{
    return deviceId_;
}

void ListDeviceGroupsByDeviceRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool ListDeviceGroupsByDeviceRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void ListDeviceGroupsByDeviceRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

}
}
}
}
}


